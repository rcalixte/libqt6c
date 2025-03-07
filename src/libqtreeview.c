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
#include "libqtreeview.hpp"
#include "libqtreeview.h"

/// https://doc.qt.io/qt-6/qtreeview.html

/// q_treeview_new constructs a new QTreeView object.
///
/// ``` QWidget* parent ```
QTreeView* q_treeview_new(void* parent) {
    return QTreeView_new((QWidget*)parent);
}

/// q_treeview_new2 constructs a new QTreeView object.
///
///
QTreeView* q_treeview_new2() {
    return QTreeView_new2();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QTreeView* self ```
QMetaObject* q_treeview_meta_object(void* self) {
    return QTreeView_MetaObject((QTreeView*)self);
}

/// ``` QTreeView* self, const char* param1 ```
void* q_treeview_metacast(void* self, const char* param1) {
    return QTreeView_Metacast((QTreeView*)self, param1);
}

/// ``` QTreeView* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_treeview_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QTreeView_Metacall((QTreeView*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QTreeView* self, int32_t (*slot)(QTreeView*, enum QMetaObject__Call, int, void*) ```
void q_treeview_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QTreeView_OnMetacall((QTreeView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTreeView* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_treeview_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QTreeView_QBaseMetacall((QTreeView*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_treeview_tr(const char* s) {
    libqt_string _str = QTreeView_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setModel)
///
/// ``` QTreeView* self, QAbstractItemModel* model ```
void q_treeview_set_model(void* self, void* model) {
    QTreeView_SetModel((QTreeView*)self, (QAbstractItemModel*)model);
}

/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QAbstractItemModel*) ```
void q_treeview_on_set_model(void* self, void (*slot)(void*, void*)) {
    QTreeView_OnSetModel((QTreeView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTreeView* self, QAbstractItemModel* model ```
void q_treeview_qbase_set_model(void* self, void* model) {
    QTreeView_QBaseSetModel((QTreeView*)self, (QAbstractItemModel*)model);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setRootIndex)
///
/// ``` QTreeView* self, QModelIndex* index ```
void q_treeview_set_root_index(void* self, void* index) {
    QTreeView_SetRootIndex((QTreeView*)self, (QModelIndex*)index);
}

/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QModelIndex*) ```
void q_treeview_on_set_root_index(void* self, void (*slot)(void*, void*)) {
    QTreeView_OnSetRootIndex((QTreeView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTreeView* self, QModelIndex* index ```
void q_treeview_qbase_set_root_index(void* self, void* index) {
    QTreeView_QBaseSetRootIndex((QTreeView*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setSelectionModel)
///
/// ``` QTreeView* self, QItemSelectionModel* selectionModel ```
void q_treeview_set_selection_model(void* self, void* selectionModel) {
    QTreeView_SetSelectionModel((QTreeView*)self, (QItemSelectionModel*)selectionModel);
}

/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QItemSelectionModel*) ```
void q_treeview_on_set_selection_model(void* self, void (*slot)(void*, void*)) {
    QTreeView_OnSetSelectionModel((QTreeView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTreeView* self, QItemSelectionModel* selectionModel ```
void q_treeview_qbase_set_selection_model(void* self, void* selectionModel) {
    QTreeView_QBaseSetSelectionModel((QTreeView*)self, (QItemSelectionModel*)selectionModel);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#header)
///
/// ``` QTreeView* self ```
QHeaderView* q_treeview_header(void* self) {
    return QTreeView_Header((QTreeView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setHeader)
///
/// ``` QTreeView* self, QHeaderView* header ```
void q_treeview_set_header(void* self, void* header) {
    QTreeView_SetHeader((QTreeView*)self, (QHeaderView*)header);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#autoExpandDelay)
///
/// ``` QTreeView* self ```
int32_t q_treeview_auto_expand_delay(void* self) {
    return QTreeView_AutoExpandDelay((QTreeView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setAutoExpandDelay)
///
/// ``` QTreeView* self, int delay ```
void q_treeview_set_auto_expand_delay(void* self, int delay) {
    QTreeView_SetAutoExpandDelay((QTreeView*)self, delay);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#indentation)
///
/// ``` QTreeView* self ```
int32_t q_treeview_indentation(void* self) {
    return QTreeView_Indentation((QTreeView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setIndentation)
///
/// ``` QTreeView* self, int i ```
void q_treeview_set_indentation(void* self, int i) {
    QTreeView_SetIndentation((QTreeView*)self, i);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#resetIndentation)
///
/// ``` QTreeView* self ```
void q_treeview_reset_indentation(void* self) {
    QTreeView_ResetIndentation((QTreeView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#rootIsDecorated)
///
/// ``` QTreeView* self ```
bool q_treeview_root_is_decorated(void* self) {
    return QTreeView_RootIsDecorated((QTreeView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setRootIsDecorated)
///
/// ``` QTreeView* self, bool show ```
void q_treeview_set_root_is_decorated(void* self, bool show) {
    QTreeView_SetRootIsDecorated((QTreeView*)self, show);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#uniformRowHeights)
///
/// ``` QTreeView* self ```
bool q_treeview_uniform_row_heights(void* self) {
    return QTreeView_UniformRowHeights((QTreeView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setUniformRowHeights)
///
/// ``` QTreeView* self, bool uniform ```
void q_treeview_set_uniform_row_heights(void* self, bool uniform) {
    QTreeView_SetUniformRowHeights((QTreeView*)self, uniform);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#itemsExpandable)
///
/// ``` QTreeView* self ```
bool q_treeview_items_expandable(void* self) {
    return QTreeView_ItemsExpandable((QTreeView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setItemsExpandable)
///
/// ``` QTreeView* self, bool enable ```
void q_treeview_set_items_expandable(void* self, bool enable) {
    QTreeView_SetItemsExpandable((QTreeView*)self, enable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#expandsOnDoubleClick)
///
/// ``` QTreeView* self ```
bool q_treeview_expands_on_double_click(void* self) {
    return QTreeView_ExpandsOnDoubleClick((QTreeView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setExpandsOnDoubleClick)
///
/// ``` QTreeView* self, bool enable ```
void q_treeview_set_expands_on_double_click(void* self, bool enable) {
    QTreeView_SetExpandsOnDoubleClick((QTreeView*)self, enable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#columnViewportPosition)
///
/// ``` QTreeView* self, int column ```
int32_t q_treeview_column_viewport_position(void* self, int column) {
    return QTreeView_ColumnViewportPosition((QTreeView*)self, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#columnWidth)
///
/// ``` QTreeView* self, int column ```
int32_t q_treeview_column_width(void* self, int column) {
    return QTreeView_ColumnWidth((QTreeView*)self, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setColumnWidth)
///
/// ``` QTreeView* self, int column, int width ```
void q_treeview_set_column_width(void* self, int column, int width) {
    QTreeView_SetColumnWidth((QTreeView*)self, column, width);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#columnAt)
///
/// ``` QTreeView* self, int x ```
int32_t q_treeview_column_at(void* self, int x) {
    return QTreeView_ColumnAt((QTreeView*)self, x);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#isColumnHidden)
///
/// ``` QTreeView* self, int column ```
bool q_treeview_is_column_hidden(void* self, int column) {
    return QTreeView_IsColumnHidden((QTreeView*)self, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setColumnHidden)
///
/// ``` QTreeView* self, int column, bool hide ```
void q_treeview_set_column_hidden(void* self, int column, bool hide) {
    QTreeView_SetColumnHidden((QTreeView*)self, column, hide);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#isHeaderHidden)
///
/// ``` QTreeView* self ```
bool q_treeview_is_header_hidden(void* self) {
    return QTreeView_IsHeaderHidden((QTreeView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setHeaderHidden)
///
/// ``` QTreeView* self, bool hide ```
void q_treeview_set_header_hidden(void* self, bool hide) {
    QTreeView_SetHeaderHidden((QTreeView*)self, hide);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#isRowHidden)
///
/// ``` QTreeView* self, int row, QModelIndex* parent ```
bool q_treeview_is_row_hidden(void* self, int row, void* parent) {
    return QTreeView_IsRowHidden((QTreeView*)self, row, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setRowHidden)
///
/// ``` QTreeView* self, int row, QModelIndex* parent, bool hide ```
void q_treeview_set_row_hidden(void* self, int row, void* parent, bool hide) {
    QTreeView_SetRowHidden((QTreeView*)self, row, (QModelIndex*)parent, hide);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#isFirstColumnSpanned)
///
/// ``` QTreeView* self, int row, QModelIndex* parent ```
bool q_treeview_is_first_column_spanned(void* self, int row, void* parent) {
    return QTreeView_IsFirstColumnSpanned((QTreeView*)self, row, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setFirstColumnSpanned)
///
/// ``` QTreeView* self, int row, QModelIndex* parent, bool span ```
void q_treeview_set_first_column_spanned(void* self, int row, void* parent, bool span) {
    QTreeView_SetFirstColumnSpanned((QTreeView*)self, row, (QModelIndex*)parent, span);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#isExpanded)
///
/// ``` QTreeView* self, QModelIndex* index ```
bool q_treeview_is_expanded(void* self, void* index) {
    return QTreeView_IsExpanded((QTreeView*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setExpanded)
///
/// ``` QTreeView* self, QModelIndex* index, bool expand ```
void q_treeview_set_expanded(void* self, void* index, bool expand) {
    QTreeView_SetExpanded((QTreeView*)self, (QModelIndex*)index, expand);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setSortingEnabled)
///
/// ``` QTreeView* self, bool enable ```
void q_treeview_set_sorting_enabled(void* self, bool enable) {
    QTreeView_SetSortingEnabled((QTreeView*)self, enable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#isSortingEnabled)
///
/// ``` QTreeView* self ```
bool q_treeview_is_sorting_enabled(void* self) {
    return QTreeView_IsSortingEnabled((QTreeView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setAnimated)
///
/// ``` QTreeView* self, bool enable ```
void q_treeview_set_animated(void* self, bool enable) {
    QTreeView_SetAnimated((QTreeView*)self, enable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#isAnimated)
///
/// ``` QTreeView* self ```
bool q_treeview_is_animated(void* self) {
    return QTreeView_IsAnimated((QTreeView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setAllColumnsShowFocus)
///
/// ``` QTreeView* self, bool enable ```
void q_treeview_set_all_columns_show_focus(void* self, bool enable) {
    QTreeView_SetAllColumnsShowFocus((QTreeView*)self, enable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#allColumnsShowFocus)
///
/// ``` QTreeView* self ```
bool q_treeview_all_columns_show_focus(void* self) {
    return QTreeView_AllColumnsShowFocus((QTreeView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setWordWrap)
///
/// ``` QTreeView* self, bool on ```
void q_treeview_set_word_wrap(void* self, bool on) {
    QTreeView_SetWordWrap((QTreeView*)self, on);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#wordWrap)
///
/// ``` QTreeView* self ```
bool q_treeview_word_wrap(void* self) {
    return QTreeView_WordWrap((QTreeView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setTreePosition)
///
/// ``` QTreeView* self, int logicalIndex ```
void q_treeview_set_tree_position(void* self, int logicalIndex) {
    QTreeView_SetTreePosition((QTreeView*)self, logicalIndex);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#treePosition)
///
/// ``` QTreeView* self ```
int32_t q_treeview_tree_position(void* self) {
    return QTreeView_TreePosition((QTreeView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#keyboardSearch)
///
/// ``` QTreeView* self, const char* search ```
void q_treeview_keyboard_search(void* self, const char* search) {
    QTreeView_KeyboardSearch((QTreeView*)self, qstring(search));
}

/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, const char*) ```
void q_treeview_on_keyboard_search(void* self, void (*slot)(void*, const char*)) {
    QTreeView_OnKeyboardSearch((QTreeView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTreeView* self, const char* search ```
void q_treeview_qbase_keyboard_search(void* self, const char* search) {
    QTreeView_QBaseKeyboardSearch((QTreeView*)self, qstring(search));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#visualRect)
///
/// ``` QTreeView* self, QModelIndex* index ```
QRect* q_treeview_visual_rect(void* self, void* index) {
    return QTreeView_VisualRect((QTreeView*)self, (QModelIndex*)index);
}

/// Allows for overriding the related default method
///
/// ``` QTreeView* self, QRect* (*slot)(QTreeView*, QModelIndex*) ```
void q_treeview_on_visual_rect(void* self, QRect* (*slot)(void*, void*)) {
    QTreeView_OnVisualRect((QTreeView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTreeView* self, QModelIndex* index ```
QRect* q_treeview_qbase_visual_rect(void* self, void* index) {
    return QTreeView_QBaseVisualRect((QTreeView*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#scrollTo)
///
/// ``` QTreeView* self, QModelIndex* index, enum QAbstractItemView__ScrollHint hint ```
void q_treeview_scroll_to(void* self, void* index, int64_t hint) {
    QTreeView_ScrollTo((QTreeView*)self, (QModelIndex*)index, hint);
}

/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QModelIndex*, enum QAbstractItemView__ScrollHint) ```
void q_treeview_on_scroll_to(void* self, void (*slot)(void*, void*, int64_t)) {
    QTreeView_OnScrollTo((QTreeView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTreeView* self, QModelIndex* index, enum QAbstractItemView__ScrollHint hint ```
void q_treeview_qbase_scroll_to(void* self, void* index, int64_t hint) {
    QTreeView_QBaseScrollTo((QTreeView*)self, (QModelIndex*)index, hint);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#indexAt)
///
/// ``` QTreeView* self, QPoint* p ```
QModelIndex* q_treeview_index_at(void* self, void* p) {
    return QTreeView_IndexAt((QTreeView*)self, (QPoint*)p);
}

/// Allows for overriding the related default method
///
/// ``` QTreeView* self, QModelIndex* (*slot)(QTreeView*, QPoint*) ```
void q_treeview_on_index_at(void* self, QModelIndex* (*slot)(void*, void*)) {
    QTreeView_OnIndexAt((QTreeView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTreeView* self, QPoint* p ```
QModelIndex* q_treeview_qbase_index_at(void* self, void* p) {
    return QTreeView_QBaseIndexAt((QTreeView*)self, (QPoint*)p);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#indexAbove)
///
/// ``` QTreeView* self, QModelIndex* index ```
QModelIndex* q_treeview_index_above(void* self, void* index) {
    return QTreeView_IndexAbove((QTreeView*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#indexBelow)
///
/// ``` QTreeView* self, QModelIndex* index ```
QModelIndex* q_treeview_index_below(void* self, void* index) {
    return QTreeView_IndexBelow((QTreeView*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#doItemsLayout)
///
/// ``` QTreeView* self ```
void q_treeview_do_items_layout(void* self) {
    QTreeView_DoItemsLayout((QTreeView*)self);
}

/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)() ```
void q_treeview_on_do_items_layout(void* self, void (*slot)()) {
    QTreeView_OnDoItemsLayout((QTreeView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTreeView* self ```
void q_treeview_qbase_do_items_layout(void* self) {
    QTreeView_QBaseDoItemsLayout((QTreeView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#reset)
///
/// ``` QTreeView* self ```
void q_treeview_reset(void* self) {
    QTreeView_Reset((QTreeView*)self);
}

/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)() ```
void q_treeview_on_reset(void* self, void (*slot)()) {
    QTreeView_OnReset((QTreeView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTreeView* self ```
void q_treeview_qbase_reset(void* self) {
    QTreeView_QBaseReset((QTreeView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#dataChanged)
///
/// ``` QTreeView* self, QModelIndex* topLeft, QModelIndex* bottomRight, int* roles[] ```
void q_treeview_data_changed(void* self, void* topLeft, void* bottomRight, int* roles[]) {
    size_t roles_len = 0;
    while (roles[roles_len] != NULL) {
        roles_len++;
    }
    libqt_list roles_list = {
        .len = roles_len,
        .data = {(int*)roles},
    };
    QTreeView_DataChanged((QTreeView*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles_list);
}

/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QModelIndex*, QModelIndex*, int*[]) ```
void q_treeview_on_data_changed(void* self, void (*slot)(void*, void*, void*, int*)) {
    QTreeView_OnDataChanged((QTreeView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTreeView* self, QModelIndex* topLeft, QModelIndex* bottomRight, int* roles[] ```
void q_treeview_qbase_data_changed(void* self, void* topLeft, void* bottomRight, int* roles[]) {
    size_t roles_len = 0;
    while (roles[roles_len] != NULL) {
        roles_len++;
    }
    libqt_list roles_list = {
        .len = roles_len,
        .data = {(int*)roles},
    };
    QTreeView_QBaseDataChanged((QTreeView*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#selectAll)
///
/// ``` QTreeView* self ```
void q_treeview_select_all(void* self) {
    QTreeView_SelectAll((QTreeView*)self);
}

/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)() ```
void q_treeview_on_select_all(void* self, void (*slot)()) {
    QTreeView_OnSelectAll((QTreeView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTreeView* self ```
void q_treeview_qbase_select_all(void* self) {
    QTreeView_QBaseSelectAll((QTreeView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#expanded)
///
/// ``` QTreeView* self, QModelIndex* index ```
void q_treeview_expanded(void* self, void* index) {
    QTreeView_Expanded((QTreeView*)self, (QModelIndex*)index);
}

/// ``` QTreeView* self, void (*slot)(QTreeView*, QModelIndex*) ```
void q_treeview_on_expanded(void* self, void (*slot)(void*, void*)) {
    QTreeView_Connect_Expanded((QTreeView*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#collapsed)
///
/// ``` QTreeView* self, QModelIndex* index ```
void q_treeview_collapsed(void* self, void* index) {
    QTreeView_Collapsed((QTreeView*)self, (QModelIndex*)index);
}

/// ``` QTreeView* self, void (*slot)(QTreeView*, QModelIndex*) ```
void q_treeview_on_collapsed(void* self, void (*slot)(void*, void*)) {
    QTreeView_Connect_Collapsed((QTreeView*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#hideColumn)
///
/// ``` QTreeView* self, int column ```
void q_treeview_hide_column(void* self, int column) {
    QTreeView_HideColumn((QTreeView*)self, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#showColumn)
///
/// ``` QTreeView* self, int column ```
void q_treeview_show_column(void* self, int column) {
    QTreeView_ShowColumn((QTreeView*)self, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#expand)
///
/// ``` QTreeView* self, QModelIndex* index ```
void q_treeview_expand(void* self, void* index) {
    QTreeView_Expand((QTreeView*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#collapse)
///
/// ``` QTreeView* self, QModelIndex* index ```
void q_treeview_collapse(void* self, void* index) {
    QTreeView_Collapse((QTreeView*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#resizeColumnToContents)
///
/// ``` QTreeView* self, int column ```
void q_treeview_resize_column_to_contents(void* self, int column) {
    QTreeView_ResizeColumnToContents((QTreeView*)self, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#sortByColumn)
///
/// ``` QTreeView* self, int column, enum Qt__SortOrder order ```
void q_treeview_sort_by_column(void* self, int column, int64_t order) {
    QTreeView_SortByColumn((QTreeView*)self, column, order);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#expandAll)
///
/// ``` QTreeView* self ```
void q_treeview_expand_all(void* self) {
    QTreeView_ExpandAll((QTreeView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#expandRecursively)
///
/// ``` QTreeView* self, QModelIndex* index ```
void q_treeview_expand_recursively(void* self, void* index) {
    QTreeView_ExpandRecursively((QTreeView*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#collapseAll)
///
/// ``` QTreeView* self ```
void q_treeview_collapse_all(void* self) {
    QTreeView_CollapseAll((QTreeView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#expandToDepth)
///
/// ``` QTreeView* self, int depth ```
void q_treeview_expand_to_depth(void* self, int depth) {
    QTreeView_ExpandToDepth((QTreeView*)self, depth);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#columnResized)
///
/// ``` QTreeView* self, int column, int oldSize, int newSize ```
void q_treeview_column_resized(void* self, int column, int oldSize, int newSize) {
    QTreeView_ColumnResized((QTreeView*)self, column, oldSize, newSize);
}

/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, int, int, int) ```
void q_treeview_on_column_resized(void* self, void (*slot)(void*, int, int, int)) {
    QTreeView_OnColumnResized((QTreeView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTreeView* self, int column, int oldSize, int newSize ```
void q_treeview_qbase_column_resized(void* self, int column, int oldSize, int newSize) {
    QTreeView_QBaseColumnResized((QTreeView*)self, column, oldSize, newSize);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#columnCountChanged)
///
/// ``` QTreeView* self, int oldCount, int newCount ```
void q_treeview_column_count_changed(void* self, int oldCount, int newCount) {
    QTreeView_ColumnCountChanged((QTreeView*)self, oldCount, newCount);
}

/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, int, int) ```
void q_treeview_on_column_count_changed(void* self, void (*slot)(void*, int, int)) {
    QTreeView_OnColumnCountChanged((QTreeView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTreeView* self, int oldCount, int newCount ```
void q_treeview_qbase_column_count_changed(void* self, int oldCount, int newCount) {
    QTreeView_QBaseColumnCountChanged((QTreeView*)self, oldCount, newCount);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#columnMoved)
///
/// ``` QTreeView* self ```
void q_treeview_column_moved(void* self) {
    QTreeView_ColumnMoved((QTreeView*)self);
}

/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)() ```
void q_treeview_on_column_moved(void* self, void (*slot)()) {
    QTreeView_OnColumnMoved((QTreeView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTreeView* self ```
void q_treeview_qbase_column_moved(void* self) {
    QTreeView_QBaseColumnMoved((QTreeView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#reexpand)
///
/// ``` QTreeView* self ```
void q_treeview_reexpand(void* self) {
    QTreeView_Reexpand((QTreeView*)self);
}

/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)() ```
void q_treeview_on_reexpand(void* self, void (*slot)()) {
    QTreeView_OnReexpand((QTreeView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTreeView* self ```
void q_treeview_qbase_reexpand(void* self) {
    QTreeView_QBaseReexpand((QTreeView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#rowsRemoved)
///
/// ``` QTreeView* self, QModelIndex* parent, int first, int last ```
void q_treeview_rows_removed(void* self, void* parent, int first, int last) {
    QTreeView_RowsRemoved((QTreeView*)self, (QModelIndex*)parent, first, last);
}

/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QModelIndex*, int, int) ```
void q_treeview_on_rows_removed(void* self, void (*slot)(void*, void*, int, int)) {
    QTreeView_OnRowsRemoved((QTreeView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTreeView* self, QModelIndex* parent, int first, int last ```
void q_treeview_qbase_rows_removed(void* self, void* parent, int first, int last) {
    QTreeView_QBaseRowsRemoved((QTreeView*)self, (QModelIndex*)parent, first, last);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#verticalScrollbarValueChanged)
///
/// ``` QTreeView* self, int value ```
void q_treeview_vertical_scrollbar_value_changed(void* self, int value) {
    QTreeView_VerticalScrollbarValueChanged((QTreeView*)self, value);
}

/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, int) ```
void q_treeview_on_vertical_scrollbar_value_changed(void* self, void (*slot)(void*, int)) {
    QTreeView_OnVerticalScrollbarValueChanged((QTreeView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTreeView* self, int value ```
void q_treeview_qbase_vertical_scrollbar_value_changed(void* self, int value) {
    QTreeView_QBaseVerticalScrollbarValueChanged((QTreeView*)self, value);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#scrollContentsBy)
///
/// ``` QTreeView* self, int dx, int dy ```
void q_treeview_scroll_contents_by(void* self, int dx, int dy) {
    QTreeView_ScrollContentsBy((QTreeView*)self, dx, dy);
}

/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, int, int) ```
void q_treeview_on_scroll_contents_by(void* self, void (*slot)(void*, int, int)) {
    QTreeView_OnScrollContentsBy((QTreeView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTreeView* self, int dx, int dy ```
void q_treeview_qbase_scroll_contents_by(void* self, int dx, int dy) {
    QTreeView_QBaseScrollContentsBy((QTreeView*)self, dx, dy);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#rowsInserted)
///
/// ``` QTreeView* self, QModelIndex* parent, int start, int end ```
void q_treeview_rows_inserted(void* self, void* parent, int start, int end) {
    QTreeView_RowsInserted((QTreeView*)self, (QModelIndex*)parent, start, end);
}

/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QModelIndex*, int, int) ```
void q_treeview_on_rows_inserted(void* self, void (*slot)(void*, void*, int, int)) {
    QTreeView_OnRowsInserted((QTreeView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTreeView* self, QModelIndex* parent, int start, int end ```
void q_treeview_qbase_rows_inserted(void* self, void* parent, int start, int end) {
    QTreeView_QBaseRowsInserted((QTreeView*)self, (QModelIndex*)parent, start, end);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#rowsAboutToBeRemoved)
///
/// ``` QTreeView* self, QModelIndex* parent, int start, int end ```
void q_treeview_rows_about_to_be_removed(void* self, void* parent, int start, int end) {
    QTreeView_RowsAboutToBeRemoved((QTreeView*)self, (QModelIndex*)parent, start, end);
}

/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QModelIndex*, int, int) ```
void q_treeview_on_rows_about_to_be_removed(void* self, void (*slot)(void*, void*, int, int)) {
    QTreeView_OnRowsAboutToBeRemoved((QTreeView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTreeView* self, QModelIndex* parent, int start, int end ```
void q_treeview_qbase_rows_about_to_be_removed(void* self, void* parent, int start, int end) {
    QTreeView_QBaseRowsAboutToBeRemoved((QTreeView*)self, (QModelIndex*)parent, start, end);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#moveCursor)
///
/// ``` QTreeView* self, enum QAbstractItemView__CursorAction cursorAction, int modifiers ```
QModelIndex* q_treeview_move_cursor(void* self, int64_t cursorAction, int64_t modifiers) {
    return QTreeView_MoveCursor((QTreeView*)self, cursorAction, modifiers);
}

/// Allows for overriding the related default method
///
/// ``` QTreeView* self, QModelIndex* (*slot)(QTreeView*, enum QAbstractItemView__CursorAction, int) ```
void q_treeview_on_move_cursor(void* self, QModelIndex* (*slot)(void*, int64_t, int64_t)) {
    QTreeView_OnMoveCursor((QTreeView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTreeView* self, enum QAbstractItemView__CursorAction cursorAction, int modifiers ```
QModelIndex* q_treeview_qbase_move_cursor(void* self, int64_t cursorAction, int64_t modifiers) {
    return QTreeView_QBaseMoveCursor((QTreeView*)self, cursorAction, modifiers);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#horizontalOffset)
///
/// ``` QTreeView* self ```
int32_t q_treeview_horizontal_offset(void* self) {
    return QTreeView_HorizontalOffset((QTreeView*)self);
}

/// Allows for overriding the related default method
///
/// ``` QTreeView* self, int32_t (*slot)() ```
void q_treeview_on_horizontal_offset(void* self, int32_t (*slot)()) {
    QTreeView_OnHorizontalOffset((QTreeView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTreeView* self ```
int32_t q_treeview_qbase_horizontal_offset(void* self) {
    return QTreeView_QBaseHorizontalOffset((QTreeView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#verticalOffset)
///
/// ``` QTreeView* self ```
int32_t q_treeview_vertical_offset(void* self) {
    return QTreeView_VerticalOffset((QTreeView*)self);
}

/// Allows for overriding the related default method
///
/// ``` QTreeView* self, int32_t (*slot)() ```
void q_treeview_on_vertical_offset(void* self, int32_t (*slot)()) {
    QTreeView_OnVerticalOffset((QTreeView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTreeView* self ```
int32_t q_treeview_qbase_vertical_offset(void* self) {
    return QTreeView_QBaseVerticalOffset((QTreeView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setSelection)
///
/// ``` QTreeView* self, QRect* rect, int command ```
void q_treeview_set_selection(void* self, void* rect, int64_t command) {
    QTreeView_SetSelection((QTreeView*)self, (QRect*)rect, command);
}

/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QRect*, int) ```
void q_treeview_on_set_selection(void* self, void (*slot)(void*, void*, int64_t)) {
    QTreeView_OnSetSelection((QTreeView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTreeView* self, QRect* rect, int command ```
void q_treeview_qbase_set_selection(void* self, void* rect, int64_t command) {
    QTreeView_QBaseSetSelection((QTreeView*)self, (QRect*)rect, command);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#visualRegionForSelection)
///
/// ``` QTreeView* self, QItemSelection* selection ```
QRegion* q_treeview_visual_region_for_selection(void* self, void* selection) {
    return QTreeView_VisualRegionForSelection((QTreeView*)self, (QItemSelection*)selection);
}

/// Allows for overriding the related default method
///
/// ``` QTreeView* self, QRegion* (*slot)(QTreeView*, QItemSelection*) ```
void q_treeview_on_visual_region_for_selection(void* self, QRegion* (*slot)(void*, void*)) {
    QTreeView_OnVisualRegionForSelection((QTreeView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTreeView* self, QItemSelection* selection ```
QRegion* q_treeview_qbase_visual_region_for_selection(void* self, void* selection) {
    return QTreeView_QBaseVisualRegionForSelection((QTreeView*)self, (QItemSelection*)selection);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#selectedIndexes)
///
/// ``` QTreeView* self ```
libqt_list /* of QModelIndex* */ q_treeview_selected_indexes(void* self) {
    libqt_list _arr = QTreeView_SelectedIndexes((QTreeView*)self);
    return _arr;
}

/// Allows for overriding the related default method
///
/// ``` QTreeView* self, libqt_list /* of QModelIndex* */ (*slot)() ```
void q_treeview_on_selected_indexes(void* self, libqt_list /* of QModelIndex* */ (*slot)()) {
    QTreeView_OnSelectedIndexes((QTreeView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTreeView* self ```
libqt_list /* of QModelIndex* */ q_treeview_qbase_selected_indexes(void* self) {
    libqt_list _arr = QTreeView_QBaseSelectedIndexes((QTreeView*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#changeEvent)
///
/// ``` QTreeView* self, QEvent* event ```
void q_treeview_change_event(void* self, void* event) {
    QTreeView_ChangeEvent((QTreeView*)self, (QEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QEvent*) ```
void q_treeview_on_change_event(void* self, void (*slot)(void*, void*)) {
    QTreeView_OnChangeEvent((QTreeView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTreeView* self, QEvent* event ```
void q_treeview_qbase_change_event(void* self, void* event) {
    QTreeView_QBaseChangeEvent((QTreeView*)self, (QEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#timerEvent)
///
/// ``` QTreeView* self, QTimerEvent* event ```
void q_treeview_timer_event(void* self, void* event) {
    QTreeView_TimerEvent((QTreeView*)self, (QTimerEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QTimerEvent*) ```
void q_treeview_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QTreeView_OnTimerEvent((QTreeView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTreeView* self, QTimerEvent* event ```
void q_treeview_qbase_timer_event(void* self, void* event) {
    QTreeView_QBaseTimerEvent((QTreeView*)self, (QTimerEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#paintEvent)
///
/// ``` QTreeView* self, QPaintEvent* event ```
void q_treeview_paint_event(void* self, void* event) {
    QTreeView_PaintEvent((QTreeView*)self, (QPaintEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QPaintEvent*) ```
void q_treeview_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QTreeView_OnPaintEvent((QTreeView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTreeView* self, QPaintEvent* event ```
void q_treeview_qbase_paint_event(void* self, void* event) {
    QTreeView_QBasePaintEvent((QTreeView*)self, (QPaintEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#drawTree)
///
/// ``` QTreeView* self, QPainter* painter, QRegion* region ```
void q_treeview_draw_tree(void* self, void* painter, void* region) {
    QTreeView_DrawTree((QTreeView*)self, (QPainter*)painter, (QRegion*)region);
}

/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QPainter*, QRegion*) ```
void q_treeview_on_draw_tree(void* self, void (*slot)(void*, void*, void*)) {
    QTreeView_OnDrawTree((QTreeView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTreeView* self, QPainter* painter, QRegion* region ```
void q_treeview_qbase_draw_tree(void* self, void* painter, void* region) {
    QTreeView_QBaseDrawTree((QTreeView*)self, (QPainter*)painter, (QRegion*)region);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#drawRow)
///
/// ``` QTreeView* self, QPainter* painter, QStyleOptionViewItem* options, QModelIndex* index ```
void q_treeview_draw_row(void* self, void* painter, void* options, void* index) {
    QTreeView_DrawRow((QTreeView*)self, (QPainter*)painter, (QStyleOptionViewItem*)options, (QModelIndex*)index);
}

/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QPainter*, QStyleOptionViewItem*, QModelIndex*) ```
void q_treeview_on_draw_row(void* self, void (*slot)(void*, void*, void*, void*)) {
    QTreeView_OnDrawRow((QTreeView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTreeView* self, QPainter* painter, QStyleOptionViewItem* options, QModelIndex* index ```
void q_treeview_qbase_draw_row(void* self, void* painter, void* options, void* index) {
    QTreeView_QBaseDrawRow((QTreeView*)self, (QPainter*)painter, (QStyleOptionViewItem*)options, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#drawBranches)
///
/// ``` QTreeView* self, QPainter* painter, QRect* rect, QModelIndex* index ```
void q_treeview_draw_branches(void* self, void* painter, void* rect, void* index) {
    QTreeView_DrawBranches((QTreeView*)self, (QPainter*)painter, (QRect*)rect, (QModelIndex*)index);
}

/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QPainter*, QRect*, QModelIndex*) ```
void q_treeview_on_draw_branches(void* self, void (*slot)(void*, void*, void*, void*)) {
    QTreeView_OnDrawBranches((QTreeView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTreeView* self, QPainter* painter, QRect* rect, QModelIndex* index ```
void q_treeview_qbase_draw_branches(void* self, void* painter, void* rect, void* index) {
    QTreeView_QBaseDrawBranches((QTreeView*)self, (QPainter*)painter, (QRect*)rect, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#mousePressEvent)
///
/// ``` QTreeView* self, QMouseEvent* event ```
void q_treeview_mouse_press_event(void* self, void* event) {
    QTreeView_MousePressEvent((QTreeView*)self, (QMouseEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QMouseEvent*) ```
void q_treeview_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QTreeView_OnMousePressEvent((QTreeView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTreeView* self, QMouseEvent* event ```
void q_treeview_qbase_mouse_press_event(void* self, void* event) {
    QTreeView_QBaseMousePressEvent((QTreeView*)self, (QMouseEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#mouseReleaseEvent)
///
/// ``` QTreeView* self, QMouseEvent* event ```
void q_treeview_mouse_release_event(void* self, void* event) {
    QTreeView_MouseReleaseEvent((QTreeView*)self, (QMouseEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QMouseEvent*) ```
void q_treeview_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QTreeView_OnMouseReleaseEvent((QTreeView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTreeView* self, QMouseEvent* event ```
void q_treeview_qbase_mouse_release_event(void* self, void* event) {
    QTreeView_QBaseMouseReleaseEvent((QTreeView*)self, (QMouseEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#mouseDoubleClickEvent)
///
/// ``` QTreeView* self, QMouseEvent* event ```
void q_treeview_mouse_double_click_event(void* self, void* event) {
    QTreeView_MouseDoubleClickEvent((QTreeView*)self, (QMouseEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QMouseEvent*) ```
void q_treeview_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QTreeView_OnMouseDoubleClickEvent((QTreeView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTreeView* self, QMouseEvent* event ```
void q_treeview_qbase_mouse_double_click_event(void* self, void* event) {
    QTreeView_QBaseMouseDoubleClickEvent((QTreeView*)self, (QMouseEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#mouseMoveEvent)
///
/// ``` QTreeView* self, QMouseEvent* event ```
void q_treeview_mouse_move_event(void* self, void* event) {
    QTreeView_MouseMoveEvent((QTreeView*)self, (QMouseEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QMouseEvent*) ```
void q_treeview_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QTreeView_OnMouseMoveEvent((QTreeView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTreeView* self, QMouseEvent* event ```
void q_treeview_qbase_mouse_move_event(void* self, void* event) {
    QTreeView_QBaseMouseMoveEvent((QTreeView*)self, (QMouseEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#keyPressEvent)
///
/// ``` QTreeView* self, QKeyEvent* event ```
void q_treeview_key_press_event(void* self, void* event) {
    QTreeView_KeyPressEvent((QTreeView*)self, (QKeyEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QKeyEvent*) ```
void q_treeview_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QTreeView_OnKeyPressEvent((QTreeView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTreeView* self, QKeyEvent* event ```
void q_treeview_qbase_key_press_event(void* self, void* event) {
    QTreeView_QBaseKeyPressEvent((QTreeView*)self, (QKeyEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#dragMoveEvent)
///
/// ``` QTreeView* self, QDragMoveEvent* event ```
void q_treeview_drag_move_event(void* self, void* event) {
    QTreeView_DragMoveEvent((QTreeView*)self, (QDragMoveEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QDragMoveEvent*) ```
void q_treeview_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QTreeView_OnDragMoveEvent((QTreeView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTreeView* self, QDragMoveEvent* event ```
void q_treeview_qbase_drag_move_event(void* self, void* event) {
    QTreeView_QBaseDragMoveEvent((QTreeView*)self, (QDragMoveEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#viewportEvent)
///
/// ``` QTreeView* self, QEvent* event ```
bool q_treeview_viewport_event(void* self, void* event) {
    return QTreeView_ViewportEvent((QTreeView*)self, (QEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QTreeView* self, bool (*slot)(QTreeView*, QEvent*) ```
void q_treeview_on_viewport_event(void* self, bool (*slot)(void*, void*)) {
    QTreeView_OnViewportEvent((QTreeView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTreeView* self, QEvent* event ```
bool q_treeview_qbase_viewport_event(void* self, void* event) {
    return QTreeView_QBaseViewportEvent((QTreeView*)self, (QEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#updateGeometries)
///
/// ``` QTreeView* self ```
void q_treeview_update_geometries(void* self) {
    QTreeView_UpdateGeometries((QTreeView*)self);
}

/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)() ```
void q_treeview_on_update_geometries(void* self, void (*slot)()) {
    QTreeView_OnUpdateGeometries((QTreeView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTreeView* self ```
void q_treeview_qbase_update_geometries(void* self) {
    QTreeView_QBaseUpdateGeometries((QTreeView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#viewportSizeHint)
///
/// ``` QTreeView* self ```
QSize* q_treeview_viewport_size_hint(void* self) {
    return QTreeView_ViewportSizeHint((QTreeView*)self);
}

/// Allows for overriding the related default method
///
/// ``` QTreeView* self, QSize* (*slot)() ```
void q_treeview_on_viewport_size_hint(void* self, QSize* (*slot)()) {
    QTreeView_OnViewportSizeHint((QTreeView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTreeView* self ```
QSize* q_treeview_qbase_viewport_size_hint(void* self) {
    return QTreeView_QBaseViewportSizeHint((QTreeView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#sizeHintForColumn)
///
/// ``` QTreeView* self, int column ```
int32_t q_treeview_size_hint_for_column(void* self, int column) {
    return QTreeView_SizeHintForColumn((QTreeView*)self, column);
}

/// Allows for overriding the related default method
///
/// ``` QTreeView* self, int32_t (*slot)(QTreeView*, int) ```
void q_treeview_on_size_hint_for_column(void* self, int32_t (*slot)(void*, int)) {
    QTreeView_OnSizeHintForColumn((QTreeView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTreeView* self, int column ```
int32_t q_treeview_qbase_size_hint_for_column(void* self, int column) {
    return QTreeView_QBaseSizeHintForColumn((QTreeView*)self, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#indexRowSizeHint)
///
/// ``` QTreeView* self, QModelIndex* index ```
int32_t q_treeview_index_row_size_hint(void* self, void* index) {
    return QTreeView_IndexRowSizeHint((QTreeView*)self, (QModelIndex*)index);
}

/// Allows for overriding the related default method
///
/// ``` QTreeView* self, int32_t (*slot)(QTreeView*, QModelIndex*) ```
void q_treeview_on_index_row_size_hint(void* self, int32_t (*slot)(void*, void*)) {
    QTreeView_OnIndexRowSizeHint((QTreeView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTreeView* self, QModelIndex* index ```
int32_t q_treeview_qbase_index_row_size_hint(void* self, void* index) {
    return QTreeView_QBaseIndexRowSizeHint((QTreeView*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#rowHeight)
///
/// ``` QTreeView* self, QModelIndex* index ```
int32_t q_treeview_row_height(void* self, void* index) {
    return QTreeView_RowHeight((QTreeView*)self, (QModelIndex*)index);
}

/// Allows for overriding the related default method
///
/// ``` QTreeView* self, int32_t (*slot)(QTreeView*, QModelIndex*) ```
void q_treeview_on_row_height(void* self, int32_t (*slot)(void*, void*)) {
    QTreeView_OnRowHeight((QTreeView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTreeView* self, QModelIndex* index ```
int32_t q_treeview_qbase_row_height(void* self, void* index) {
    return QTreeView_QBaseRowHeight((QTreeView*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#horizontalScrollbarAction)
///
/// ``` QTreeView* self, int action ```
void q_treeview_horizontal_scrollbar_action(void* self, int action) {
    QTreeView_HorizontalScrollbarAction((QTreeView*)self, action);
}

/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, int) ```
void q_treeview_on_horizontal_scrollbar_action(void* self, void (*slot)(void*, int)) {
    QTreeView_OnHorizontalScrollbarAction((QTreeView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTreeView* self, int action ```
void q_treeview_qbase_horizontal_scrollbar_action(void* self, int action) {
    QTreeView_QBaseHorizontalScrollbarAction((QTreeView*)self, action);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#isIndexHidden)
///
/// ``` QTreeView* self, QModelIndex* index ```
bool q_treeview_is_index_hidden(void* self, void* index) {
    return QTreeView_IsIndexHidden((QTreeView*)self, (QModelIndex*)index);
}

/// Allows for overriding the related default method
///
/// ``` QTreeView* self, bool (*slot)(QTreeView*, QModelIndex*) ```
void q_treeview_on_is_index_hidden(void* self, bool (*slot)(void*, void*)) {
    QTreeView_OnIsIndexHidden((QTreeView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTreeView* self, QModelIndex* index ```
bool q_treeview_qbase_is_index_hidden(void* self, void* index) {
    return QTreeView_QBaseIsIndexHidden((QTreeView*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#selectionChanged)
///
/// ``` QTreeView* self, QItemSelection* selected, QItemSelection* deselected ```
void q_treeview_selection_changed(void* self, void* selected, void* deselected) {
    QTreeView_SelectionChanged((QTreeView*)self, (QItemSelection*)selected, (QItemSelection*)deselected);
}

/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QItemSelection*, QItemSelection*) ```
void q_treeview_on_selection_changed(void* self, void (*slot)(void*, void*, void*)) {
    QTreeView_OnSelectionChanged((QTreeView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTreeView* self, QItemSelection* selected, QItemSelection* deselected ```
void q_treeview_qbase_selection_changed(void* self, void* selected, void* deselected) {
    QTreeView_QBaseSelectionChanged((QTreeView*)self, (QItemSelection*)selected, (QItemSelection*)deselected);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#currentChanged)
///
/// ``` QTreeView* self, QModelIndex* current, QModelIndex* previous ```
void q_treeview_current_changed(void* self, void* current, void* previous) {
    QTreeView_CurrentChanged((QTreeView*)self, (QModelIndex*)current, (QModelIndex*)previous);
}

/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QModelIndex*, QModelIndex*) ```
void q_treeview_on_current_changed(void* self, void (*slot)(void*, void*, void*)) {
    QTreeView_OnCurrentChanged((QTreeView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTreeView* self, QModelIndex* current, QModelIndex* previous ```
void q_treeview_qbase_current_changed(void* self, void* current, void* previous) {
    QTreeView_QBaseCurrentChanged((QTreeView*)self, (QModelIndex*)current, (QModelIndex*)previous);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_treeview_tr2(const char* s, const char* c) {
    libqt_string _str = QTreeView_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_treeview_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QTreeView_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#expandRecursively)
///
/// ``` QTreeView* self, QModelIndex* index, int depth ```
void q_treeview_expand_recursively2(void* self, void* index, int depth) {
    QTreeView_ExpandRecursively2((QTreeView*)self, (QModelIndex*)index, depth);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#model)
///
/// ``` QTreeView* self ```
QAbstractItemModel* q_treeview_model(void* self) {
    return QAbstractItemView_Model((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionModel)
///
/// ``` QTreeView* self ```
QItemSelectionModel* q_treeview_selection_model(void* self) {
    return QAbstractItemView_SelectionModel((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegate)
///
/// ``` QTreeView* self, QAbstractItemDelegate* delegate ```
void q_treeview_set_item_delegate(void* self, void* delegate) {
    QAbstractItemView_SetItemDelegate((QAbstractItemView*)self, (QAbstractItemDelegate*)delegate);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
///
/// ``` QTreeView* self ```
QAbstractItemDelegate* q_treeview_item_delegate(void* self) {
    return QAbstractItemView_ItemDelegate((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionMode)
///
/// ``` QTreeView* self, enum QAbstractItemView__SelectionMode mode ```
void q_treeview_set_selection_mode(void* self, int64_t mode) {
    QAbstractItemView_SetSelectionMode((QAbstractItemView*)self, mode);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionMode)
///
/// ``` QTreeView* self ```
int64_t q_treeview_selection_mode(void* self) {
    return QAbstractItemView_SelectionMode((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionBehavior)
///
/// ``` QTreeView* self, enum QAbstractItemView__SelectionBehavior behavior ```
void q_treeview_set_selection_behavior(void* self, int64_t behavior) {
    QAbstractItemView_SetSelectionBehavior((QAbstractItemView*)self, behavior);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionBehavior)
///
/// ``` QTreeView* self ```
int64_t q_treeview_selection_behavior(void* self) {
    return QAbstractItemView_SelectionBehavior((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#currentIndex)
///
/// ``` QTreeView* self ```
QModelIndex* q_treeview_current_index(void* self) {
    return QAbstractItemView_CurrentIndex((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rootIndex)
///
/// ``` QTreeView* self ```
QModelIndex* q_treeview_root_index(void* self) {
    return QAbstractItemView_RootIndex((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setEditTriggers)
///
/// ``` QTreeView* self, int triggers ```
void q_treeview_set_edit_triggers(void* self, int64_t triggers) {
    QAbstractItemView_SetEditTriggers((QAbstractItemView*)self, triggers);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editTriggers)
///
/// ``` QTreeView* self ```
int64_t q_treeview_edit_triggers(void* self) {
    return QAbstractItemView_EditTriggers((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setVerticalScrollMode)
///
/// ``` QTreeView* self, enum QAbstractItemView__ScrollMode mode ```
void q_treeview_set_vertical_scroll_mode(void* self, int64_t mode) {
    QAbstractItemView_SetVerticalScrollMode((QAbstractItemView*)self, mode);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollMode)
///
/// ``` QTreeView* self ```
int64_t q_treeview_vertical_scroll_mode(void* self) {
    return QAbstractItemView_VerticalScrollMode((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resetVerticalScrollMode)
///
/// ``` QTreeView* self ```
void q_treeview_reset_vertical_scroll_mode(void* self) {
    QAbstractItemView_ResetVerticalScrollMode((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setHorizontalScrollMode)
///
/// ``` QTreeView* self, enum QAbstractItemView__ScrollMode mode ```
void q_treeview_set_horizontal_scroll_mode(void* self, int64_t mode) {
    QAbstractItemView_SetHorizontalScrollMode((QAbstractItemView*)self, mode);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollMode)
///
/// ``` QTreeView* self ```
int64_t q_treeview_horizontal_scroll_mode(void* self) {
    return QAbstractItemView_HorizontalScrollMode((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resetHorizontalScrollMode)
///
/// ``` QTreeView* self ```
void q_treeview_reset_horizontal_scroll_mode(void* self) {
    QAbstractItemView_ResetHorizontalScrollMode((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScroll)
///
/// ``` QTreeView* self, bool enable ```
void q_treeview_set_auto_scroll(void* self, bool enable) {
    QAbstractItemView_SetAutoScroll((QAbstractItemView*)self, enable);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#hasAutoScroll)
///
/// ``` QTreeView* self ```
bool q_treeview_has_auto_scroll(void* self) {
    return QAbstractItemView_HasAutoScroll((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScrollMargin)
///
/// ``` QTreeView* self, int margin ```
void q_treeview_set_auto_scroll_margin(void* self, int margin) {
    QAbstractItemView_SetAutoScrollMargin((QAbstractItemView*)self, margin);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#autoScrollMargin)
///
/// ``` QTreeView* self ```
int32_t q_treeview_auto_scroll_margin(void* self) {
    return QAbstractItemView_AutoScrollMargin((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setTabKeyNavigation)
///
/// ``` QTreeView* self, bool enable ```
void q_treeview_set_tab_key_navigation(void* self, bool enable) {
    QAbstractItemView_SetTabKeyNavigation((QAbstractItemView*)self, enable);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#tabKeyNavigation)
///
/// ``` QTreeView* self ```
bool q_treeview_tab_key_navigation(void* self) {
    return QAbstractItemView_TabKeyNavigation((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDropIndicatorShown)
///
/// ``` QTreeView* self, bool enable ```
void q_treeview_set_drop_indicator_shown(void* self, bool enable) {
    QAbstractItemView_SetDropIndicatorShown((QAbstractItemView*)self, enable);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#showDropIndicator)
///
/// ``` QTreeView* self ```
bool q_treeview_show_drop_indicator(void* self) {
    return QAbstractItemView_ShowDropIndicator((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragEnabled)
///
/// ``` QTreeView* self, bool enable ```
void q_treeview_set_drag_enabled(void* self, bool enable) {
    QAbstractItemView_SetDragEnabled((QAbstractItemView*)self, enable);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnabled)
///
/// ``` QTreeView* self ```
bool q_treeview_drag_enabled(void* self) {
    return QAbstractItemView_DragEnabled((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropOverwriteMode)
///
/// ``` QTreeView* self, bool overwrite ```
void q_treeview_set_drag_drop_overwrite_mode(void* self, bool overwrite) {
    QAbstractItemView_SetDragDropOverwriteMode((QAbstractItemView*)self, overwrite);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropOverwriteMode)
///
/// ``` QTreeView* self ```
bool q_treeview_drag_drop_overwrite_mode(void* self) {
    return QAbstractItemView_DragDropOverwriteMode((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropMode)
///
/// ``` QTreeView* self, enum QAbstractItemView__DragDropMode behavior ```
void q_treeview_set_drag_drop_mode(void* self, int64_t behavior) {
    QAbstractItemView_SetDragDropMode((QAbstractItemView*)self, behavior);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropMode)
///
/// ``` QTreeView* self ```
int64_t q_treeview_drag_drop_mode(void* self) {
    return QAbstractItemView_DragDropMode((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDefaultDropAction)
///
/// ``` QTreeView* self, enum Qt__DropAction dropAction ```
void q_treeview_set_default_drop_action(void* self, int64_t dropAction) {
    QAbstractItemView_SetDefaultDropAction((QAbstractItemView*)self, dropAction);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#defaultDropAction)
///
/// ``` QTreeView* self ```
int64_t q_treeview_default_drop_action(void* self) {
    return QAbstractItemView_DefaultDropAction((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAlternatingRowColors)
///
/// ``` QTreeView* self, bool enable ```
void q_treeview_set_alternating_row_colors(void* self, bool enable) {
    QAbstractItemView_SetAlternatingRowColors((QAbstractItemView*)self, enable);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#alternatingRowColors)
///
/// ``` QTreeView* self ```
bool q_treeview_alternating_row_colors(void* self) {
    return QAbstractItemView_AlternatingRowColors((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setIconSize)
///
/// ``` QTreeView* self, QSize* size ```
void q_treeview_set_icon_size(void* self, void* size) {
    QAbstractItemView_SetIconSize((QAbstractItemView*)self, (QSize*)size);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#iconSize)
///
/// ``` QTreeView* self ```
QSize* q_treeview_icon_size(void* self) {
    return QAbstractItemView_IconSize((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setTextElideMode)
///
/// ``` QTreeView* self, enum Qt__TextElideMode mode ```
void q_treeview_set_text_elide_mode(void* self, int64_t mode) {
    QAbstractItemView_SetTextElideMode((QAbstractItemView*)self, mode);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#textElideMode)
///
/// ``` QTreeView* self ```
int64_t q_treeview_text_elide_mode(void* self) {
    return QAbstractItemView_TextElideMode((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForIndex)
///
/// ``` QTreeView* self, QModelIndex* index ```
QSize* q_treeview_size_hint_for_index(void* self, void* index) {
    return QAbstractItemView_SizeHintForIndex((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#openPersistentEditor)
///
/// ``` QTreeView* self, QModelIndex* index ```
void q_treeview_open_persistent_editor(void* self, void* index) {
    QAbstractItemView_OpenPersistentEditor((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closePersistentEditor)
///
/// ``` QTreeView* self, QModelIndex* index ```
void q_treeview_close_persistent_editor(void* self, void* index) {
    QAbstractItemView_ClosePersistentEditor((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#isPersistentEditorOpen)
///
/// ``` QTreeView* self, QModelIndex* index ```
bool q_treeview_is_persistent_editor_open(void* self, void* index) {
    return QAbstractItemView_IsPersistentEditorOpen((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setIndexWidget)
///
/// ``` QTreeView* self, QModelIndex* index, QWidget* widget ```
void q_treeview_set_index_widget(void* self, void* index, void* widget) {
    QAbstractItemView_SetIndexWidget((QAbstractItemView*)self, (QModelIndex*)index, (QWidget*)widget);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#indexWidget)
///
/// ``` QTreeView* self, QModelIndex* index ```
QWidget* q_treeview_index_widget(void* self, void* index) {
    return QAbstractItemView_IndexWidget((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForRow)
///
/// ``` QTreeView* self, int row, QAbstractItemDelegate* delegate ```
void q_treeview_set_item_delegate_for_row(void* self, int row, void* delegate) {
    QAbstractItemView_SetItemDelegateForRow((QAbstractItemView*)self, row, (QAbstractItemDelegate*)delegate);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForRow)
///
/// ``` QTreeView* self, int row ```
QAbstractItemDelegate* q_treeview_item_delegate_for_row(void* self, int row) {
    return QAbstractItemView_ItemDelegateForRow((QAbstractItemView*)self, row);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForColumn)
///
/// ``` QTreeView* self, int column, QAbstractItemDelegate* delegate ```
void q_treeview_set_item_delegate_for_column(void* self, int column, void* delegate) {
    QAbstractItemView_SetItemDelegateForColumn((QAbstractItemView*)self, column, (QAbstractItemDelegate*)delegate);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForColumn)
///
/// ``` QTreeView* self, int column ```
QAbstractItemDelegate* q_treeview_item_delegate_for_column(void* self, int column) {
    return QAbstractItemView_ItemDelegateForColumn((QAbstractItemView*)self, column);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
///
/// ``` QTreeView* self, QModelIndex* index ```
QAbstractItemDelegate* q_treeview_item_delegate_with_index(void* self, void* index) {
    return QAbstractItemView_ItemDelegateWithIndex((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// ``` QTreeView* self, QModelIndex* index ```
void q_treeview_edit(void* self, void* index) {
    QAbstractItemView_Edit((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#clearSelection)
///
/// ``` QTreeView* self ```
void q_treeview_clear_selection(void* self) {
    QAbstractItemView_ClearSelection((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setCurrentIndex)
///
/// ``` QTreeView* self, QModelIndex* index ```
void q_treeview_set_current_index(void* self, void* index) {
    QAbstractItemView_SetCurrentIndex((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToTop)
///
/// ``` QTreeView* self ```
void q_treeview_scroll_to_top(void* self) {
    QAbstractItemView_ScrollToTop((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToBottom)
///
/// ``` QTreeView* self ```
void q_treeview_scroll_to_bottom(void* self) {
    QAbstractItemView_ScrollToBottom((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#update)
///
/// ``` QTreeView* self, QModelIndex* index ```
void q_treeview_update(void* self, void* index) {
    QAbstractItemView_Update((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#pressed)
///
/// ``` QTreeView* self, QModelIndex* index ```
void q_treeview_pressed(void* self, void* index) {
    QAbstractItemView_Pressed((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// ``` QTreeView* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_treeview_on_pressed(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_Connect_Pressed((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#clicked)
///
/// ``` QTreeView* self, QModelIndex* index ```
void q_treeview_clicked(void* self, void* index) {
    QAbstractItemView_Clicked((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// ``` QTreeView* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_treeview_on_clicked(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_Connect_Clicked((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doubleClicked)
///
/// ``` QTreeView* self, QModelIndex* index ```
void q_treeview_double_clicked(void* self, void* index) {
    QAbstractItemView_DoubleClicked((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// ``` QTreeView* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_treeview_on_double_clicked(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_Connect_DoubleClicked((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#activated)
///
/// ``` QTreeView* self, QModelIndex* index ```
void q_treeview_activated(void* self, void* index) {
    QAbstractItemView_Activated((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// ``` QTreeView* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_treeview_on_activated(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_Connect_Activated((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#entered)
///
/// ``` QTreeView* self, QModelIndex* index ```
void q_treeview_entered(void* self, void* index) {
    QAbstractItemView_Entered((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// ``` QTreeView* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_treeview_on_entered(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_Connect_Entered((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEntered)
///
/// ``` QTreeView* self ```
void q_treeview_viewport_entered(void* self) {
    QAbstractItemView_ViewportEntered((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// ``` QTreeView* self, void (*slot)(QAbstractItemView*) ```
void q_treeview_on_viewport_entered(void* self, void (*slot)(void*)) {
    QAbstractItemView_Connect_ViewportEntered((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#iconSizeChanged)
///
/// ``` QTreeView* self, QSize* size ```
void q_treeview_icon_size_changed(void* self, void* size) {
    QAbstractItemView_IconSizeChanged((QAbstractItemView*)self, (QSize*)size);
}

/// Inherited from QAbstractItemView
///
/// ``` QTreeView* self, void (*slot)(QAbstractItemView*, QSize*) ```
void q_treeview_on_icon_size_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_Connect_IconSizeChanged((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
///
/// ``` QTreeView* self ```
int64_t q_treeview_vertical_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_VerticalScrollBarPolicy((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
///
/// ``` QTreeView* self, enum Qt__ScrollBarPolicy verticalScrollBarPolicy ```
void q_treeview_set_vertical_scroll_bar_policy(void* self, int64_t verticalScrollBarPolicy) {
    QAbstractScrollArea_SetVerticalScrollBarPolicy((QAbstractScrollArea*)self, verticalScrollBarPolicy);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
///
/// ``` QTreeView* self ```
QScrollBar* q_treeview_vertical_scroll_bar(void* self) {
    return QAbstractScrollArea_VerticalScrollBar((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
///
/// ``` QTreeView* self, QScrollBar* scrollbar ```
void q_treeview_set_vertical_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetVerticalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
///
/// ``` QTreeView* self ```
int64_t q_treeview_horizontal_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_HorizontalScrollBarPolicy((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
///
/// ``` QTreeView* self, enum Qt__ScrollBarPolicy horizontalScrollBarPolicy ```
void q_treeview_set_horizontal_scroll_bar_policy(void* self, int64_t horizontalScrollBarPolicy) {
    QAbstractScrollArea_SetHorizontalScrollBarPolicy((QAbstractScrollArea*)self, horizontalScrollBarPolicy);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
///
/// ``` QTreeView* self ```
QScrollBar* q_treeview_horizontal_scroll_bar(void* self) {
    return QAbstractScrollArea_HorizontalScrollBar((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
///
/// ``` QTreeView* self, QScrollBar* scrollbar ```
void q_treeview_set_horizontal_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetHorizontalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
///
/// ``` QTreeView* self ```
QWidget* q_treeview_corner_widget(void* self) {
    return QAbstractScrollArea_CornerWidget((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
///
/// ``` QTreeView* self, QWidget* widget ```
void q_treeview_set_corner_widget(void* self, void* widget) {
    QAbstractScrollArea_SetCornerWidget((QAbstractScrollArea*)self, (QWidget*)widget);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
///
/// ``` QTreeView* self, QWidget* widget, int alignment ```
void q_treeview_add_scroll_bar_widget(void* self, void* widget, int64_t alignment) {
    QAbstractScrollArea_AddScrollBarWidget((QAbstractScrollArea*)self, (QWidget*)widget, alignment);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
///
/// ``` QTreeView* self, int alignment ```
libqt_list /* of QWidget* */ q_treeview_scroll_bar_widgets(void* self, int64_t alignment) {
    libqt_list _arr = QAbstractScrollArea_ScrollBarWidgets((QAbstractScrollArea*)self, alignment);
    return _arr;
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
///
/// ``` QTreeView* self ```
QWidget* q_treeview_viewport(void* self) {
    return QAbstractScrollArea_Viewport((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
///
/// ``` QTreeView* self, QWidget* widget ```
void q_treeview_set_viewport(void* self, void* widget) {
    QAbstractScrollArea_SetViewport((QAbstractScrollArea*)self, (QWidget*)widget);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
///
/// ``` QTreeView* self ```
QSize* q_treeview_maximum_viewport_size(void* self) {
    return QAbstractScrollArea_MaximumViewportSize((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
///
/// ``` QTreeView* self ```
int64_t q_treeview_size_adjust_policy(void* self) {
    return QAbstractScrollArea_SizeAdjustPolicy((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
///
/// ``` QTreeView* self, enum QAbstractScrollArea__SizeAdjustPolicy policy ```
void q_treeview_set_size_adjust_policy(void* self, int64_t policy) {
    QAbstractScrollArea_SetSizeAdjustPolicy((QAbstractScrollArea*)self, policy);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// ``` QTreeView* self ```
int32_t q_treeview_frame_style(void* self) {
    return QFrame_FrameStyle((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// ``` QTreeView* self, int frameStyle ```
void q_treeview_set_frame_style(void* self, int frameStyle) {
    QFrame_SetFrameStyle((QFrame*)self, frameStyle);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// ``` QTreeView* self ```
int32_t q_treeview_frame_width(void* self) {
    return QFrame_FrameWidth((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// ``` QTreeView* self ```
int64_t q_treeview_frame_shape(void* self) {
    return QFrame_FrameShape((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// ``` QTreeView* self, enum QFrame__Shape frameShape ```
void q_treeview_set_frame_shape(void* self, int64_t frameShape) {
    QFrame_SetFrameShape((QFrame*)self, frameShape);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// ``` QTreeView* self ```
int64_t q_treeview_frame_shadow(void* self) {
    return QFrame_FrameShadow((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// ``` QTreeView* self, enum QFrame__Shadow frameShadow ```
void q_treeview_set_frame_shadow(void* self, int64_t frameShadow) {
    QFrame_SetFrameShadow((QFrame*)self, frameShadow);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// ``` QTreeView* self ```
int32_t q_treeview_line_width(void* self) {
    return QFrame_LineWidth((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// ``` QTreeView* self, int lineWidth ```
void q_treeview_set_line_width(void* self, int lineWidth) {
    QFrame_SetLineWidth((QFrame*)self, lineWidth);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// ``` QTreeView* self ```
int32_t q_treeview_mid_line_width(void* self) {
    return QFrame_MidLineWidth((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// ``` QTreeView* self, int midLineWidth ```
void q_treeview_set_mid_line_width(void* self, int midLineWidth) {
    QFrame_SetMidLineWidth((QFrame*)self, midLineWidth);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// ``` QTreeView* self ```
QRect* q_treeview_frame_rect(void* self) {
    return QFrame_FrameRect((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// ``` QTreeView* self, QRect* frameRect ```
void q_treeview_set_frame_rect(void* self, void* frameRect) {
    QFrame_SetFrameRect((QFrame*)self, (QRect*)frameRect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QTreeView* self ```
uintptr_t q_treeview_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QTreeView* self ```
void q_treeview_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QTreeView* self ```
uintptr_t q_treeview_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QTreeView* self ```
uintptr_t q_treeview_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QTreeView* self ```
QStyle* q_treeview_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QTreeView* self, QStyle* style ```
void q_treeview_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QTreeView* self ```
bool q_treeview_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QTreeView* self ```
bool q_treeview_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QTreeView* self ```
bool q_treeview_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QTreeView* self ```
int64_t q_treeview_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QTreeView* self, enum Qt__WindowModality windowModality ```
void q_treeview_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QTreeView* self ```
bool q_treeview_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QTreeView* self, QWidget* param1 ```
bool q_treeview_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QTreeView* self, bool enabled ```
void q_treeview_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QTreeView* self, bool disabled ```
void q_treeview_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QTreeView* self, bool windowModified ```
void q_treeview_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QTreeView* self ```
QRect* q_treeview_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QTreeView* self ```
QRect* q_treeview_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QTreeView* self ```
QRect* q_treeview_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QTreeView* self ```
int32_t q_treeview_x(void* self) {
    return QWidget_X((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QTreeView* self ```
int32_t q_treeview_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QTreeView* self ```
QPoint* q_treeview_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QTreeView* self ```
QSize* q_treeview_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QTreeView* self ```
QSize* q_treeview_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QTreeView* self ```
int32_t q_treeview_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QTreeView* self ```
int32_t q_treeview_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QTreeView* self ```
QRect* q_treeview_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QTreeView* self ```
QRect* q_treeview_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QTreeView* self ```
QRegion* q_treeview_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QTreeView* self ```
QSize* q_treeview_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QTreeView* self ```
QSize* q_treeview_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QTreeView* self ```
int32_t q_treeview_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QTreeView* self ```
int32_t q_treeview_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QTreeView* self ```
int32_t q_treeview_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QTreeView* self ```
int32_t q_treeview_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QTreeView* self, QSize* minimumSize ```
void q_treeview_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QTreeView* self, int minw, int minh ```
void q_treeview_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QTreeView* self, QSize* maximumSize ```
void q_treeview_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QTreeView* self, int maxw, int maxh ```
void q_treeview_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QTreeView* self, int minw ```
void q_treeview_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QTreeView* self, int minh ```
void q_treeview_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QTreeView* self, int maxw ```
void q_treeview_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QTreeView* self, int maxh ```
void q_treeview_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QTreeView* self ```
QSize* q_treeview_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QTreeView* self, QSize* sizeIncrement ```
void q_treeview_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QTreeView* self, int w, int h ```
void q_treeview_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QTreeView* self ```
QSize* q_treeview_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QTreeView* self, QSize* baseSize ```
void q_treeview_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QTreeView* self, int basew, int baseh ```
void q_treeview_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QTreeView* self, QSize* fixedSize ```
void q_treeview_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QTreeView* self, int w, int h ```
void q_treeview_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QTreeView* self, int w ```
void q_treeview_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QTreeView* self, int h ```
void q_treeview_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QTreeView* self, QPointF* param1 ```
QPointF* q_treeview_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QTreeView* self, QPoint* param1 ```
QPoint* q_treeview_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QTreeView* self, QPointF* param1 ```
QPointF* q_treeview_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QTreeView* self, QPoint* param1 ```
QPoint* q_treeview_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QTreeView* self, QPointF* param1 ```
QPointF* q_treeview_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QTreeView* self, QPoint* param1 ```
QPoint* q_treeview_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QTreeView* self, QPointF* param1 ```
QPointF* q_treeview_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QTreeView* self, QPoint* param1 ```
QPoint* q_treeview_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QTreeView* self, QWidget* param1, QPointF* param2 ```
QPointF* q_treeview_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QTreeView* self, QWidget* param1, QPoint* param2 ```
QPoint* q_treeview_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QTreeView* self, QWidget* param1, QPointF* param2 ```
QPointF* q_treeview_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QTreeView* self, QWidget* param1, QPoint* param2 ```
QPoint* q_treeview_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QTreeView* self ```
QWidget* q_treeview_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QTreeView* self ```
QWidget* q_treeview_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QTreeView* self ```
QWidget* q_treeview_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QTreeView* self ```
QPalette* q_treeview_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QTreeView* self, QPalette* palette ```
void q_treeview_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QTreeView* self, enum QPalette__ColorRole backgroundRole ```
void q_treeview_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QTreeView* self ```
int64_t q_treeview_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QTreeView* self, enum QPalette__ColorRole foregroundRole ```
void q_treeview_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QTreeView* self ```
int64_t q_treeview_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QTreeView* self ```
QFont* q_treeview_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QTreeView* self, QFont* font ```
void q_treeview_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QTreeView* self ```
QFontMetrics* q_treeview_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QTreeView* self ```
QFontInfo* q_treeview_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QTreeView* self ```
QCursor* q_treeview_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QTreeView* self, QCursor* cursor ```
void q_treeview_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QTreeView* self ```
void q_treeview_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QTreeView* self, bool enable ```
void q_treeview_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QTreeView* self ```
bool q_treeview_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QTreeView* self ```
bool q_treeview_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QTreeView* self, bool enable ```
void q_treeview_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QTreeView* self ```
bool q_treeview_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QTreeView* self, QBitmap* mask ```
void q_treeview_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QTreeView* self, QRegion* mask ```
void q_treeview_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QTreeView* self ```
QRegion* q_treeview_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QTreeView* self ```
void q_treeview_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTreeView* self, QPaintDevice* target ```
void q_treeview_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTreeView* self, QPainter* painter ```
void q_treeview_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QTreeView* self ```
QPixmap* q_treeview_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QTreeView* self ```
QGraphicsEffect* q_treeview_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QTreeView* self, QGraphicsEffect* effect ```
void q_treeview_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QTreeView* self, enum Qt__GestureType typeVal ```
void q_treeview_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QTreeView* self, enum Qt__GestureType typeVal ```
void q_treeview_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QTreeView* self, const char* windowTitle ```
void q_treeview_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QTreeView* self, const char* styleSheet ```
void q_treeview_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QTreeView* self ```
const char* q_treeview_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QTreeView* self ```
const char* q_treeview_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QTreeView* self, QIcon* icon ```
void q_treeview_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QTreeView* self ```
QIcon* q_treeview_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QTreeView* self, const char* windowIconText ```
void q_treeview_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QTreeView* self ```
const char* q_treeview_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QTreeView* self, const char* windowRole ```
void q_treeview_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QTreeView* self ```
const char* q_treeview_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QTreeView* self, const char* filePath ```
void q_treeview_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QTreeView* self ```
const char* q_treeview_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QTreeView* self, double level ```
void q_treeview_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QTreeView* self ```
double q_treeview_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QTreeView* self ```
bool q_treeview_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QTreeView* self, const char* toolTip ```
void q_treeview_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QTreeView* self ```
const char* q_treeview_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QTreeView* self, int msec ```
void q_treeview_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QTreeView* self ```
int32_t q_treeview_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QTreeView* self, const char* statusTip ```
void q_treeview_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QTreeView* self ```
const char* q_treeview_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QTreeView* self, const char* whatsThis ```
void q_treeview_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QTreeView* self ```
const char* q_treeview_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QTreeView* self ```
const char* q_treeview_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QTreeView* self, const char* name ```
void q_treeview_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QTreeView* self ```
const char* q_treeview_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QTreeView* self, const char* description ```
void q_treeview_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QTreeView* self, enum Qt__LayoutDirection direction ```
void q_treeview_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QTreeView* self ```
int64_t q_treeview_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QTreeView* self ```
void q_treeview_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QTreeView* self, QLocale* locale ```
void q_treeview_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QTreeView* self ```
QLocale* q_treeview_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QTreeView* self ```
void q_treeview_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QTreeView* self ```
bool q_treeview_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QTreeView* self ```
bool q_treeview_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QTreeView* self ```
void q_treeview_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QTreeView* self ```
bool q_treeview_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QTreeView* self ```
void q_treeview_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QTreeView* self ```
void q_treeview_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QTreeView* self, enum Qt__FocusReason reason ```
void q_treeview_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QTreeView* self ```
int64_t q_treeview_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QTreeView* self, enum Qt__FocusPolicy policy ```
void q_treeview_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QTreeView* self ```
bool q_treeview_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_treeview_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QTreeView* self, QWidget* focusProxy ```
void q_treeview_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QTreeView* self ```
QWidget* q_treeview_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QTreeView* self ```
int64_t q_treeview_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QTreeView* self, enum Qt__ContextMenuPolicy policy ```
void q_treeview_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QTreeView* self ```
void q_treeview_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QTreeView* self, QCursor* param1 ```
void q_treeview_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QTreeView* self ```
void q_treeview_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QTreeView* self ```
void q_treeview_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QTreeView* self ```
void q_treeview_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QTreeView* self, QKeySequence* key ```
int32_t q_treeview_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QTreeView* self, int id ```
void q_treeview_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QTreeView* self, int id ```
void q_treeview_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QTreeView* self, int id ```
void q_treeview_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_treeview_mouse_grabber() {
    return QWidget_MouseGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_treeview_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QTreeView* self ```
bool q_treeview_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QTreeView* self, bool enable ```
void q_treeview_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QTreeView* self ```
QGraphicsProxyWidget* q_treeview_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QTreeView* self ```
void q_treeview_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QTreeView* self, int x, int y, int w, int h ```
void q_treeview_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QTreeView* self, QRect* param1 ```
void q_treeview_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QTreeView* self, QRegion* param1 ```
void q_treeview_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QTreeView* self, int x, int y, int w, int h ```
void q_treeview_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QTreeView* self, QRect* param1 ```
void q_treeview_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QTreeView* self, QRegion* param1 ```
void q_treeview_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QTreeView* self, bool hidden ```
void q_treeview_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QTreeView* self ```
void q_treeview_show(void* self) {
    QWidget_Show((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QTreeView* self ```
void q_treeview_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QTreeView* self ```
void q_treeview_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QTreeView* self ```
void q_treeview_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QTreeView* self ```
void q_treeview_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QTreeView* self ```
void q_treeview_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QTreeView* self ```
bool q_treeview_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QTreeView* self ```
void q_treeview_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QTreeView* self ```
void q_treeview_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QTreeView* self, QWidget* param1 ```
void q_treeview_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QTreeView* self, int x, int y ```
void q_treeview_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QTreeView* self, QPoint* param1 ```
void q_treeview_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QTreeView* self, int w, int h ```
void q_treeview_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QTreeView* self, QSize* param1 ```
void q_treeview_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QTreeView* self, int x, int y, int w, int h ```
void q_treeview_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QTreeView* self, QRect* geometry ```
void q_treeview_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QTreeView* self ```
char* q_treeview_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QTreeView* self, const char* geometry ```
bool q_treeview_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QTreeView* self ```
void q_treeview_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QTreeView* self ```
bool q_treeview_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QTreeView* self, QWidget* param1 ```
bool q_treeview_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QTreeView* self ```
bool q_treeview_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QTreeView* self ```
bool q_treeview_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QTreeView* self ```
bool q_treeview_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QTreeView* self ```
bool q_treeview_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QTreeView* self ```
int64_t q_treeview_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QTreeView* self, int state ```
void q_treeview_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QTreeView* self, int state ```
void q_treeview_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QTreeView* self ```
QSizePolicy* q_treeview_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QTreeView* self, QSizePolicy* sizePolicy ```
void q_treeview_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QTreeView* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_treeview_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QTreeView* self ```
QRegion* q_treeview_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QTreeView* self, int left, int top, int right, int bottom ```
void q_treeview_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QTreeView* self, QMargins* margins ```
void q_treeview_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QTreeView* self ```
QMargins* q_treeview_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QTreeView* self ```
QRect* q_treeview_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QTreeView* self ```
QLayout* q_treeview_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QTreeView* self, QLayout* layout ```
void q_treeview_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QTreeView* self ```
void q_treeview_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QTreeView* self, QWidget* parent ```
void q_treeview_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QTreeView* self, QWidget* parent, int f ```
void q_treeview_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QTreeView* self, int dx, int dy ```
void q_treeview_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QTreeView* self, int dx, int dy, QRect* param3 ```
void q_treeview_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QTreeView* self ```
QWidget* q_treeview_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QTreeView* self ```
QWidget* q_treeview_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QTreeView* self ```
QWidget* q_treeview_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QTreeView* self ```
bool q_treeview_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QTreeView* self, bool on ```
void q_treeview_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QTreeView* self, QAction* action ```
void q_treeview_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QTreeView* self, QAction* actions[] ```
void q_treeview_add_actions(void* self, void* actions[]) {
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
/// ``` QTreeView* self, QAction* before, QAction* actions[] ```
void q_treeview_insert_actions(void* self, void* before, void* actions[]) {
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
/// ``` QTreeView* self, QAction* before, QAction* action ```
void q_treeview_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QTreeView* self, QAction* action ```
void q_treeview_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QTreeView* self ```
libqt_list /* of QAction* */ q_treeview_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QTreeView* self, const char* text ```
QAction* q_treeview_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QTreeView* self, QIcon* icon, const char* text ```
QAction* q_treeview_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QTreeView* self, const char* text, QKeySequence* shortcut ```
QAction* q_treeview_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QTreeView* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_treeview_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QTreeView* self ```
QWidget* q_treeview_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QTreeView* self, int typeVal ```
void q_treeview_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QTreeView* self ```
int64_t q_treeview_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QTreeView* self, enum Qt__WindowType param1 ```
void q_treeview_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QTreeView* self, int typeVal ```
void q_treeview_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QTreeView* self ```
int64_t q_treeview_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_treeview_find(uint64_t param1) {
    return QWidget_Find(param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QTreeView* self, int x, int y ```
QWidget* q_treeview_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QTreeView* self, QPoint* p ```
QWidget* q_treeview_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QTreeView* self, enum Qt__WidgetAttribute param1 ```
void q_treeview_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QTreeView* self, enum Qt__WidgetAttribute param1 ```
bool q_treeview_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QTreeView* self ```
void q_treeview_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QTreeView* self, QWidget* child ```
bool q_treeview_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QTreeView* self ```
bool q_treeview_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QTreeView* self, bool enabled ```
void q_treeview_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QTreeView* self ```
QBackingStore* q_treeview_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QTreeView* self ```
QWindow* q_treeview_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QTreeView* self ```
QScreen* q_treeview_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QTreeView* self, QScreen* screen ```
void q_treeview_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_treeview_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QTreeView* self, const char* title ```
void q_treeview_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

/// Inherited from QWidget
///
/// ``` QTreeView* self, void (*slot)(QWidget*, const char*) ```
void q_treeview_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QTreeView* self, QIcon* icon ```
void q_treeview_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// ``` QTreeView* self, void (*slot)(QWidget*, QIcon*) ```
void q_treeview_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QTreeView* self, const char* iconText ```
void q_treeview_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

/// Inherited from QWidget
///
/// ``` QTreeView* self, void (*slot)(QWidget*, const char*) ```
void q_treeview_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QTreeView* self, QPoint* pos ```
void q_treeview_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

/// Inherited from QWidget
///
/// ``` QTreeView* self, void (*slot)(QWidget*, QPoint*) ```
void q_treeview_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QTreeView* self ```
int64_t q_treeview_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QTreeView* self, int hints ```
void q_treeview_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTreeView* self, QPaintDevice* target, QPoint* targetOffset ```
void q_treeview_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTreeView* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_treeview_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTreeView* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_treeview_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTreeView* self, QPainter* painter, QPoint* targetOffset ```
void q_treeview_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTreeView* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_treeview_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTreeView* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_treeview_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QTreeView* self, QRect* rectangle ```
QPixmap* q_treeview_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QTreeView* self, enum Qt__GestureType typeVal, int flags ```
void q_treeview_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QTreeView* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_treeview_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QTreeView* self, int id, bool enable ```
void q_treeview_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QTreeView* self, int id, bool enable ```
void q_treeview_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QTreeView* self, enum Qt__WindowType param1, bool on ```
void q_treeview_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QTreeView* self, enum Qt__WidgetAttribute param1, bool on ```
void q_treeview_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_treeview_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_treeview_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QTreeView* self ```
const char* q_treeview_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QTreeView* self, const char* name ```
void q_treeview_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QTreeView* self ```
bool q_treeview_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QTreeView* self ```
bool q_treeview_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QTreeView* self ```
bool q_treeview_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QTreeView* self ```
bool q_treeview_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QTreeView* self, bool b ```
bool q_treeview_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QTreeView* self ```
QThread* q_treeview_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QTreeView* self, QThread* thread ```
void q_treeview_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QTreeView* self, int interval ```
int32_t q_treeview_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QTreeView* self, int id ```
void q_treeview_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QTreeView* self ```
libqt_list /* of QObject* */ q_treeview_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QTreeView* self, QObject* filterObj ```
void q_treeview_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QTreeView* self, QObject* obj ```
void q_treeview_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_treeview_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QTreeView* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_treeview_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_treeview_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_treeview_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QTreeView* self ```
void q_treeview_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QTreeView* self ```
void q_treeview_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QTreeView* self, const char* name, QVariant* value ```
bool q_treeview_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QTreeView* self, const char* name ```
QVariant* q_treeview_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QTreeView* self ```
const char** q_treeview_dynamic_property_names(void* self) {
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
/// ``` QTreeView* self ```
QBindingStorage* q_treeview_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QTreeView* self ```
QBindingStorage* q_treeview_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTreeView* self ```
void q_treeview_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QTreeView* self, void (*slot)(QObject*) ```
void q_treeview_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QTreeView* self ```
QObject* q_treeview_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QTreeView* self, const char* classname ```
bool q_treeview_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QTreeView* self ```
void q_treeview_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QTreeView* self, int interval, enum Qt__TimerType timerType ```
int32_t q_treeview_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_treeview_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QTreeView* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_treeview_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTreeView* self, QObject* param1 ```
void q_treeview_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QTreeView* self, void (*slot)(QObject*, QObject*) ```
void q_treeview_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QTreeView* self ```
bool q_treeview_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QTreeView* self ```
int32_t q_treeview_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QTreeView* self ```
int32_t q_treeview_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QTreeView* self ```
int32_t q_treeview_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QTreeView* self ```
int32_t q_treeview_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QTreeView* self ```
int32_t q_treeview_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QTreeView* self ```
int32_t q_treeview_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QTreeView* self ```
double q_treeview_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QTreeView* self ```
double q_treeview_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QTreeView* self ```
int32_t q_treeview_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QTreeView* self ```
int32_t q_treeview_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_treeview_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, int row ```
int32_t q_treeview_size_hint_for_row(void* self, int row) {
    return QTreeView_SizeHintForRow((QTreeView*)self, row);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, int row ```
int32_t q_treeview_qbase_size_hint_for_row(void* self, int row) {
    return QTreeView_QBaseSizeHintForRow((QTreeView*)self, row);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, int32_t (*slot)(QTreeView*, int) ```
void q_treeview_on_size_hint_for_row(void* self, int32_t (*slot)(void*, int)) {
    QTreeView_OnSizeHintForRow((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QModelIndex* index ```
QAbstractItemDelegate* q_treeview_item_delegate_for_index(void* self, void* index) {
    return QTreeView_ItemDelegateForIndex((QTreeView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QModelIndex* index ```
QAbstractItemDelegate* q_treeview_qbase_item_delegate_for_index(void* self, void* index) {
    return QTreeView_QBaseItemDelegateForIndex((QTreeView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, QAbstractItemDelegate* (*slot)(QTreeView*, QModelIndex*) ```
void q_treeview_on_item_delegate_for_index(void* self, QAbstractItemDelegate* (*slot)(void*, void*)) {
    QTreeView_OnItemDelegateForIndex((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, enum Qt__InputMethodQuery query ```
QVariant* q_treeview_input_method_query(void* self, int64_t query) {
    return QTreeView_InputMethodQuery((QTreeView*)self, query);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, enum Qt__InputMethodQuery query ```
QVariant* q_treeview_qbase_input_method_query(void* self, int64_t query) {
    return QTreeView_QBaseInputMethodQuery((QTreeView*)self, query);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, QVariant* (*slot)(QTreeView*, enum Qt__InputMethodQuery) ```
void q_treeview_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QTreeView_OnInputMethodQuery((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self ```
void q_treeview_update_editor_data(void* self) {
    QTreeView_UpdateEditorData((QTreeView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self ```
void q_treeview_qbase_update_editor_data(void* self) {
    QTreeView_QBaseUpdateEditorData((QTreeView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)() ```
void q_treeview_on_update_editor_data(void* self, void (*slot)()) {
    QTreeView_OnUpdateEditorData((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self ```
void q_treeview_update_editor_geometries(void* self) {
    QTreeView_UpdateEditorGeometries((QTreeView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self ```
void q_treeview_qbase_update_editor_geometries(void* self) {
    QTreeView_QBaseUpdateEditorGeometries((QTreeView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)() ```
void q_treeview_on_update_editor_geometries(void* self, void (*slot)()) {
    QTreeView_OnUpdateEditorGeometries((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, int action ```
void q_treeview_vertical_scrollbar_action(void* self, int action) {
    QTreeView_VerticalScrollbarAction((QTreeView*)self, action);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, int action ```
void q_treeview_qbase_vertical_scrollbar_action(void* self, int action) {
    QTreeView_QBaseVerticalScrollbarAction((QTreeView*)self, action);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, int) ```
void q_treeview_on_vertical_scrollbar_action(void* self, void (*slot)(void*, int)) {
    QTreeView_OnVerticalScrollbarAction((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, int value ```
void q_treeview_horizontal_scrollbar_value_changed(void* self, int value) {
    QTreeView_HorizontalScrollbarValueChanged((QTreeView*)self, value);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, int value ```
void q_treeview_qbase_horizontal_scrollbar_value_changed(void* self, int value) {
    QTreeView_QBaseHorizontalScrollbarValueChanged((QTreeView*)self, value);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, int) ```
void q_treeview_on_horizontal_scrollbar_value_changed(void* self, void (*slot)(void*, int)) {
    QTreeView_OnHorizontalScrollbarValueChanged((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QWidget* editor, enum QAbstractItemDelegate__EndEditHint hint ```
void q_treeview_close_editor(void* self, void* editor, int64_t hint) {
    QTreeView_CloseEditor((QTreeView*)self, (QWidget*)editor, hint);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QWidget* editor, enum QAbstractItemDelegate__EndEditHint hint ```
void q_treeview_qbase_close_editor(void* self, void* editor, int64_t hint) {
    QTreeView_QBaseCloseEditor((QTreeView*)self, (QWidget*)editor, hint);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QWidget*, enum QAbstractItemDelegate__EndEditHint) ```
void q_treeview_on_close_editor(void* self, void (*slot)(void*, void*, int64_t)) {
    QTreeView_OnCloseEditor((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QWidget* editor ```
void q_treeview_commit_data(void* self, void* editor) {
    QTreeView_CommitData((QTreeView*)self, (QWidget*)editor);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QWidget* editor ```
void q_treeview_qbase_commit_data(void* self, void* editor) {
    QTreeView_QBaseCommitData((QTreeView*)self, (QWidget*)editor);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QWidget*) ```
void q_treeview_on_commit_data(void* self, void (*slot)(void*, void*)) {
    QTreeView_OnCommitData((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QObject* editor ```
void q_treeview_editor_destroyed(void* self, void* editor) {
    QTreeView_EditorDestroyed((QTreeView*)self, (QObject*)editor);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QObject* editor ```
void q_treeview_qbase_editor_destroyed(void* self, void* editor) {
    QTreeView_QBaseEditorDestroyed((QTreeView*)self, (QObject*)editor);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QObject*) ```
void q_treeview_on_editor_destroyed(void* self, void (*slot)(void*, void*)) {
    QTreeView_OnEditorDestroyed((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QModelIndex* index, enum QAbstractItemView__EditTrigger trigger, QEvent* event ```
bool q_treeview_edit2(void* self, void* index, int64_t trigger, void* event) {
    return QTreeView_Edit2((QTreeView*)self, (QModelIndex*)index, trigger, (QEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QModelIndex* index, enum QAbstractItemView__EditTrigger trigger, QEvent* event ```
bool q_treeview_qbase_edit2(void* self, void* index, int64_t trigger, void* event) {
    return QTreeView_QBaseEdit2((QTreeView*)self, (QModelIndex*)index, trigger, (QEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, bool (*slot)(QTreeView*, QModelIndex*, enum QAbstractItemView__EditTrigger, QEvent*) ```
void q_treeview_on_edit2(void* self, bool (*slot)(void*, void*, int64_t, void*)) {
    QTreeView_OnEdit2((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QModelIndex* index, QEvent* event ```
int64_t q_treeview_selection_command(void* self, void* index, void* event) {
    return QTreeView_SelectionCommand((QTreeView*)self, (QModelIndex*)index, (QEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QModelIndex* index, QEvent* event ```
int64_t q_treeview_qbase_selection_command(void* self, void* index, void* event) {
    return QTreeView_QBaseSelectionCommand((QTreeView*)self, (QModelIndex*)index, (QEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, int64_t (*slot)(QTreeView*, QModelIndex*, QEvent*) ```
void q_treeview_on_selection_command(void* self, int64_t (*slot)(void*, void*, void*)) {
    QTreeView_OnSelectionCommand((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startDrag)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, int supportedActions ```
void q_treeview_start_drag(void* self, int64_t supportedActions) {
    QTreeView_StartDrag((QTreeView*)self, supportedActions);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, int supportedActions ```
void q_treeview_qbase_start_drag(void* self, int64_t supportedActions) {
    QTreeView_QBaseStartDrag((QTreeView*)self, supportedActions);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, int) ```
void q_treeview_on_start_drag(void* self, void (*slot)(void*, int64_t)) {
    QTreeView_OnStartDrag((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#initViewItemOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QStyleOptionViewItem* option ```
void q_treeview_init_view_item_option(void* self, void* option) {
    QTreeView_InitViewItemOption((QTreeView*)self, (QStyleOptionViewItem*)option);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QStyleOptionViewItem* option ```
void q_treeview_qbase_init_view_item_option(void* self, void* option) {
    QTreeView_QBaseInitViewItemOption((QTreeView*)self, (QStyleOptionViewItem*)option);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QStyleOptionViewItem*) ```
void q_treeview_on_init_view_item_option(void* self, void (*slot)(void*, void*)) {
    QTreeView_OnInitViewItemOption((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, bool next ```
bool q_treeview_focus_next_prev_child(void* self, bool next) {
    return QTreeView_FocusNextPrevChild((QTreeView*)self, next);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, bool next ```
bool q_treeview_qbase_focus_next_prev_child(void* self, bool next) {
    return QTreeView_QBaseFocusNextPrevChild((QTreeView*)self, next);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, bool (*slot)(QTreeView*, bool) ```
void q_treeview_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QTreeView_OnFocusNextPrevChild((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QEvent* event ```
bool q_treeview_event(void* self, void* event) {
    return QTreeView_Event((QTreeView*)self, (QEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QEvent* event ```
bool q_treeview_qbase_event(void* self, void* event) {
    return QTreeView_QBaseEvent((QTreeView*)self, (QEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, bool (*slot)(QTreeView*, QEvent*) ```
void q_treeview_on_event(void* self, bool (*slot)(void*, void*)) {
    QTreeView_OnEvent((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QDragEnterEvent* event ```
void q_treeview_drag_enter_event(void* self, void* event) {
    QTreeView_DragEnterEvent((QTreeView*)self, (QDragEnterEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QDragEnterEvent* event ```
void q_treeview_qbase_drag_enter_event(void* self, void* event) {
    QTreeView_QBaseDragEnterEvent((QTreeView*)self, (QDragEnterEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QDragEnterEvent*) ```
void q_treeview_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QTreeView_OnDragEnterEvent((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QDragLeaveEvent* event ```
void q_treeview_drag_leave_event(void* self, void* event) {
    QTreeView_DragLeaveEvent((QTreeView*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QDragLeaveEvent* event ```
void q_treeview_qbase_drag_leave_event(void* self, void* event) {
    QTreeView_QBaseDragLeaveEvent((QTreeView*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QDragLeaveEvent*) ```
void q_treeview_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QTreeView_OnDragLeaveEvent((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QDropEvent* event ```
void q_treeview_drop_event(void* self, void* event) {
    QTreeView_DropEvent((QTreeView*)self, (QDropEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QDropEvent* event ```
void q_treeview_qbase_drop_event(void* self, void* event) {
    QTreeView_QBaseDropEvent((QTreeView*)self, (QDropEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QDropEvent*) ```
void q_treeview_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QTreeView_OnDropEvent((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QFocusEvent* event ```
void q_treeview_focus_in_event(void* self, void* event) {
    QTreeView_FocusInEvent((QTreeView*)self, (QFocusEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QFocusEvent* event ```
void q_treeview_qbase_focus_in_event(void* self, void* event) {
    QTreeView_QBaseFocusInEvent((QTreeView*)self, (QFocusEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QFocusEvent*) ```
void q_treeview_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QTreeView_OnFocusInEvent((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QFocusEvent* event ```
void q_treeview_focus_out_event(void* self, void* event) {
    QTreeView_FocusOutEvent((QTreeView*)self, (QFocusEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QFocusEvent* event ```
void q_treeview_qbase_focus_out_event(void* self, void* event) {
    QTreeView_QBaseFocusOutEvent((QTreeView*)self, (QFocusEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QFocusEvent*) ```
void q_treeview_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QTreeView_OnFocusOutEvent((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QResizeEvent* event ```
void q_treeview_resize_event(void* self, void* event) {
    QTreeView_ResizeEvent((QTreeView*)self, (QResizeEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QResizeEvent* event ```
void q_treeview_qbase_resize_event(void* self, void* event) {
    QTreeView_QBaseResizeEvent((QTreeView*)self, (QResizeEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QResizeEvent*) ```
void q_treeview_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QTreeView_OnResizeEvent((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QInputMethodEvent* event ```
void q_treeview_input_method_event(void* self, void* event) {
    QTreeView_InputMethodEvent((QTreeView*)self, (QInputMethodEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QInputMethodEvent* event ```
void q_treeview_qbase_input_method_event(void* self, void* event) {
    QTreeView_QBaseInputMethodEvent((QTreeView*)self, (QInputMethodEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QInputMethodEvent*) ```
void q_treeview_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QTreeView_OnInputMethodEvent((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QObject* object, QEvent* event ```
bool q_treeview_event_filter(void* self, void* object, void* event) {
    return QTreeView_EventFilter((QTreeView*)self, (QObject*)object, (QEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QObject* object, QEvent* event ```
bool q_treeview_qbase_event_filter(void* self, void* object, void* event) {
    return QTreeView_QBaseEventFilter((QTreeView*)self, (QObject*)object, (QEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, bool (*slot)(QTreeView*, QObject*, QEvent*) ```
void q_treeview_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QTreeView_OnEventFilter((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self ```
QSize* q_treeview_minimum_size_hint(void* self) {
    return QTreeView_MinimumSizeHint((QTreeView*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self ```
QSize* q_treeview_qbase_minimum_size_hint(void* self) {
    return QTreeView_QBaseMinimumSizeHint((QTreeView*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, QSize* (*slot)() ```
void q_treeview_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QTreeView_OnMinimumSizeHint((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self ```
QSize* q_treeview_size_hint(void* self) {
    return QTreeView_SizeHint((QTreeView*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self ```
QSize* q_treeview_qbase_size_hint(void* self) {
    return QTreeView_QBaseSizeHint((QTreeView*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, QSize* (*slot)() ```
void q_treeview_on_size_hint(void* self, QSize* (*slot)()) {
    QTreeView_OnSizeHint((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QWidget* viewport ```
void q_treeview_setup_viewport(void* self, void* viewport) {
    QTreeView_SetupViewport((QTreeView*)self, (QWidget*)viewport);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QWidget* viewport ```
void q_treeview_qbase_setup_viewport(void* self, void* viewport) {
    QTreeView_QBaseSetupViewport((QTreeView*)self, (QWidget*)viewport);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QWidget*) ```
void q_treeview_on_setup_viewport(void* self, void (*slot)(void*, void*)) {
    QTreeView_OnSetupViewport((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QWheelEvent* param1 ```
void q_treeview_wheel_event(void* self, void* param1) {
    QTreeView_WheelEvent((QTreeView*)self, (QWheelEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QWheelEvent* param1 ```
void q_treeview_qbase_wheel_event(void* self, void* param1) {
    QTreeView_QBaseWheelEvent((QTreeView*)self, (QWheelEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QWheelEvent*) ```
void q_treeview_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QTreeView_OnWheelEvent((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QContextMenuEvent* param1 ```
void q_treeview_context_menu_event(void* self, void* param1) {
    QTreeView_ContextMenuEvent((QTreeView*)self, (QContextMenuEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QContextMenuEvent* param1 ```
void q_treeview_qbase_context_menu_event(void* self, void* param1) {
    QTreeView_QBaseContextMenuEvent((QTreeView*)self, (QContextMenuEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QContextMenuEvent*) ```
void q_treeview_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QTreeView_OnContextMenuEvent((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QStyleOptionFrame* option ```
void q_treeview_init_style_option(void* self, void* option) {
    QTreeView_InitStyleOption((QTreeView*)self, (QStyleOptionFrame*)option);
}

/// Inherited from QFrame
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QStyleOptionFrame* option ```
void q_treeview_qbase_init_style_option(void* self, void* option) {
    QTreeView_QBaseInitStyleOption((QTreeView*)self, (QStyleOptionFrame*)option);
}

/// Inherited from QFrame
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QStyleOptionFrame*) ```
void q_treeview_on_init_style_option(void* self, void (*slot)(void*, void*)) {
    QTreeView_OnInitStyleOption((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self ```
int32_t q_treeview_dev_type(void* self) {
    return QTreeView_DevType((QTreeView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self ```
int32_t q_treeview_qbase_dev_type(void* self) {
    return QTreeView_QBaseDevType((QTreeView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, int32_t (*slot)() ```
void q_treeview_on_dev_type(void* self, int32_t (*slot)()) {
    QTreeView_OnDevType((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, bool visible ```
void q_treeview_set_visible(void* self, bool visible) {
    QTreeView_SetVisible((QTreeView*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, bool visible ```
void q_treeview_qbase_set_visible(void* self, bool visible) {
    QTreeView_QBaseSetVisible((QTreeView*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, bool) ```
void q_treeview_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QTreeView_OnSetVisible((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, int param1 ```
int32_t q_treeview_height_for_width(void* self, int param1) {
    return QTreeView_HeightForWidth((QTreeView*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, int param1 ```
int32_t q_treeview_qbase_height_for_width(void* self, int param1) {
    return QTreeView_QBaseHeightForWidth((QTreeView*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, int32_t (*slot)(QTreeView*, int) ```
void q_treeview_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QTreeView_OnHeightForWidth((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self ```
bool q_treeview_has_height_for_width(void* self) {
    return QTreeView_HasHeightForWidth((QTreeView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self ```
bool q_treeview_qbase_has_height_for_width(void* self) {
    return QTreeView_QBaseHasHeightForWidth((QTreeView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, bool (*slot)() ```
void q_treeview_on_has_height_for_width(void* self, bool (*slot)()) {
    QTreeView_OnHasHeightForWidth((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self ```
QPaintEngine* q_treeview_paint_engine(void* self) {
    return QTreeView_PaintEngine((QTreeView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self ```
QPaintEngine* q_treeview_qbase_paint_engine(void* self) {
    return QTreeView_QBasePaintEngine((QTreeView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, QPaintEngine* (*slot)() ```
void q_treeview_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QTreeView_OnPaintEngine((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QKeyEvent* event ```
void q_treeview_key_release_event(void* self, void* event) {
    QTreeView_KeyReleaseEvent((QTreeView*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QKeyEvent* event ```
void q_treeview_qbase_key_release_event(void* self, void* event) {
    QTreeView_QBaseKeyReleaseEvent((QTreeView*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QKeyEvent*) ```
void q_treeview_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QTreeView_OnKeyReleaseEvent((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QEnterEvent* event ```
void q_treeview_enter_event(void* self, void* event) {
    QTreeView_EnterEvent((QTreeView*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QEnterEvent* event ```
void q_treeview_qbase_enter_event(void* self, void* event) {
    QTreeView_QBaseEnterEvent((QTreeView*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QEnterEvent*) ```
void q_treeview_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QTreeView_OnEnterEvent((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QEvent* event ```
void q_treeview_leave_event(void* self, void* event) {
    QTreeView_LeaveEvent((QTreeView*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QEvent* event ```
void q_treeview_qbase_leave_event(void* self, void* event) {
    QTreeView_QBaseLeaveEvent((QTreeView*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QEvent*) ```
void q_treeview_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QTreeView_OnLeaveEvent((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QMoveEvent* event ```
void q_treeview_move_event(void* self, void* event) {
    QTreeView_MoveEvent((QTreeView*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QMoveEvent* event ```
void q_treeview_qbase_move_event(void* self, void* event) {
    QTreeView_QBaseMoveEvent((QTreeView*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QMoveEvent*) ```
void q_treeview_on_move_event(void* self, void (*slot)(void*, void*)) {
    QTreeView_OnMoveEvent((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QCloseEvent* event ```
void q_treeview_close_event(void* self, void* event) {
    QTreeView_CloseEvent((QTreeView*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QCloseEvent* event ```
void q_treeview_qbase_close_event(void* self, void* event) {
    QTreeView_QBaseCloseEvent((QTreeView*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QCloseEvent*) ```
void q_treeview_on_close_event(void* self, void (*slot)(void*, void*)) {
    QTreeView_OnCloseEvent((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QTabletEvent* event ```
void q_treeview_tablet_event(void* self, void* event) {
    QTreeView_TabletEvent((QTreeView*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QTabletEvent* event ```
void q_treeview_qbase_tablet_event(void* self, void* event) {
    QTreeView_QBaseTabletEvent((QTreeView*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QTabletEvent*) ```
void q_treeview_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QTreeView_OnTabletEvent((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QActionEvent* event ```
void q_treeview_action_event(void* self, void* event) {
    QTreeView_ActionEvent((QTreeView*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QActionEvent* event ```
void q_treeview_qbase_action_event(void* self, void* event) {
    QTreeView_QBaseActionEvent((QTreeView*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QActionEvent*) ```
void q_treeview_on_action_event(void* self, void (*slot)(void*, void*)) {
    QTreeView_OnActionEvent((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QShowEvent* event ```
void q_treeview_show_event(void* self, void* event) {
    QTreeView_ShowEvent((QTreeView*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QShowEvent* event ```
void q_treeview_qbase_show_event(void* self, void* event) {
    QTreeView_QBaseShowEvent((QTreeView*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QShowEvent*) ```
void q_treeview_on_show_event(void* self, void (*slot)(void*, void*)) {
    QTreeView_OnShowEvent((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QHideEvent* event ```
void q_treeview_hide_event(void* self, void* event) {
    QTreeView_HideEvent((QTreeView*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QHideEvent* event ```
void q_treeview_qbase_hide_event(void* self, void* event) {
    QTreeView_QBaseHideEvent((QTreeView*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QHideEvent*) ```
void q_treeview_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QTreeView_OnHideEvent((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, const char* eventType, void* message, intptr_t* result ```
bool q_treeview_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QTreeView_NativeEvent((QTreeView*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, const char* eventType, void* message, intptr_t* result ```
bool q_treeview_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QTreeView_QBaseNativeEvent((QTreeView*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, bool (*slot)(QTreeView*, const char*, void*, intptr_t*) ```
void q_treeview_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QTreeView_OnNativeEvent((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_treeview_metric(void* self, int64_t param1) {
    return QTreeView_Metric((QTreeView*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_treeview_qbase_metric(void* self, int64_t param1) {
    return QTreeView_QBaseMetric((QTreeView*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, int32_t (*slot)(QTreeView*, enum QPaintDevice__PaintDeviceMetric) ```
void q_treeview_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QTreeView_OnMetric((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QPainter* painter ```
void q_treeview_init_painter(void* self, void* painter) {
    QTreeView_InitPainter((QTreeView*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QPainter* painter ```
void q_treeview_qbase_init_painter(void* self, void* painter) {
    QTreeView_QBaseInitPainter((QTreeView*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QPainter*) ```
void q_treeview_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QTreeView_OnInitPainter((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QPoint* offset ```
QPaintDevice* q_treeview_redirected(void* self, void* offset) {
    return QTreeView_Redirected((QTreeView*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QPoint* offset ```
QPaintDevice* q_treeview_qbase_redirected(void* self, void* offset) {
    return QTreeView_QBaseRedirected((QTreeView*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, QPaintDevice* (*slot)(QTreeView*, QPoint*) ```
void q_treeview_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QTreeView_OnRedirected((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self ```
QPainter* q_treeview_shared_painter(void* self) {
    return QTreeView_SharedPainter((QTreeView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self ```
QPainter* q_treeview_qbase_shared_painter(void* self) {
    return QTreeView_QBaseSharedPainter((QTreeView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, QPainter* (*slot)() ```
void q_treeview_on_shared_painter(void* self, QPainter* (*slot)()) {
    QTreeView_OnSharedPainter((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QChildEvent* event ```
void q_treeview_child_event(void* self, void* event) {
    QTreeView_ChildEvent((QTreeView*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QChildEvent* event ```
void q_treeview_qbase_child_event(void* self, void* event) {
    QTreeView_QBaseChildEvent((QTreeView*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QChildEvent*) ```
void q_treeview_on_child_event(void* self, void (*slot)(void*, void*)) {
    QTreeView_OnChildEvent((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QEvent* event ```
void q_treeview_custom_event(void* self, void* event) {
    QTreeView_CustomEvent((QTreeView*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QEvent* event ```
void q_treeview_qbase_custom_event(void* self, void* event) {
    QTreeView_QBaseCustomEvent((QTreeView*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QEvent*) ```
void q_treeview_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QTreeView_OnCustomEvent((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QMetaMethod* signal ```
void q_treeview_connect_notify(void* self, void* signal) {
    QTreeView_ConnectNotify((QTreeView*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QMetaMethod* signal ```
void q_treeview_qbase_connect_notify(void* self, void* signal) {
    QTreeView_QBaseConnectNotify((QTreeView*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QMetaMethod*) ```
void q_treeview_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QTreeView_OnConnectNotify((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QMetaMethod* signal ```
void q_treeview_disconnect_notify(void* self, void* signal) {
    QTreeView_DisconnectNotify((QTreeView*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QMetaMethod* signal ```
void q_treeview_qbase_disconnect_notify(void* self, void* signal) {
    QTreeView_QBaseDisconnectNotify((QTreeView*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QMetaMethod*) ```
void q_treeview_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QTreeView_OnDisconnectNotify((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#state)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self ```
int64_t q_treeview_state(void* self) {
    return QTreeView_State((QTreeView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self ```
int64_t q_treeview_qbase_state(void* self) {
    return QTreeView_QBaseState((QTreeView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, int64_t (*slot)() ```
void q_treeview_on_state(void* self, int64_t (*slot)()) {
    QTreeView_OnState((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, enum QAbstractItemView__State state ```
void q_treeview_set_state(void* self, int64_t state) {
    QTreeView_SetState((QTreeView*)self, state);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, enum QAbstractItemView__State state ```
void q_treeview_qbase_set_state(void* self, int64_t state) {
    QTreeView_QBaseSetState((QTreeView*)self, state);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, enum QAbstractItemView__State) ```
void q_treeview_on_set_state(void* self, void (*slot)(void*, int64_t)) {
    QTreeView_OnSetState((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self ```
void q_treeview_schedule_delayed_items_layout(void* self) {
    QTreeView_ScheduleDelayedItemsLayout((QTreeView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self ```
void q_treeview_qbase_schedule_delayed_items_layout(void* self) {
    QTreeView_QBaseScheduleDelayedItemsLayout((QTreeView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)() ```
void q_treeview_on_schedule_delayed_items_layout(void* self, void (*slot)()) {
    QTreeView_OnScheduleDelayedItemsLayout((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self ```
void q_treeview_execute_delayed_items_layout(void* self) {
    QTreeView_ExecuteDelayedItemsLayout((QTreeView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self ```
void q_treeview_qbase_execute_delayed_items_layout(void* self) {
    QTreeView_QBaseExecuteDelayedItemsLayout((QTreeView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)() ```
void q_treeview_on_execute_delayed_items_layout(void* self, void (*slot)()) {
    QTreeView_OnExecuteDelayedItemsLayout((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QRegion* region ```
void q_treeview_set_dirty_region(void* self, void* region) {
    QTreeView_SetDirtyRegion((QTreeView*)self, (QRegion*)region);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QRegion* region ```
void q_treeview_qbase_set_dirty_region(void* self, void* region) {
    QTreeView_QBaseSetDirtyRegion((QTreeView*)self, (QRegion*)region);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QRegion*) ```
void q_treeview_on_set_dirty_region(void* self, void (*slot)(void*, void*)) {
    QTreeView_OnSetDirtyRegion((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, int dx, int dy ```
void q_treeview_scroll_dirty_region(void* self, int dx, int dy) {
    QTreeView_ScrollDirtyRegion((QTreeView*)self, dx, dy);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, int dx, int dy ```
void q_treeview_qbase_scroll_dirty_region(void* self, int dx, int dy) {
    QTreeView_QBaseScrollDirtyRegion((QTreeView*)self, dx, dy);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, int, int) ```
void q_treeview_on_scroll_dirty_region(void* self, void (*slot)(void*, int, int)) {
    QTreeView_OnScrollDirtyRegion((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self ```
QPoint* q_treeview_dirty_region_offset(void* self) {
    return QTreeView_DirtyRegionOffset((QTreeView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self ```
QPoint* q_treeview_qbase_dirty_region_offset(void* self) {
    return QTreeView_QBaseDirtyRegionOffset((QTreeView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, QPoint* (*slot)() ```
void q_treeview_on_dirty_region_offset(void* self, QPoint* (*slot)()) {
    QTreeView_OnDirtyRegionOffset((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self ```
void q_treeview_start_auto_scroll(void* self) {
    QTreeView_StartAutoScroll((QTreeView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self ```
void q_treeview_qbase_start_auto_scroll(void* self) {
    QTreeView_QBaseStartAutoScroll((QTreeView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)() ```
void q_treeview_on_start_auto_scroll(void* self, void (*slot)()) {
    QTreeView_OnStartAutoScroll((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self ```
void q_treeview_stop_auto_scroll(void* self) {
    QTreeView_StopAutoScroll((QTreeView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self ```
void q_treeview_qbase_stop_auto_scroll(void* self) {
    QTreeView_QBaseStopAutoScroll((QTreeView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)() ```
void q_treeview_on_stop_auto_scroll(void* self, void (*slot)()) {
    QTreeView_OnStopAutoScroll((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self ```
void q_treeview_do_auto_scroll(void* self) {
    QTreeView_DoAutoScroll((QTreeView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self ```
void q_treeview_qbase_do_auto_scroll(void* self) {
    QTreeView_QBaseDoAutoScroll((QTreeView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)() ```
void q_treeview_on_do_auto_scroll(void* self, void (*slot)()) {
    QTreeView_OnDoAutoScroll((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self ```
int64_t q_treeview_drop_indicator_position(void* self) {
    return QTreeView_DropIndicatorPosition((QTreeView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self ```
int64_t q_treeview_qbase_drop_indicator_position(void* self) {
    return QTreeView_QBaseDropIndicatorPosition((QTreeView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, int64_t (*slot)() ```
void q_treeview_on_drop_indicator_position(void* self, int64_t (*slot)()) {
    QTreeView_OnDropIndicatorPosition((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, int left, int top, int right, int bottom ```
void q_treeview_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    QTreeView_SetViewportMargins((QTreeView*)self, left, top, right, bottom);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, int left, int top, int right, int bottom ```
void q_treeview_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    QTreeView_QBaseSetViewportMargins((QTreeView*)self, left, top, right, bottom);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, int, int, int, int) ```
void q_treeview_on_set_viewport_margins(void* self, void (*slot)(void*, int, int, int, int)) {
    QTreeView_OnSetViewportMargins((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self ```
QMargins* q_treeview_viewport_margins(void* self) {
    return QTreeView_ViewportMargins((QTreeView*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self ```
QMargins* q_treeview_qbase_viewport_margins(void* self) {
    return QTreeView_QBaseViewportMargins((QTreeView*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, QMargins* (*slot)() ```
void q_treeview_on_viewport_margins(void* self, QMargins* (*slot)()) {
    QTreeView_OnViewportMargins((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QPainter* param1 ```
void q_treeview_draw_frame(void* self, void* param1) {
    QTreeView_DrawFrame((QTreeView*)self, (QPainter*)param1);
}

/// Inherited from QFrame
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QPainter* param1 ```
void q_treeview_qbase_draw_frame(void* self, void* param1) {
    QTreeView_QBaseDrawFrame((QTreeView*)self, (QPainter*)param1);
}

/// Inherited from QFrame
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QPainter*) ```
void q_treeview_on_draw_frame(void* self, void (*slot)(void*, void*)) {
    QTreeView_OnDrawFrame((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self ```
void q_treeview_update_micro_focus(void* self) {
    QTreeView_UpdateMicroFocus((QTreeView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self ```
void q_treeview_qbase_update_micro_focus(void* self) {
    QTreeView_QBaseUpdateMicroFocus((QTreeView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)() ```
void q_treeview_on_update_micro_focus(void* self, void (*slot)()) {
    QTreeView_OnUpdateMicroFocus((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self ```
void q_treeview_create(void* self) {
    QTreeView_Create((QTreeView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self ```
void q_treeview_qbase_create(void* self) {
    QTreeView_QBaseCreate((QTreeView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)() ```
void q_treeview_on_create(void* self, void (*slot)()) {
    QTreeView_OnCreate((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self ```
void q_treeview_destroy(void* self) {
    QTreeView_Destroy((QTreeView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self ```
void q_treeview_qbase_destroy(void* self) {
    QTreeView_QBaseDestroy((QTreeView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)() ```
void q_treeview_on_destroy(void* self, void (*slot)()) {
    QTreeView_OnDestroy((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self ```
bool q_treeview_focus_next_child(void* self) {
    return QTreeView_FocusNextChild((QTreeView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self ```
bool q_treeview_qbase_focus_next_child(void* self) {
    return QTreeView_QBaseFocusNextChild((QTreeView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, bool (*slot)() ```
void q_treeview_on_focus_next_child(void* self, bool (*slot)()) {
    QTreeView_OnFocusNextChild((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self ```
bool q_treeview_focus_previous_child(void* self) {
    return QTreeView_FocusPreviousChild((QTreeView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self ```
bool q_treeview_qbase_focus_previous_child(void* self) {
    return QTreeView_QBaseFocusPreviousChild((QTreeView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, bool (*slot)() ```
void q_treeview_on_focus_previous_child(void* self, bool (*slot)()) {
    QTreeView_OnFocusPreviousChild((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self ```
QObject* q_treeview_sender(void* self) {
    return QTreeView_Sender((QTreeView*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self ```
QObject* q_treeview_qbase_sender(void* self) {
    return QTreeView_QBaseSender((QTreeView*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, QObject* (*slot)() ```
void q_treeview_on_sender(void* self, QObject* (*slot)()) {
    QTreeView_OnSender((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self ```
int32_t q_treeview_sender_signal_index(void* self) {
    return QTreeView_SenderSignalIndex((QTreeView*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self ```
int32_t q_treeview_qbase_sender_signal_index(void* self) {
    return QTreeView_QBaseSenderSignalIndex((QTreeView*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, int32_t (*slot)() ```
void q_treeview_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QTreeView_OnSenderSignalIndex((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, const char* signal ```
int32_t q_treeview_receivers(void* self, const char* signal) {
    return QTreeView_Receivers((QTreeView*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, const char* signal ```
int32_t q_treeview_qbase_receivers(void* self, const char* signal) {
    return QTreeView_QBaseReceivers((QTreeView*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, int32_t (*slot)(QTreeView*, const char*) ```
void q_treeview_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QTreeView_OnReceivers((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QMetaMethod* signal ```
bool q_treeview_is_signal_connected(void* self, void* signal) {
    return QTreeView_IsSignalConnected((QTreeView*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QMetaMethod* signal ```
bool q_treeview_qbase_is_signal_connected(void* self, void* signal) {
    return QTreeView_QBaseIsSignalConnected((QTreeView*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, bool (*slot)(QTreeView*, QMetaMethod*) ```
void q_treeview_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QTreeView_OnIsSignalConnected((QTreeView*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QTreeView* self ```
void q_treeview_delete(void* self) {
    QTreeView_Delete((QTreeView*)(self));
}