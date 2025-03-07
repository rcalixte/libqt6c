#include "libqabstractitemmodel.hpp"
#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqbrush.hpp"
#include "libqevent.hpp"
#include "libqdatastream.hpp"
#include "libqfont.hpp"
#include "libqicon.hpp"
#include "libqmetaobject.hpp"
#include "libqmimedata.hpp"
#include "libqobject.hpp"
#include "libqsize.hpp"
#include <string.h>
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqcoreevent.hpp"
#include "libqstandarditemmodel.hpp"
#include "libqstandarditemmodel.h"

/// https://doc.qt.io/qt-6/qstandarditem.html

/// q_standarditem_new constructs a new QStandardItem object.
///
///
QStandardItem* q_standarditem_new() {
    return QStandardItem_new();
}

/// q_standarditem_new2 constructs a new QStandardItem object.
///
/// ``` const char* text ```
QStandardItem* q_standarditem_new2(const char* text) {
    return QStandardItem_new2(qstring(text));
}

/// q_standarditem_new3 constructs a new QStandardItem object.
///
/// ``` QIcon* icon, const char* text ```
QStandardItem* q_standarditem_new3(void* icon, const char* text) {
    return QStandardItem_new3((QIcon*)icon, qstring(text));
}

/// q_standarditem_new4 constructs a new QStandardItem object.
///
/// ``` int rows ```
QStandardItem* q_standarditem_new4(int rows) {
    return QStandardItem_new4(rows);
}

/// q_standarditem_new5 constructs a new QStandardItem object.
///
/// ``` int rows, int columns ```
QStandardItem* q_standarditem_new5(int rows, int columns) {
    return QStandardItem_new5(rows, columns);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#data)
///
/// ``` QStandardItem* self, int role ```
QVariant* q_standarditem_data(void* self, int role) {
    return QStandardItem_Data((QStandardItem*)self, role);
}

/// Allows for overriding the related default method
///
/// ``` QStandardItem* self, QVariant* (*slot)(QStandardItem*, int) ```
void q_standarditem_on_data(void* self, QVariant* (*slot)(void*, int)) {
    QStandardItem_OnData((QStandardItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStandardItem* self, int role ```
QVariant* q_standarditem_qbase_data(void* self, int role) {
    return QStandardItem_QBaseData((QStandardItem*)self, role);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#multiData)
///
/// ``` QStandardItem* self, QModelRoleDataSpan* roleDataSpan ```
void q_standarditem_multi_data(void* self, void* roleDataSpan) {
    QStandardItem_MultiData((QStandardItem*)self, (QModelRoleDataSpan*)roleDataSpan);
}

/// Allows for overriding the related default method
///
/// ``` QStandardItem* self, void (*slot)(QStandardItem*, QModelRoleDataSpan*) ```
void q_standarditem_on_multi_data(void* self, void (*slot)(void*, void*)) {
    QStandardItem_OnMultiData((QStandardItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStandardItem* self, QModelRoleDataSpan* roleDataSpan ```
void q_standarditem_qbase_multi_data(void* self, void* roleDataSpan) {
    QStandardItem_QBaseMultiData((QStandardItem*)self, (QModelRoleDataSpan*)roleDataSpan);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setData)
///
/// ``` QStandardItem* self, QVariant* value, int role ```
void q_standarditem_set_data(void* self, void* value, int role) {
    QStandardItem_SetData((QStandardItem*)self, (QVariant*)value, role);
}

/// Allows for overriding the related default method
///
/// ``` QStandardItem* self, void (*slot)(QStandardItem*, QVariant*, int) ```
void q_standarditem_on_set_data(void* self, void (*slot)(void*, void*, int)) {
    QStandardItem_OnSetData((QStandardItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStandardItem* self, QVariant* value, int role ```
void q_standarditem_qbase_set_data(void* self, void* value, int role) {
    QStandardItem_QBaseSetData((QStandardItem*)self, (QVariant*)value, role);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#clearData)
///
/// ``` QStandardItem* self ```
void q_standarditem_clear_data(void* self) {
    QStandardItem_ClearData((QStandardItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#text)
///
/// ``` QStandardItem* self ```
const char* q_standarditem_text(void* self) {
    libqt_string _str = QStandardItem_Text((QStandardItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setText)
///
/// ``` QStandardItem* self, const char* text ```
void q_standarditem_set_text(void* self, const char* text) {
    QStandardItem_SetText((QStandardItem*)self, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#icon)
///
/// ``` QStandardItem* self ```
QIcon* q_standarditem_icon(void* self) {
    return QStandardItem_Icon((QStandardItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setIcon)
///
/// ``` QStandardItem* self, QIcon* icon ```
void q_standarditem_set_icon(void* self, void* icon) {
    QStandardItem_SetIcon((QStandardItem*)self, (QIcon*)icon);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#toolTip)
///
/// ``` QStandardItem* self ```
const char* q_standarditem_tool_tip(void* self) {
    libqt_string _str = QStandardItem_ToolTip((QStandardItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setToolTip)
///
/// ``` QStandardItem* self, const char* toolTip ```
void q_standarditem_set_tool_tip(void* self, const char* toolTip) {
    QStandardItem_SetToolTip((QStandardItem*)self, qstring(toolTip));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#statusTip)
///
/// ``` QStandardItem* self ```
const char* q_standarditem_status_tip(void* self) {
    libqt_string _str = QStandardItem_StatusTip((QStandardItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setStatusTip)
///
/// ``` QStandardItem* self, const char* statusTip ```
void q_standarditem_set_status_tip(void* self, const char* statusTip) {
    QStandardItem_SetStatusTip((QStandardItem*)self, qstring(statusTip));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#whatsThis)
///
/// ``` QStandardItem* self ```
const char* q_standarditem_whats_this(void* self) {
    libqt_string _str = QStandardItem_WhatsThis((QStandardItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setWhatsThis)
///
/// ``` QStandardItem* self, const char* whatsThis ```
void q_standarditem_set_whats_this(void* self, const char* whatsThis) {
    QStandardItem_SetWhatsThis((QStandardItem*)self, qstring(whatsThis));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#sizeHint)
///
/// ``` QStandardItem* self ```
QSize* q_standarditem_size_hint(void* self) {
    return QStandardItem_SizeHint((QStandardItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setSizeHint)
///
/// ``` QStandardItem* self, QSize* sizeHint ```
void q_standarditem_set_size_hint(void* self, void* sizeHint) {
    QStandardItem_SetSizeHint((QStandardItem*)self, (QSize*)sizeHint);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#font)
///
/// ``` QStandardItem* self ```
QFont* q_standarditem_font(void* self) {
    return QStandardItem_Font((QStandardItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setFont)
///
/// ``` QStandardItem* self, QFont* font ```
void q_standarditem_set_font(void* self, void* font) {
    QStandardItem_SetFont((QStandardItem*)self, (QFont*)font);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#textAlignment)
///
/// ``` QStandardItem* self ```
int64_t q_standarditem_text_alignment(void* self) {
    return QStandardItem_TextAlignment((QStandardItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setTextAlignment)
///
/// ``` QStandardItem* self, int textAlignment ```
void q_standarditem_set_text_alignment(void* self, int64_t textAlignment) {
    QStandardItem_SetTextAlignment((QStandardItem*)self, textAlignment);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#background)
///
/// ``` QStandardItem* self ```
QBrush* q_standarditem_background(void* self) {
    return QStandardItem_Background((QStandardItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setBackground)
///
/// ``` QStandardItem* self, QBrush* brush ```
void q_standarditem_set_background(void* self, void* brush) {
    QStandardItem_SetBackground((QStandardItem*)self, (QBrush*)brush);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#foreground)
///
/// ``` QStandardItem* self ```
QBrush* q_standarditem_foreground(void* self) {
    return QStandardItem_Foreground((QStandardItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setForeground)
///
/// ``` QStandardItem* self, QBrush* brush ```
void q_standarditem_set_foreground(void* self, void* brush) {
    QStandardItem_SetForeground((QStandardItem*)self, (QBrush*)brush);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#checkState)
///
/// ``` QStandardItem* self ```
int64_t q_standarditem_check_state(void* self) {
    return QStandardItem_CheckState((QStandardItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setCheckState)
///
/// ``` QStandardItem* self, enum Qt__CheckState checkState ```
void q_standarditem_set_check_state(void* self, int64_t checkState) {
    QStandardItem_SetCheckState((QStandardItem*)self, checkState);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#accessibleText)
///
/// ``` QStandardItem* self ```
const char* q_standarditem_accessible_text(void* self) {
    libqt_string _str = QStandardItem_AccessibleText((QStandardItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setAccessibleText)
///
/// ``` QStandardItem* self, const char* accessibleText ```
void q_standarditem_set_accessible_text(void* self, const char* accessibleText) {
    QStandardItem_SetAccessibleText((QStandardItem*)self, qstring(accessibleText));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#accessibleDescription)
///
/// ``` QStandardItem* self ```
const char* q_standarditem_accessible_description(void* self) {
    libqt_string _str = QStandardItem_AccessibleDescription((QStandardItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setAccessibleDescription)
///
/// ``` QStandardItem* self, const char* accessibleDescription ```
void q_standarditem_set_accessible_description(void* self, const char* accessibleDescription) {
    QStandardItem_SetAccessibleDescription((QStandardItem*)self, qstring(accessibleDescription));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#flags)
///
/// ``` QStandardItem* self ```
int64_t q_standarditem_flags(void* self) {
    return QStandardItem_Flags((QStandardItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setFlags)
///
/// ``` QStandardItem* self, int flags ```
void q_standarditem_set_flags(void* self, int64_t flags) {
    QStandardItem_SetFlags((QStandardItem*)self, flags);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#isEnabled)
///
/// ``` QStandardItem* self ```
bool q_standarditem_is_enabled(void* self) {
    return QStandardItem_IsEnabled((QStandardItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setEnabled)
///
/// ``` QStandardItem* self, bool enabled ```
void q_standarditem_set_enabled(void* self, bool enabled) {
    QStandardItem_SetEnabled((QStandardItem*)self, enabled);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#isEditable)
///
/// ``` QStandardItem* self ```
bool q_standarditem_is_editable(void* self) {
    return QStandardItem_IsEditable((QStandardItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setEditable)
///
/// ``` QStandardItem* self, bool editable ```
void q_standarditem_set_editable(void* self, bool editable) {
    QStandardItem_SetEditable((QStandardItem*)self, editable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#isSelectable)
///
/// ``` QStandardItem* self ```
bool q_standarditem_is_selectable(void* self) {
    return QStandardItem_IsSelectable((QStandardItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setSelectable)
///
/// ``` QStandardItem* self, bool selectable ```
void q_standarditem_set_selectable(void* self, bool selectable) {
    QStandardItem_SetSelectable((QStandardItem*)self, selectable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#isCheckable)
///
/// ``` QStandardItem* self ```
bool q_standarditem_is_checkable(void* self) {
    return QStandardItem_IsCheckable((QStandardItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setCheckable)
///
/// ``` QStandardItem* self, bool checkable ```
void q_standarditem_set_checkable(void* self, bool checkable) {
    QStandardItem_SetCheckable((QStandardItem*)self, checkable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#isAutoTristate)
///
/// ``` QStandardItem* self ```
bool q_standarditem_is_auto_tristate(void* self) {
    return QStandardItem_IsAutoTristate((QStandardItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setAutoTristate)
///
/// ``` QStandardItem* self, bool tristate ```
void q_standarditem_set_auto_tristate(void* self, bool tristate) {
    QStandardItem_SetAutoTristate((QStandardItem*)self, tristate);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#isUserTristate)
///
/// ``` QStandardItem* self ```
bool q_standarditem_is_user_tristate(void* self) {
    return QStandardItem_IsUserTristate((QStandardItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setUserTristate)
///
/// ``` QStandardItem* self, bool tristate ```
void q_standarditem_set_user_tristate(void* self, bool tristate) {
    QStandardItem_SetUserTristate((QStandardItem*)self, tristate);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#isDragEnabled)
///
/// ``` QStandardItem* self ```
bool q_standarditem_is_drag_enabled(void* self) {
    return QStandardItem_IsDragEnabled((QStandardItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setDragEnabled)
///
/// ``` QStandardItem* self, bool dragEnabled ```
void q_standarditem_set_drag_enabled(void* self, bool dragEnabled) {
    QStandardItem_SetDragEnabled((QStandardItem*)self, dragEnabled);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#isDropEnabled)
///
/// ``` QStandardItem* self ```
bool q_standarditem_is_drop_enabled(void* self) {
    return QStandardItem_IsDropEnabled((QStandardItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setDropEnabled)
///
/// ``` QStandardItem* self, bool dropEnabled ```
void q_standarditem_set_drop_enabled(void* self, bool dropEnabled) {
    QStandardItem_SetDropEnabled((QStandardItem*)self, dropEnabled);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#parent)
///
/// ``` QStandardItem* self ```
QStandardItem* q_standarditem_parent(void* self) {
    return QStandardItem_Parent((QStandardItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#row)
///
/// ``` QStandardItem* self ```
int32_t q_standarditem_row(void* self) {
    return QStandardItem_Row((QStandardItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#column)
///
/// ``` QStandardItem* self ```
int32_t q_standarditem_column(void* self) {
    return QStandardItem_Column((QStandardItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#index)
///
/// ``` QStandardItem* self ```
QModelIndex* q_standarditem_index(void* self) {
    return QStandardItem_Index((QStandardItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#model)
///
/// ``` QStandardItem* self ```
QStandardItemModel* q_standarditem_model(void* self) {
    return QStandardItem_Model((QStandardItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#rowCount)
///
/// ``` QStandardItem* self ```
int32_t q_standarditem_row_count(void* self) {
    return QStandardItem_RowCount((QStandardItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setRowCount)
///
/// ``` QStandardItem* self, int rows ```
void q_standarditem_set_row_count(void* self, int rows) {
    QStandardItem_SetRowCount((QStandardItem*)self, rows);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#columnCount)
///
/// ``` QStandardItem* self ```
int32_t q_standarditem_column_count(void* self) {
    return QStandardItem_ColumnCount((QStandardItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setColumnCount)
///
/// ``` QStandardItem* self, int columns ```
void q_standarditem_set_column_count(void* self, int columns) {
    QStandardItem_SetColumnCount((QStandardItem*)self, columns);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#hasChildren)
///
/// ``` QStandardItem* self ```
bool q_standarditem_has_children(void* self) {
    return QStandardItem_HasChildren((QStandardItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#child)
///
/// ``` QStandardItem* self, int row ```
QStandardItem* q_standarditem_child(void* self, int row) {
    return QStandardItem_Child((QStandardItem*)self, row);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setChild)
///
/// ``` QStandardItem* self, int row, int column, QStandardItem* item ```
void q_standarditem_set_child(void* self, int row, int column, void* item) {
    QStandardItem_SetChild((QStandardItem*)self, row, column, (QStandardItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setChild)
///
/// ``` QStandardItem* self, int row, QStandardItem* item ```
void q_standarditem_set_child2(void* self, int row, void* item) {
    QStandardItem_SetChild2((QStandardItem*)self, row, (QStandardItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#insertRow)
///
/// ``` QStandardItem* self, int row, QStandardItem* items[] ```
void q_standarditem_insert_row(void* self, int row, void* items[]) {
    QStandardItem** items_arr = (QStandardItem**)items;
    size_t items_len = 0;
    while (items_arr[items_len] != NULL) {
        items_len++;
    }
    libqt_list items_list = {
        .len = items_len,
        .data = {(QStandardItem*)items},
    };
    QStandardItem_InsertRow((QStandardItem*)self, row, items_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#insertColumn)
///
/// ``` QStandardItem* self, int column, QStandardItem* items[] ```
void q_standarditem_insert_column(void* self, int column, void* items[]) {
    QStandardItem** items_arr = (QStandardItem**)items;
    size_t items_len = 0;
    while (items_arr[items_len] != NULL) {
        items_len++;
    }
    libqt_list items_list = {
        .len = items_len,
        .data = {(QStandardItem*)items},
    };
    QStandardItem_InsertColumn((QStandardItem*)self, column, items_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#insertRows)
///
/// ``` QStandardItem* self, int row, QStandardItem* items[] ```
void q_standarditem_insert_rows(void* self, int row, void* items[]) {
    QStandardItem** items_arr = (QStandardItem**)items;
    size_t items_len = 0;
    while (items_arr[items_len] != NULL) {
        items_len++;
    }
    libqt_list items_list = {
        .len = items_len,
        .data = {(QStandardItem*)items},
    };
    QStandardItem_InsertRows((QStandardItem*)self, row, items_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#insertRows)
///
/// ``` QStandardItem* self, int row, int count ```
void q_standarditem_insert_rows2(void* self, int row, int count) {
    QStandardItem_InsertRows2((QStandardItem*)self, row, count);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#insertColumns)
///
/// ``` QStandardItem* self, int column, int count ```
void q_standarditem_insert_columns(void* self, int column, int count) {
    QStandardItem_InsertColumns((QStandardItem*)self, column, count);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#removeRow)
///
/// ``` QStandardItem* self, int row ```
void q_standarditem_remove_row(void* self, int row) {
    QStandardItem_RemoveRow((QStandardItem*)self, row);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#removeColumn)
///
/// ``` QStandardItem* self, int column ```
void q_standarditem_remove_column(void* self, int column) {
    QStandardItem_RemoveColumn((QStandardItem*)self, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#removeRows)
///
/// ``` QStandardItem* self, int row, int count ```
void q_standarditem_remove_rows(void* self, int row, int count) {
    QStandardItem_RemoveRows((QStandardItem*)self, row, count);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#removeColumns)
///
/// ``` QStandardItem* self, int column, int count ```
void q_standarditem_remove_columns(void* self, int column, int count) {
    QStandardItem_RemoveColumns((QStandardItem*)self, column, count);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#appendRow)
///
/// ``` QStandardItem* self, QStandardItem* items[] ```
void q_standarditem_append_row(void* self, void* items[]) {
    QStandardItem** items_arr = (QStandardItem**)items;
    size_t items_len = 0;
    while (items_arr[items_len] != NULL) {
        items_len++;
    }
    libqt_list items_list = {
        .len = items_len,
        .data = {(QStandardItem*)items},
    };
    QStandardItem_AppendRow((QStandardItem*)self, items_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#appendRows)
///
/// ``` QStandardItem* self, QStandardItem* items[] ```
void q_standarditem_append_rows(void* self, void* items[]) {
    QStandardItem** items_arr = (QStandardItem**)items;
    size_t items_len = 0;
    while (items_arr[items_len] != NULL) {
        items_len++;
    }
    libqt_list items_list = {
        .len = items_len,
        .data = {(QStandardItem*)items},
    };
    QStandardItem_AppendRows((QStandardItem*)self, items_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#appendColumn)
///
/// ``` QStandardItem* self, QStandardItem* items[] ```
void q_standarditem_append_column(void* self, void* items[]) {
    QStandardItem** items_arr = (QStandardItem**)items;
    size_t items_len = 0;
    while (items_arr[items_len] != NULL) {
        items_len++;
    }
    libqt_list items_list = {
        .len = items_len,
        .data = {(QStandardItem*)items},
    };
    QStandardItem_AppendColumn((QStandardItem*)self, items_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#insertRow)
///
/// ``` QStandardItem* self, int row, QStandardItem* item ```
void q_standarditem_insert_row2(void* self, int row, void* item) {
    QStandardItem_InsertRow2((QStandardItem*)self, row, (QStandardItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#appendRow)
///
/// ``` QStandardItem* self, QStandardItem* item ```
void q_standarditem_append_row_with_item(void* self, void* item) {
    QStandardItem_AppendRowWithItem((QStandardItem*)self, (QStandardItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#takeChild)
///
/// ``` QStandardItem* self, int row ```
QStandardItem* q_standarditem_take_child(void* self, int row) {
    return QStandardItem_TakeChild((QStandardItem*)self, row);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#takeRow)
///
/// ``` QStandardItem* self, int row ```
libqt_list /* of QStandardItem* */ q_standarditem_take_row(void* self, int row) {
    libqt_list _arr = QStandardItem_TakeRow((QStandardItem*)self, row);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#takeColumn)
///
/// ``` QStandardItem* self, int column ```
libqt_list /* of QStandardItem* */ q_standarditem_take_column(void* self, int column) {
    libqt_list _arr = QStandardItem_TakeColumn((QStandardItem*)self, column);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#sortChildren)
///
/// ``` QStandardItem* self, int column ```
void q_standarditem_sort_children(void* self, int column) {
    QStandardItem_SortChildren((QStandardItem*)self, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#clone)
///
/// ``` QStandardItem* self ```
QStandardItem* q_standarditem_clone(void* self) {
    return QStandardItem_Clone((QStandardItem*)self);
}

/// Allows for overriding the related default method
///
/// ``` QStandardItem* self, QStandardItem* (*slot)() ```
void q_standarditem_on_clone(void* self, QStandardItem* (*slot)()) {
    QStandardItem_OnClone((QStandardItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStandardItem* self ```
QStandardItem* q_standarditem_qbase_clone(void* self) {
    return QStandardItem_QBaseClone((QStandardItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#type)
///
/// ``` QStandardItem* self ```
int32_t q_standarditem_type(void* self) {
    return QStandardItem_Type((QStandardItem*)self);
}

/// Allows for overriding the related default method
///
/// ``` QStandardItem* self, int32_t (*slot)() ```
void q_standarditem_on_type(void* self, int32_t (*slot)()) {
    QStandardItem_OnType((QStandardItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStandardItem* self ```
int32_t q_standarditem_qbase_type(void* self) {
    return QStandardItem_QBaseType((QStandardItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#read)
///
/// ``` QStandardItem* self, QDataStream* in ```
void q_standarditem_read(void* self, void* in) {
    QStandardItem_Read((QStandardItem*)self, (QDataStream*)in);
}

/// Allows for overriding the related default method
///
/// ``` QStandardItem* self, void (*slot)(QStandardItem*, QDataStream*) ```
void q_standarditem_on_read(void* self, void (*slot)(void*, void*)) {
    QStandardItem_OnRead((QStandardItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStandardItem* self, QDataStream* in ```
void q_standarditem_qbase_read(void* self, void* in) {
    QStandardItem_QBaseRead((QStandardItem*)self, (QDataStream*)in);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#write)
///
/// ``` QStandardItem* self, QDataStream* out ```
void q_standarditem_write(void* self, void* out) {
    QStandardItem_Write((QStandardItem*)self, (QDataStream*)out);
}

/// Allows for overriding the related default method
///
/// ``` QStandardItem* self, void (*slot)(QStandardItem*, QDataStream*) ```
void q_standarditem_on_write(void* self, void (*slot)(void*, void*)) {
    QStandardItem_OnWrite((QStandardItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStandardItem* self, QDataStream* out ```
void q_standarditem_qbase_write(void* self, void* out) {
    QStandardItem_QBaseWrite((QStandardItem*)self, (QDataStream*)out);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#operator<)
///
/// ``` QStandardItem* self, QStandardItem* other ```
bool q_standarditem_operator_lesser(void* self, void* other) {
    return QStandardItem_OperatorLesser((QStandardItem*)self, (QStandardItem*)other);
}

/// Allows for overriding the related default method
///
/// ``` QStandardItem* self, bool (*slot)(QStandardItem*, QStandardItem*) ```
void q_standarditem_on_operator_lesser(void* self, bool (*slot)(void*, void*)) {
    QStandardItem_OnOperatorLesser((QStandardItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStandardItem* self, QStandardItem* other ```
bool q_standarditem_qbase_operator_lesser(void* self, void* other) {
    return QStandardItem_QBaseOperatorLesser((QStandardItem*)self, (QStandardItem*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#operator=)
///
/// ``` QStandardItem* self, QStandardItem* other ```
void q_standarditem_operator_assign(void* self, void* other) {
    QStandardItem_OperatorAssign((QStandardItem*)self, (QStandardItem*)other);
}

/// Allows for overriding the related default method
///
/// ``` QStandardItem* self, void (*slot)(QStandardItem*, QStandardItem*) ```
void q_standarditem_on_operator_assign(void* self, void (*slot)(void*, void*)) {
    QStandardItem_OnOperatorAssign((QStandardItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStandardItem* self, QStandardItem* other ```
void q_standarditem_qbase_operator_assign(void* self, void* other) {
    QStandardItem_QBaseOperatorAssign((QStandardItem*)self, (QStandardItem*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#emitDataChanged)
///
/// ``` QStandardItem* self ```
void q_standarditem_emit_data_changed(void* self) {
    QStandardItem_EmitDataChanged((QStandardItem*)self);
}

/// Allows for overriding the related default method
///
/// ``` QStandardItem* self, void (*slot)() ```
void q_standarditem_on_emit_data_changed(void* self, void (*slot)()) {
    QStandardItem_OnEmitDataChanged((QStandardItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStandardItem* self ```
void q_standarditem_qbase_emit_data_changed(void* self) {
    QStandardItem_QBaseEmitDataChanged((QStandardItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#child)
///
/// ``` QStandardItem* self, int row, int column ```
QStandardItem* q_standarditem_child2(void* self, int row, int column) {
    return QStandardItem_Child2((QStandardItem*)self, row, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#takeChild)
///
/// ``` QStandardItem* self, int row, int column ```
QStandardItem* q_standarditem_take_child2(void* self, int row, int column) {
    return QStandardItem_TakeChild2((QStandardItem*)self, row, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#sortChildren)
///
/// ``` QStandardItem* self, int column, enum Qt__SortOrder order ```
void q_standarditem_sort_children2(void* self, int column, int64_t order) {
    QStandardItem_SortChildren2((QStandardItem*)self, column, order);
}

/// Delete this object from C++ memory.
///
/// ``` QStandardItem* self ```
void q_standarditem_delete(void* self) {
    QStandardItem_Delete((QStandardItem*)(self));
}

/// https://doc.qt.io/qt-6/qstandarditemmodel.html

/// q_standarditemmodel_new constructs a new QStandardItemModel object.
///
///
QStandardItemModel* q_standarditemmodel_new() {
    return QStandardItemModel_new();
}

/// q_standarditemmodel_new2 constructs a new QStandardItemModel object.
///
/// ``` int rows, int columns ```
QStandardItemModel* q_standarditemmodel_new2(int rows, int columns) {
    return QStandardItemModel_new2(rows, columns);
}

/// q_standarditemmodel_new3 constructs a new QStandardItemModel object.
///
/// ``` QObject* parent ```
QStandardItemModel* q_standarditemmodel_new3(void* parent) {
    return QStandardItemModel_new3((QObject*)parent);
}

/// q_standarditemmodel_new4 constructs a new QStandardItemModel object.
///
/// ``` int rows, int columns, QObject* parent ```
QStandardItemModel* q_standarditemmodel_new4(int rows, int columns, void* parent) {
    return QStandardItemModel_new4(rows, columns, (QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QStandardItemModel* self ```
QMetaObject* q_standarditemmodel_meta_object(void* self) {
    return QStandardItemModel_MetaObject((QStandardItemModel*)self);
}

/// ``` QStandardItemModel* self, const char* param1 ```
void* q_standarditemmodel_metacast(void* self, const char* param1) {
    return QStandardItemModel_Metacast((QStandardItemModel*)self, param1);
}

/// ``` QStandardItemModel* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_standarditemmodel_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QStandardItemModel_Metacall((QStandardItemModel*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QStandardItemModel* self, int32_t (*slot)(QStandardItemModel*, enum QMetaObject__Call, int, void*) ```
void q_standarditemmodel_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QStandardItemModel_OnMetacall((QStandardItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStandardItemModel* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_standarditemmodel_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QStandardItemModel_QBaseMetacall((QStandardItemModel*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_standarditemmodel_tr(const char* s) {
    libqt_string _str = QStandardItemModel_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#setItemRoleNames)
///
/// ``` QStandardItemModel* self, libqt_map /* of int to char* */ roleNames ```
void q_standarditemmodel_set_item_role_names(void* self, libqt_map /* of int to char* */ roleNames) {
    QStandardItemModel_SetItemRoleNames((QStandardItemModel*)self, roleNames);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#roleNames)
///
/// ``` QStandardItemModel* self ```
libqt_map /* of int to char* */ q_standarditemmodel_role_names(void* self) {
    return QStandardItemModel_RoleNames((QStandardItemModel*)self);
}

/// Allows for overriding the related default method
///
/// ``` QStandardItemModel* self, libqt_map /* of int to char* */ (*slot)() ```
void q_standarditemmodel_on_role_names(void* self, libqt_map /* of int to char* */ (*slot)()) {
    QStandardItemModel_OnRoleNames((QStandardItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStandardItemModel* self ```
libqt_map /* of int to char* */ q_standarditemmodel_qbase_role_names(void* self) {
    return QStandardItemModel_QBaseRoleNames((QStandardItemModel*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#index)
///
/// ``` QStandardItemModel* self, int row, int column, QModelIndex* parent ```
QModelIndex* q_standarditemmodel_index(void* self, int row, int column, void* parent) {
    return QStandardItemModel_Index((QStandardItemModel*)self, row, column, (QModelIndex*)parent);
}

/// Allows for overriding the related default method
///
/// ``` QStandardItemModel* self, QModelIndex* (*slot)(QStandardItemModel*, int, int, QModelIndex*) ```
void q_standarditemmodel_on_index(void* self, QModelIndex* (*slot)(void*, int, int, void*)) {
    QStandardItemModel_OnIndex((QStandardItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStandardItemModel* self, int row, int column, QModelIndex* parent ```
QModelIndex* q_standarditemmodel_qbase_index(void* self, int row, int column, void* parent) {
    return QStandardItemModel_QBaseIndex((QStandardItemModel*)self, row, column, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#parent)
///
/// ``` QStandardItemModel* self, QModelIndex* child ```
QModelIndex* q_standarditemmodel_parent(void* self, void* child) {
    return QStandardItemModel_Parent((QStandardItemModel*)self, (QModelIndex*)child);
}

/// Allows for overriding the related default method
///
/// ``` QStandardItemModel* self, QModelIndex* (*slot)(QStandardItemModel*, QModelIndex*) ```
void q_standarditemmodel_on_parent(void* self, QModelIndex* (*slot)(void*, void*)) {
    QStandardItemModel_OnParent((QStandardItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStandardItemModel* self, QModelIndex* child ```
QModelIndex* q_standarditemmodel_qbase_parent(void* self, void* child) {
    return QStandardItemModel_QBaseParent((QStandardItemModel*)self, (QModelIndex*)child);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#rowCount)
///
/// ``` QStandardItemModel* self, QModelIndex* parent ```
int32_t q_standarditemmodel_row_count(void* self, void* parent) {
    return QStandardItemModel_RowCount((QStandardItemModel*)self, (QModelIndex*)parent);
}

/// Allows for overriding the related default method
///
/// ``` QStandardItemModel* self, int32_t (*slot)(QStandardItemModel*, QModelIndex*) ```
void q_standarditemmodel_on_row_count(void* self, int32_t (*slot)(void*, void*)) {
    QStandardItemModel_OnRowCount((QStandardItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStandardItemModel* self, QModelIndex* parent ```
int32_t q_standarditemmodel_qbase_row_count(void* self, void* parent) {
    return QStandardItemModel_QBaseRowCount((QStandardItemModel*)self, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#columnCount)
///
/// ``` QStandardItemModel* self, QModelIndex* parent ```
int32_t q_standarditemmodel_column_count(void* self, void* parent) {
    return QStandardItemModel_ColumnCount((QStandardItemModel*)self, (QModelIndex*)parent);
}

/// Allows for overriding the related default method
///
/// ``` QStandardItemModel* self, int32_t (*slot)(QStandardItemModel*, QModelIndex*) ```
void q_standarditemmodel_on_column_count(void* self, int32_t (*slot)(void*, void*)) {
    QStandardItemModel_OnColumnCount((QStandardItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStandardItemModel* self, QModelIndex* parent ```
int32_t q_standarditemmodel_qbase_column_count(void* self, void* parent) {
    return QStandardItemModel_QBaseColumnCount((QStandardItemModel*)self, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#hasChildren)
///
/// ``` QStandardItemModel* self, QModelIndex* parent ```
bool q_standarditemmodel_has_children(void* self, void* parent) {
    return QStandardItemModel_HasChildren((QStandardItemModel*)self, (QModelIndex*)parent);
}

/// Allows for overriding the related default method
///
/// ``` QStandardItemModel* self, bool (*slot)(QStandardItemModel*, QModelIndex*) ```
void q_standarditemmodel_on_has_children(void* self, bool (*slot)(void*, void*)) {
    QStandardItemModel_OnHasChildren((QStandardItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStandardItemModel* self, QModelIndex* parent ```
bool q_standarditemmodel_qbase_has_children(void* self, void* parent) {
    return QStandardItemModel_QBaseHasChildren((QStandardItemModel*)self, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#data)
///
/// ``` QStandardItemModel* self, QModelIndex* index, int role ```
QVariant* q_standarditemmodel_data(void* self, void* index, int role) {
    return QStandardItemModel_Data((QStandardItemModel*)self, (QModelIndex*)index, role);
}

/// Allows for overriding the related default method
///
/// ``` QStandardItemModel* self, QVariant* (*slot)(QStandardItemModel*, QModelIndex*, int) ```
void q_standarditemmodel_on_data(void* self, QVariant* (*slot)(void*, void*, int)) {
    QStandardItemModel_OnData((QStandardItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStandardItemModel* self, QModelIndex* index, int role ```
QVariant* q_standarditemmodel_qbase_data(void* self, void* index, int role) {
    return QStandardItemModel_QBaseData((QStandardItemModel*)self, (QModelIndex*)index, role);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#multiData)
///
/// ``` QStandardItemModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan ```
void q_standarditemmodel_multi_data(void* self, void* index, void* roleDataSpan) {
    QStandardItemModel_MultiData((QStandardItemModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

/// Allows for overriding the related default method
///
/// ``` QStandardItemModel* self, void (*slot)(QStandardItemModel*, QModelIndex*, QModelRoleDataSpan*) ```
void q_standarditemmodel_on_multi_data(void* self, void (*slot)(void*, void*, void*)) {
    QStandardItemModel_OnMultiData((QStandardItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStandardItemModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan ```
void q_standarditemmodel_qbase_multi_data(void* self, void* index, void* roleDataSpan) {
    QStandardItemModel_QBaseMultiData((QStandardItemModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#setData)
///
/// ``` QStandardItemModel* self, QModelIndex* index, QVariant* value, int role ```
bool q_standarditemmodel_set_data(void* self, void* index, void* value, int role) {
    return QStandardItemModel_SetData((QStandardItemModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

/// Allows for overriding the related default method
///
/// ``` QStandardItemModel* self, bool (*slot)(QStandardItemModel*, QModelIndex*, QVariant*, int) ```
void q_standarditemmodel_on_set_data(void* self, bool (*slot)(void*, void*, void*, int)) {
    QStandardItemModel_OnSetData((QStandardItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStandardItemModel* self, QModelIndex* index, QVariant* value, int role ```
bool q_standarditemmodel_qbase_set_data(void* self, void* index, void* value, int role) {
    return QStandardItemModel_QBaseSetData((QStandardItemModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#clearItemData)
///
/// ``` QStandardItemModel* self, QModelIndex* index ```
bool q_standarditemmodel_clear_item_data(void* self, void* index) {
    return QStandardItemModel_ClearItemData((QStandardItemModel*)self, (QModelIndex*)index);
}

/// Allows for overriding the related default method
///
/// ``` QStandardItemModel* self, bool (*slot)(QStandardItemModel*, QModelIndex*) ```
void q_standarditemmodel_on_clear_item_data(void* self, bool (*slot)(void*, void*)) {
    QStandardItemModel_OnClearItemData((QStandardItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStandardItemModel* self, QModelIndex* index ```
bool q_standarditemmodel_qbase_clear_item_data(void* self, void* index) {
    return QStandardItemModel_QBaseClearItemData((QStandardItemModel*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#headerData)
///
/// ``` QStandardItemModel* self, int section, enum Qt__Orientation orientation, int role ```
QVariant* q_standarditemmodel_header_data(void* self, int section, int64_t orientation, int role) {
    return QStandardItemModel_HeaderData((QStandardItemModel*)self, section, orientation, role);
}

/// Allows for overriding the related default method
///
/// ``` QStandardItemModel* self, QVariant* (*slot)(QStandardItemModel*, int, enum Qt__Orientation, int) ```
void q_standarditemmodel_on_header_data(void* self, QVariant* (*slot)(void*, int, int64_t, int)) {
    QStandardItemModel_OnHeaderData((QStandardItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStandardItemModel* self, int section, enum Qt__Orientation orientation, int role ```
QVariant* q_standarditemmodel_qbase_header_data(void* self, int section, int64_t orientation, int role) {
    return QStandardItemModel_QBaseHeaderData((QStandardItemModel*)self, section, orientation, role);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#setHeaderData)
///
/// ``` QStandardItemModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role ```
bool q_standarditemmodel_set_header_data(void* self, int section, int64_t orientation, void* value, int role) {
    return QStandardItemModel_SetHeaderData((QStandardItemModel*)self, section, orientation, (QVariant*)value, role);
}

/// Allows for overriding the related default method
///
/// ``` QStandardItemModel* self, bool (*slot)(QStandardItemModel*, int, enum Qt__Orientation, QVariant*, int) ```
void q_standarditemmodel_on_set_header_data(void* self, bool (*slot)(void*, int, int64_t, void*, int)) {
    QStandardItemModel_OnSetHeaderData((QStandardItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStandardItemModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role ```
bool q_standarditemmodel_qbase_set_header_data(void* self, int section, int64_t orientation, void* value, int role) {
    return QStandardItemModel_QBaseSetHeaderData((QStandardItemModel*)self, section, orientation, (QVariant*)value, role);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#insertRows)
///
/// ``` QStandardItemModel* self, int row, int count, QModelIndex* parent ```
bool q_standarditemmodel_insert_rows(void* self, int row, int count, void* parent) {
    return QStandardItemModel_InsertRows((QStandardItemModel*)self, row, count, (QModelIndex*)parent);
}

/// Allows for overriding the related default method
///
/// ``` QStandardItemModel* self, bool (*slot)(QStandardItemModel*, int, int, QModelIndex*) ```
void q_standarditemmodel_on_insert_rows(void* self, bool (*slot)(void*, int, int, void*)) {
    QStandardItemModel_OnInsertRows((QStandardItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStandardItemModel* self, int row, int count, QModelIndex* parent ```
bool q_standarditemmodel_qbase_insert_rows(void* self, int row, int count, void* parent) {
    return QStandardItemModel_QBaseInsertRows((QStandardItemModel*)self, row, count, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#insertColumns)
///
/// ``` QStandardItemModel* self, int column, int count, QModelIndex* parent ```
bool q_standarditemmodel_insert_columns(void* self, int column, int count, void* parent) {
    return QStandardItemModel_InsertColumns((QStandardItemModel*)self, column, count, (QModelIndex*)parent);
}

/// Allows for overriding the related default method
///
/// ``` QStandardItemModel* self, bool (*slot)(QStandardItemModel*, int, int, QModelIndex*) ```
void q_standarditemmodel_on_insert_columns(void* self, bool (*slot)(void*, int, int, void*)) {
    QStandardItemModel_OnInsertColumns((QStandardItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStandardItemModel* self, int column, int count, QModelIndex* parent ```
bool q_standarditemmodel_qbase_insert_columns(void* self, int column, int count, void* parent) {
    return QStandardItemModel_QBaseInsertColumns((QStandardItemModel*)self, column, count, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#removeRows)
///
/// ``` QStandardItemModel* self, int row, int count, QModelIndex* parent ```
bool q_standarditemmodel_remove_rows(void* self, int row, int count, void* parent) {
    return QStandardItemModel_RemoveRows((QStandardItemModel*)self, row, count, (QModelIndex*)parent);
}

/// Allows for overriding the related default method
///
/// ``` QStandardItemModel* self, bool (*slot)(QStandardItemModel*, int, int, QModelIndex*) ```
void q_standarditemmodel_on_remove_rows(void* self, bool (*slot)(void*, int, int, void*)) {
    QStandardItemModel_OnRemoveRows((QStandardItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStandardItemModel* self, int row, int count, QModelIndex* parent ```
bool q_standarditemmodel_qbase_remove_rows(void* self, int row, int count, void* parent) {
    return QStandardItemModel_QBaseRemoveRows((QStandardItemModel*)self, row, count, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#removeColumns)
///
/// ``` QStandardItemModel* self, int column, int count, QModelIndex* parent ```
bool q_standarditemmodel_remove_columns(void* self, int column, int count, void* parent) {
    return QStandardItemModel_RemoveColumns((QStandardItemModel*)self, column, count, (QModelIndex*)parent);
}

/// Allows for overriding the related default method
///
/// ``` QStandardItemModel* self, bool (*slot)(QStandardItemModel*, int, int, QModelIndex*) ```
void q_standarditemmodel_on_remove_columns(void* self, bool (*slot)(void*, int, int, void*)) {
    QStandardItemModel_OnRemoveColumns((QStandardItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStandardItemModel* self, int column, int count, QModelIndex* parent ```
bool q_standarditemmodel_qbase_remove_columns(void* self, int column, int count, void* parent) {
    return QStandardItemModel_QBaseRemoveColumns((QStandardItemModel*)self, column, count, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#flags)
///
/// ``` QStandardItemModel* self, QModelIndex* index ```
int64_t q_standarditemmodel_flags(void* self, void* index) {
    return QStandardItemModel_Flags((QStandardItemModel*)self, (QModelIndex*)index);
}

/// Allows for overriding the related default method
///
/// ``` QStandardItemModel* self, int64_t (*slot)(QStandardItemModel*, QModelIndex*) ```
void q_standarditemmodel_on_flags(void* self, int64_t (*slot)(void*, void*)) {
    QStandardItemModel_OnFlags((QStandardItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStandardItemModel* self, QModelIndex* index ```
int64_t q_standarditemmodel_qbase_flags(void* self, void* index) {
    return QStandardItemModel_QBaseFlags((QStandardItemModel*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#supportedDropActions)
///
/// ``` QStandardItemModel* self ```
int64_t q_standarditemmodel_supported_drop_actions(void* self) {
    return QStandardItemModel_SupportedDropActions((QStandardItemModel*)self);
}

/// Allows for overriding the related default method
///
/// ``` QStandardItemModel* self, int64_t (*slot)() ```
void q_standarditemmodel_on_supported_drop_actions(void* self, int64_t (*slot)()) {
    QStandardItemModel_OnSupportedDropActions((QStandardItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStandardItemModel* self ```
int64_t q_standarditemmodel_qbase_supported_drop_actions(void* self) {
    return QStandardItemModel_QBaseSupportedDropActions((QStandardItemModel*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#itemData)
///
/// ``` QStandardItemModel* self, QModelIndex* index ```
libqt_map /* of int to QVariant* */ q_standarditemmodel_item_data(void* self, void* index) {
    return QStandardItemModel_ItemData((QStandardItemModel*)self, (QModelIndex*)index);
}

/// Allows for overriding the related default method
///
/// ``` QStandardItemModel* self, libqt_map /* of int to QVariant* */ (*slot)(QStandardItemModel*, QModelIndex*) ```
void q_standarditemmodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*slot)(void*, void*)) {
    QStandardItemModel_OnItemData((QStandardItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStandardItemModel* self, QModelIndex* index ```
libqt_map /* of int to QVariant* */ q_standarditemmodel_qbase_item_data(void* self, void* index) {
    return QStandardItemModel_QBaseItemData((QStandardItemModel*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#setItemData)
///
/// ``` QStandardItemModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ roles ```
bool q_standarditemmodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    return QStandardItemModel_SetItemData((QStandardItemModel*)self, (QModelIndex*)index, roles);
}

/// Allows for overriding the related default method
///
/// ``` QStandardItemModel* self, bool (*slot)(QStandardItemModel*, QModelIndex*, libqt_map /* of int to QVariant* */) ```
void q_standarditemmodel_on_set_item_data(void* self, bool (*slot)(void*, void*, libqt_map /* of int to QVariant* */)) {
    QStandardItemModel_OnSetItemData((QStandardItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStandardItemModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ roles ```
bool q_standarditemmodel_qbase_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    return QStandardItemModel_QBaseSetItemData((QStandardItemModel*)self, (QModelIndex*)index, roles);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#clear)
///
/// ``` QStandardItemModel* self ```
void q_standarditemmodel_clear(void* self) {
    QStandardItemModel_Clear((QStandardItemModel*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#sort)
///
/// ``` QStandardItemModel* self, int column, enum Qt__SortOrder order ```
void q_standarditemmodel_sort(void* self, int column, int64_t order) {
    QStandardItemModel_Sort((QStandardItemModel*)self, column, order);
}

/// Allows for overriding the related default method
///
/// ``` QStandardItemModel* self, void (*slot)(QStandardItemModel*, int, enum Qt__SortOrder) ```
void q_standarditemmodel_on_sort(void* self, void (*slot)(void*, int, int64_t)) {
    QStandardItemModel_OnSort((QStandardItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStandardItemModel* self, int column, enum Qt__SortOrder order ```
void q_standarditemmodel_qbase_sort(void* self, int column, int64_t order) {
    QStandardItemModel_QBaseSort((QStandardItemModel*)self, column, order);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#itemFromIndex)
///
/// ``` QStandardItemModel* self, QModelIndex* index ```
QStandardItem* q_standarditemmodel_item_from_index(void* self, void* index) {
    return QStandardItemModel_ItemFromIndex((QStandardItemModel*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#indexFromItem)
///
/// ``` QStandardItemModel* self, QStandardItem* item ```
QModelIndex* q_standarditemmodel_index_from_item(void* self, void* item) {
    return QStandardItemModel_IndexFromItem((QStandardItemModel*)self, (QStandardItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#item)
///
/// ``` QStandardItemModel* self, int row ```
QStandardItem* q_standarditemmodel_item(void* self, int row) {
    return QStandardItemModel_Item((QStandardItemModel*)self, row);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#setItem)
///
/// ``` QStandardItemModel* self, int row, int column, QStandardItem* item ```
void q_standarditemmodel_set_item(void* self, int row, int column, void* item) {
    QStandardItemModel_SetItem((QStandardItemModel*)self, row, column, (QStandardItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#setItem)
///
/// ``` QStandardItemModel* self, int row, QStandardItem* item ```
void q_standarditemmodel_set_item2(void* self, int row, void* item) {
    QStandardItemModel_SetItem2((QStandardItemModel*)self, row, (QStandardItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#invisibleRootItem)
///
/// ``` QStandardItemModel* self ```
QStandardItem* q_standarditemmodel_invisible_root_item(void* self) {
    return QStandardItemModel_InvisibleRootItem((QStandardItemModel*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#horizontalHeaderItem)
///
/// ``` QStandardItemModel* self, int column ```
QStandardItem* q_standarditemmodel_horizontal_header_item(void* self, int column) {
    return QStandardItemModel_HorizontalHeaderItem((QStandardItemModel*)self, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#setHorizontalHeaderItem)
///
/// ``` QStandardItemModel* self, int column, QStandardItem* item ```
void q_standarditemmodel_set_horizontal_header_item(void* self, int column, void* item) {
    QStandardItemModel_SetHorizontalHeaderItem((QStandardItemModel*)self, column, (QStandardItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#verticalHeaderItem)
///
/// ``` QStandardItemModel* self, int row ```
QStandardItem* q_standarditemmodel_vertical_header_item(void* self, int row) {
    return QStandardItemModel_VerticalHeaderItem((QStandardItemModel*)self, row);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#setVerticalHeaderItem)
///
/// ``` QStandardItemModel* self, int row, QStandardItem* item ```
void q_standarditemmodel_set_vertical_header_item(void* self, int row, void* item) {
    QStandardItemModel_SetVerticalHeaderItem((QStandardItemModel*)self, row, (QStandardItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#setHorizontalHeaderLabels)
///
/// ``` QStandardItemModel* self, const char* labels[] ```
void q_standarditemmodel_set_horizontal_header_labels(void* self, const char* labels[]) {
    size_t labels_len = libqt_strv_length(labels);
    libqt_string* labels_qstr = malloc(labels_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < labels_len; ++_i) {
        labels_qstr[_i] = qstring(labels[_i]);
    }
    libqt_list labels_list = qstrlist(labels_qstr, labels_len);
    QStandardItemModel_SetHorizontalHeaderLabels((QStandardItemModel*)self, labels_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#setVerticalHeaderLabels)
///
/// ``` QStandardItemModel* self, const char* labels[] ```
void q_standarditemmodel_set_vertical_header_labels(void* self, const char* labels[]) {
    size_t labels_len = libqt_strv_length(labels);
    libqt_string* labels_qstr = malloc(labels_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < labels_len; ++_i) {
        labels_qstr[_i] = qstring(labels[_i]);
    }
    libqt_list labels_list = qstrlist(labels_qstr, labels_len);
    QStandardItemModel_SetVerticalHeaderLabels((QStandardItemModel*)self, labels_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#setRowCount)
///
/// ``` QStandardItemModel* self, int rows ```
void q_standarditemmodel_set_row_count(void* self, int rows) {
    QStandardItemModel_SetRowCount((QStandardItemModel*)self, rows);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#setColumnCount)
///
/// ``` QStandardItemModel* self, int columns ```
void q_standarditemmodel_set_column_count(void* self, int columns) {
    QStandardItemModel_SetColumnCount((QStandardItemModel*)self, columns);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#appendRow)
///
/// ``` QStandardItemModel* self, QStandardItem* items[] ```
void q_standarditemmodel_append_row(void* self, void* items[]) {
    QStandardItem** items_arr = (QStandardItem**)items;
    size_t items_len = 0;
    while (items_arr[items_len] != NULL) {
        items_len++;
    }
    libqt_list items_list = {
        .len = items_len,
        .data = {(QStandardItem*)items},
    };
    QStandardItemModel_AppendRow((QStandardItemModel*)self, items_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#appendColumn)
///
/// ``` QStandardItemModel* self, QStandardItem* items[] ```
void q_standarditemmodel_append_column(void* self, void* items[]) {
    QStandardItem** items_arr = (QStandardItem**)items;
    size_t items_len = 0;
    while (items_arr[items_len] != NULL) {
        items_len++;
    }
    libqt_list items_list = {
        .len = items_len,
        .data = {(QStandardItem*)items},
    };
    QStandardItemModel_AppendColumn((QStandardItemModel*)self, items_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#appendRow)
///
/// ``` QStandardItemModel* self, QStandardItem* item ```
void q_standarditemmodel_append_row_with_item(void* self, void* item) {
    QStandardItemModel_AppendRowWithItem((QStandardItemModel*)self, (QStandardItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#insertRow)
///
/// ``` QStandardItemModel* self, int row, QStandardItem* items[] ```
void q_standarditemmodel_insert_row(void* self, int row, void* items[]) {
    QStandardItem** items_arr = (QStandardItem**)items;
    size_t items_len = 0;
    while (items_arr[items_len] != NULL) {
        items_len++;
    }
    libqt_list items_list = {
        .len = items_len,
        .data = {(QStandardItem*)items},
    };
    QStandardItemModel_InsertRow((QStandardItemModel*)self, row, items_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#insertColumn)
///
/// ``` QStandardItemModel* self, int column, QStandardItem* items[] ```
void q_standarditemmodel_insert_column(void* self, int column, void* items[]) {
    QStandardItem** items_arr = (QStandardItem**)items;
    size_t items_len = 0;
    while (items_arr[items_len] != NULL) {
        items_len++;
    }
    libqt_list items_list = {
        .len = items_len,
        .data = {(QStandardItem*)items},
    };
    QStandardItemModel_InsertColumn((QStandardItemModel*)self, column, items_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#insertRow)
///
/// ``` QStandardItemModel* self, int row, QStandardItem* item ```
void q_standarditemmodel_insert_row2(void* self, int row, void* item) {
    QStandardItemModel_InsertRow2((QStandardItemModel*)self, row, (QStandardItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#insertRow)
///
/// ``` QStandardItemModel* self, int row ```
bool q_standarditemmodel_insert_row_with_row(void* self, int row) {
    return QStandardItemModel_InsertRowWithRow((QStandardItemModel*)self, row);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#insertColumn)
///
/// ``` QStandardItemModel* self, int column ```
bool q_standarditemmodel_insert_column_with_column(void* self, int column) {
    return QStandardItemModel_InsertColumnWithColumn((QStandardItemModel*)self, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#takeItem)
///
/// ``` QStandardItemModel* self, int row ```
QStandardItem* q_standarditemmodel_take_item(void* self, int row) {
    return QStandardItemModel_TakeItem((QStandardItemModel*)self, row);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#takeRow)
///
/// ``` QStandardItemModel* self, int row ```
libqt_list /* of QStandardItem* */ q_standarditemmodel_take_row(void* self, int row) {
    libqt_list _arr = QStandardItemModel_TakeRow((QStandardItemModel*)self, row);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#takeColumn)
///
/// ``` QStandardItemModel* self, int column ```
libqt_list /* of QStandardItem* */ q_standarditemmodel_take_column(void* self, int column) {
    libqt_list _arr = QStandardItemModel_TakeColumn((QStandardItemModel*)self, column);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#takeHorizontalHeaderItem)
///
/// ``` QStandardItemModel* self, int column ```
QStandardItem* q_standarditemmodel_take_horizontal_header_item(void* self, int column) {
    return QStandardItemModel_TakeHorizontalHeaderItem((QStandardItemModel*)self, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#takeVerticalHeaderItem)
///
/// ``` QStandardItemModel* self, int row ```
QStandardItem* q_standarditemmodel_take_vertical_header_item(void* self, int row) {
    return QStandardItemModel_TakeVerticalHeaderItem((QStandardItemModel*)self, row);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#itemPrototype)
///
/// ``` QStandardItemModel* self ```
QStandardItem* q_standarditemmodel_item_prototype(void* self) {
    return QStandardItemModel_ItemPrototype((QStandardItemModel*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#setItemPrototype)
///
/// ``` QStandardItemModel* self, QStandardItem* item ```
void q_standarditemmodel_set_item_prototype(void* self, void* item) {
    QStandardItemModel_SetItemPrototype((QStandardItemModel*)self, (QStandardItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#findItems)
///
/// ``` QStandardItemModel* self, const char* text ```
libqt_list /* of QStandardItem* */ q_standarditemmodel_find_items(void* self, const char* text) {
    libqt_list _arr = QStandardItemModel_FindItems((QStandardItemModel*)self, qstring(text));
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#sortRole)
///
/// ``` QStandardItemModel* self ```
int32_t q_standarditemmodel_sort_role(void* self) {
    return QStandardItemModel_SortRole((QStandardItemModel*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#setSortRole)
///
/// ``` QStandardItemModel* self, int role ```
void q_standarditemmodel_set_sort_role(void* self, int role) {
    QStandardItemModel_SetSortRole((QStandardItemModel*)self, role);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#mimeTypes)
///
/// ``` QStandardItemModel* self ```
const char** q_standarditemmodel_mime_types(void* self) {
    libqt_list _arr = QStandardItemModel_MimeTypes((QStandardItemModel*)self);
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

/// Allows for overriding the related default method
///
/// ``` QStandardItemModel* self, const char** (*slot)() ```
void q_standarditemmodel_on_mime_types(void* self, const char** (*slot)()) {
    QStandardItemModel_OnMimeTypes((QStandardItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStandardItemModel* self ```
const char** q_standarditemmodel_qbase_mime_types(void* self) {
    libqt_list _arr = QStandardItemModel_QBaseMimeTypes((QStandardItemModel*)self);
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

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#mimeData)
///
/// ``` QStandardItemModel* self, QModelIndex* indexes[] ```
QMimeData* q_standarditemmodel_mime_data(void* self, void* indexes[]) {
    QModelIndex** indexes_arr = (QModelIndex**)indexes;
    size_t indexes_len = 0;
    while (indexes_arr[indexes_len] != NULL) {
        indexes_len++;
    }
    libqt_list indexes_list = {
        .len = indexes_len,
        .data = {(QModelIndex*)indexes},
    };
    return QStandardItemModel_MimeData((QStandardItemModel*)self, indexes_list);
}

/// Allows for overriding the related default method
///
/// ``` QStandardItemModel* self, QMimeData* (*slot)(QStandardItemModel*, QModelIndex*[]) ```
void q_standarditemmodel_on_mime_data(void* self, QMimeData* (*slot)(void*, void*)) {
    QStandardItemModel_OnMimeData((QStandardItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStandardItemModel* self, QModelIndex* indexes[] ```
QMimeData* q_standarditemmodel_qbase_mime_data(void* self, void* indexes[]) {
    QModelIndex** indexes_arr = (QModelIndex**)indexes;
    size_t indexes_len = 0;
    while (indexes_arr[indexes_len] != NULL) {
        indexes_len++;
    }
    libqt_list indexes_list = {
        .len = indexes_len,
        .data = {(QModelIndex*)indexes},
    };
    return QStandardItemModel_QBaseMimeData((QStandardItemModel*)self, indexes_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#dropMimeData)
///
/// ``` QStandardItemModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_standarditemmodel_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent) {
    return QStandardItemModel_DropMimeData((QStandardItemModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

/// Allows for overriding the related default method
///
/// ``` QStandardItemModel* self, bool (*slot)(QStandardItemModel*, QMimeData*, enum Qt__DropAction, int, int, QModelIndex*) ```
void q_standarditemmodel_on_drop_mime_data(void* self, bool (*slot)(void*, void*, int64_t, int, int, void*)) {
    QStandardItemModel_OnDropMimeData((QStandardItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStandardItemModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_standarditemmodel_qbase_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent) {
    return QStandardItemModel_QBaseDropMimeData((QStandardItemModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#itemChanged)
///
/// ``` QStandardItemModel* self, QStandardItem* item ```
void q_standarditemmodel_item_changed(void* self, void* item) {
    QStandardItemModel_ItemChanged((QStandardItemModel*)self, (QStandardItem*)item);
}

/// ``` QStandardItemModel* self, void (*slot)(QStandardItemModel*, QStandardItem*) ```
void q_standarditemmodel_on_item_changed(void* self, void (*slot)(void*, void*)) {
    QStandardItemModel_Connect_ItemChanged((QStandardItemModel*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_standarditemmodel_tr2(const char* s, const char* c) {
    libqt_string _str = QStandardItemModel_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_standarditemmodel_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QStandardItemModel_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#item)
///
/// ``` QStandardItemModel* self, int row, int column ```
QStandardItem* q_standarditemmodel_item2(void* self, int row, int column) {
    return QStandardItemModel_Item2((QStandardItemModel*)self, row, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#insertRow)
///
/// ``` QStandardItemModel* self, int row, QModelIndex* parent ```
bool q_standarditemmodel_insert_row22(void* self, int row, void* parent) {
    return QStandardItemModel_InsertRow22((QStandardItemModel*)self, row, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#insertColumn)
///
/// ``` QStandardItemModel* self, int column, QModelIndex* parent ```
bool q_standarditemmodel_insert_column2(void* self, int column, void* parent) {
    return QStandardItemModel_InsertColumn2((QStandardItemModel*)self, column, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#takeItem)
///
/// ``` QStandardItemModel* self, int row, int column ```
QStandardItem* q_standarditemmodel_take_item2(void* self, int row, int column) {
    return QStandardItemModel_TakeItem2((QStandardItemModel*)self, row, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#findItems)
///
/// ``` QStandardItemModel* self, const char* text, int flags ```
libqt_list /* of QStandardItem* */ q_standarditemmodel_find_items2(void* self, const char* text, int64_t flags) {
    libqt_list _arr = QStandardItemModel_FindItems2((QStandardItemModel*)self, qstring(text), flags);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#findItems)
///
/// ``` QStandardItemModel* self, const char* text, int flags, int column ```
libqt_list /* of QStandardItem* */ q_standarditemmodel_find_items3(void* self, const char* text, int64_t flags, int column) {
    libqt_list _arr = QStandardItemModel_FindItems3((QStandardItemModel*)self, qstring(text), flags, column);
    return _arr;
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// ``` QStandardItemModel* self, int row, int column ```
bool q_standarditemmodel_has_index(void* self, int row, int column) {
    return QAbstractItemModel_HasIndex((QAbstractItemModel*)self, row, column);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// ``` QStandardItemModel* self, int row ```
bool q_standarditemmodel_remove_row(void* self, int row) {
    return QAbstractItemModel_RemoveRow((QAbstractItemModel*)self, row);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// ``` QStandardItemModel* self, int column ```
bool q_standarditemmodel_remove_column(void* self, int column) {
    return QAbstractItemModel_RemoveColumn((QAbstractItemModel*)self, column);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
///
/// ``` QStandardItemModel* self, QModelIndex* sourceParent, int sourceRow, QModelIndex* destinationParent, int destinationChild ```
bool q_standarditemmodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveRow((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceRow, (QModelIndex*)destinationParent, destinationChild);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
///
/// ``` QStandardItemModel* self, QModelIndex* sourceParent, int sourceColumn, QModelIndex* destinationParent, int destinationChild ```
bool q_standarditemmodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveColumn((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceColumn, (QModelIndex*)destinationParent, destinationChild);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// ``` QStandardItemModel* self, QModelIndex* index ```
bool q_standarditemmodel_check_index(void* self, void* index) {
    return QAbstractItemModel_CheckIndex((QAbstractItemModel*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// ``` QStandardItemModel* self, QModelIndex* topLeft, QModelIndex* bottomRight ```
void q_standarditemmodel_data_changed(void* self, void* topLeft, void* bottomRight) {
    QAbstractItemModel_DataChanged((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight);
}

/// Inherited from QAbstractItemModel
///
/// ``` QStandardItemModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, QModelIndex*) ```
void q_standarditemmodel_on_data_changed(void* self, void (*slot)(void*, void*, void*)) {
    QAbstractItemModel_Connect_DataChanged((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// ``` QStandardItemModel* self, enum Qt__Orientation orientation, int first, int last ```
void q_standarditemmodel_header_data_changed(void* self, int64_t orientation, int first, int last) {
    QAbstractItemModel_HeaderDataChanged((QAbstractItemModel*)self, orientation, first, last);
}

/// Inherited from QAbstractItemModel
///
/// ``` QStandardItemModel* self, void (*slot)(QAbstractItemModel*, enum Qt__Orientation, int, int) ```
void q_standarditemmodel_on_header_data_changed(void* self, void (*slot)(void*, int64_t, int, int)) {
    QAbstractItemModel_Connect_HeaderDataChanged((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QStandardItemModel* self ```
void q_standarditemmodel_layout_changed(void* self) {
    QAbstractItemModel_LayoutChanged((QAbstractItemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// ``` QStandardItemModel* self, void (*slot)(QAbstractItemModel*) ```
void q_standarditemmodel_on_layout_changed(void* self, void (*slot)(void*)) {
    QAbstractItemModel_Connect_LayoutChanged((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QStandardItemModel* self ```
void q_standarditemmodel_layout_about_to_be_changed(void* self) {
    QAbstractItemModel_LayoutAboutToBeChanged((QAbstractItemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// ``` QStandardItemModel* self, void (*slot)(QAbstractItemModel*) ```
void q_standarditemmodel_on_layout_about_to_be_changed(void* self, void (*slot)(void*)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// ``` QStandardItemModel* self, int row, int column, QModelIndex* parent ```
bool q_standarditemmodel_has_index3(void* self, int row, int column, void* parent) {
    return QAbstractItemModel_HasIndex3((QAbstractItemModel*)self, row, column, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// ``` QStandardItemModel* self, int row, QModelIndex* parent ```
bool q_standarditemmodel_remove_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_RemoveRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// ``` QStandardItemModel* self, int column, QModelIndex* parent ```
bool q_standarditemmodel_remove_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_RemoveColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// ``` QStandardItemModel* self, QModelIndex* index, int options ```
bool q_standarditemmodel_check_index2(void* self, void* index, int64_t options) {
    return QAbstractItemModel_CheckIndex2((QAbstractItemModel*)self, (QModelIndex*)index, options);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// ``` QStandardItemModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, int* roles[] ```
void q_standarditemmodel_data_changed3(void* self, void* topLeft, void* bottomRight, int* roles[]) {
    size_t roles_len = 0;
    while (roles[roles_len] != NULL) {
        roles_len++;
    }
    libqt_list roles_list = {
        .len = roles_len,
        .data = {(int*)roles},
    };
    QAbstractItemModel_DataChanged3((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles_list);
}

/// Inherited from QAbstractItemModel
///
/// ``` QStandardItemModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, QModelIndex*, int*[]) ```
void q_standarditemmodel_on_data_changed3(void* self, void (*slot)(void*, void*, void*, int*)) {
    QAbstractItemModel_Connect_DataChanged3((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QStandardItemModel* self, QPersistentModelIndex* parents[] ```
void q_standarditemmodel_layout_changed1(void* self, void* parents[]) {
    QPersistentModelIndex** parents_arr = (QPersistentModelIndex**)parents;
    size_t parents_len = 0;
    while (parents_arr[parents_len] != NULL) {
        parents_len++;
    }
    libqt_list parents_list = {
        .len = parents_len,
        .data = {(QPersistentModelIndex*)parents},
    };
    QAbstractItemModel_LayoutChanged1((QAbstractItemModel*)self, parents_list);
}

/// Inherited from QAbstractItemModel
///
/// ``` QStandardItemModel* self, void (*slot)(QAbstractItemModel*, QPersistentModelIndex*[]) ```
void q_standarditemmodel_on_layout_changed1(void* self, void (*slot)(void*, void*)) {
    QAbstractItemModel_Connect_LayoutChanged1((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QStandardItemModel* self, QPersistentModelIndex* parents[], enum QAbstractItemModel__LayoutChangeHint hint ```
void q_standarditemmodel_layout_changed2(void* self, void* parents[], int64_t hint) {
    QPersistentModelIndex** parents_arr = (QPersistentModelIndex**)parents;
    size_t parents_len = 0;
    while (parents_arr[parents_len] != NULL) {
        parents_len++;
    }
    libqt_list parents_list = {
        .len = parents_len,
        .data = {(QPersistentModelIndex*)parents},
    };
    QAbstractItemModel_LayoutChanged2((QAbstractItemModel*)self, parents_list, hint);
}

/// Inherited from QAbstractItemModel
///
/// ``` QStandardItemModel* self, void (*slot)(QAbstractItemModel*, QPersistentModelIndex*[], enum QAbstractItemModel__LayoutChangeHint) ```
void q_standarditemmodel_on_layout_changed2(void* self, void (*slot)(void*, void*, int64_t)) {
    QAbstractItemModel_Connect_LayoutChanged2((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QStandardItemModel* self, QPersistentModelIndex* parents[] ```
void q_standarditemmodel_layout_about_to_be_changed1(void* self, void* parents[]) {
    QPersistentModelIndex** parents_arr = (QPersistentModelIndex**)parents;
    size_t parents_len = 0;
    while (parents_arr[parents_len] != NULL) {
        parents_len++;
    }
    libqt_list parents_list = {
        .len = parents_len,
        .data = {(QPersistentModelIndex*)parents},
    };
    QAbstractItemModel_LayoutAboutToBeChanged1((QAbstractItemModel*)self, parents_list);
}

/// Inherited from QAbstractItemModel
///
/// ``` QStandardItemModel* self, void (*slot)(QAbstractItemModel*, QPersistentModelIndex*[]) ```
void q_standarditemmodel_on_layout_about_to_be_changed1(void* self, void (*slot)(void*, void*)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged1((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QStandardItemModel* self, QPersistentModelIndex* parents[], enum QAbstractItemModel__LayoutChangeHint hint ```
void q_standarditemmodel_layout_about_to_be_changed2(void* self, void* parents[], int64_t hint) {
    QPersistentModelIndex** parents_arr = (QPersistentModelIndex**)parents;
    size_t parents_len = 0;
    while (parents_arr[parents_len] != NULL) {
        parents_len++;
    }
    libqt_list parents_list = {
        .len = parents_len,
        .data = {(QPersistentModelIndex*)parents},
    };
    QAbstractItemModel_LayoutAboutToBeChanged2((QAbstractItemModel*)self, parents_list, hint);
}

/// Inherited from QAbstractItemModel
///
/// ``` QStandardItemModel* self, void (*slot)(QAbstractItemModel*, QPersistentModelIndex*[], enum QAbstractItemModel__LayoutChangeHint) ```
void q_standarditemmodel_on_layout_about_to_be_changed2(void* self, void (*slot)(void*, void*, int64_t)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged2((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QStandardItemModel* self ```
const char* q_standarditemmodel_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QStandardItemModel* self, const char* name ```
void q_standarditemmodel_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QStandardItemModel* self ```
bool q_standarditemmodel_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QStandardItemModel* self ```
bool q_standarditemmodel_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QStandardItemModel* self ```
bool q_standarditemmodel_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QStandardItemModel* self ```
bool q_standarditemmodel_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QStandardItemModel* self, bool b ```
bool q_standarditemmodel_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QStandardItemModel* self ```
QThread* q_standarditemmodel_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QStandardItemModel* self, QThread* thread ```
void q_standarditemmodel_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QStandardItemModel* self, int interval ```
int32_t q_standarditemmodel_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QStandardItemModel* self, int id ```
void q_standarditemmodel_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QStandardItemModel* self ```
libqt_list /* of QObject* */ q_standarditemmodel_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QStandardItemModel* self, QObject* parent ```
void q_standarditemmodel_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QStandardItemModel* self, QObject* filterObj ```
void q_standarditemmodel_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QStandardItemModel* self, QObject* obj ```
void q_standarditemmodel_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_standarditemmodel_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QStandardItemModel* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_standarditemmodel_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_standarditemmodel_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_standarditemmodel_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QStandardItemModel* self ```
void q_standarditemmodel_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QStandardItemModel* self ```
void q_standarditemmodel_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QStandardItemModel* self, const char* name, QVariant* value ```
bool q_standarditemmodel_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QStandardItemModel* self, const char* name ```
QVariant* q_standarditemmodel_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QStandardItemModel* self ```
const char** q_standarditemmodel_dynamic_property_names(void* self) {
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
/// ``` QStandardItemModel* self ```
QBindingStorage* q_standarditemmodel_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QStandardItemModel* self ```
QBindingStorage* q_standarditemmodel_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QStandardItemModel* self ```
void q_standarditemmodel_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QStandardItemModel* self, void (*slot)(QObject*) ```
void q_standarditemmodel_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QStandardItemModel* self, const char* classname ```
bool q_standarditemmodel_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QStandardItemModel* self ```
void q_standarditemmodel_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QStandardItemModel* self, int interval, enum Qt__TimerType timerType ```
int32_t q_standarditemmodel_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_standarditemmodel_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QStandardItemModel* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_standarditemmodel_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QStandardItemModel* self, QObject* param1 ```
void q_standarditemmodel_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QStandardItemModel* self, void (*slot)(QObject*, QObject*) ```
void q_standarditemmodel_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#sibling)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self, int row, int column, QModelIndex* idx ```
QModelIndex* q_standarditemmodel_sibling(void* self, int row, int column, void* idx) {
    return QStandardItemModel_Sibling((QStandardItemModel*)self, row, column, (QModelIndex*)idx);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self, int row, int column, QModelIndex* idx ```
QModelIndex* q_standarditemmodel_qbase_sibling(void* self, int row, int column, void* idx) {
    return QStandardItemModel_QBaseSibling((QStandardItemModel*)self, row, column, (QModelIndex*)idx);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* (*slot)(QStandardItemModel*, int, int, QModelIndex*) ```
void q_standarditemmodel_on_sibling(void* self, QModelIndex* (*slot)(void*, int, int, void*)) {
    QStandardItemModel_OnSibling((QStandardItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_standarditemmodel_can_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent) {
    return QStandardItemModel_CanDropMimeData((QStandardItemModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_standarditemmodel_qbase_can_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent) {
    return QStandardItemModel_QBaseCanDropMimeData((QStandardItemModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, bool (*slot)(QStandardItemModel*, QMimeData*, enum Qt__DropAction, int, int, QModelIndex*) ```
void q_standarditemmodel_on_can_drop_mime_data(void* self, bool (*slot)(void*, void*, int64_t, int, int, void*)) {
    QStandardItemModel_OnCanDropMimeData((QStandardItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self ```
int64_t q_standarditemmodel_supported_drag_actions(void* self) {
    return QStandardItemModel_SupportedDragActions((QStandardItemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self ```
int64_t q_standarditemmodel_qbase_supported_drag_actions(void* self) {
    return QStandardItemModel_QBaseSupportedDragActions((QStandardItemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, int64_t (*slot)() ```
void q_standarditemmodel_on_supported_drag_actions(void* self, int64_t (*slot)()) {
    QStandardItemModel_OnSupportedDragActions((QStandardItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_standarditemmodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return QStandardItemModel_MoveRows((QStandardItemModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_standarditemmodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return QStandardItemModel_QBaseMoveRows((QStandardItemModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, bool (*slot)(QStandardItemModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_standarditemmodel_on_move_rows(void* self, bool (*slot)(void*, void*, int, int, void*, int)) {
    QStandardItemModel_OnMoveRows((QStandardItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_standarditemmodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return QStandardItemModel_MoveColumns((QStandardItemModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_standarditemmodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return QStandardItemModel_QBaseMoveColumns((QStandardItemModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, bool (*slot)(QStandardItemModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_standarditemmodel_on_move_columns(void* self, bool (*slot)(void*, void*, int, int, void*, int)) {
    QStandardItemModel_OnMoveColumns((QStandardItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* parent ```
void q_standarditemmodel_fetch_more(void* self, void* parent) {
    QStandardItemModel_FetchMore((QStandardItemModel*)self, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* parent ```
void q_standarditemmodel_qbase_fetch_more(void* self, void* parent) {
    QStandardItemModel_QBaseFetchMore((QStandardItemModel*)self, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, void (*slot)(QStandardItemModel*, QModelIndex*) ```
void q_standarditemmodel_on_fetch_more(void* self, void (*slot)(void*, void*)) {
    QStandardItemModel_OnFetchMore((QStandardItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* parent ```
bool q_standarditemmodel_can_fetch_more(void* self, void* parent) {
    return QStandardItemModel_CanFetchMore((QStandardItemModel*)self, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* parent ```
bool q_standarditemmodel_qbase_can_fetch_more(void* self, void* parent) {
    return QStandardItemModel_QBaseCanFetchMore((QStandardItemModel*)self, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, bool (*slot)(QStandardItemModel*, QModelIndex*) ```
void q_standarditemmodel_on_can_fetch_more(void* self, bool (*slot)(void*, void*)) {
    QStandardItemModel_OnCanFetchMore((QStandardItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* index ```
QModelIndex* q_standarditemmodel_buddy(void* self, void* index) {
    return QStandardItemModel_Buddy((QStandardItemModel*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* index ```
QModelIndex* q_standarditemmodel_qbase_buddy(void* self, void* index) {
    return QStandardItemModel_QBaseBuddy((QStandardItemModel*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* (*slot)(QStandardItemModel*, QModelIndex*) ```
void q_standarditemmodel_on_buddy(void* self, QModelIndex* (*slot)(void*, void*)) {
    QStandardItemModel_OnBuddy((QStandardItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags ```
libqt_list /* of QModelIndex* */ q_standarditemmodel_match(void* self, void* start, int role, void* value, int hits, int64_t flags) {
    libqt_list _arr = QStandardItemModel_Match((QStandardItemModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags ```
libqt_list /* of QModelIndex* */ q_standarditemmodel_qbase_match(void* self, void* start, int role, void* value, int hits, int64_t flags) {
    libqt_list _arr = QStandardItemModel_QBaseMatch((QStandardItemModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, libqt_list /* of QModelIndex* */ (*slot)(QStandardItemModel*, QModelIndex*, int, QVariant*, int, int) ```
void q_standarditemmodel_on_match(void* self, libqt_list /* of QModelIndex* */ (*slot)(void*, void*, int, void*, int, int64_t)) {
    QStandardItemModel_OnMatch((QStandardItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* index ```
QSize* q_standarditemmodel_span(void* self, void* index) {
    return QStandardItemModel_Span((QStandardItemModel*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* index ```
QSize* q_standarditemmodel_qbase_span(void* self, void* index) {
    return QStandardItemModel_QBaseSpan((QStandardItemModel*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, QSize* (*slot)(QStandardItemModel*, QModelIndex*) ```
void q_standarditemmodel_on_span(void* self, QSize* (*slot)(void*, void*)) {
    QStandardItemModel_OnSpan((QStandardItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self ```
bool q_standarditemmodel_submit(void* self) {
    return QStandardItemModel_Submit((QStandardItemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self ```
bool q_standarditemmodel_qbase_submit(void* self) {
    return QStandardItemModel_QBaseSubmit((QStandardItemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, bool (*slot)() ```
void q_standarditemmodel_on_submit(void* self, bool (*slot)()) {
    QStandardItemModel_OnSubmit((QStandardItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self ```
void q_standarditemmodel_revert(void* self) {
    QStandardItemModel_Revert((QStandardItemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self ```
void q_standarditemmodel_qbase_revert(void* self) {
    QStandardItemModel_QBaseRevert((QStandardItemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, void (*slot)() ```
void q_standarditemmodel_on_revert(void* self, void (*slot)()) {
    QStandardItemModel_OnRevert((QStandardItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self ```
void q_standarditemmodel_reset_internal_data(void* self) {
    QStandardItemModel_ResetInternalData((QStandardItemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self ```
void q_standarditemmodel_qbase_reset_internal_data(void* self) {
    QStandardItemModel_QBaseResetInternalData((QStandardItemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, void (*slot)() ```
void q_standarditemmodel_on_reset_internal_data(void* self, void (*slot)()) {
    QStandardItemModel_OnResetInternalData((QStandardItemModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self, QEvent* event ```
bool q_standarditemmodel_event(void* self, void* event) {
    return QStandardItemModel_Event((QStandardItemModel*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self, QEvent* event ```
bool q_standarditemmodel_qbase_event(void* self, void* event) {
    return QStandardItemModel_QBaseEvent((QStandardItemModel*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, bool (*slot)(QStandardItemModel*, QEvent*) ```
void q_standarditemmodel_on_event(void* self, bool (*slot)(void*, void*)) {
    QStandardItemModel_OnEvent((QStandardItemModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self, QObject* watched, QEvent* event ```
bool q_standarditemmodel_event_filter(void* self, void* watched, void* event) {
    return QStandardItemModel_EventFilter((QStandardItemModel*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self, QObject* watched, QEvent* event ```
bool q_standarditemmodel_qbase_event_filter(void* self, void* watched, void* event) {
    return QStandardItemModel_QBaseEventFilter((QStandardItemModel*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, bool (*slot)(QStandardItemModel*, QObject*, QEvent*) ```
void q_standarditemmodel_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QStandardItemModel_OnEventFilter((QStandardItemModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self, QTimerEvent* event ```
void q_standarditemmodel_timer_event(void* self, void* event) {
    QStandardItemModel_TimerEvent((QStandardItemModel*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self, QTimerEvent* event ```
void q_standarditemmodel_qbase_timer_event(void* self, void* event) {
    QStandardItemModel_QBaseTimerEvent((QStandardItemModel*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, void (*slot)(QStandardItemModel*, QTimerEvent*) ```
void q_standarditemmodel_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QStandardItemModel_OnTimerEvent((QStandardItemModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self, QChildEvent* event ```
void q_standarditemmodel_child_event(void* self, void* event) {
    QStandardItemModel_ChildEvent((QStandardItemModel*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self, QChildEvent* event ```
void q_standarditemmodel_qbase_child_event(void* self, void* event) {
    QStandardItemModel_QBaseChildEvent((QStandardItemModel*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, void (*slot)(QStandardItemModel*, QChildEvent*) ```
void q_standarditemmodel_on_child_event(void* self, void (*slot)(void*, void*)) {
    QStandardItemModel_OnChildEvent((QStandardItemModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self, QEvent* event ```
void q_standarditemmodel_custom_event(void* self, void* event) {
    QStandardItemModel_CustomEvent((QStandardItemModel*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self, QEvent* event ```
void q_standarditemmodel_qbase_custom_event(void* self, void* event) {
    QStandardItemModel_QBaseCustomEvent((QStandardItemModel*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, void (*slot)(QStandardItemModel*, QEvent*) ```
void q_standarditemmodel_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QStandardItemModel_OnCustomEvent((QStandardItemModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self, QMetaMethod* signal ```
void q_standarditemmodel_connect_notify(void* self, void* signal) {
    QStandardItemModel_ConnectNotify((QStandardItemModel*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self, QMetaMethod* signal ```
void q_standarditemmodel_qbase_connect_notify(void* self, void* signal) {
    QStandardItemModel_QBaseConnectNotify((QStandardItemModel*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, void (*slot)(QStandardItemModel*, QMetaMethod*) ```
void q_standarditemmodel_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QStandardItemModel_OnConnectNotify((QStandardItemModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self, QMetaMethod* signal ```
void q_standarditemmodel_disconnect_notify(void* self, void* signal) {
    QStandardItemModel_DisconnectNotify((QStandardItemModel*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self, QMetaMethod* signal ```
void q_standarditemmodel_qbase_disconnect_notify(void* self, void* signal) {
    QStandardItemModel_QBaseDisconnectNotify((QStandardItemModel*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, void (*slot)(QStandardItemModel*, QMetaMethod*) ```
void q_standarditemmodel_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QStandardItemModel_OnDisconnectNotify((QStandardItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self, int row, int column ```
QModelIndex* q_standarditemmodel_create_index(void* self, int row, int column) {
    return QStandardItemModel_CreateIndex((QStandardItemModel*)self, row, column);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self, int row, int column ```
QModelIndex* q_standarditemmodel_qbase_create_index(void* self, int row, int column) {
    return QStandardItemModel_QBaseCreateIndex((QStandardItemModel*)self, row, column);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* (*slot)(QStandardItemModel*, int, int) ```
void q_standarditemmodel_on_create_index(void* self, QModelIndex* (*slot)(void*, int, int)) {
    QStandardItemModel_OnCreateIndex((QStandardItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* indexes[], QDataStream* stream ```
void q_standarditemmodel_encode_data(void* self, void* indexes[], void* stream) {
    QModelIndex** indexes_arr = (QModelIndex**)indexes;
    size_t indexes_len = 0;
    while (indexes_arr[indexes_len] != NULL) {
        indexes_len++;
    }
    libqt_list indexes_list = {
        .len = indexes_len,
        .data = {(QModelIndex*)indexes},
    };
    QStandardItemModel_EncodeData((QStandardItemModel*)self, indexes_list, (QDataStream*)stream);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* indexes[], QDataStream* stream ```
void q_standarditemmodel_qbase_encode_data(void* self, void* indexes[], void* stream) {
    QModelIndex** indexes_arr = (QModelIndex**)indexes;
    size_t indexes_len = 0;
    while (indexes_arr[indexes_len] != NULL) {
        indexes_len++;
    }
    libqt_list indexes_list = {
        .len = indexes_len,
        .data = {(QModelIndex*)indexes},
    };
    QStandardItemModel_QBaseEncodeData((QStandardItemModel*)self, indexes_list, (QDataStream*)stream);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, void (*slot)(QStandardItemModel*, QModelIndex*[], QDataStream*) ```
void q_standarditemmodel_on_encode_data(void* self, void (*slot)(void*, void*, void*)) {
    QStandardItemModel_OnEncodeData((QStandardItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self, int row, int column, QModelIndex* parent, QDataStream* stream ```
bool q_standarditemmodel_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return QStandardItemModel_DecodeData((QStandardItemModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self, int row, int column, QModelIndex* parent, QDataStream* stream ```
bool q_standarditemmodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return QStandardItemModel_QBaseDecodeData((QStandardItemModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, bool (*slot)(QStandardItemModel*, int, int, QModelIndex*, QDataStream*) ```
void q_standarditemmodel_on_decode_data(void* self, bool (*slot)(void*, int, int, void*, void*)) {
    QStandardItemModel_OnDecodeData((QStandardItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* parent, int first, int last ```
void q_standarditemmodel_begin_insert_rows(void* self, void* parent, int first, int last) {
    QStandardItemModel_BeginInsertRows((QStandardItemModel*)self, (QModelIndex*)parent, first, last);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* parent, int first, int last ```
void q_standarditemmodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last) {
    QStandardItemModel_QBaseBeginInsertRows((QStandardItemModel*)self, (QModelIndex*)parent, first, last);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, void (*slot)(QStandardItemModel*, QModelIndex*, int, int) ```
void q_standarditemmodel_on_begin_insert_rows(void* self, void (*slot)(void*, void*, int, int)) {
    QStandardItemModel_OnBeginInsertRows((QStandardItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self ```
void q_standarditemmodel_end_insert_rows(void* self) {
    QStandardItemModel_EndInsertRows((QStandardItemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self ```
void q_standarditemmodel_qbase_end_insert_rows(void* self) {
    QStandardItemModel_QBaseEndInsertRows((QStandardItemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, void (*slot)() ```
void q_standarditemmodel_on_end_insert_rows(void* self, void (*slot)()) {
    QStandardItemModel_OnEndInsertRows((QStandardItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* parent, int first, int last ```
void q_standarditemmodel_begin_remove_rows(void* self, void* parent, int first, int last) {
    QStandardItemModel_BeginRemoveRows((QStandardItemModel*)self, (QModelIndex*)parent, first, last);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* parent, int first, int last ```
void q_standarditemmodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last) {
    QStandardItemModel_QBaseBeginRemoveRows((QStandardItemModel*)self, (QModelIndex*)parent, first, last);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, void (*slot)(QStandardItemModel*, QModelIndex*, int, int) ```
void q_standarditemmodel_on_begin_remove_rows(void* self, void (*slot)(void*, void*, int, int)) {
    QStandardItemModel_OnBeginRemoveRows((QStandardItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self ```
void q_standarditemmodel_end_remove_rows(void* self) {
    QStandardItemModel_EndRemoveRows((QStandardItemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self ```
void q_standarditemmodel_qbase_end_remove_rows(void* self) {
    QStandardItemModel_QBaseEndRemoveRows((QStandardItemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, void (*slot)() ```
void q_standarditemmodel_on_end_remove_rows(void* self, void (*slot)()) {
    QStandardItemModel_OnEndRemoveRows((QStandardItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow ```
bool q_standarditemmodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return QStandardItemModel_BeginMoveRows((QStandardItemModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow ```
bool q_standarditemmodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return QStandardItemModel_QBaseBeginMoveRows((QStandardItemModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, bool (*slot)(QStandardItemModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_standarditemmodel_on_begin_move_rows(void* self, bool (*slot)(void*, void*, int, int, void*, int)) {
    QStandardItemModel_OnBeginMoveRows((QStandardItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self ```
void q_standarditemmodel_end_move_rows(void* self) {
    QStandardItemModel_EndMoveRows((QStandardItemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self ```
void q_standarditemmodel_qbase_end_move_rows(void* self) {
    QStandardItemModel_QBaseEndMoveRows((QStandardItemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, void (*slot)() ```
void q_standarditemmodel_on_end_move_rows(void* self, void (*slot)()) {
    QStandardItemModel_OnEndMoveRows((QStandardItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* parent, int first, int last ```
void q_standarditemmodel_begin_insert_columns(void* self, void* parent, int first, int last) {
    QStandardItemModel_BeginInsertColumns((QStandardItemModel*)self, (QModelIndex*)parent, first, last);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* parent, int first, int last ```
void q_standarditemmodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last) {
    QStandardItemModel_QBaseBeginInsertColumns((QStandardItemModel*)self, (QModelIndex*)parent, first, last);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, void (*slot)(QStandardItemModel*, QModelIndex*, int, int) ```
void q_standarditemmodel_on_begin_insert_columns(void* self, void (*slot)(void*, void*, int, int)) {
    QStandardItemModel_OnBeginInsertColumns((QStandardItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self ```
void q_standarditemmodel_end_insert_columns(void* self) {
    QStandardItemModel_EndInsertColumns((QStandardItemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self ```
void q_standarditemmodel_qbase_end_insert_columns(void* self) {
    QStandardItemModel_QBaseEndInsertColumns((QStandardItemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, void (*slot)() ```
void q_standarditemmodel_on_end_insert_columns(void* self, void (*slot)()) {
    QStandardItemModel_OnEndInsertColumns((QStandardItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* parent, int first, int last ```
void q_standarditemmodel_begin_remove_columns(void* self, void* parent, int first, int last) {
    QStandardItemModel_BeginRemoveColumns((QStandardItemModel*)self, (QModelIndex*)parent, first, last);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* parent, int first, int last ```
void q_standarditemmodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last) {
    QStandardItemModel_QBaseBeginRemoveColumns((QStandardItemModel*)self, (QModelIndex*)parent, first, last);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, void (*slot)(QStandardItemModel*, QModelIndex*, int, int) ```
void q_standarditemmodel_on_begin_remove_columns(void* self, void (*slot)(void*, void*, int, int)) {
    QStandardItemModel_OnBeginRemoveColumns((QStandardItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self ```
void q_standarditemmodel_end_remove_columns(void* self) {
    QStandardItemModel_EndRemoveColumns((QStandardItemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self ```
void q_standarditemmodel_qbase_end_remove_columns(void* self) {
    QStandardItemModel_QBaseEndRemoveColumns((QStandardItemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, void (*slot)() ```
void q_standarditemmodel_on_end_remove_columns(void* self, void (*slot)()) {
    QStandardItemModel_OnEndRemoveColumns((QStandardItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn ```
bool q_standarditemmodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return QStandardItemModel_BeginMoveColumns((QStandardItemModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn ```
bool q_standarditemmodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return QStandardItemModel_QBaseBeginMoveColumns((QStandardItemModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, bool (*slot)(QStandardItemModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_standarditemmodel_on_begin_move_columns(void* self, bool (*slot)(void*, void*, int, int, void*, int)) {
    QStandardItemModel_OnBeginMoveColumns((QStandardItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self ```
void q_standarditemmodel_end_move_columns(void* self) {
    QStandardItemModel_EndMoveColumns((QStandardItemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self ```
void q_standarditemmodel_qbase_end_move_columns(void* self) {
    QStandardItemModel_QBaseEndMoveColumns((QStandardItemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, void (*slot)() ```
void q_standarditemmodel_on_end_move_columns(void* self, void (*slot)()) {
    QStandardItemModel_OnEndMoveColumns((QStandardItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self ```
void q_standarditemmodel_begin_reset_model(void* self) {
    QStandardItemModel_BeginResetModel((QStandardItemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self ```
void q_standarditemmodel_qbase_begin_reset_model(void* self) {
    QStandardItemModel_QBaseBeginResetModel((QStandardItemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, void (*slot)() ```
void q_standarditemmodel_on_begin_reset_model(void* self, void (*slot)()) {
    QStandardItemModel_OnBeginResetModel((QStandardItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self ```
void q_standarditemmodel_end_reset_model(void* self) {
    QStandardItemModel_EndResetModel((QStandardItemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self ```
void q_standarditemmodel_qbase_end_reset_model(void* self) {
    QStandardItemModel_QBaseEndResetModel((QStandardItemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, void (*slot)() ```
void q_standarditemmodel_on_end_reset_model(void* self, void (*slot)()) {
    QStandardItemModel_OnEndResetModel((QStandardItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* from, QModelIndex* to ```
void q_standarditemmodel_change_persistent_index(void* self, void* from, void* to) {
    QStandardItemModel_ChangePersistentIndex((QStandardItemModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* from, QModelIndex* to ```
void q_standarditemmodel_qbase_change_persistent_index(void* self, void* from, void* to) {
    QStandardItemModel_QBaseChangePersistentIndex((QStandardItemModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, void (*slot)(QStandardItemModel*, QModelIndex*, QModelIndex*) ```
void q_standarditemmodel_on_change_persistent_index(void* self, void (*slot)(void*, void*, void*)) {
    QStandardItemModel_OnChangePersistentIndex((QStandardItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* from[], QModelIndex* to[] ```
void q_standarditemmodel_change_persistent_index_list(void* self, void* from[], void* to[]) {
    QModelIndex** from_arr = (QModelIndex**)from;
    size_t from_len = 0;
    while (from_arr[from_len] != NULL) {
        from_len++;
    }
    libqt_list from_list = {
        .len = from_len,
        .data = {(QModelIndex*)from},
    };
    QModelIndex** to_arr = (QModelIndex**)to;
    size_t to_len = 0;
    while (to_arr[to_len] != NULL) {
        to_len++;
    }
    libqt_list to_list = {
        .len = to_len,
        .data = {(QModelIndex*)to},
    };
    QStandardItemModel_ChangePersistentIndexList((QStandardItemModel*)self, from_list, to_list);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* from[], QModelIndex* to[] ```
void q_standarditemmodel_qbase_change_persistent_index_list(void* self, void* from[], void* to[]) {
    QModelIndex** from_arr = (QModelIndex**)from;
    size_t from_len = 0;
    while (from_arr[from_len] != NULL) {
        from_len++;
    }
    libqt_list from_list = {
        .len = from_len,
        .data = {(QModelIndex*)from},
    };
    QModelIndex** to_arr = (QModelIndex**)to;
    size_t to_len = 0;
    while (to_arr[to_len] != NULL) {
        to_len++;
    }
    libqt_list to_list = {
        .len = to_len,
        .data = {(QModelIndex*)to},
    };
    QStandardItemModel_QBaseChangePersistentIndexList((QStandardItemModel*)self, from_list, to_list);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, void (*slot)(QStandardItemModel*, QModelIndex*[], QModelIndex*[]) ```
void q_standarditemmodel_on_change_persistent_index_list(void* self, void (*slot)(void*, void*, void*)) {
    QStandardItemModel_OnChangePersistentIndexList((QStandardItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self ```
libqt_list /* of QModelIndex* */ q_standarditemmodel_persistent_index_list(void* self) {
    libqt_list _arr = QStandardItemModel_PersistentIndexList((QStandardItemModel*)self);
    return _arr;
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self ```
libqt_list /* of QModelIndex* */ q_standarditemmodel_qbase_persistent_index_list(void* self) {
    libqt_list _arr = QStandardItemModel_QBasePersistentIndexList((QStandardItemModel*)self);
    return _arr;
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, libqt_list /* of QModelIndex* */ (*slot)() ```
void q_standarditemmodel_on_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ (*slot)()) {
    QStandardItemModel_OnPersistentIndexList((QStandardItemModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self ```
QObject* q_standarditemmodel_sender(void* self) {
    return QStandardItemModel_Sender((QStandardItemModel*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self ```
QObject* q_standarditemmodel_qbase_sender(void* self) {
    return QStandardItemModel_QBaseSender((QStandardItemModel*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, QObject* (*slot)() ```
void q_standarditemmodel_on_sender(void* self, QObject* (*slot)()) {
    QStandardItemModel_OnSender((QStandardItemModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self ```
int32_t q_standarditemmodel_sender_signal_index(void* self) {
    return QStandardItemModel_SenderSignalIndex((QStandardItemModel*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self ```
int32_t q_standarditemmodel_qbase_sender_signal_index(void* self) {
    return QStandardItemModel_QBaseSenderSignalIndex((QStandardItemModel*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, int32_t (*slot)() ```
void q_standarditemmodel_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QStandardItemModel_OnSenderSignalIndex((QStandardItemModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self, const char* signal ```
int32_t q_standarditemmodel_receivers(void* self, const char* signal) {
    return QStandardItemModel_Receivers((QStandardItemModel*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self, const char* signal ```
int32_t q_standarditemmodel_qbase_receivers(void* self, const char* signal) {
    return QStandardItemModel_QBaseReceivers((QStandardItemModel*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, int32_t (*slot)(QStandardItemModel*, const char*) ```
void q_standarditemmodel_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QStandardItemModel_OnReceivers((QStandardItemModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self, QMetaMethod* signal ```
bool q_standarditemmodel_is_signal_connected(void* self, void* signal) {
    return QStandardItemModel_IsSignalConnected((QStandardItemModel*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self, QMetaMethod* signal ```
bool q_standarditemmodel_qbase_is_signal_connected(void* self, void* signal) {
    return QStandardItemModel_QBaseIsSignalConnected((QStandardItemModel*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, bool (*slot)(QStandardItemModel*, QMetaMethod*) ```
void q_standarditemmodel_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QStandardItemModel_OnIsSignalConnected((QStandardItemModel*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QStandardItemModel* self ```
void q_standarditemmodel_delete(void* self) {
    QStandardItemModel_Delete((QStandardItemModel*)(self));
}