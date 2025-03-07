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
#include "libqlistview.hpp"
#include "libqlistview.h"

/// https://doc.qt.io/qt-6/qlistview.html

/// q_listview_new constructs a new QListView object.
///
/// ``` QWidget* parent ```
QListView* q_listview_new(void* parent) {
    return QListView_new((QWidget*)parent);
}

/// q_listview_new2 constructs a new QListView object.
///
///
QListView* q_listview_new2() {
    return QListView_new2();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QListView* self ```
QMetaObject* q_listview_meta_object(void* self) {
    return QListView_MetaObject((QListView*)self);
}

/// ``` QListView* self, const char* param1 ```
void* q_listview_metacast(void* self, const char* param1) {
    return QListView_Metacast((QListView*)self, param1);
}

/// ``` QListView* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_listview_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QListView_Metacall((QListView*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QListView* self, int32_t (*slot)(QListView*, enum QMetaObject__Call, int, void*) ```
void q_listview_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QListView_OnMetacall((QListView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QListView* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_listview_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QListView_QBaseMetacall((QListView*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_listview_tr(const char* s) {
    libqt_string _str = QListView_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setMovement)
///
/// ``` QListView* self, enum QListView__Movement movement ```
void q_listview_set_movement(void* self, int64_t movement) {
    QListView_SetMovement((QListView*)self, movement);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#movement)
///
/// ``` QListView* self ```
int64_t q_listview_movement(void* self) {
    return QListView_Movement((QListView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setFlow)
///
/// ``` QListView* self, enum QListView__Flow flow ```
void q_listview_set_flow(void* self, int64_t flow) {
    QListView_SetFlow((QListView*)self, flow);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#flow)
///
/// ``` QListView* self ```
int64_t q_listview_flow(void* self) {
    return QListView_Flow((QListView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setWrapping)
///
/// ``` QListView* self, bool enable ```
void q_listview_set_wrapping(void* self, bool enable) {
    QListView_SetWrapping((QListView*)self, enable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#isWrapping)
///
/// ``` QListView* self ```
bool q_listview_is_wrapping(void* self) {
    return QListView_IsWrapping((QListView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setResizeMode)
///
/// ``` QListView* self, enum QListView__ResizeMode mode ```
void q_listview_set_resize_mode(void* self, int64_t mode) {
    QListView_SetResizeMode((QListView*)self, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#resizeMode)
///
/// ``` QListView* self ```
int64_t q_listview_resize_mode(void* self) {
    return QListView_ResizeMode((QListView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setLayoutMode)
///
/// ``` QListView* self, enum QListView__LayoutMode mode ```
void q_listview_set_layout_mode(void* self, int64_t mode) {
    QListView_SetLayoutMode((QListView*)self, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#layoutMode)
///
/// ``` QListView* self ```
int64_t q_listview_layout_mode(void* self) {
    return QListView_LayoutMode((QListView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setSpacing)
///
/// ``` QListView* self, int space ```
void q_listview_set_spacing(void* self, int space) {
    QListView_SetSpacing((QListView*)self, space);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#spacing)
///
/// ``` QListView* self ```
int32_t q_listview_spacing(void* self) {
    return QListView_Spacing((QListView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setBatchSize)
///
/// ``` QListView* self, int batchSize ```
void q_listview_set_batch_size(void* self, int batchSize) {
    QListView_SetBatchSize((QListView*)self, batchSize);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#batchSize)
///
/// ``` QListView* self ```
int32_t q_listview_batch_size(void* self) {
    return QListView_BatchSize((QListView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setGridSize)
///
/// ``` QListView* self, QSize* size ```
void q_listview_set_grid_size(void* self, void* size) {
    QListView_SetGridSize((QListView*)self, (QSize*)size);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#gridSize)
///
/// ``` QListView* self ```
QSize* q_listview_grid_size(void* self) {
    return QListView_GridSize((QListView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setViewMode)
///
/// ``` QListView* self, enum QListView__ViewMode mode ```
void q_listview_set_view_mode(void* self, int64_t mode) {
    QListView_SetViewMode((QListView*)self, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#viewMode)
///
/// ``` QListView* self ```
int64_t q_listview_view_mode(void* self) {
    return QListView_ViewMode((QListView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#clearPropertyFlags)
///
/// ``` QListView* self ```
void q_listview_clear_property_flags(void* self) {
    QListView_ClearPropertyFlags((QListView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#isRowHidden)
///
/// ``` QListView* self, int row ```
bool q_listview_is_row_hidden(void* self, int row) {
    return QListView_IsRowHidden((QListView*)self, row);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setRowHidden)
///
/// ``` QListView* self, int row, bool hide ```
void q_listview_set_row_hidden(void* self, int row, bool hide) {
    QListView_SetRowHidden((QListView*)self, row, hide);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setModelColumn)
///
/// ``` QListView* self, int column ```
void q_listview_set_model_column(void* self, int column) {
    QListView_SetModelColumn((QListView*)self, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#modelColumn)
///
/// ``` QListView* self ```
int32_t q_listview_model_column(void* self) {
    return QListView_ModelColumn((QListView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setUniformItemSizes)
///
/// ``` QListView* self, bool enable ```
void q_listview_set_uniform_item_sizes(void* self, bool enable) {
    QListView_SetUniformItemSizes((QListView*)self, enable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#uniformItemSizes)
///
/// ``` QListView* self ```
bool q_listview_uniform_item_sizes(void* self) {
    return QListView_UniformItemSizes((QListView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setWordWrap)
///
/// ``` QListView* self, bool on ```
void q_listview_set_word_wrap(void* self, bool on) {
    QListView_SetWordWrap((QListView*)self, on);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#wordWrap)
///
/// ``` QListView* self ```
bool q_listview_word_wrap(void* self) {
    return QListView_WordWrap((QListView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setSelectionRectVisible)
///
/// ``` QListView* self, bool show ```
void q_listview_set_selection_rect_visible(void* self, bool show) {
    QListView_SetSelectionRectVisible((QListView*)self, show);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#isSelectionRectVisible)
///
/// ``` QListView* self ```
bool q_listview_is_selection_rect_visible(void* self) {
    return QListView_IsSelectionRectVisible((QListView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setItemAlignment)
///
/// ``` QListView* self, int alignment ```
void q_listview_set_item_alignment(void* self, int64_t alignment) {
    QListView_SetItemAlignment((QListView*)self, alignment);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#itemAlignment)
///
/// ``` QListView* self ```
int64_t q_listview_item_alignment(void* self) {
    return QListView_ItemAlignment((QListView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#visualRect)
///
/// ``` QListView* self, QModelIndex* index ```
QRect* q_listview_visual_rect(void* self, void* index) {
    return QListView_VisualRect((QListView*)self, (QModelIndex*)index);
}

/// Allows for overriding the related default method
///
/// ``` QListView* self, QRect* (*slot)(QListView*, QModelIndex*) ```
void q_listview_on_visual_rect(void* self, QRect* (*slot)(void*, void*)) {
    QListView_OnVisualRect((QListView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QListView* self, QModelIndex* index ```
QRect* q_listview_qbase_visual_rect(void* self, void* index) {
    return QListView_QBaseVisualRect((QListView*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#scrollTo)
///
/// ``` QListView* self, QModelIndex* index, enum QAbstractItemView__ScrollHint hint ```
void q_listview_scroll_to(void* self, void* index, int64_t hint) {
    QListView_ScrollTo((QListView*)self, (QModelIndex*)index, hint);
}

/// Allows for overriding the related default method
///
/// ``` QListView* self, void (*slot)(QListView*, QModelIndex*, enum QAbstractItemView__ScrollHint) ```
void q_listview_on_scroll_to(void* self, void (*slot)(void*, void*, int64_t)) {
    QListView_OnScrollTo((QListView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QListView* self, QModelIndex* index, enum QAbstractItemView__ScrollHint hint ```
void q_listview_qbase_scroll_to(void* self, void* index, int64_t hint) {
    QListView_QBaseScrollTo((QListView*)self, (QModelIndex*)index, hint);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#indexAt)
///
/// ``` QListView* self, QPoint* p ```
QModelIndex* q_listview_index_at(void* self, void* p) {
    return QListView_IndexAt((QListView*)self, (QPoint*)p);
}

/// Allows for overriding the related default method
///
/// ``` QListView* self, QModelIndex* (*slot)(QListView*, QPoint*) ```
void q_listview_on_index_at(void* self, QModelIndex* (*slot)(void*, void*)) {
    QListView_OnIndexAt((QListView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QListView* self, QPoint* p ```
QModelIndex* q_listview_qbase_index_at(void* self, void* p) {
    return QListView_QBaseIndexAt((QListView*)self, (QPoint*)p);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#doItemsLayout)
///
/// ``` QListView* self ```
void q_listview_do_items_layout(void* self) {
    QListView_DoItemsLayout((QListView*)self);
}

/// Allows for overriding the related default method
///
/// ``` QListView* self, void (*slot)() ```
void q_listview_on_do_items_layout(void* self, void (*slot)()) {
    QListView_OnDoItemsLayout((QListView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QListView* self ```
void q_listview_qbase_do_items_layout(void* self) {
    QListView_QBaseDoItemsLayout((QListView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#reset)
///
/// ``` QListView* self ```
void q_listview_reset(void* self) {
    QListView_Reset((QListView*)self);
}

/// Allows for overriding the related default method
///
/// ``` QListView* self, void (*slot)() ```
void q_listview_on_reset(void* self, void (*slot)()) {
    QListView_OnReset((QListView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QListView* self ```
void q_listview_qbase_reset(void* self) {
    QListView_QBaseReset((QListView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setRootIndex)
///
/// ``` QListView* self, QModelIndex* index ```
void q_listview_set_root_index(void* self, void* index) {
    QListView_SetRootIndex((QListView*)self, (QModelIndex*)index);
}

/// Allows for overriding the related default method
///
/// ``` QListView* self, void (*slot)(QListView*, QModelIndex*) ```
void q_listview_on_set_root_index(void* self, void (*slot)(void*, void*)) {
    QListView_OnSetRootIndex((QListView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QListView* self, QModelIndex* index ```
void q_listview_qbase_set_root_index(void* self, void* index) {
    QListView_QBaseSetRootIndex((QListView*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#indexesMoved)
///
/// ``` QListView* self, QModelIndex* indexes[] ```
void q_listview_indexes_moved(void* self, void* indexes[]) {
    QModelIndex** indexes_arr = (QModelIndex**)indexes;
    size_t indexes_len = 0;
    while (indexes_arr[indexes_len] != NULL) {
        indexes_len++;
    }
    libqt_list indexes_list = {
        .len = indexes_len,
        .data = {(QModelIndex*)indexes},
    };
    QListView_IndexesMoved((QListView*)self, indexes_list);
}

/// ``` QListView* self, void (*slot)(QListView*, QModelIndex*[]) ```
void q_listview_on_indexes_moved(void* self, void (*slot)(void*, void*)) {
    QListView_Connect_IndexesMoved((QListView*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#event)
///
/// ``` QListView* self, QEvent* e ```
bool q_listview_event(void* self, void* e) {
    return QListView_Event((QListView*)self, (QEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QListView* self, bool (*slot)(QListView*, QEvent*) ```
void q_listview_on_event(void* self, bool (*slot)(void*, void*)) {
    QListView_OnEvent((QListView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QListView* self, QEvent* e ```
bool q_listview_qbase_event(void* self, void* e) {
    return QListView_QBaseEvent((QListView*)self, (QEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#scrollContentsBy)
///
/// ``` QListView* self, int dx, int dy ```
void q_listview_scroll_contents_by(void* self, int dx, int dy) {
    QListView_ScrollContentsBy((QListView*)self, dx, dy);
}

/// Allows for overriding the related default method
///
/// ``` QListView* self, void (*slot)(QListView*, int, int) ```
void q_listview_on_scroll_contents_by(void* self, void (*slot)(void*, int, int)) {
    QListView_OnScrollContentsBy((QListView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QListView* self, int dx, int dy ```
void q_listview_qbase_scroll_contents_by(void* self, int dx, int dy) {
    QListView_QBaseScrollContentsBy((QListView*)self, dx, dy);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#resizeContents)
///
/// ``` QListView* self, int width, int height ```
void q_listview_resize_contents(void* self, int width, int height) {
    QListView_ResizeContents((QListView*)self, width, height);
}

/// Allows for overriding the related default method
///
/// ``` QListView* self, void (*slot)(QListView*, int, int) ```
void q_listview_on_resize_contents(void* self, void (*slot)(void*, int, int)) {
    QListView_OnResizeContents((QListView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QListView* self, int width, int height ```
void q_listview_qbase_resize_contents(void* self, int width, int height) {
    QListView_QBaseResizeContents((QListView*)self, width, height);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#contentsSize)
///
/// ``` QListView* self ```
QSize* q_listview_contents_size(void* self) {
    return QListView_ContentsSize((QListView*)self);
}

/// Allows for overriding the related default method
///
/// ``` QListView* self, QSize* (*slot)() ```
void q_listview_on_contents_size(void* self, QSize* (*slot)()) {
    QListView_OnContentsSize((QListView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QListView* self ```
QSize* q_listview_qbase_contents_size(void* self) {
    return QListView_QBaseContentsSize((QListView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#dataChanged)
///
/// ``` QListView* self, QModelIndex* topLeft, QModelIndex* bottomRight, int* roles[] ```
void q_listview_data_changed(void* self, void* topLeft, void* bottomRight, int* roles[]) {
    size_t roles_len = 0;
    while (roles[roles_len] != NULL) {
        roles_len++;
    }
    libqt_list roles_list = {
        .len = roles_len,
        .data = {(int*)roles},
    };
    QListView_DataChanged((QListView*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles_list);
}

/// Allows for overriding the related default method
///
/// ``` QListView* self, void (*slot)(QListView*, QModelIndex*, QModelIndex*, int*[]) ```
void q_listview_on_data_changed(void* self, void (*slot)(void*, void*, void*, int*)) {
    QListView_OnDataChanged((QListView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QListView* self, QModelIndex* topLeft, QModelIndex* bottomRight, int* roles[] ```
void q_listview_qbase_data_changed(void* self, void* topLeft, void* bottomRight, int* roles[]) {
    size_t roles_len = 0;
    while (roles[roles_len] != NULL) {
        roles_len++;
    }
    libqt_list roles_list = {
        .len = roles_len,
        .data = {(int*)roles},
    };
    QListView_QBaseDataChanged((QListView*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#rowsInserted)
///
/// ``` QListView* self, QModelIndex* parent, int start, int end ```
void q_listview_rows_inserted(void* self, void* parent, int start, int end) {
    QListView_RowsInserted((QListView*)self, (QModelIndex*)parent, start, end);
}

/// Allows for overriding the related default method
///
/// ``` QListView* self, void (*slot)(QListView*, QModelIndex*, int, int) ```
void q_listview_on_rows_inserted(void* self, void (*slot)(void*, void*, int, int)) {
    QListView_OnRowsInserted((QListView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QListView* self, QModelIndex* parent, int start, int end ```
void q_listview_qbase_rows_inserted(void* self, void* parent, int start, int end) {
    QListView_QBaseRowsInserted((QListView*)self, (QModelIndex*)parent, start, end);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#rowsAboutToBeRemoved)
///
/// ``` QListView* self, QModelIndex* parent, int start, int end ```
void q_listview_rows_about_to_be_removed(void* self, void* parent, int start, int end) {
    QListView_RowsAboutToBeRemoved((QListView*)self, (QModelIndex*)parent, start, end);
}

/// Allows for overriding the related default method
///
/// ``` QListView* self, void (*slot)(QListView*, QModelIndex*, int, int) ```
void q_listview_on_rows_about_to_be_removed(void* self, void (*slot)(void*, void*, int, int)) {
    QListView_OnRowsAboutToBeRemoved((QListView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QListView* self, QModelIndex* parent, int start, int end ```
void q_listview_qbase_rows_about_to_be_removed(void* self, void* parent, int start, int end) {
    QListView_QBaseRowsAboutToBeRemoved((QListView*)self, (QModelIndex*)parent, start, end);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#mouseMoveEvent)
///
/// ``` QListView* self, QMouseEvent* e ```
void q_listview_mouse_move_event(void* self, void* e) {
    QListView_MouseMoveEvent((QListView*)self, (QMouseEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QListView* self, void (*slot)(QListView*, QMouseEvent*) ```
void q_listview_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QListView_OnMouseMoveEvent((QListView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QListView* self, QMouseEvent* e ```
void q_listview_qbase_mouse_move_event(void* self, void* e) {
    QListView_QBaseMouseMoveEvent((QListView*)self, (QMouseEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#mouseReleaseEvent)
///
/// ``` QListView* self, QMouseEvent* e ```
void q_listview_mouse_release_event(void* self, void* e) {
    QListView_MouseReleaseEvent((QListView*)self, (QMouseEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QListView* self, void (*slot)(QListView*, QMouseEvent*) ```
void q_listview_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QListView_OnMouseReleaseEvent((QListView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QListView* self, QMouseEvent* e ```
void q_listview_qbase_mouse_release_event(void* self, void* e) {
    QListView_QBaseMouseReleaseEvent((QListView*)self, (QMouseEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#wheelEvent)
///
/// ``` QListView* self, QWheelEvent* e ```
void q_listview_wheel_event(void* self, void* e) {
    QListView_WheelEvent((QListView*)self, (QWheelEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QListView* self, void (*slot)(QListView*, QWheelEvent*) ```
void q_listview_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QListView_OnWheelEvent((QListView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QListView* self, QWheelEvent* e ```
void q_listview_qbase_wheel_event(void* self, void* e) {
    QListView_QBaseWheelEvent((QListView*)self, (QWheelEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#timerEvent)
///
/// ``` QListView* self, QTimerEvent* e ```
void q_listview_timer_event(void* self, void* e) {
    QListView_TimerEvent((QListView*)self, (QTimerEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QListView* self, void (*slot)(QListView*, QTimerEvent*) ```
void q_listview_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QListView_OnTimerEvent((QListView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QListView* self, QTimerEvent* e ```
void q_listview_qbase_timer_event(void* self, void* e) {
    QListView_QBaseTimerEvent((QListView*)self, (QTimerEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#resizeEvent)
///
/// ``` QListView* self, QResizeEvent* e ```
void q_listview_resize_event(void* self, void* e) {
    QListView_ResizeEvent((QListView*)self, (QResizeEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QListView* self, void (*slot)(QListView*, QResizeEvent*) ```
void q_listview_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QListView_OnResizeEvent((QListView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QListView* self, QResizeEvent* e ```
void q_listview_qbase_resize_event(void* self, void* e) {
    QListView_QBaseResizeEvent((QListView*)self, (QResizeEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#dragMoveEvent)
///
/// ``` QListView* self, QDragMoveEvent* e ```
void q_listview_drag_move_event(void* self, void* e) {
    QListView_DragMoveEvent((QListView*)self, (QDragMoveEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QListView* self, void (*slot)(QListView*, QDragMoveEvent*) ```
void q_listview_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QListView_OnDragMoveEvent((QListView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QListView* self, QDragMoveEvent* e ```
void q_listview_qbase_drag_move_event(void* self, void* e) {
    QListView_QBaseDragMoveEvent((QListView*)self, (QDragMoveEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#dragLeaveEvent)
///
/// ``` QListView* self, QDragLeaveEvent* e ```
void q_listview_drag_leave_event(void* self, void* e) {
    QListView_DragLeaveEvent((QListView*)self, (QDragLeaveEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QListView* self, void (*slot)(QListView*, QDragLeaveEvent*) ```
void q_listview_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QListView_OnDragLeaveEvent((QListView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QListView* self, QDragLeaveEvent* e ```
void q_listview_qbase_drag_leave_event(void* self, void* e) {
    QListView_QBaseDragLeaveEvent((QListView*)self, (QDragLeaveEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#dropEvent)
///
/// ``` QListView* self, QDropEvent* e ```
void q_listview_drop_event(void* self, void* e) {
    QListView_DropEvent((QListView*)self, (QDropEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QListView* self, void (*slot)(QListView*, QDropEvent*) ```
void q_listview_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QListView_OnDropEvent((QListView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QListView* self, QDropEvent* e ```
void q_listview_qbase_drop_event(void* self, void* e) {
    QListView_QBaseDropEvent((QListView*)self, (QDropEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#startDrag)
///
/// ``` QListView* self, int supportedActions ```
void q_listview_start_drag(void* self, int64_t supportedActions) {
    QListView_StartDrag((QListView*)self, supportedActions);
}

/// Allows for overriding the related default method
///
/// ``` QListView* self, void (*slot)(QListView*, int) ```
void q_listview_on_start_drag(void* self, void (*slot)(void*, int64_t)) {
    QListView_OnStartDrag((QListView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QListView* self, int supportedActions ```
void q_listview_qbase_start_drag(void* self, int64_t supportedActions) {
    QListView_QBaseStartDrag((QListView*)self, supportedActions);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#initViewItemOption)
///
/// ``` QListView* self, QStyleOptionViewItem* option ```
void q_listview_init_view_item_option(void* self, void* option) {
    QListView_InitViewItemOption((QListView*)self, (QStyleOptionViewItem*)option);
}

/// Allows for overriding the related default method
///
/// ``` QListView* self, void (*slot)(QListView*, QStyleOptionViewItem*) ```
void q_listview_on_init_view_item_option(void* self, void (*slot)(void*, void*)) {
    QListView_OnInitViewItemOption((QListView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QListView* self, QStyleOptionViewItem* option ```
void q_listview_qbase_init_view_item_option(void* self, void* option) {
    QListView_QBaseInitViewItemOption((QListView*)self, (QStyleOptionViewItem*)option);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#paintEvent)
///
/// ``` QListView* self, QPaintEvent* e ```
void q_listview_paint_event(void* self, void* e) {
    QListView_PaintEvent((QListView*)self, (QPaintEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QListView* self, void (*slot)(QListView*, QPaintEvent*) ```
void q_listview_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QListView_OnPaintEvent((QListView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QListView* self, QPaintEvent* e ```
void q_listview_qbase_paint_event(void* self, void* e) {
    QListView_QBasePaintEvent((QListView*)self, (QPaintEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#horizontalOffset)
///
/// ``` QListView* self ```
int32_t q_listview_horizontal_offset(void* self) {
    return QListView_HorizontalOffset((QListView*)self);
}

/// Allows for overriding the related default method
///
/// ``` QListView* self, int32_t (*slot)() ```
void q_listview_on_horizontal_offset(void* self, int32_t (*slot)()) {
    QListView_OnHorizontalOffset((QListView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QListView* self ```
int32_t q_listview_qbase_horizontal_offset(void* self) {
    return QListView_QBaseHorizontalOffset((QListView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#verticalOffset)
///
/// ``` QListView* self ```
int32_t q_listview_vertical_offset(void* self) {
    return QListView_VerticalOffset((QListView*)self);
}

/// Allows for overriding the related default method
///
/// ``` QListView* self, int32_t (*slot)() ```
void q_listview_on_vertical_offset(void* self, int32_t (*slot)()) {
    QListView_OnVerticalOffset((QListView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QListView* self ```
int32_t q_listview_qbase_vertical_offset(void* self) {
    return QListView_QBaseVerticalOffset((QListView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#moveCursor)
///
/// ``` QListView* self, enum QAbstractItemView__CursorAction cursorAction, int modifiers ```
QModelIndex* q_listview_move_cursor(void* self, int64_t cursorAction, int64_t modifiers) {
    return QListView_MoveCursor((QListView*)self, cursorAction, modifiers);
}

/// Allows for overriding the related default method
///
/// ``` QListView* self, QModelIndex* (*slot)(QListView*, enum QAbstractItemView__CursorAction, int) ```
void q_listview_on_move_cursor(void* self, QModelIndex* (*slot)(void*, int64_t, int64_t)) {
    QListView_OnMoveCursor((QListView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QListView* self, enum QAbstractItemView__CursorAction cursorAction, int modifiers ```
QModelIndex* q_listview_qbase_move_cursor(void* self, int64_t cursorAction, int64_t modifiers) {
    return QListView_QBaseMoveCursor((QListView*)self, cursorAction, modifiers);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#rectForIndex)
///
/// ``` QListView* self, QModelIndex* index ```
QRect* q_listview_rect_for_index(void* self, void* index) {
    return QListView_RectForIndex((QListView*)self, (QModelIndex*)index);
}

/// Allows for overriding the related default method
///
/// ``` QListView* self, QRect* (*slot)(QListView*, QModelIndex*) ```
void q_listview_on_rect_for_index(void* self, QRect* (*slot)(void*, void*)) {
    QListView_OnRectForIndex((QListView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QListView* self, QModelIndex* index ```
QRect* q_listview_qbase_rect_for_index(void* self, void* index) {
    return QListView_QBaseRectForIndex((QListView*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setPositionForIndex)
///
/// ``` QListView* self, QPoint* position, QModelIndex* index ```
void q_listview_set_position_for_index(void* self, void* position, void* index) {
    QListView_SetPositionForIndex((QListView*)self, (QPoint*)position, (QModelIndex*)index);
}

/// Allows for overriding the related default method
///
/// ``` QListView* self, void (*slot)(QListView*, QPoint*, QModelIndex*) ```
void q_listview_on_set_position_for_index(void* self, void (*slot)(void*, void*, void*)) {
    QListView_OnSetPositionForIndex((QListView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QListView* self, QPoint* position, QModelIndex* index ```
void q_listview_qbase_set_position_for_index(void* self, void* position, void* index) {
    QListView_QBaseSetPositionForIndex((QListView*)self, (QPoint*)position, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setSelection)
///
/// ``` QListView* self, QRect* rect, int command ```
void q_listview_set_selection(void* self, void* rect, int64_t command) {
    QListView_SetSelection((QListView*)self, (QRect*)rect, command);
}

/// Allows for overriding the related default method
///
/// ``` QListView* self, void (*slot)(QListView*, QRect*, int) ```
void q_listview_on_set_selection(void* self, void (*slot)(void*, void*, int64_t)) {
    QListView_OnSetSelection((QListView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QListView* self, QRect* rect, int command ```
void q_listview_qbase_set_selection(void* self, void* rect, int64_t command) {
    QListView_QBaseSetSelection((QListView*)self, (QRect*)rect, command);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#visualRegionForSelection)
///
/// ``` QListView* self, QItemSelection* selection ```
QRegion* q_listview_visual_region_for_selection(void* self, void* selection) {
    return QListView_VisualRegionForSelection((QListView*)self, (QItemSelection*)selection);
}

/// Allows for overriding the related default method
///
/// ``` QListView* self, QRegion* (*slot)(QListView*, QItemSelection*) ```
void q_listview_on_visual_region_for_selection(void* self, QRegion* (*slot)(void*, void*)) {
    QListView_OnVisualRegionForSelection((QListView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QListView* self, QItemSelection* selection ```
QRegion* q_listview_qbase_visual_region_for_selection(void* self, void* selection) {
    return QListView_QBaseVisualRegionForSelection((QListView*)self, (QItemSelection*)selection);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#selectedIndexes)
///
/// ``` QListView* self ```
libqt_list /* of QModelIndex* */ q_listview_selected_indexes(void* self) {
    libqt_list _arr = QListView_SelectedIndexes((QListView*)self);
    return _arr;
}

/// Allows for overriding the related default method
///
/// ``` QListView* self, libqt_list /* of QModelIndex* */ (*slot)() ```
void q_listview_on_selected_indexes(void* self, libqt_list /* of QModelIndex* */ (*slot)()) {
    QListView_OnSelectedIndexes((QListView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QListView* self ```
libqt_list /* of QModelIndex* */ q_listview_qbase_selected_indexes(void* self) {
    libqt_list _arr = QListView_QBaseSelectedIndexes((QListView*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#updateGeometries)
///
/// ``` QListView* self ```
void q_listview_update_geometries(void* self) {
    QListView_UpdateGeometries((QListView*)self);
}

/// Allows for overriding the related default method
///
/// ``` QListView* self, void (*slot)() ```
void q_listview_on_update_geometries(void* self, void (*slot)()) {
    QListView_OnUpdateGeometries((QListView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QListView* self ```
void q_listview_qbase_update_geometries(void* self) {
    QListView_QBaseUpdateGeometries((QListView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#isIndexHidden)
///
/// ``` QListView* self, QModelIndex* index ```
bool q_listview_is_index_hidden(void* self, void* index) {
    return QListView_IsIndexHidden((QListView*)self, (QModelIndex*)index);
}

/// Allows for overriding the related default method
///
/// ``` QListView* self, bool (*slot)(QListView*, QModelIndex*) ```
void q_listview_on_is_index_hidden(void* self, bool (*slot)(void*, void*)) {
    QListView_OnIsIndexHidden((QListView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QListView* self, QModelIndex* index ```
bool q_listview_qbase_is_index_hidden(void* self, void* index) {
    return QListView_QBaseIsIndexHidden((QListView*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#selectionChanged)
///
/// ``` QListView* self, QItemSelection* selected, QItemSelection* deselected ```
void q_listview_selection_changed(void* self, void* selected, void* deselected) {
    QListView_SelectionChanged((QListView*)self, (QItemSelection*)selected, (QItemSelection*)deselected);
}

/// Allows for overriding the related default method
///
/// ``` QListView* self, void (*slot)(QListView*, QItemSelection*, QItemSelection*) ```
void q_listview_on_selection_changed(void* self, void (*slot)(void*, void*, void*)) {
    QListView_OnSelectionChanged((QListView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QListView* self, QItemSelection* selected, QItemSelection* deselected ```
void q_listview_qbase_selection_changed(void* self, void* selected, void* deselected) {
    QListView_QBaseSelectionChanged((QListView*)self, (QItemSelection*)selected, (QItemSelection*)deselected);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#currentChanged)
///
/// ``` QListView* self, QModelIndex* current, QModelIndex* previous ```
void q_listview_current_changed(void* self, void* current, void* previous) {
    QListView_CurrentChanged((QListView*)self, (QModelIndex*)current, (QModelIndex*)previous);
}

/// Allows for overriding the related default method
///
/// ``` QListView* self, void (*slot)(QListView*, QModelIndex*, QModelIndex*) ```
void q_listview_on_current_changed(void* self, void (*slot)(void*, void*, void*)) {
    QListView_OnCurrentChanged((QListView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QListView* self, QModelIndex* current, QModelIndex* previous ```
void q_listview_qbase_current_changed(void* self, void* current, void* previous) {
    QListView_QBaseCurrentChanged((QListView*)self, (QModelIndex*)current, (QModelIndex*)previous);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#viewportSizeHint)
///
/// ``` QListView* self ```
QSize* q_listview_viewport_size_hint(void* self) {
    return QListView_ViewportSizeHint((QListView*)self);
}

/// Allows for overriding the related default method
///
/// ``` QListView* self, QSize* (*slot)() ```
void q_listview_on_viewport_size_hint(void* self, QSize* (*slot)()) {
    QListView_OnViewportSizeHint((QListView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QListView* self ```
QSize* q_listview_qbase_viewport_size_hint(void* self) {
    return QListView_QBaseViewportSizeHint((QListView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_listview_tr2(const char* s, const char* c) {
    libqt_string _str = QListView_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_listview_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QListView_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#model)
///
/// ``` QListView* self ```
QAbstractItemModel* q_listview_model(void* self) {
    return QAbstractItemView_Model((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionModel)
///
/// ``` QListView* self ```
QItemSelectionModel* q_listview_selection_model(void* self) {
    return QAbstractItemView_SelectionModel((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegate)
///
/// ``` QListView* self, QAbstractItemDelegate* delegate ```
void q_listview_set_item_delegate(void* self, void* delegate) {
    QAbstractItemView_SetItemDelegate((QAbstractItemView*)self, (QAbstractItemDelegate*)delegate);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
///
/// ``` QListView* self ```
QAbstractItemDelegate* q_listview_item_delegate(void* self) {
    return QAbstractItemView_ItemDelegate((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionMode)
///
/// ``` QListView* self, enum QAbstractItemView__SelectionMode mode ```
void q_listview_set_selection_mode(void* self, int64_t mode) {
    QAbstractItemView_SetSelectionMode((QAbstractItemView*)self, mode);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionMode)
///
/// ``` QListView* self ```
int64_t q_listview_selection_mode(void* self) {
    return QAbstractItemView_SelectionMode((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionBehavior)
///
/// ``` QListView* self, enum QAbstractItemView__SelectionBehavior behavior ```
void q_listview_set_selection_behavior(void* self, int64_t behavior) {
    QAbstractItemView_SetSelectionBehavior((QAbstractItemView*)self, behavior);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionBehavior)
///
/// ``` QListView* self ```
int64_t q_listview_selection_behavior(void* self) {
    return QAbstractItemView_SelectionBehavior((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#currentIndex)
///
/// ``` QListView* self ```
QModelIndex* q_listview_current_index(void* self) {
    return QAbstractItemView_CurrentIndex((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rootIndex)
///
/// ``` QListView* self ```
QModelIndex* q_listview_root_index(void* self) {
    return QAbstractItemView_RootIndex((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setEditTriggers)
///
/// ``` QListView* self, int triggers ```
void q_listview_set_edit_triggers(void* self, int64_t triggers) {
    QAbstractItemView_SetEditTriggers((QAbstractItemView*)self, triggers);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editTriggers)
///
/// ``` QListView* self ```
int64_t q_listview_edit_triggers(void* self) {
    return QAbstractItemView_EditTriggers((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setVerticalScrollMode)
///
/// ``` QListView* self, enum QAbstractItemView__ScrollMode mode ```
void q_listview_set_vertical_scroll_mode(void* self, int64_t mode) {
    QAbstractItemView_SetVerticalScrollMode((QAbstractItemView*)self, mode);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollMode)
///
/// ``` QListView* self ```
int64_t q_listview_vertical_scroll_mode(void* self) {
    return QAbstractItemView_VerticalScrollMode((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resetVerticalScrollMode)
///
/// ``` QListView* self ```
void q_listview_reset_vertical_scroll_mode(void* self) {
    QAbstractItemView_ResetVerticalScrollMode((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setHorizontalScrollMode)
///
/// ``` QListView* self, enum QAbstractItemView__ScrollMode mode ```
void q_listview_set_horizontal_scroll_mode(void* self, int64_t mode) {
    QAbstractItemView_SetHorizontalScrollMode((QAbstractItemView*)self, mode);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollMode)
///
/// ``` QListView* self ```
int64_t q_listview_horizontal_scroll_mode(void* self) {
    return QAbstractItemView_HorizontalScrollMode((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resetHorizontalScrollMode)
///
/// ``` QListView* self ```
void q_listview_reset_horizontal_scroll_mode(void* self) {
    QAbstractItemView_ResetHorizontalScrollMode((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScroll)
///
/// ``` QListView* self, bool enable ```
void q_listview_set_auto_scroll(void* self, bool enable) {
    QAbstractItemView_SetAutoScroll((QAbstractItemView*)self, enable);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#hasAutoScroll)
///
/// ``` QListView* self ```
bool q_listview_has_auto_scroll(void* self) {
    return QAbstractItemView_HasAutoScroll((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScrollMargin)
///
/// ``` QListView* self, int margin ```
void q_listview_set_auto_scroll_margin(void* self, int margin) {
    QAbstractItemView_SetAutoScrollMargin((QAbstractItemView*)self, margin);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#autoScrollMargin)
///
/// ``` QListView* self ```
int32_t q_listview_auto_scroll_margin(void* self) {
    return QAbstractItemView_AutoScrollMargin((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setTabKeyNavigation)
///
/// ``` QListView* self, bool enable ```
void q_listview_set_tab_key_navigation(void* self, bool enable) {
    QAbstractItemView_SetTabKeyNavigation((QAbstractItemView*)self, enable);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#tabKeyNavigation)
///
/// ``` QListView* self ```
bool q_listview_tab_key_navigation(void* self) {
    return QAbstractItemView_TabKeyNavigation((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDropIndicatorShown)
///
/// ``` QListView* self, bool enable ```
void q_listview_set_drop_indicator_shown(void* self, bool enable) {
    QAbstractItemView_SetDropIndicatorShown((QAbstractItemView*)self, enable);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#showDropIndicator)
///
/// ``` QListView* self ```
bool q_listview_show_drop_indicator(void* self) {
    return QAbstractItemView_ShowDropIndicator((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragEnabled)
///
/// ``` QListView* self, bool enable ```
void q_listview_set_drag_enabled(void* self, bool enable) {
    QAbstractItemView_SetDragEnabled((QAbstractItemView*)self, enable);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnabled)
///
/// ``` QListView* self ```
bool q_listview_drag_enabled(void* self) {
    return QAbstractItemView_DragEnabled((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropOverwriteMode)
///
/// ``` QListView* self, bool overwrite ```
void q_listview_set_drag_drop_overwrite_mode(void* self, bool overwrite) {
    QAbstractItemView_SetDragDropOverwriteMode((QAbstractItemView*)self, overwrite);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropOverwriteMode)
///
/// ``` QListView* self ```
bool q_listview_drag_drop_overwrite_mode(void* self) {
    return QAbstractItemView_DragDropOverwriteMode((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropMode)
///
/// ``` QListView* self, enum QAbstractItemView__DragDropMode behavior ```
void q_listview_set_drag_drop_mode(void* self, int64_t behavior) {
    QAbstractItemView_SetDragDropMode((QAbstractItemView*)self, behavior);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropMode)
///
/// ``` QListView* self ```
int64_t q_listview_drag_drop_mode(void* self) {
    return QAbstractItemView_DragDropMode((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDefaultDropAction)
///
/// ``` QListView* self, enum Qt__DropAction dropAction ```
void q_listview_set_default_drop_action(void* self, int64_t dropAction) {
    QAbstractItemView_SetDefaultDropAction((QAbstractItemView*)self, dropAction);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#defaultDropAction)
///
/// ``` QListView* self ```
int64_t q_listview_default_drop_action(void* self) {
    return QAbstractItemView_DefaultDropAction((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAlternatingRowColors)
///
/// ``` QListView* self, bool enable ```
void q_listview_set_alternating_row_colors(void* self, bool enable) {
    QAbstractItemView_SetAlternatingRowColors((QAbstractItemView*)self, enable);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#alternatingRowColors)
///
/// ``` QListView* self ```
bool q_listview_alternating_row_colors(void* self) {
    return QAbstractItemView_AlternatingRowColors((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setIconSize)
///
/// ``` QListView* self, QSize* size ```
void q_listview_set_icon_size(void* self, void* size) {
    QAbstractItemView_SetIconSize((QAbstractItemView*)self, (QSize*)size);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#iconSize)
///
/// ``` QListView* self ```
QSize* q_listview_icon_size(void* self) {
    return QAbstractItemView_IconSize((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setTextElideMode)
///
/// ``` QListView* self, enum Qt__TextElideMode mode ```
void q_listview_set_text_elide_mode(void* self, int64_t mode) {
    QAbstractItemView_SetTextElideMode((QAbstractItemView*)self, mode);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#textElideMode)
///
/// ``` QListView* self ```
int64_t q_listview_text_elide_mode(void* self) {
    return QAbstractItemView_TextElideMode((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForIndex)
///
/// ``` QListView* self, QModelIndex* index ```
QSize* q_listview_size_hint_for_index(void* self, void* index) {
    return QAbstractItemView_SizeHintForIndex((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#openPersistentEditor)
///
/// ``` QListView* self, QModelIndex* index ```
void q_listview_open_persistent_editor(void* self, void* index) {
    QAbstractItemView_OpenPersistentEditor((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closePersistentEditor)
///
/// ``` QListView* self, QModelIndex* index ```
void q_listview_close_persistent_editor(void* self, void* index) {
    QAbstractItemView_ClosePersistentEditor((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#isPersistentEditorOpen)
///
/// ``` QListView* self, QModelIndex* index ```
bool q_listview_is_persistent_editor_open(void* self, void* index) {
    return QAbstractItemView_IsPersistentEditorOpen((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setIndexWidget)
///
/// ``` QListView* self, QModelIndex* index, QWidget* widget ```
void q_listview_set_index_widget(void* self, void* index, void* widget) {
    QAbstractItemView_SetIndexWidget((QAbstractItemView*)self, (QModelIndex*)index, (QWidget*)widget);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#indexWidget)
///
/// ``` QListView* self, QModelIndex* index ```
QWidget* q_listview_index_widget(void* self, void* index) {
    return QAbstractItemView_IndexWidget((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForRow)
///
/// ``` QListView* self, int row, QAbstractItemDelegate* delegate ```
void q_listview_set_item_delegate_for_row(void* self, int row, void* delegate) {
    QAbstractItemView_SetItemDelegateForRow((QAbstractItemView*)self, row, (QAbstractItemDelegate*)delegate);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForRow)
///
/// ``` QListView* self, int row ```
QAbstractItemDelegate* q_listview_item_delegate_for_row(void* self, int row) {
    return QAbstractItemView_ItemDelegateForRow((QAbstractItemView*)self, row);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForColumn)
///
/// ``` QListView* self, int column, QAbstractItemDelegate* delegate ```
void q_listview_set_item_delegate_for_column(void* self, int column, void* delegate) {
    QAbstractItemView_SetItemDelegateForColumn((QAbstractItemView*)self, column, (QAbstractItemDelegate*)delegate);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForColumn)
///
/// ``` QListView* self, int column ```
QAbstractItemDelegate* q_listview_item_delegate_for_column(void* self, int column) {
    return QAbstractItemView_ItemDelegateForColumn((QAbstractItemView*)self, column);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
///
/// ``` QListView* self, QModelIndex* index ```
QAbstractItemDelegate* q_listview_item_delegate_with_index(void* self, void* index) {
    return QAbstractItemView_ItemDelegateWithIndex((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// ``` QListView* self, QModelIndex* index ```
void q_listview_edit(void* self, void* index) {
    QAbstractItemView_Edit((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#clearSelection)
///
/// ``` QListView* self ```
void q_listview_clear_selection(void* self) {
    QAbstractItemView_ClearSelection((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setCurrentIndex)
///
/// ``` QListView* self, QModelIndex* index ```
void q_listview_set_current_index(void* self, void* index) {
    QAbstractItemView_SetCurrentIndex((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToTop)
///
/// ``` QListView* self ```
void q_listview_scroll_to_top(void* self) {
    QAbstractItemView_ScrollToTop((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToBottom)
///
/// ``` QListView* self ```
void q_listview_scroll_to_bottom(void* self) {
    QAbstractItemView_ScrollToBottom((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#update)
///
/// ``` QListView* self, QModelIndex* index ```
void q_listview_update(void* self, void* index) {
    QAbstractItemView_Update((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#pressed)
///
/// ``` QListView* self, QModelIndex* index ```
void q_listview_pressed(void* self, void* index) {
    QAbstractItemView_Pressed((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// ``` QListView* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_listview_on_pressed(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_Connect_Pressed((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#clicked)
///
/// ``` QListView* self, QModelIndex* index ```
void q_listview_clicked(void* self, void* index) {
    QAbstractItemView_Clicked((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// ``` QListView* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_listview_on_clicked(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_Connect_Clicked((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doubleClicked)
///
/// ``` QListView* self, QModelIndex* index ```
void q_listview_double_clicked(void* self, void* index) {
    QAbstractItemView_DoubleClicked((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// ``` QListView* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_listview_on_double_clicked(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_Connect_DoubleClicked((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#activated)
///
/// ``` QListView* self, QModelIndex* index ```
void q_listview_activated(void* self, void* index) {
    QAbstractItemView_Activated((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// ``` QListView* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_listview_on_activated(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_Connect_Activated((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#entered)
///
/// ``` QListView* self, QModelIndex* index ```
void q_listview_entered(void* self, void* index) {
    QAbstractItemView_Entered((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// ``` QListView* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_listview_on_entered(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_Connect_Entered((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEntered)
///
/// ``` QListView* self ```
void q_listview_viewport_entered(void* self) {
    QAbstractItemView_ViewportEntered((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// ``` QListView* self, void (*slot)(QAbstractItemView*) ```
void q_listview_on_viewport_entered(void* self, void (*slot)(void*)) {
    QAbstractItemView_Connect_ViewportEntered((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#iconSizeChanged)
///
/// ``` QListView* self, QSize* size ```
void q_listview_icon_size_changed(void* self, void* size) {
    QAbstractItemView_IconSizeChanged((QAbstractItemView*)self, (QSize*)size);
}

/// Inherited from QAbstractItemView
///
/// ``` QListView* self, void (*slot)(QAbstractItemView*, QSize*) ```
void q_listview_on_icon_size_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_Connect_IconSizeChanged((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
///
/// ``` QListView* self ```
int64_t q_listview_vertical_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_VerticalScrollBarPolicy((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
///
/// ``` QListView* self, enum Qt__ScrollBarPolicy verticalScrollBarPolicy ```
void q_listview_set_vertical_scroll_bar_policy(void* self, int64_t verticalScrollBarPolicy) {
    QAbstractScrollArea_SetVerticalScrollBarPolicy((QAbstractScrollArea*)self, verticalScrollBarPolicy);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
///
/// ``` QListView* self ```
QScrollBar* q_listview_vertical_scroll_bar(void* self) {
    return QAbstractScrollArea_VerticalScrollBar((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
///
/// ``` QListView* self, QScrollBar* scrollbar ```
void q_listview_set_vertical_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetVerticalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
///
/// ``` QListView* self ```
int64_t q_listview_horizontal_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_HorizontalScrollBarPolicy((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
///
/// ``` QListView* self, enum Qt__ScrollBarPolicy horizontalScrollBarPolicy ```
void q_listview_set_horizontal_scroll_bar_policy(void* self, int64_t horizontalScrollBarPolicy) {
    QAbstractScrollArea_SetHorizontalScrollBarPolicy((QAbstractScrollArea*)self, horizontalScrollBarPolicy);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
///
/// ``` QListView* self ```
QScrollBar* q_listview_horizontal_scroll_bar(void* self) {
    return QAbstractScrollArea_HorizontalScrollBar((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
///
/// ``` QListView* self, QScrollBar* scrollbar ```
void q_listview_set_horizontal_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetHorizontalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
///
/// ``` QListView* self ```
QWidget* q_listview_corner_widget(void* self) {
    return QAbstractScrollArea_CornerWidget((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
///
/// ``` QListView* self, QWidget* widget ```
void q_listview_set_corner_widget(void* self, void* widget) {
    QAbstractScrollArea_SetCornerWidget((QAbstractScrollArea*)self, (QWidget*)widget);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
///
/// ``` QListView* self, QWidget* widget, int alignment ```
void q_listview_add_scroll_bar_widget(void* self, void* widget, int64_t alignment) {
    QAbstractScrollArea_AddScrollBarWidget((QAbstractScrollArea*)self, (QWidget*)widget, alignment);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
///
/// ``` QListView* self, int alignment ```
libqt_list /* of QWidget* */ q_listview_scroll_bar_widgets(void* self, int64_t alignment) {
    libqt_list _arr = QAbstractScrollArea_ScrollBarWidgets((QAbstractScrollArea*)self, alignment);
    return _arr;
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
///
/// ``` QListView* self ```
QWidget* q_listview_viewport(void* self) {
    return QAbstractScrollArea_Viewport((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
///
/// ``` QListView* self, QWidget* widget ```
void q_listview_set_viewport(void* self, void* widget) {
    QAbstractScrollArea_SetViewport((QAbstractScrollArea*)self, (QWidget*)widget);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
///
/// ``` QListView* self ```
QSize* q_listview_maximum_viewport_size(void* self) {
    return QAbstractScrollArea_MaximumViewportSize((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
///
/// ``` QListView* self ```
int64_t q_listview_size_adjust_policy(void* self) {
    return QAbstractScrollArea_SizeAdjustPolicy((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
///
/// ``` QListView* self, enum QAbstractScrollArea__SizeAdjustPolicy policy ```
void q_listview_set_size_adjust_policy(void* self, int64_t policy) {
    QAbstractScrollArea_SetSizeAdjustPolicy((QAbstractScrollArea*)self, policy);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// ``` QListView* self ```
int32_t q_listview_frame_style(void* self) {
    return QFrame_FrameStyle((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// ``` QListView* self, int frameStyle ```
void q_listview_set_frame_style(void* self, int frameStyle) {
    QFrame_SetFrameStyle((QFrame*)self, frameStyle);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// ``` QListView* self ```
int32_t q_listview_frame_width(void* self) {
    return QFrame_FrameWidth((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// ``` QListView* self ```
int64_t q_listview_frame_shape(void* self) {
    return QFrame_FrameShape((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// ``` QListView* self, enum QFrame__Shape frameShape ```
void q_listview_set_frame_shape(void* self, int64_t frameShape) {
    QFrame_SetFrameShape((QFrame*)self, frameShape);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// ``` QListView* self ```
int64_t q_listview_frame_shadow(void* self) {
    return QFrame_FrameShadow((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// ``` QListView* self, enum QFrame__Shadow frameShadow ```
void q_listview_set_frame_shadow(void* self, int64_t frameShadow) {
    QFrame_SetFrameShadow((QFrame*)self, frameShadow);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// ``` QListView* self ```
int32_t q_listview_line_width(void* self) {
    return QFrame_LineWidth((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// ``` QListView* self, int lineWidth ```
void q_listview_set_line_width(void* self, int lineWidth) {
    QFrame_SetLineWidth((QFrame*)self, lineWidth);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// ``` QListView* self ```
int32_t q_listview_mid_line_width(void* self) {
    return QFrame_MidLineWidth((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// ``` QListView* self, int midLineWidth ```
void q_listview_set_mid_line_width(void* self, int midLineWidth) {
    QFrame_SetMidLineWidth((QFrame*)self, midLineWidth);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// ``` QListView* self ```
QRect* q_listview_frame_rect(void* self) {
    return QFrame_FrameRect((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// ``` QListView* self, QRect* frameRect ```
void q_listview_set_frame_rect(void* self, void* frameRect) {
    QFrame_SetFrameRect((QFrame*)self, (QRect*)frameRect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QListView* self ```
uintptr_t q_listview_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QListView* self ```
void q_listview_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QListView* self ```
uintptr_t q_listview_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QListView* self ```
uintptr_t q_listview_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QListView* self ```
QStyle* q_listview_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QListView* self, QStyle* style ```
void q_listview_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QListView* self ```
bool q_listview_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QListView* self ```
bool q_listview_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QListView* self ```
bool q_listview_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QListView* self ```
int64_t q_listview_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QListView* self, enum Qt__WindowModality windowModality ```
void q_listview_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QListView* self ```
bool q_listview_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QListView* self, QWidget* param1 ```
bool q_listview_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QListView* self, bool enabled ```
void q_listview_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QListView* self, bool disabled ```
void q_listview_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QListView* self, bool windowModified ```
void q_listview_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QListView* self ```
QRect* q_listview_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QListView* self ```
QRect* q_listview_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QListView* self ```
QRect* q_listview_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QListView* self ```
int32_t q_listview_x(void* self) {
    return QWidget_X((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QListView* self ```
int32_t q_listview_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QListView* self ```
QPoint* q_listview_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QListView* self ```
QSize* q_listview_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QListView* self ```
QSize* q_listview_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QListView* self ```
int32_t q_listview_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QListView* self ```
int32_t q_listview_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QListView* self ```
QRect* q_listview_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QListView* self ```
QRect* q_listview_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QListView* self ```
QRegion* q_listview_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QListView* self ```
QSize* q_listview_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QListView* self ```
QSize* q_listview_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QListView* self ```
int32_t q_listview_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QListView* self ```
int32_t q_listview_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QListView* self ```
int32_t q_listview_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QListView* self ```
int32_t q_listview_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QListView* self, QSize* minimumSize ```
void q_listview_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QListView* self, int minw, int minh ```
void q_listview_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QListView* self, QSize* maximumSize ```
void q_listview_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QListView* self, int maxw, int maxh ```
void q_listview_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QListView* self, int minw ```
void q_listview_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QListView* self, int minh ```
void q_listview_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QListView* self, int maxw ```
void q_listview_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QListView* self, int maxh ```
void q_listview_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QListView* self ```
QSize* q_listview_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QListView* self, QSize* sizeIncrement ```
void q_listview_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QListView* self, int w, int h ```
void q_listview_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QListView* self ```
QSize* q_listview_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QListView* self, QSize* baseSize ```
void q_listview_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QListView* self, int basew, int baseh ```
void q_listview_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QListView* self, QSize* fixedSize ```
void q_listview_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QListView* self, int w, int h ```
void q_listview_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QListView* self, int w ```
void q_listview_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QListView* self, int h ```
void q_listview_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QListView* self, QPointF* param1 ```
QPointF* q_listview_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QListView* self, QPoint* param1 ```
QPoint* q_listview_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QListView* self, QPointF* param1 ```
QPointF* q_listview_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QListView* self, QPoint* param1 ```
QPoint* q_listview_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QListView* self, QPointF* param1 ```
QPointF* q_listview_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QListView* self, QPoint* param1 ```
QPoint* q_listview_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QListView* self, QPointF* param1 ```
QPointF* q_listview_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QListView* self, QPoint* param1 ```
QPoint* q_listview_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QListView* self, QWidget* param1, QPointF* param2 ```
QPointF* q_listview_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QListView* self, QWidget* param1, QPoint* param2 ```
QPoint* q_listview_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QListView* self, QWidget* param1, QPointF* param2 ```
QPointF* q_listview_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QListView* self, QWidget* param1, QPoint* param2 ```
QPoint* q_listview_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QListView* self ```
QWidget* q_listview_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QListView* self ```
QWidget* q_listview_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QListView* self ```
QWidget* q_listview_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QListView* self ```
QPalette* q_listview_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QListView* self, QPalette* palette ```
void q_listview_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QListView* self, enum QPalette__ColorRole backgroundRole ```
void q_listview_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QListView* self ```
int64_t q_listview_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QListView* self, enum QPalette__ColorRole foregroundRole ```
void q_listview_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QListView* self ```
int64_t q_listview_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QListView* self ```
QFont* q_listview_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QListView* self, QFont* font ```
void q_listview_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QListView* self ```
QFontMetrics* q_listview_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QListView* self ```
QFontInfo* q_listview_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QListView* self ```
QCursor* q_listview_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QListView* self, QCursor* cursor ```
void q_listview_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QListView* self ```
void q_listview_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QListView* self, bool enable ```
void q_listview_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QListView* self ```
bool q_listview_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QListView* self ```
bool q_listview_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QListView* self, bool enable ```
void q_listview_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QListView* self ```
bool q_listview_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QListView* self, QBitmap* mask ```
void q_listview_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QListView* self, QRegion* mask ```
void q_listview_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QListView* self ```
QRegion* q_listview_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QListView* self ```
void q_listview_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QListView* self, QPaintDevice* target ```
void q_listview_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QListView* self, QPainter* painter ```
void q_listview_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QListView* self ```
QPixmap* q_listview_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QListView* self ```
QGraphicsEffect* q_listview_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QListView* self, QGraphicsEffect* effect ```
void q_listview_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QListView* self, enum Qt__GestureType typeVal ```
void q_listview_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QListView* self, enum Qt__GestureType typeVal ```
void q_listview_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QListView* self, const char* windowTitle ```
void q_listview_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QListView* self, const char* styleSheet ```
void q_listview_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QListView* self ```
const char* q_listview_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QListView* self ```
const char* q_listview_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QListView* self, QIcon* icon ```
void q_listview_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QListView* self ```
QIcon* q_listview_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QListView* self, const char* windowIconText ```
void q_listview_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QListView* self ```
const char* q_listview_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QListView* self, const char* windowRole ```
void q_listview_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QListView* self ```
const char* q_listview_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QListView* self, const char* filePath ```
void q_listview_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QListView* self ```
const char* q_listview_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QListView* self, double level ```
void q_listview_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QListView* self ```
double q_listview_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QListView* self ```
bool q_listview_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QListView* self, const char* toolTip ```
void q_listview_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QListView* self ```
const char* q_listview_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QListView* self, int msec ```
void q_listview_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QListView* self ```
int32_t q_listview_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QListView* self, const char* statusTip ```
void q_listview_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QListView* self ```
const char* q_listview_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QListView* self, const char* whatsThis ```
void q_listview_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QListView* self ```
const char* q_listview_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QListView* self ```
const char* q_listview_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QListView* self, const char* name ```
void q_listview_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QListView* self ```
const char* q_listview_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QListView* self, const char* description ```
void q_listview_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QListView* self, enum Qt__LayoutDirection direction ```
void q_listview_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QListView* self ```
int64_t q_listview_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QListView* self ```
void q_listview_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QListView* self, QLocale* locale ```
void q_listview_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QListView* self ```
QLocale* q_listview_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QListView* self ```
void q_listview_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QListView* self ```
bool q_listview_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QListView* self ```
bool q_listview_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QListView* self ```
void q_listview_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QListView* self ```
bool q_listview_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QListView* self ```
void q_listview_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QListView* self ```
void q_listview_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QListView* self, enum Qt__FocusReason reason ```
void q_listview_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QListView* self ```
int64_t q_listview_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QListView* self, enum Qt__FocusPolicy policy ```
void q_listview_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QListView* self ```
bool q_listview_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_listview_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QListView* self, QWidget* focusProxy ```
void q_listview_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QListView* self ```
QWidget* q_listview_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QListView* self ```
int64_t q_listview_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QListView* self, enum Qt__ContextMenuPolicy policy ```
void q_listview_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QListView* self ```
void q_listview_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QListView* self, QCursor* param1 ```
void q_listview_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QListView* self ```
void q_listview_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QListView* self ```
void q_listview_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QListView* self ```
void q_listview_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QListView* self, QKeySequence* key ```
int32_t q_listview_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QListView* self, int id ```
void q_listview_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QListView* self, int id ```
void q_listview_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QListView* self, int id ```
void q_listview_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_listview_mouse_grabber() {
    return QWidget_MouseGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_listview_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QListView* self ```
bool q_listview_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QListView* self, bool enable ```
void q_listview_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QListView* self ```
QGraphicsProxyWidget* q_listview_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QListView* self ```
void q_listview_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QListView* self, int x, int y, int w, int h ```
void q_listview_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QListView* self, QRect* param1 ```
void q_listview_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QListView* self, QRegion* param1 ```
void q_listview_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QListView* self, int x, int y, int w, int h ```
void q_listview_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QListView* self, QRect* param1 ```
void q_listview_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QListView* self, QRegion* param1 ```
void q_listview_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QListView* self, bool hidden ```
void q_listview_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QListView* self ```
void q_listview_show(void* self) {
    QWidget_Show((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QListView* self ```
void q_listview_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QListView* self ```
void q_listview_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QListView* self ```
void q_listview_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QListView* self ```
void q_listview_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QListView* self ```
void q_listview_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QListView* self ```
bool q_listview_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QListView* self ```
void q_listview_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QListView* self ```
void q_listview_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QListView* self, QWidget* param1 ```
void q_listview_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QListView* self, int x, int y ```
void q_listview_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QListView* self, QPoint* param1 ```
void q_listview_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QListView* self, int w, int h ```
void q_listview_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QListView* self, QSize* param1 ```
void q_listview_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QListView* self, int x, int y, int w, int h ```
void q_listview_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QListView* self, QRect* geometry ```
void q_listview_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QListView* self ```
char* q_listview_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QListView* self, const char* geometry ```
bool q_listview_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QListView* self ```
void q_listview_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QListView* self ```
bool q_listview_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QListView* self, QWidget* param1 ```
bool q_listview_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QListView* self ```
bool q_listview_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QListView* self ```
bool q_listview_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QListView* self ```
bool q_listview_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QListView* self ```
bool q_listview_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QListView* self ```
int64_t q_listview_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QListView* self, int state ```
void q_listview_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QListView* self, int state ```
void q_listview_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QListView* self ```
QSizePolicy* q_listview_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QListView* self, QSizePolicy* sizePolicy ```
void q_listview_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QListView* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_listview_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QListView* self ```
QRegion* q_listview_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QListView* self, int left, int top, int right, int bottom ```
void q_listview_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QListView* self, QMargins* margins ```
void q_listview_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QListView* self ```
QMargins* q_listview_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QListView* self ```
QRect* q_listview_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QListView* self ```
QLayout* q_listview_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QListView* self, QLayout* layout ```
void q_listview_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QListView* self ```
void q_listview_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QListView* self, QWidget* parent ```
void q_listview_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QListView* self, QWidget* parent, int f ```
void q_listview_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QListView* self, int dx, int dy ```
void q_listview_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QListView* self, int dx, int dy, QRect* param3 ```
void q_listview_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QListView* self ```
QWidget* q_listview_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QListView* self ```
QWidget* q_listview_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QListView* self ```
QWidget* q_listview_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QListView* self ```
bool q_listview_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QListView* self, bool on ```
void q_listview_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QListView* self, QAction* action ```
void q_listview_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QListView* self, QAction* actions[] ```
void q_listview_add_actions(void* self, void* actions[]) {
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
/// ``` QListView* self, QAction* before, QAction* actions[] ```
void q_listview_insert_actions(void* self, void* before, void* actions[]) {
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
/// ``` QListView* self, QAction* before, QAction* action ```
void q_listview_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QListView* self, QAction* action ```
void q_listview_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QListView* self ```
libqt_list /* of QAction* */ q_listview_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QListView* self, const char* text ```
QAction* q_listview_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QListView* self, QIcon* icon, const char* text ```
QAction* q_listview_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QListView* self, const char* text, QKeySequence* shortcut ```
QAction* q_listview_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QListView* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_listview_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QListView* self ```
QWidget* q_listview_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QListView* self, int typeVal ```
void q_listview_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QListView* self ```
int64_t q_listview_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QListView* self, enum Qt__WindowType param1 ```
void q_listview_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QListView* self, int typeVal ```
void q_listview_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QListView* self ```
int64_t q_listview_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_listview_find(uint64_t param1) {
    return QWidget_Find(param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QListView* self, int x, int y ```
QWidget* q_listview_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QListView* self, QPoint* p ```
QWidget* q_listview_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QListView* self, enum Qt__WidgetAttribute param1 ```
void q_listview_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QListView* self, enum Qt__WidgetAttribute param1 ```
bool q_listview_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QListView* self ```
void q_listview_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QListView* self, QWidget* child ```
bool q_listview_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QListView* self ```
bool q_listview_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QListView* self, bool enabled ```
void q_listview_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QListView* self ```
QBackingStore* q_listview_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QListView* self ```
QWindow* q_listview_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QListView* self ```
QScreen* q_listview_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QListView* self, QScreen* screen ```
void q_listview_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_listview_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QListView* self, const char* title ```
void q_listview_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

/// Inherited from QWidget
///
/// ``` QListView* self, void (*slot)(QWidget*, const char*) ```
void q_listview_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QListView* self, QIcon* icon ```
void q_listview_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// ``` QListView* self, void (*slot)(QWidget*, QIcon*) ```
void q_listview_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QListView* self, const char* iconText ```
void q_listview_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

/// Inherited from QWidget
///
/// ``` QListView* self, void (*slot)(QWidget*, const char*) ```
void q_listview_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QListView* self, QPoint* pos ```
void q_listview_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

/// Inherited from QWidget
///
/// ``` QListView* self, void (*slot)(QWidget*, QPoint*) ```
void q_listview_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QListView* self ```
int64_t q_listview_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QListView* self, int hints ```
void q_listview_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QListView* self, QPaintDevice* target, QPoint* targetOffset ```
void q_listview_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QListView* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_listview_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QListView* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_listview_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QListView* self, QPainter* painter, QPoint* targetOffset ```
void q_listview_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QListView* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_listview_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QListView* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_listview_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QListView* self, QRect* rectangle ```
QPixmap* q_listview_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QListView* self, enum Qt__GestureType typeVal, int flags ```
void q_listview_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QListView* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_listview_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QListView* self, int id, bool enable ```
void q_listview_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QListView* self, int id, bool enable ```
void q_listview_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QListView* self, enum Qt__WindowType param1, bool on ```
void q_listview_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QListView* self, enum Qt__WidgetAttribute param1, bool on ```
void q_listview_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_listview_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_listview_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QListView* self ```
const char* q_listview_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QListView* self, const char* name ```
void q_listview_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QListView* self ```
bool q_listview_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QListView* self ```
bool q_listview_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QListView* self ```
bool q_listview_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QListView* self ```
bool q_listview_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QListView* self, bool b ```
bool q_listview_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QListView* self ```
QThread* q_listview_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QListView* self, QThread* thread ```
void q_listview_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QListView* self, int interval ```
int32_t q_listview_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QListView* self, int id ```
void q_listview_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QListView* self ```
libqt_list /* of QObject* */ q_listview_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QListView* self, QObject* filterObj ```
void q_listview_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QListView* self, QObject* obj ```
void q_listview_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_listview_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QListView* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_listview_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_listview_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_listview_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QListView* self ```
void q_listview_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QListView* self ```
void q_listview_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QListView* self, const char* name, QVariant* value ```
bool q_listview_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QListView* self, const char* name ```
QVariant* q_listview_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QListView* self ```
const char** q_listview_dynamic_property_names(void* self) {
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
/// ``` QListView* self ```
QBindingStorage* q_listview_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QListView* self ```
QBindingStorage* q_listview_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QListView* self ```
void q_listview_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QListView* self, void (*slot)(QObject*) ```
void q_listview_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QListView* self ```
QObject* q_listview_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QListView* self, const char* classname ```
bool q_listview_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QListView* self ```
void q_listview_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QListView* self, int interval, enum Qt__TimerType timerType ```
int32_t q_listview_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_listview_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QListView* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_listview_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QListView* self, QObject* param1 ```
void q_listview_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QListView* self, void (*slot)(QObject*, QObject*) ```
void q_listview_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QListView* self ```
bool q_listview_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QListView* self ```
int32_t q_listview_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QListView* self ```
int32_t q_listview_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QListView* self ```
int32_t q_listview_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QListView* self ```
int32_t q_listview_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QListView* self ```
int32_t q_listview_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QListView* self ```
int32_t q_listview_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QListView* self ```
double q_listview_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QListView* self ```
double q_listview_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QListView* self ```
int32_t q_listview_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QListView* self ```
int32_t q_listview_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_listview_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QAbstractItemModel* model ```
void q_listview_set_model(void* self, void* model) {
    QListView_SetModel((QListView*)self, (QAbstractItemModel*)model);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QAbstractItemModel* model ```
void q_listview_qbase_set_model(void* self, void* model) {
    QListView_QBaseSetModel((QListView*)self, (QAbstractItemModel*)model);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, QAbstractItemModel*) ```
void q_listview_on_set_model(void* self, void (*slot)(void*, void*)) {
    QListView_OnSetModel((QListView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QItemSelectionModel* selectionModel ```
void q_listview_set_selection_model(void* self, void* selectionModel) {
    QListView_SetSelectionModel((QListView*)self, (QItemSelectionModel*)selectionModel);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QItemSelectionModel* selectionModel ```
void q_listview_qbase_set_selection_model(void* self, void* selectionModel) {
    QListView_QBaseSetSelectionModel((QListView*)self, (QItemSelectionModel*)selectionModel);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, QItemSelectionModel*) ```
void q_listview_on_set_selection_model(void* self, void (*slot)(void*, void*)) {
    QListView_OnSetSelectionModel((QListView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, const char* search ```
void q_listview_keyboard_search(void* self, const char* search) {
    QListView_KeyboardSearch((QListView*)self, qstring(search));
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, const char* search ```
void q_listview_qbase_keyboard_search(void* self, const char* search) {
    QListView_QBaseKeyboardSearch((QListView*)self, qstring(search));
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, const char*) ```
void q_listview_on_keyboard_search(void* self, void (*slot)(void*, const char*)) {
    QListView_OnKeyboardSearch((QListView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, int row ```
int32_t q_listview_size_hint_for_row(void* self, int row) {
    return QListView_SizeHintForRow((QListView*)self, row);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, int row ```
int32_t q_listview_qbase_size_hint_for_row(void* self, int row) {
    return QListView_QBaseSizeHintForRow((QListView*)self, row);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, int32_t (*slot)(QListView*, int) ```
void q_listview_on_size_hint_for_row(void* self, int32_t (*slot)(void*, int)) {
    QListView_OnSizeHintForRow((QListView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForColumn)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, int column ```
int32_t q_listview_size_hint_for_column(void* self, int column) {
    return QListView_SizeHintForColumn((QListView*)self, column);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, int column ```
int32_t q_listview_qbase_size_hint_for_column(void* self, int column) {
    return QListView_QBaseSizeHintForColumn((QListView*)self, column);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, int32_t (*slot)(QListView*, int) ```
void q_listview_on_size_hint_for_column(void* self, int32_t (*slot)(void*, int)) {
    QListView_OnSizeHintForColumn((QListView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QModelIndex* index ```
QAbstractItemDelegate* q_listview_item_delegate_for_index(void* self, void* index) {
    return QListView_ItemDelegateForIndex((QListView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QModelIndex* index ```
QAbstractItemDelegate* q_listview_qbase_item_delegate_for_index(void* self, void* index) {
    return QListView_QBaseItemDelegateForIndex((QListView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, QAbstractItemDelegate* (*slot)(QListView*, QModelIndex*) ```
void q_listview_on_item_delegate_for_index(void* self, QAbstractItemDelegate* (*slot)(void*, void*)) {
    QListView_OnItemDelegateForIndex((QListView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, enum Qt__InputMethodQuery query ```
QVariant* q_listview_input_method_query(void* self, int64_t query) {
    return QListView_InputMethodQuery((QListView*)self, query);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, enum Qt__InputMethodQuery query ```
QVariant* q_listview_qbase_input_method_query(void* self, int64_t query) {
    return QListView_QBaseInputMethodQuery((QListView*)self, query);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, QVariant* (*slot)(QListView*, enum Qt__InputMethodQuery) ```
void q_listview_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QListView_OnInputMethodQuery((QListView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self ```
void q_listview_select_all(void* self) {
    QListView_SelectAll((QListView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self ```
void q_listview_qbase_select_all(void* self) {
    QListView_QBaseSelectAll((QListView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)() ```
void q_listview_on_select_all(void* self, void (*slot)()) {
    QListView_OnSelectAll((QListView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self ```
void q_listview_update_editor_data(void* self) {
    QListView_UpdateEditorData((QListView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self ```
void q_listview_qbase_update_editor_data(void* self) {
    QListView_QBaseUpdateEditorData((QListView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)() ```
void q_listview_on_update_editor_data(void* self, void (*slot)()) {
    QListView_OnUpdateEditorData((QListView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self ```
void q_listview_update_editor_geometries(void* self) {
    QListView_UpdateEditorGeometries((QListView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self ```
void q_listview_qbase_update_editor_geometries(void* self) {
    QListView_QBaseUpdateEditorGeometries((QListView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)() ```
void q_listview_on_update_editor_geometries(void* self, void (*slot)()) {
    QListView_OnUpdateEditorGeometries((QListView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, int action ```
void q_listview_vertical_scrollbar_action(void* self, int action) {
    QListView_VerticalScrollbarAction((QListView*)self, action);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, int action ```
void q_listview_qbase_vertical_scrollbar_action(void* self, int action) {
    QListView_QBaseVerticalScrollbarAction((QListView*)self, action);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, int) ```
void q_listview_on_vertical_scrollbar_action(void* self, void (*slot)(void*, int)) {
    QListView_OnVerticalScrollbarAction((QListView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarAction)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, int action ```
void q_listview_horizontal_scrollbar_action(void* self, int action) {
    QListView_HorizontalScrollbarAction((QListView*)self, action);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, int action ```
void q_listview_qbase_horizontal_scrollbar_action(void* self, int action) {
    QListView_QBaseHorizontalScrollbarAction((QListView*)self, action);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, int) ```
void q_listview_on_horizontal_scrollbar_action(void* self, void (*slot)(void*, int)) {
    QListView_OnHorizontalScrollbarAction((QListView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, int value ```
void q_listview_vertical_scrollbar_value_changed(void* self, int value) {
    QListView_VerticalScrollbarValueChanged((QListView*)self, value);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, int value ```
void q_listview_qbase_vertical_scrollbar_value_changed(void* self, int value) {
    QListView_QBaseVerticalScrollbarValueChanged((QListView*)self, value);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, int) ```
void q_listview_on_vertical_scrollbar_value_changed(void* self, void (*slot)(void*, int)) {
    QListView_OnVerticalScrollbarValueChanged((QListView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, int value ```
void q_listview_horizontal_scrollbar_value_changed(void* self, int value) {
    QListView_HorizontalScrollbarValueChanged((QListView*)self, value);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, int value ```
void q_listview_qbase_horizontal_scrollbar_value_changed(void* self, int value) {
    QListView_QBaseHorizontalScrollbarValueChanged((QListView*)self, value);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, int) ```
void q_listview_on_horizontal_scrollbar_value_changed(void* self, void (*slot)(void*, int)) {
    QListView_OnHorizontalScrollbarValueChanged((QListView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QWidget* editor, enum QAbstractItemDelegate__EndEditHint hint ```
void q_listview_close_editor(void* self, void* editor, int64_t hint) {
    QListView_CloseEditor((QListView*)self, (QWidget*)editor, hint);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QWidget* editor, enum QAbstractItemDelegate__EndEditHint hint ```
void q_listview_qbase_close_editor(void* self, void* editor, int64_t hint) {
    QListView_QBaseCloseEditor((QListView*)self, (QWidget*)editor, hint);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, QWidget*, enum QAbstractItemDelegate__EndEditHint) ```
void q_listview_on_close_editor(void* self, void (*slot)(void*, void*, int64_t)) {
    QListView_OnCloseEditor((QListView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QWidget* editor ```
void q_listview_commit_data(void* self, void* editor) {
    QListView_CommitData((QListView*)self, (QWidget*)editor);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QWidget* editor ```
void q_listview_qbase_commit_data(void* self, void* editor) {
    QListView_QBaseCommitData((QListView*)self, (QWidget*)editor);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, QWidget*) ```
void q_listview_on_commit_data(void* self, void (*slot)(void*, void*)) {
    QListView_OnCommitData((QListView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QObject* editor ```
void q_listview_editor_destroyed(void* self, void* editor) {
    QListView_EditorDestroyed((QListView*)self, (QObject*)editor);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QObject* editor ```
void q_listview_qbase_editor_destroyed(void* self, void* editor) {
    QListView_QBaseEditorDestroyed((QListView*)self, (QObject*)editor);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, QObject*) ```
void q_listview_on_editor_destroyed(void* self, void (*slot)(void*, void*)) {
    QListView_OnEditorDestroyed((QListView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QModelIndex* index, enum QAbstractItemView__EditTrigger trigger, QEvent* event ```
bool q_listview_edit2(void* self, void* index, int64_t trigger, void* event) {
    return QListView_Edit2((QListView*)self, (QModelIndex*)index, trigger, (QEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QModelIndex* index, enum QAbstractItemView__EditTrigger trigger, QEvent* event ```
bool q_listview_qbase_edit2(void* self, void* index, int64_t trigger, void* event) {
    return QListView_QBaseEdit2((QListView*)self, (QModelIndex*)index, trigger, (QEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, bool (*slot)(QListView*, QModelIndex*, enum QAbstractItemView__EditTrigger, QEvent*) ```
void q_listview_on_edit2(void* self, bool (*slot)(void*, void*, int64_t, void*)) {
    QListView_OnEdit2((QListView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QModelIndex* index, QEvent* event ```
int64_t q_listview_selection_command(void* self, void* index, void* event) {
    return QListView_SelectionCommand((QListView*)self, (QModelIndex*)index, (QEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QModelIndex* index, QEvent* event ```
int64_t q_listview_qbase_selection_command(void* self, void* index, void* event) {
    return QListView_QBaseSelectionCommand((QListView*)self, (QModelIndex*)index, (QEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, int64_t (*slot)(QListView*, QModelIndex*, QEvent*) ```
void q_listview_on_selection_command(void* self, int64_t (*slot)(void*, void*, void*)) {
    QListView_OnSelectionCommand((QListView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, bool next ```
bool q_listview_focus_next_prev_child(void* self, bool next) {
    return QListView_FocusNextPrevChild((QListView*)self, next);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, bool next ```
bool q_listview_qbase_focus_next_prev_child(void* self, bool next) {
    return QListView_QBaseFocusNextPrevChild((QListView*)self, next);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, bool (*slot)(QListView*, bool) ```
void q_listview_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QListView_OnFocusNextPrevChild((QListView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QEvent* event ```
bool q_listview_viewport_event(void* self, void* event) {
    return QListView_ViewportEvent((QListView*)self, (QEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QEvent* event ```
bool q_listview_qbase_viewport_event(void* self, void* event) {
    return QListView_QBaseViewportEvent((QListView*)self, (QEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, bool (*slot)(QListView*, QEvent*) ```
void q_listview_on_viewport_event(void* self, bool (*slot)(void*, void*)) {
    QListView_OnViewportEvent((QListView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QMouseEvent* event ```
void q_listview_mouse_press_event(void* self, void* event) {
    QListView_MousePressEvent((QListView*)self, (QMouseEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QMouseEvent* event ```
void q_listview_qbase_mouse_press_event(void* self, void* event) {
    QListView_QBaseMousePressEvent((QListView*)self, (QMouseEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, QMouseEvent*) ```
void q_listview_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QListView_OnMousePressEvent((QListView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QMouseEvent* event ```
void q_listview_mouse_double_click_event(void* self, void* event) {
    QListView_MouseDoubleClickEvent((QListView*)self, (QMouseEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QMouseEvent* event ```
void q_listview_qbase_mouse_double_click_event(void* self, void* event) {
    QListView_QBaseMouseDoubleClickEvent((QListView*)self, (QMouseEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, QMouseEvent*) ```
void q_listview_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QListView_OnMouseDoubleClickEvent((QListView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QDragEnterEvent* event ```
void q_listview_drag_enter_event(void* self, void* event) {
    QListView_DragEnterEvent((QListView*)self, (QDragEnterEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QDragEnterEvent* event ```
void q_listview_qbase_drag_enter_event(void* self, void* event) {
    QListView_QBaseDragEnterEvent((QListView*)self, (QDragEnterEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, QDragEnterEvent*) ```
void q_listview_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QListView_OnDragEnterEvent((QListView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QFocusEvent* event ```
void q_listview_focus_in_event(void* self, void* event) {
    QListView_FocusInEvent((QListView*)self, (QFocusEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QFocusEvent* event ```
void q_listview_qbase_focus_in_event(void* self, void* event) {
    QListView_QBaseFocusInEvent((QListView*)self, (QFocusEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, QFocusEvent*) ```
void q_listview_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QListView_OnFocusInEvent((QListView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QFocusEvent* event ```
void q_listview_focus_out_event(void* self, void* event) {
    QListView_FocusOutEvent((QListView*)self, (QFocusEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QFocusEvent* event ```
void q_listview_qbase_focus_out_event(void* self, void* event) {
    QListView_QBaseFocusOutEvent((QListView*)self, (QFocusEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, QFocusEvent*) ```
void q_listview_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QListView_OnFocusOutEvent((QListView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QKeyEvent* event ```
void q_listview_key_press_event(void* self, void* event) {
    QListView_KeyPressEvent((QListView*)self, (QKeyEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QKeyEvent* event ```
void q_listview_qbase_key_press_event(void* self, void* event) {
    QListView_QBaseKeyPressEvent((QListView*)self, (QKeyEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, QKeyEvent*) ```
void q_listview_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QListView_OnKeyPressEvent((QListView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QInputMethodEvent* event ```
void q_listview_input_method_event(void* self, void* event) {
    QListView_InputMethodEvent((QListView*)self, (QInputMethodEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QInputMethodEvent* event ```
void q_listview_qbase_input_method_event(void* self, void* event) {
    QListView_QBaseInputMethodEvent((QListView*)self, (QInputMethodEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, QInputMethodEvent*) ```
void q_listview_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QListView_OnInputMethodEvent((QListView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QObject* object, QEvent* event ```
bool q_listview_event_filter(void* self, void* object, void* event) {
    return QListView_EventFilter((QListView*)self, (QObject*)object, (QEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QObject* object, QEvent* event ```
bool q_listview_qbase_event_filter(void* self, void* object, void* event) {
    return QListView_QBaseEventFilter((QListView*)self, (QObject*)object, (QEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, bool (*slot)(QListView*, QObject*, QEvent*) ```
void q_listview_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QListView_OnEventFilter((QListView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self ```
QSize* q_listview_minimum_size_hint(void* self) {
    return QListView_MinimumSizeHint((QListView*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self ```
QSize* q_listview_qbase_minimum_size_hint(void* self) {
    return QListView_QBaseMinimumSizeHint((QListView*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, QSize* (*slot)() ```
void q_listview_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QListView_OnMinimumSizeHint((QListView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self ```
QSize* q_listview_size_hint(void* self) {
    return QListView_SizeHint((QListView*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self ```
QSize* q_listview_qbase_size_hint(void* self) {
    return QListView_QBaseSizeHint((QListView*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, QSize* (*slot)() ```
void q_listview_on_size_hint(void* self, QSize* (*slot)()) {
    QListView_OnSizeHint((QListView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QWidget* viewport ```
void q_listview_setup_viewport(void* self, void* viewport) {
    QListView_SetupViewport((QListView*)self, (QWidget*)viewport);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QWidget* viewport ```
void q_listview_qbase_setup_viewport(void* self, void* viewport) {
    QListView_QBaseSetupViewport((QListView*)self, (QWidget*)viewport);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, QWidget*) ```
void q_listview_on_setup_viewport(void* self, void (*slot)(void*, void*)) {
    QListView_OnSetupViewport((QListView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QContextMenuEvent* param1 ```
void q_listview_context_menu_event(void* self, void* param1) {
    QListView_ContextMenuEvent((QListView*)self, (QContextMenuEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QContextMenuEvent* param1 ```
void q_listview_qbase_context_menu_event(void* self, void* param1) {
    QListView_QBaseContextMenuEvent((QListView*)self, (QContextMenuEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, QContextMenuEvent*) ```
void q_listview_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QListView_OnContextMenuEvent((QListView*)self, (intptr_t)slot);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QEvent* param1 ```
void q_listview_change_event(void* self, void* param1) {
    QListView_ChangeEvent((QListView*)self, (QEvent*)param1);
}

/// Inherited from QFrame
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QEvent* param1 ```
void q_listview_qbase_change_event(void* self, void* param1) {
    QListView_QBaseChangeEvent((QListView*)self, (QEvent*)param1);
}

/// Inherited from QFrame
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, QEvent*) ```
void q_listview_on_change_event(void* self, void (*slot)(void*, void*)) {
    QListView_OnChangeEvent((QListView*)self, (intptr_t)slot);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QStyleOptionFrame* option ```
void q_listview_init_style_option(void* self, void* option) {
    QListView_InitStyleOption((QListView*)self, (QStyleOptionFrame*)option);
}

/// Inherited from QFrame
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QStyleOptionFrame* option ```
void q_listview_qbase_init_style_option(void* self, void* option) {
    QListView_QBaseInitStyleOption((QListView*)self, (QStyleOptionFrame*)option);
}

/// Inherited from QFrame
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, QStyleOptionFrame*) ```
void q_listview_on_init_style_option(void* self, void (*slot)(void*, void*)) {
    QListView_OnInitStyleOption((QListView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self ```
int32_t q_listview_dev_type(void* self) {
    return QListView_DevType((QListView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self ```
int32_t q_listview_qbase_dev_type(void* self) {
    return QListView_QBaseDevType((QListView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, int32_t (*slot)() ```
void q_listview_on_dev_type(void* self, int32_t (*slot)()) {
    QListView_OnDevType((QListView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, bool visible ```
void q_listview_set_visible(void* self, bool visible) {
    QListView_SetVisible((QListView*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, bool visible ```
void q_listview_qbase_set_visible(void* self, bool visible) {
    QListView_QBaseSetVisible((QListView*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, bool) ```
void q_listview_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QListView_OnSetVisible((QListView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, int param1 ```
int32_t q_listview_height_for_width(void* self, int param1) {
    return QListView_HeightForWidth((QListView*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, int param1 ```
int32_t q_listview_qbase_height_for_width(void* self, int param1) {
    return QListView_QBaseHeightForWidth((QListView*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, int32_t (*slot)(QListView*, int) ```
void q_listview_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QListView_OnHeightForWidth((QListView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self ```
bool q_listview_has_height_for_width(void* self) {
    return QListView_HasHeightForWidth((QListView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self ```
bool q_listview_qbase_has_height_for_width(void* self) {
    return QListView_QBaseHasHeightForWidth((QListView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, bool (*slot)() ```
void q_listview_on_has_height_for_width(void* self, bool (*slot)()) {
    QListView_OnHasHeightForWidth((QListView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self ```
QPaintEngine* q_listview_paint_engine(void* self) {
    return QListView_PaintEngine((QListView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self ```
QPaintEngine* q_listview_qbase_paint_engine(void* self) {
    return QListView_QBasePaintEngine((QListView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, QPaintEngine* (*slot)() ```
void q_listview_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QListView_OnPaintEngine((QListView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QKeyEvent* event ```
void q_listview_key_release_event(void* self, void* event) {
    QListView_KeyReleaseEvent((QListView*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QKeyEvent* event ```
void q_listview_qbase_key_release_event(void* self, void* event) {
    QListView_QBaseKeyReleaseEvent((QListView*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, QKeyEvent*) ```
void q_listview_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QListView_OnKeyReleaseEvent((QListView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QEnterEvent* event ```
void q_listview_enter_event(void* self, void* event) {
    QListView_EnterEvent((QListView*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QEnterEvent* event ```
void q_listview_qbase_enter_event(void* self, void* event) {
    QListView_QBaseEnterEvent((QListView*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, QEnterEvent*) ```
void q_listview_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QListView_OnEnterEvent((QListView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QEvent* event ```
void q_listview_leave_event(void* self, void* event) {
    QListView_LeaveEvent((QListView*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QEvent* event ```
void q_listview_qbase_leave_event(void* self, void* event) {
    QListView_QBaseLeaveEvent((QListView*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, QEvent*) ```
void q_listview_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QListView_OnLeaveEvent((QListView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QMoveEvent* event ```
void q_listview_move_event(void* self, void* event) {
    QListView_MoveEvent((QListView*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QMoveEvent* event ```
void q_listview_qbase_move_event(void* self, void* event) {
    QListView_QBaseMoveEvent((QListView*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, QMoveEvent*) ```
void q_listview_on_move_event(void* self, void (*slot)(void*, void*)) {
    QListView_OnMoveEvent((QListView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QCloseEvent* event ```
void q_listview_close_event(void* self, void* event) {
    QListView_CloseEvent((QListView*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QCloseEvent* event ```
void q_listview_qbase_close_event(void* self, void* event) {
    QListView_QBaseCloseEvent((QListView*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, QCloseEvent*) ```
void q_listview_on_close_event(void* self, void (*slot)(void*, void*)) {
    QListView_OnCloseEvent((QListView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QTabletEvent* event ```
void q_listview_tablet_event(void* self, void* event) {
    QListView_TabletEvent((QListView*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QTabletEvent* event ```
void q_listview_qbase_tablet_event(void* self, void* event) {
    QListView_QBaseTabletEvent((QListView*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, QTabletEvent*) ```
void q_listview_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QListView_OnTabletEvent((QListView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QActionEvent* event ```
void q_listview_action_event(void* self, void* event) {
    QListView_ActionEvent((QListView*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QActionEvent* event ```
void q_listview_qbase_action_event(void* self, void* event) {
    QListView_QBaseActionEvent((QListView*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, QActionEvent*) ```
void q_listview_on_action_event(void* self, void (*slot)(void*, void*)) {
    QListView_OnActionEvent((QListView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QShowEvent* event ```
void q_listview_show_event(void* self, void* event) {
    QListView_ShowEvent((QListView*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QShowEvent* event ```
void q_listview_qbase_show_event(void* self, void* event) {
    QListView_QBaseShowEvent((QListView*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, QShowEvent*) ```
void q_listview_on_show_event(void* self, void (*slot)(void*, void*)) {
    QListView_OnShowEvent((QListView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QHideEvent* event ```
void q_listview_hide_event(void* self, void* event) {
    QListView_HideEvent((QListView*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QHideEvent* event ```
void q_listview_qbase_hide_event(void* self, void* event) {
    QListView_QBaseHideEvent((QListView*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, QHideEvent*) ```
void q_listview_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QListView_OnHideEvent((QListView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, const char* eventType, void* message, intptr_t* result ```
bool q_listview_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QListView_NativeEvent((QListView*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, const char* eventType, void* message, intptr_t* result ```
bool q_listview_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QListView_QBaseNativeEvent((QListView*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, bool (*slot)(QListView*, const char*, void*, intptr_t*) ```
void q_listview_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QListView_OnNativeEvent((QListView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_listview_metric(void* self, int64_t param1) {
    return QListView_Metric((QListView*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_listview_qbase_metric(void* self, int64_t param1) {
    return QListView_QBaseMetric((QListView*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, int32_t (*slot)(QListView*, enum QPaintDevice__PaintDeviceMetric) ```
void q_listview_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QListView_OnMetric((QListView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QPainter* painter ```
void q_listview_init_painter(void* self, void* painter) {
    QListView_InitPainter((QListView*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QPainter* painter ```
void q_listview_qbase_init_painter(void* self, void* painter) {
    QListView_QBaseInitPainter((QListView*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, QPainter*) ```
void q_listview_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QListView_OnInitPainter((QListView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QPoint* offset ```
QPaintDevice* q_listview_redirected(void* self, void* offset) {
    return QListView_Redirected((QListView*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QPoint* offset ```
QPaintDevice* q_listview_qbase_redirected(void* self, void* offset) {
    return QListView_QBaseRedirected((QListView*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, QPaintDevice* (*slot)(QListView*, QPoint*) ```
void q_listview_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QListView_OnRedirected((QListView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self ```
QPainter* q_listview_shared_painter(void* self) {
    return QListView_SharedPainter((QListView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self ```
QPainter* q_listview_qbase_shared_painter(void* self) {
    return QListView_QBaseSharedPainter((QListView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, QPainter* (*slot)() ```
void q_listview_on_shared_painter(void* self, QPainter* (*slot)()) {
    QListView_OnSharedPainter((QListView*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QChildEvent* event ```
void q_listview_child_event(void* self, void* event) {
    QListView_ChildEvent((QListView*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QChildEvent* event ```
void q_listview_qbase_child_event(void* self, void* event) {
    QListView_QBaseChildEvent((QListView*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, QChildEvent*) ```
void q_listview_on_child_event(void* self, void (*slot)(void*, void*)) {
    QListView_OnChildEvent((QListView*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QEvent* event ```
void q_listview_custom_event(void* self, void* event) {
    QListView_CustomEvent((QListView*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QEvent* event ```
void q_listview_qbase_custom_event(void* self, void* event) {
    QListView_QBaseCustomEvent((QListView*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, QEvent*) ```
void q_listview_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QListView_OnCustomEvent((QListView*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QMetaMethod* signal ```
void q_listview_connect_notify(void* self, void* signal) {
    QListView_ConnectNotify((QListView*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QMetaMethod* signal ```
void q_listview_qbase_connect_notify(void* self, void* signal) {
    QListView_QBaseConnectNotify((QListView*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, QMetaMethod*) ```
void q_listview_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QListView_OnConnectNotify((QListView*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QMetaMethod* signal ```
void q_listview_disconnect_notify(void* self, void* signal) {
    QListView_DisconnectNotify((QListView*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QMetaMethod* signal ```
void q_listview_qbase_disconnect_notify(void* self, void* signal) {
    QListView_QBaseDisconnectNotify((QListView*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, QMetaMethod*) ```
void q_listview_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QListView_OnDisconnectNotify((QListView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#state)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self ```
int64_t q_listview_state(void* self) {
    return QListView_State((QListView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self ```
int64_t q_listview_qbase_state(void* self) {
    return QListView_QBaseState((QListView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, int64_t (*slot)() ```
void q_listview_on_state(void* self, int64_t (*slot)()) {
    QListView_OnState((QListView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, enum QAbstractItemView__State state ```
void q_listview_set_state(void* self, int64_t state) {
    QListView_SetState((QListView*)self, state);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, enum QAbstractItemView__State state ```
void q_listview_qbase_set_state(void* self, int64_t state) {
    QListView_QBaseSetState((QListView*)self, state);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, enum QAbstractItemView__State) ```
void q_listview_on_set_state(void* self, void (*slot)(void*, int64_t)) {
    QListView_OnSetState((QListView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self ```
void q_listview_schedule_delayed_items_layout(void* self) {
    QListView_ScheduleDelayedItemsLayout((QListView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self ```
void q_listview_qbase_schedule_delayed_items_layout(void* self) {
    QListView_QBaseScheduleDelayedItemsLayout((QListView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)() ```
void q_listview_on_schedule_delayed_items_layout(void* self, void (*slot)()) {
    QListView_OnScheduleDelayedItemsLayout((QListView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self ```
void q_listview_execute_delayed_items_layout(void* self) {
    QListView_ExecuteDelayedItemsLayout((QListView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self ```
void q_listview_qbase_execute_delayed_items_layout(void* self) {
    QListView_QBaseExecuteDelayedItemsLayout((QListView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)() ```
void q_listview_on_execute_delayed_items_layout(void* self, void (*slot)()) {
    QListView_OnExecuteDelayedItemsLayout((QListView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QRegion* region ```
void q_listview_set_dirty_region(void* self, void* region) {
    QListView_SetDirtyRegion((QListView*)self, (QRegion*)region);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QRegion* region ```
void q_listview_qbase_set_dirty_region(void* self, void* region) {
    QListView_QBaseSetDirtyRegion((QListView*)self, (QRegion*)region);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, QRegion*) ```
void q_listview_on_set_dirty_region(void* self, void (*slot)(void*, void*)) {
    QListView_OnSetDirtyRegion((QListView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, int dx, int dy ```
void q_listview_scroll_dirty_region(void* self, int dx, int dy) {
    QListView_ScrollDirtyRegion((QListView*)self, dx, dy);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, int dx, int dy ```
void q_listview_qbase_scroll_dirty_region(void* self, int dx, int dy) {
    QListView_QBaseScrollDirtyRegion((QListView*)self, dx, dy);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, int, int) ```
void q_listview_on_scroll_dirty_region(void* self, void (*slot)(void*, int, int)) {
    QListView_OnScrollDirtyRegion((QListView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self ```
QPoint* q_listview_dirty_region_offset(void* self) {
    return QListView_DirtyRegionOffset((QListView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self ```
QPoint* q_listview_qbase_dirty_region_offset(void* self) {
    return QListView_QBaseDirtyRegionOffset((QListView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, QPoint* (*slot)() ```
void q_listview_on_dirty_region_offset(void* self, QPoint* (*slot)()) {
    QListView_OnDirtyRegionOffset((QListView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self ```
void q_listview_start_auto_scroll(void* self) {
    QListView_StartAutoScroll((QListView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self ```
void q_listview_qbase_start_auto_scroll(void* self) {
    QListView_QBaseStartAutoScroll((QListView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)() ```
void q_listview_on_start_auto_scroll(void* self, void (*slot)()) {
    QListView_OnStartAutoScroll((QListView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self ```
void q_listview_stop_auto_scroll(void* self) {
    QListView_StopAutoScroll((QListView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self ```
void q_listview_qbase_stop_auto_scroll(void* self) {
    QListView_QBaseStopAutoScroll((QListView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)() ```
void q_listview_on_stop_auto_scroll(void* self, void (*slot)()) {
    QListView_OnStopAutoScroll((QListView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self ```
void q_listview_do_auto_scroll(void* self) {
    QListView_DoAutoScroll((QListView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self ```
void q_listview_qbase_do_auto_scroll(void* self) {
    QListView_QBaseDoAutoScroll((QListView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)() ```
void q_listview_on_do_auto_scroll(void* self, void (*slot)()) {
    QListView_OnDoAutoScroll((QListView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self ```
int64_t q_listview_drop_indicator_position(void* self) {
    return QListView_DropIndicatorPosition((QListView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self ```
int64_t q_listview_qbase_drop_indicator_position(void* self) {
    return QListView_QBaseDropIndicatorPosition((QListView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, int64_t (*slot)() ```
void q_listview_on_drop_indicator_position(void* self, int64_t (*slot)()) {
    QListView_OnDropIndicatorPosition((QListView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, int left, int top, int right, int bottom ```
void q_listview_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    QListView_SetViewportMargins((QListView*)self, left, top, right, bottom);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, int left, int top, int right, int bottom ```
void q_listview_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    QListView_QBaseSetViewportMargins((QListView*)self, left, top, right, bottom);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, int, int, int, int) ```
void q_listview_on_set_viewport_margins(void* self, void (*slot)(void*, int, int, int, int)) {
    QListView_OnSetViewportMargins((QListView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self ```
QMargins* q_listview_viewport_margins(void* self) {
    return QListView_ViewportMargins((QListView*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self ```
QMargins* q_listview_qbase_viewport_margins(void* self) {
    return QListView_QBaseViewportMargins((QListView*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, QMargins* (*slot)() ```
void q_listview_on_viewport_margins(void* self, QMargins* (*slot)()) {
    QListView_OnViewportMargins((QListView*)self, (intptr_t)slot);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QPainter* param1 ```
void q_listview_draw_frame(void* self, void* param1) {
    QListView_DrawFrame((QListView*)self, (QPainter*)param1);
}

/// Inherited from QFrame
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QPainter* param1 ```
void q_listview_qbase_draw_frame(void* self, void* param1) {
    QListView_QBaseDrawFrame((QListView*)self, (QPainter*)param1);
}

/// Inherited from QFrame
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, QPainter*) ```
void q_listview_on_draw_frame(void* self, void (*slot)(void*, void*)) {
    QListView_OnDrawFrame((QListView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self ```
void q_listview_update_micro_focus(void* self) {
    QListView_UpdateMicroFocus((QListView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self ```
void q_listview_qbase_update_micro_focus(void* self) {
    QListView_QBaseUpdateMicroFocus((QListView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)() ```
void q_listview_on_update_micro_focus(void* self, void (*slot)()) {
    QListView_OnUpdateMicroFocus((QListView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self ```
void q_listview_create(void* self) {
    QListView_Create((QListView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self ```
void q_listview_qbase_create(void* self) {
    QListView_QBaseCreate((QListView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)() ```
void q_listview_on_create(void* self, void (*slot)()) {
    QListView_OnCreate((QListView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self ```
void q_listview_destroy(void* self) {
    QListView_Destroy((QListView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self ```
void q_listview_qbase_destroy(void* self) {
    QListView_QBaseDestroy((QListView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)() ```
void q_listview_on_destroy(void* self, void (*slot)()) {
    QListView_OnDestroy((QListView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self ```
bool q_listview_focus_next_child(void* self) {
    return QListView_FocusNextChild((QListView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self ```
bool q_listview_qbase_focus_next_child(void* self) {
    return QListView_QBaseFocusNextChild((QListView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, bool (*slot)() ```
void q_listview_on_focus_next_child(void* self, bool (*slot)()) {
    QListView_OnFocusNextChild((QListView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self ```
bool q_listview_focus_previous_child(void* self) {
    return QListView_FocusPreviousChild((QListView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self ```
bool q_listview_qbase_focus_previous_child(void* self) {
    return QListView_QBaseFocusPreviousChild((QListView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, bool (*slot)() ```
void q_listview_on_focus_previous_child(void* self, bool (*slot)()) {
    QListView_OnFocusPreviousChild((QListView*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self ```
QObject* q_listview_sender(void* self) {
    return QListView_Sender((QListView*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self ```
QObject* q_listview_qbase_sender(void* self) {
    return QListView_QBaseSender((QListView*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, QObject* (*slot)() ```
void q_listview_on_sender(void* self, QObject* (*slot)()) {
    QListView_OnSender((QListView*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self ```
int32_t q_listview_sender_signal_index(void* self) {
    return QListView_SenderSignalIndex((QListView*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self ```
int32_t q_listview_qbase_sender_signal_index(void* self) {
    return QListView_QBaseSenderSignalIndex((QListView*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, int32_t (*slot)() ```
void q_listview_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QListView_OnSenderSignalIndex((QListView*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, const char* signal ```
int32_t q_listview_receivers(void* self, const char* signal) {
    return QListView_Receivers((QListView*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, const char* signal ```
int32_t q_listview_qbase_receivers(void* self, const char* signal) {
    return QListView_QBaseReceivers((QListView*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, int32_t (*slot)(QListView*, const char*) ```
void q_listview_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QListView_OnReceivers((QListView*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QMetaMethod* signal ```
bool q_listview_is_signal_connected(void* self, void* signal) {
    return QListView_IsSignalConnected((QListView*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QMetaMethod* signal ```
bool q_listview_qbase_is_signal_connected(void* self, void* signal) {
    return QListView_QBaseIsSignalConnected((QListView*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, bool (*slot)(QListView*, QMetaMethod*) ```
void q_listview_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QListView_OnIsSignalConnected((QListView*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QListView* self ```
void q_listview_delete(void* self) {
    QListView_Delete((QListView*)(self));
}