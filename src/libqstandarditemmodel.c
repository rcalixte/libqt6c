#include "libqabstractitemmodel.hpp"
#include "libqbrush.hpp"
#include "libqcoreevent.hpp"
#include "libqdatastream.hpp"
#include "libqfont.hpp"
#include "libqicon.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqmimedata.hpp"
#include "libqobject.hpp"
#include "libqsize.hpp"
#include "libqvariant.hpp"
#include "libqstandarditemmodel.hpp"
#include "libqstandarditemmodel.h"

QStandardItem* q_standarditem_new() {
    return QStandardItem_new();
}

QStandardItem* q_standarditem_new2(const char* text) {
    return QStandardItem_new2(qstring(text));
}

QStandardItem* q_standarditem_new3(void* icon, const char* text) {
    return QStandardItem_new3((QIcon*)icon, qstring(text));
}

QStandardItem* q_standarditem_new4(int rows) {
    return QStandardItem_new4(rows);
}

QStandardItem* q_standarditem_new5(int rows, int columns) {
    return QStandardItem_new5(rows, columns);
}

QVariant* q_standarditem_data(void* self, int role) {
    return QStandardItem_Data((QStandardItem*)self, role);
}

void q_standarditem_on_data(void* self, QVariant* (*callback)(void*, int)) {
    QStandardItem_OnData((QStandardItem*)self, (intptr_t)callback);
}

QVariant* q_standarditem_qbase_data(void* self, int role) {
    return QStandardItem_QBaseData((QStandardItem*)self, role);
}

void q_standarditem_multi_data(void* self, void* roleDataSpan) {
    QStandardItem_MultiData((QStandardItem*)self, (QModelRoleDataSpan*)roleDataSpan);
}

void q_standarditem_on_multi_data(void* self, void (*callback)(void*, void*)) {
    QStandardItem_OnMultiData((QStandardItem*)self, (intptr_t)callback);
}

void q_standarditem_qbase_multi_data(void* self, void* roleDataSpan) {
    QStandardItem_QBaseMultiData((QStandardItem*)self, (QModelRoleDataSpan*)roleDataSpan);
}

void q_standarditem_set_data(void* self, void* value, int role) {
    QStandardItem_SetData((QStandardItem*)self, (QVariant*)value, role);
}

void q_standarditem_on_set_data(void* self, void (*callback)(void*, void*, int)) {
    QStandardItem_OnSetData((QStandardItem*)self, (intptr_t)callback);
}

void q_standarditem_qbase_set_data(void* self, void* value, int role) {
    QStandardItem_QBaseSetData((QStandardItem*)self, (QVariant*)value, role);
}

void q_standarditem_clear_data(void* self) {
    QStandardItem_ClearData((QStandardItem*)self);
}

const char* q_standarditem_text(void* self) {
    libqt_string _str = QStandardItem_Text((QStandardItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_standarditem_set_text(void* self, const char* text) {
    QStandardItem_SetText((QStandardItem*)self, qstring(text));
}

QIcon* q_standarditem_icon(void* self) {
    return QStandardItem_Icon((QStandardItem*)self);
}

void q_standarditem_set_icon(void* self, void* icon) {
    QStandardItem_SetIcon((QStandardItem*)self, (QIcon*)icon);
}

const char* q_standarditem_tool_tip(void* self) {
    libqt_string _str = QStandardItem_ToolTip((QStandardItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_standarditem_set_tool_tip(void* self, const char* toolTip) {
    QStandardItem_SetToolTip((QStandardItem*)self, qstring(toolTip));
}

const char* q_standarditem_status_tip(void* self) {
    libqt_string _str = QStandardItem_StatusTip((QStandardItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_standarditem_set_status_tip(void* self, const char* statusTip) {
    QStandardItem_SetStatusTip((QStandardItem*)self, qstring(statusTip));
}

const char* q_standarditem_whats_this(void* self) {
    libqt_string _str = QStandardItem_WhatsThis((QStandardItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_standarditem_set_whats_this(void* self, const char* whatsThis) {
    QStandardItem_SetWhatsThis((QStandardItem*)self, qstring(whatsThis));
}

QSize* q_standarditem_size_hint(void* self) {
    return QStandardItem_SizeHint((QStandardItem*)self);
}

void q_standarditem_set_size_hint(void* self, void* sizeHint) {
    QStandardItem_SetSizeHint((QStandardItem*)self, (QSize*)sizeHint);
}

QFont* q_standarditem_font(void* self) {
    return QStandardItem_Font((QStandardItem*)self);
}

void q_standarditem_set_font(void* self, void* font) {
    QStandardItem_SetFont((QStandardItem*)self, (QFont*)font);
}

int32_t q_standarditem_text_alignment(void* self) {
    return QStandardItem_TextAlignment((QStandardItem*)self);
}

void q_standarditem_set_text_alignment(void* self, int32_t textAlignment) {
    QStandardItem_SetTextAlignment((QStandardItem*)self, textAlignment);
}

QBrush* q_standarditem_background(void* self) {
    return QStandardItem_Background((QStandardItem*)self);
}

void q_standarditem_set_background(void* self, void* brush) {
    QStandardItem_SetBackground((QStandardItem*)self, (QBrush*)brush);
}

QBrush* q_standarditem_foreground(void* self) {
    return QStandardItem_Foreground((QStandardItem*)self);
}

void q_standarditem_set_foreground(void* self, void* brush) {
    QStandardItem_SetForeground((QStandardItem*)self, (QBrush*)brush);
}

int32_t q_standarditem_check_state(void* self) {
    return QStandardItem_CheckState((QStandardItem*)self);
}

void q_standarditem_set_check_state(void* self, int32_t checkState) {
    QStandardItem_SetCheckState((QStandardItem*)self, checkState);
}

const char* q_standarditem_accessible_text(void* self) {
    libqt_string _str = QStandardItem_AccessibleText((QStandardItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_standarditem_set_accessible_text(void* self, const char* accessibleText) {
    QStandardItem_SetAccessibleText((QStandardItem*)self, qstring(accessibleText));
}

const char* q_standarditem_accessible_description(void* self) {
    libqt_string _str = QStandardItem_AccessibleDescription((QStandardItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_standarditem_set_accessible_description(void* self, const char* accessibleDescription) {
    QStandardItem_SetAccessibleDescription((QStandardItem*)self, qstring(accessibleDescription));
}

int32_t q_standarditem_flags(void* self) {
    return QStandardItem_Flags((QStandardItem*)self);
}

void q_standarditem_set_flags(void* self, int32_t flags) {
    QStandardItem_SetFlags((QStandardItem*)self, flags);
}

bool q_standarditem_is_enabled(void* self) {
    return QStandardItem_IsEnabled((QStandardItem*)self);
}

void q_standarditem_set_enabled(void* self, bool enabled) {
    QStandardItem_SetEnabled((QStandardItem*)self, enabled);
}

bool q_standarditem_is_editable(void* self) {
    return QStandardItem_IsEditable((QStandardItem*)self);
}

void q_standarditem_set_editable(void* self, bool editable) {
    QStandardItem_SetEditable((QStandardItem*)self, editable);
}

bool q_standarditem_is_selectable(void* self) {
    return QStandardItem_IsSelectable((QStandardItem*)self);
}

void q_standarditem_set_selectable(void* self, bool selectable) {
    QStandardItem_SetSelectable((QStandardItem*)self, selectable);
}

bool q_standarditem_is_checkable(void* self) {
    return QStandardItem_IsCheckable((QStandardItem*)self);
}

void q_standarditem_set_checkable(void* self, bool checkable) {
    QStandardItem_SetCheckable((QStandardItem*)self, checkable);
}

bool q_standarditem_is_auto_tristate(void* self) {
    return QStandardItem_IsAutoTristate((QStandardItem*)self);
}

void q_standarditem_set_auto_tristate(void* self, bool tristate) {
    QStandardItem_SetAutoTristate((QStandardItem*)self, tristate);
}

bool q_standarditem_is_user_tristate(void* self) {
    return QStandardItem_IsUserTristate((QStandardItem*)self);
}

void q_standarditem_set_user_tristate(void* self, bool tristate) {
    QStandardItem_SetUserTristate((QStandardItem*)self, tristate);
}

bool q_standarditem_is_drag_enabled(void* self) {
    return QStandardItem_IsDragEnabled((QStandardItem*)self);
}

void q_standarditem_set_drag_enabled(void* self, bool dragEnabled) {
    QStandardItem_SetDragEnabled((QStandardItem*)self, dragEnabled);
}

bool q_standarditem_is_drop_enabled(void* self) {
    return QStandardItem_IsDropEnabled((QStandardItem*)self);
}

void q_standarditem_set_drop_enabled(void* self, bool dropEnabled) {
    QStandardItem_SetDropEnabled((QStandardItem*)self, dropEnabled);
}

QStandardItem* q_standarditem_parent(void* self) {
    return QStandardItem_Parent((QStandardItem*)self);
}

int32_t q_standarditem_row(void* self) {
    return QStandardItem_Row((QStandardItem*)self);
}

int32_t q_standarditem_column(void* self) {
    return QStandardItem_Column((QStandardItem*)self);
}

QModelIndex* q_standarditem_index(void* self) {
    return QStandardItem_Index((QStandardItem*)self);
}

QStandardItemModel* q_standarditem_model(void* self) {
    return QStandardItem_Model((QStandardItem*)self);
}

int32_t q_standarditem_row_count(void* self) {
    return QStandardItem_RowCount((QStandardItem*)self);
}

void q_standarditem_set_row_count(void* self, int rows) {
    QStandardItem_SetRowCount((QStandardItem*)self, rows);
}

int32_t q_standarditem_column_count(void* self) {
    return QStandardItem_ColumnCount((QStandardItem*)self);
}

void q_standarditem_set_column_count(void* self, int columns) {
    QStandardItem_SetColumnCount((QStandardItem*)self, columns);
}

bool q_standarditem_has_children(void* self) {
    return QStandardItem_HasChildren((QStandardItem*)self);
}

QStandardItem* q_standarditem_child(void* self, int row) {
    return QStandardItem_Child((QStandardItem*)self, row);
}

void q_standarditem_set_child(void* self, int row, int column, void* item) {
    QStandardItem_SetChild((QStandardItem*)self, row, column, (QStandardItem*)item);
}

void q_standarditem_set_child2(void* self, int row, void* item) {
    QStandardItem_SetChild2((QStandardItem*)self, row, (QStandardItem*)item);
}

void q_standarditem_insert_row(void* self, int row, libqt_list items) {
    QStandardItem_InsertRow((QStandardItem*)self, row, items);
}

void q_standarditem_insert_column(void* self, int column, libqt_list items) {
    QStandardItem_InsertColumn((QStandardItem*)self, column, items);
}

void q_standarditem_insert_rows(void* self, int row, libqt_list items) {
    QStandardItem_InsertRows((QStandardItem*)self, row, items);
}

void q_standarditem_insert_rows2(void* self, int row, int count) {
    QStandardItem_InsertRows2((QStandardItem*)self, row, count);
}

void q_standarditem_insert_columns(void* self, int column, int count) {
    QStandardItem_InsertColumns((QStandardItem*)self, column, count);
}

void q_standarditem_remove_row(void* self, int row) {
    QStandardItem_RemoveRow((QStandardItem*)self, row);
}

void q_standarditem_remove_column(void* self, int column) {
    QStandardItem_RemoveColumn((QStandardItem*)self, column);
}

void q_standarditem_remove_rows(void* self, int row, int count) {
    QStandardItem_RemoveRows((QStandardItem*)self, row, count);
}

void q_standarditem_remove_columns(void* self, int column, int count) {
    QStandardItem_RemoveColumns((QStandardItem*)self, column, count);
}

void q_standarditem_append_row(void* self, libqt_list items) {
    QStandardItem_AppendRow((QStandardItem*)self, items);
}

void q_standarditem_append_rows(void* self, libqt_list items) {
    QStandardItem_AppendRows((QStandardItem*)self, items);
}

void q_standarditem_append_column(void* self, libqt_list items) {
    QStandardItem_AppendColumn((QStandardItem*)self, items);
}

void q_standarditem_insert_row2(void* self, int row, void* item) {
    QStandardItem_InsertRow2((QStandardItem*)self, row, (QStandardItem*)item);
}

void q_standarditem_append_row2(void* self, void* item) {
    QStandardItem_AppendRow2((QStandardItem*)self, (QStandardItem*)item);
}

QStandardItem* q_standarditem_take_child(void* self, int row) {
    return QStandardItem_TakeChild((QStandardItem*)self, row);
}

libqt_list /* of QStandardItem* */ q_standarditem_take_row(void* self, int row) {
    libqt_list _arr = QStandardItem_TakeRow((QStandardItem*)self, row);
    return _arr;
}

libqt_list /* of QStandardItem* */ q_standarditem_take_column(void* self, int column) {
    libqt_list _arr = QStandardItem_TakeColumn((QStandardItem*)self, column);
    return _arr;
}

void q_standarditem_sort_children(void* self, int column) {
    QStandardItem_SortChildren((QStandardItem*)self, column);
}

QStandardItem* q_standarditem_clone(void* self) {
    return QStandardItem_Clone((QStandardItem*)self);
}

void q_standarditem_on_clone(void* self, QStandardItem* (*callback)()) {
    QStandardItem_OnClone((QStandardItem*)self, (intptr_t)callback);
}

QStandardItem* q_standarditem_qbase_clone(void* self) {
    return QStandardItem_QBaseClone((QStandardItem*)self);
}

int32_t q_standarditem_type(void* self) {
    return QStandardItem_Type((QStandardItem*)self);
}

void q_standarditem_on_type(void* self, int32_t (*callback)()) {
    QStandardItem_OnType((QStandardItem*)self, (intptr_t)callback);
}

int32_t q_standarditem_qbase_type(void* self) {
    return QStandardItem_QBaseType((QStandardItem*)self);
}

void q_standarditem_read(void* self, void* in) {
    QStandardItem_Read((QStandardItem*)self, (QDataStream*)in);
}

void q_standarditem_on_read(void* self, void (*callback)(void*, void*)) {
    QStandardItem_OnRead((QStandardItem*)self, (intptr_t)callback);
}

void q_standarditem_qbase_read(void* self, void* in) {
    QStandardItem_QBaseRead((QStandardItem*)self, (QDataStream*)in);
}

void q_standarditem_write(void* self, void* out) {
    QStandardItem_Write((QStandardItem*)self, (QDataStream*)out);
}

void q_standarditem_on_write(void* self, void (*callback)(void*, void*)) {
    QStandardItem_OnWrite((QStandardItem*)self, (intptr_t)callback);
}

void q_standarditem_qbase_write(void* self, void* out) {
    QStandardItem_QBaseWrite((QStandardItem*)self, (QDataStream*)out);
}

bool q_standarditem_operator_lesser(void* self, void* other) {
    return QStandardItem_OperatorLesser((QStandardItem*)self, (QStandardItem*)other);
}

void q_standarditem_on_operator_lesser(void* self, bool (*callback)(void*, void*)) {
    QStandardItem_OnOperatorLesser((QStandardItem*)self, (intptr_t)callback);
}

bool q_standarditem_qbase_operator_lesser(void* self, void* other) {
    return QStandardItem_QBaseOperatorLesser((QStandardItem*)self, (QStandardItem*)other);
}

void q_standarditem_operator_assign(void* self, void* other) {
    QStandardItem_OperatorAssign((QStandardItem*)self, (QStandardItem*)other);
}

void q_standarditem_on_operator_assign(void* self, void (*callback)(void*, void*)) {
    QStandardItem_OnOperatorAssign((QStandardItem*)self, (intptr_t)callback);
}

void q_standarditem_qbase_operator_assign(void* self, void* other) {
    QStandardItem_QBaseOperatorAssign((QStandardItem*)self, (QStandardItem*)other);
}

void q_standarditem_emit_data_changed(void* self) {
    QStandardItem_EmitDataChanged((QStandardItem*)self);
}

void q_standarditem_on_emit_data_changed(void* self, void (*callback)()) {
    QStandardItem_OnEmitDataChanged((QStandardItem*)self, (intptr_t)callback);
}

void q_standarditem_qbase_emit_data_changed(void* self) {
    QStandardItem_QBaseEmitDataChanged((QStandardItem*)self);
}

QStandardItem* q_standarditem_child2(void* self, int row, int column) {
    return QStandardItem_Child2((QStandardItem*)self, row, column);
}

QStandardItem* q_standarditem_take_child2(void* self, int row, int column) {
    return QStandardItem_TakeChild2((QStandardItem*)self, row, column);
}

void q_standarditem_sort_children2(void* self, int column, int32_t order) {
    QStandardItem_SortChildren2((QStandardItem*)self, column, order);
}

void q_standarditem_delete(void* self) {
    QStandardItem_Delete((QStandardItem*)(self));
}

QStandardItemModel* q_standarditemmodel_new() {
    return QStandardItemModel_new();
}

QStandardItemModel* q_standarditemmodel_new2(int rows, int columns) {
    return QStandardItemModel_new2(rows, columns);
}

QStandardItemModel* q_standarditemmodel_new3(void* parent) {
    return QStandardItemModel_new3((QObject*)parent);
}

QStandardItemModel* q_standarditemmodel_new4(int rows, int columns, void* parent) {
    return QStandardItemModel_new4(rows, columns, (QObject*)parent);
}

const QMetaObject* q_standarditemmodel_meta_object(void* self) {
    return QStandardItemModel_MetaObject((QStandardItemModel*)self);
}

void* q_standarditemmodel_metacast(void* self, const char* param1) {
    return QStandardItemModel_Metacast((QStandardItemModel*)self, param1);
}

int32_t q_standarditemmodel_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QStandardItemModel_Metacall((QStandardItemModel*)self, param1, param2, param3);
}

void q_standarditemmodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QStandardItemModel_OnMetacall((QStandardItemModel*)self, (intptr_t)callback);
}

int32_t q_standarditemmodel_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QStandardItemModel_QBaseMetacall((QStandardItemModel*)self, param1, param2, param3);
}

const char* q_standarditemmodel_tr(const char* s) {
    libqt_string _str = QStandardItemModel_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_standarditemmodel_set_item_role_names(void* self, libqt_map /* of int to char* */ roleNames) {
    QStandardItemModel_SetItemRoleNames((QStandardItemModel*)self, roleNames);
}

libqt_map /* of int to char* */ q_standarditemmodel_role_names(void* self) {
    return QStandardItemModel_RoleNames((QStandardItemModel*)self);
}

void q_standarditemmodel_on_role_names(void* self, libqt_map /* of int to char* */ (*callback)()) {
    QStandardItemModel_OnRoleNames((QStandardItemModel*)self, (intptr_t)callback);
}

libqt_map /* of int to char* */ q_standarditemmodel_qbase_role_names(void* self) {
    return QStandardItemModel_QBaseRoleNames((QStandardItemModel*)self);
}

QModelIndex* q_standarditemmodel_index(void* self, int row, int column, void* parent) {
    return QStandardItemModel_Index((QStandardItemModel*)self, row, column, (QModelIndex*)parent);
}

void q_standarditemmodel_on_index(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    QStandardItemModel_OnIndex((QStandardItemModel*)self, (intptr_t)callback);
}

QModelIndex* q_standarditemmodel_qbase_index(void* self, int row, int column, void* parent) {
    return QStandardItemModel_QBaseIndex((QStandardItemModel*)self, row, column, (QModelIndex*)parent);
}

QModelIndex* q_standarditemmodel_parent(void* self, void* child) {
    return QStandardItemModel_Parent((QStandardItemModel*)self, (QModelIndex*)child);
}

void q_standarditemmodel_on_parent(void* self, QModelIndex* (*callback)(void*, void*)) {
    QStandardItemModel_OnParent((QStandardItemModel*)self, (intptr_t)callback);
}

QModelIndex* q_standarditemmodel_qbase_parent(void* self, void* child) {
    return QStandardItemModel_QBaseParent((QStandardItemModel*)self, (QModelIndex*)child);
}

int32_t q_standarditemmodel_row_count(void* self, void* parent) {
    return QStandardItemModel_RowCount((QStandardItemModel*)self, (QModelIndex*)parent);
}

void q_standarditemmodel_on_row_count(void* self, int32_t (*callback)(void*, void*)) {
    QStandardItemModel_OnRowCount((QStandardItemModel*)self, (intptr_t)callback);
}

int32_t q_standarditemmodel_qbase_row_count(void* self, void* parent) {
    return QStandardItemModel_QBaseRowCount((QStandardItemModel*)self, (QModelIndex*)parent);
}

int32_t q_standarditemmodel_column_count(void* self, void* parent) {
    return QStandardItemModel_ColumnCount((QStandardItemModel*)self, (QModelIndex*)parent);
}

void q_standarditemmodel_on_column_count(void* self, int32_t (*callback)(void*, void*)) {
    QStandardItemModel_OnColumnCount((QStandardItemModel*)self, (intptr_t)callback);
}

int32_t q_standarditemmodel_qbase_column_count(void* self, void* parent) {
    return QStandardItemModel_QBaseColumnCount((QStandardItemModel*)self, (QModelIndex*)parent);
}

bool q_standarditemmodel_has_children(void* self, void* parent) {
    return QStandardItemModel_HasChildren((QStandardItemModel*)self, (QModelIndex*)parent);
}

void q_standarditemmodel_on_has_children(void* self, bool (*callback)(void*, void*)) {
    QStandardItemModel_OnHasChildren((QStandardItemModel*)self, (intptr_t)callback);
}

bool q_standarditemmodel_qbase_has_children(void* self, void* parent) {
    return QStandardItemModel_QBaseHasChildren((QStandardItemModel*)self, (QModelIndex*)parent);
}

QVariant* q_standarditemmodel_data(void* self, void* index, int role) {
    return QStandardItemModel_Data((QStandardItemModel*)self, (QModelIndex*)index, role);
}

void q_standarditemmodel_on_data(void* self, QVariant* (*callback)(void*, void*, int)) {
    QStandardItemModel_OnData((QStandardItemModel*)self, (intptr_t)callback);
}

QVariant* q_standarditemmodel_qbase_data(void* self, void* index, int role) {
    return QStandardItemModel_QBaseData((QStandardItemModel*)self, (QModelIndex*)index, role);
}

void q_standarditemmodel_multi_data(void* self, void* index, void* roleDataSpan) {
    QStandardItemModel_MultiData((QStandardItemModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void q_standarditemmodel_on_multi_data(void* self, void (*callback)(void*, void*, void*)) {
    QStandardItemModel_OnMultiData((QStandardItemModel*)self, (intptr_t)callback);
}

void q_standarditemmodel_qbase_multi_data(void* self, void* index, void* roleDataSpan) {
    QStandardItemModel_QBaseMultiData((QStandardItemModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

bool q_standarditemmodel_set_data(void* self, void* index, void* value, int role) {
    return QStandardItemModel_SetData((QStandardItemModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

void q_standarditemmodel_on_set_data(void* self, bool (*callback)(void*, void*, void*, int)) {
    QStandardItemModel_OnSetData((QStandardItemModel*)self, (intptr_t)callback);
}

bool q_standarditemmodel_qbase_set_data(void* self, void* index, void* value, int role) {
    return QStandardItemModel_QBaseSetData((QStandardItemModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

bool q_standarditemmodel_clear_item_data(void* self, void* index) {
    return QStandardItemModel_ClearItemData((QStandardItemModel*)self, (QModelIndex*)index);
}

void q_standarditemmodel_on_clear_item_data(void* self, bool (*callback)(void*, void*)) {
    QStandardItemModel_OnClearItemData((QStandardItemModel*)self, (intptr_t)callback);
}

bool q_standarditemmodel_qbase_clear_item_data(void* self, void* index) {
    return QStandardItemModel_QBaseClearItemData((QStandardItemModel*)self, (QModelIndex*)index);
}

QVariant* q_standarditemmodel_header_data(void* self, int section, int32_t orientation, int role) {
    return QStandardItemModel_HeaderData((QStandardItemModel*)self, section, orientation, role);
}

void q_standarditemmodel_on_header_data(void* self, QVariant* (*callback)(void*, int, int32_t, int)) {
    QStandardItemModel_OnHeaderData((QStandardItemModel*)self, (intptr_t)callback);
}

QVariant* q_standarditemmodel_qbase_header_data(void* self, int section, int32_t orientation, int role) {
    return QStandardItemModel_QBaseHeaderData((QStandardItemModel*)self, section, orientation, role);
}

bool q_standarditemmodel_set_header_data(void* self, int section, int32_t orientation, void* value, int role) {
    return QStandardItemModel_SetHeaderData((QStandardItemModel*)self, section, orientation, (QVariant*)value, role);
}

void q_standarditemmodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, void*, int)) {
    QStandardItemModel_OnSetHeaderData((QStandardItemModel*)self, (intptr_t)callback);
}

bool q_standarditemmodel_qbase_set_header_data(void* self, int section, int32_t orientation, void* value, int role) {
    return QStandardItemModel_QBaseSetHeaderData((QStandardItemModel*)self, section, orientation, (QVariant*)value, role);
}

bool q_standarditemmodel_insert_rows(void* self, int row, int count, void* parent) {
    return QStandardItemModel_InsertRows((QStandardItemModel*)self, row, count, (QModelIndex*)parent);
}

void q_standarditemmodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, void*)) {
    QStandardItemModel_OnInsertRows((QStandardItemModel*)self, (intptr_t)callback);
}

bool q_standarditemmodel_qbase_insert_rows(void* self, int row, int count, void* parent) {
    return QStandardItemModel_QBaseInsertRows((QStandardItemModel*)self, row, count, (QModelIndex*)parent);
}

bool q_standarditemmodel_insert_columns(void* self, int column, int count, void* parent) {
    return QStandardItemModel_InsertColumns((QStandardItemModel*)self, column, count, (QModelIndex*)parent);
}

void q_standarditemmodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, void*)) {
    QStandardItemModel_OnInsertColumns((QStandardItemModel*)self, (intptr_t)callback);
}

bool q_standarditemmodel_qbase_insert_columns(void* self, int column, int count, void* parent) {
    return QStandardItemModel_QBaseInsertColumns((QStandardItemModel*)self, column, count, (QModelIndex*)parent);
}

bool q_standarditemmodel_remove_rows(void* self, int row, int count, void* parent) {
    return QStandardItemModel_RemoveRows((QStandardItemModel*)self, row, count, (QModelIndex*)parent);
}

void q_standarditemmodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, void*)) {
    QStandardItemModel_OnRemoveRows((QStandardItemModel*)self, (intptr_t)callback);
}

bool q_standarditemmodel_qbase_remove_rows(void* self, int row, int count, void* parent) {
    return QStandardItemModel_QBaseRemoveRows((QStandardItemModel*)self, row, count, (QModelIndex*)parent);
}

bool q_standarditemmodel_remove_columns(void* self, int column, int count, void* parent) {
    return QStandardItemModel_RemoveColumns((QStandardItemModel*)self, column, count, (QModelIndex*)parent);
}

void q_standarditemmodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, void*)) {
    QStandardItemModel_OnRemoveColumns((QStandardItemModel*)self, (intptr_t)callback);
}

bool q_standarditemmodel_qbase_remove_columns(void* self, int column, int count, void* parent) {
    return QStandardItemModel_QBaseRemoveColumns((QStandardItemModel*)self, column, count, (QModelIndex*)parent);
}

int32_t q_standarditemmodel_flags(void* self, void* index) {
    return QStandardItemModel_Flags((QStandardItemModel*)self, (QModelIndex*)index);
}

void q_standarditemmodel_on_flags(void* self, int32_t (*callback)(void*, void*)) {
    QStandardItemModel_OnFlags((QStandardItemModel*)self, (intptr_t)callback);
}

int32_t q_standarditemmodel_qbase_flags(void* self, void* index) {
    return QStandardItemModel_QBaseFlags((QStandardItemModel*)self, (QModelIndex*)index);
}

int32_t q_standarditemmodel_supported_drop_actions(void* self) {
    return QStandardItemModel_SupportedDropActions((QStandardItemModel*)self);
}

void q_standarditemmodel_on_supported_drop_actions(void* self, int32_t (*callback)()) {
    QStandardItemModel_OnSupportedDropActions((QStandardItemModel*)self, (intptr_t)callback);
}

int32_t q_standarditemmodel_qbase_supported_drop_actions(void* self) {
    return QStandardItemModel_QBaseSupportedDropActions((QStandardItemModel*)self);
}

libqt_map /* of int to QVariant* */ q_standarditemmodel_item_data(void* self, void* index) {
    return QStandardItemModel_ItemData((QStandardItemModel*)self, (QModelIndex*)index);
}

void q_standarditemmodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*callback)(void*, void*)) {
    QStandardItemModel_OnItemData((QStandardItemModel*)self, (intptr_t)callback);
}

libqt_map /* of int to QVariant* */ q_standarditemmodel_qbase_item_data(void* self, void* index) {
    return QStandardItemModel_QBaseItemData((QStandardItemModel*)self, (QModelIndex*)index);
}

bool q_standarditemmodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    return QStandardItemModel_SetItemData((QStandardItemModel*)self, (QModelIndex*)index, roles);
}

void q_standarditemmodel_on_set_item_data(void* self, bool (*callback)(void*, void*, libqt_map /* of int to QVariant* */)) {
    QStandardItemModel_OnSetItemData((QStandardItemModel*)self, (intptr_t)callback);
}

bool q_standarditemmodel_qbase_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    return QStandardItemModel_QBaseSetItemData((QStandardItemModel*)self, (QModelIndex*)index, roles);
}

void q_standarditemmodel_clear(void* self) {
    QStandardItemModel_Clear((QStandardItemModel*)self);
}

void q_standarditemmodel_sort(void* self, int column, int32_t order) {
    QStandardItemModel_Sort((QStandardItemModel*)self, column, order);
}

void q_standarditemmodel_on_sort(void* self, void (*callback)(void*, int, int32_t)) {
    QStandardItemModel_OnSort((QStandardItemModel*)self, (intptr_t)callback);
}

void q_standarditemmodel_qbase_sort(void* self, int column, int32_t order) {
    QStandardItemModel_QBaseSort((QStandardItemModel*)self, column, order);
}

QStandardItem* q_standarditemmodel_item_from_index(void* self, void* index) {
    return QStandardItemModel_ItemFromIndex((QStandardItemModel*)self, (QModelIndex*)index);
}

QModelIndex* q_standarditemmodel_index_from_item(void* self, void* item) {
    return QStandardItemModel_IndexFromItem((QStandardItemModel*)self, (QStandardItem*)item);
}

QStandardItem* q_standarditemmodel_item(void* self, int row) {
    return QStandardItemModel_Item((QStandardItemModel*)self, row);
}

void q_standarditemmodel_set_item(void* self, int row, int column, void* item) {
    QStandardItemModel_SetItem((QStandardItemModel*)self, row, column, (QStandardItem*)item);
}

void q_standarditemmodel_set_item2(void* self, int row, void* item) {
    QStandardItemModel_SetItem2((QStandardItemModel*)self, row, (QStandardItem*)item);
}

QStandardItem* q_standarditemmodel_invisible_root_item(void* self) {
    return QStandardItemModel_InvisibleRootItem((QStandardItemModel*)self);
}

QStandardItem* q_standarditemmodel_horizontal_header_item(void* self, int column) {
    return QStandardItemModel_HorizontalHeaderItem((QStandardItemModel*)self, column);
}

void q_standarditemmodel_set_horizontal_header_item(void* self, int column, void* item) {
    QStandardItemModel_SetHorizontalHeaderItem((QStandardItemModel*)self, column, (QStandardItem*)item);
}

QStandardItem* q_standarditemmodel_vertical_header_item(void* self, int row) {
    return QStandardItemModel_VerticalHeaderItem((QStandardItemModel*)self, row);
}

void q_standarditemmodel_set_vertical_header_item(void* self, int row, void* item) {
    QStandardItemModel_SetVerticalHeaderItem((QStandardItemModel*)self, row, (QStandardItem*)item);
}

void q_standarditemmodel_set_horizontal_header_labels(void* self, const char* labels[static 1]) {
    size_t labels_len = libqt_strv_length(labels);
    libqt_string* labels_qstr = (libqt_string*)malloc(labels_len * sizeof(libqt_string));
    if (labels_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in q_standarditemmodel_set_horizontal_header_labels");
        abort();
    }
    for (size_t i = 0; i < labels_len; ++i) {
        labels_qstr[i] = qstring(labels[i]);
    }
    libqt_list labels_list = qlist(labels_qstr, labels_len);
    QStandardItemModel_SetHorizontalHeaderLabels((QStandardItemModel*)self, labels_list);
    free(labels_qstr);
}

void q_standarditemmodel_set_vertical_header_labels(void* self, const char* labels[static 1]) {
    size_t labels_len = libqt_strv_length(labels);
    libqt_string* labels_qstr = (libqt_string*)malloc(labels_len * sizeof(libqt_string));
    if (labels_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in q_standarditemmodel_set_vertical_header_labels");
        abort();
    }
    for (size_t i = 0; i < labels_len; ++i) {
        labels_qstr[i] = qstring(labels[i]);
    }
    libqt_list labels_list = qlist(labels_qstr, labels_len);
    QStandardItemModel_SetVerticalHeaderLabels((QStandardItemModel*)self, labels_list);
    free(labels_qstr);
}

void q_standarditemmodel_set_row_count(void* self, int rows) {
    QStandardItemModel_SetRowCount((QStandardItemModel*)self, rows);
}

void q_standarditemmodel_set_column_count(void* self, int columns) {
    QStandardItemModel_SetColumnCount((QStandardItemModel*)self, columns);
}

void q_standarditemmodel_append_row(void* self, libqt_list items) {
    QStandardItemModel_AppendRow((QStandardItemModel*)self, items);
}

void q_standarditemmodel_append_column(void* self, libqt_list items) {
    QStandardItemModel_AppendColumn((QStandardItemModel*)self, items);
}

void q_standarditemmodel_append_row2(void* self, void* item) {
    QStandardItemModel_AppendRow2((QStandardItemModel*)self, (QStandardItem*)item);
}

void q_standarditemmodel_insert_row(void* self, int row, libqt_list items) {
    QStandardItemModel_InsertRow((QStandardItemModel*)self, row, items);
}

void q_standarditemmodel_insert_column(void* self, int column, libqt_list items) {
    QStandardItemModel_InsertColumn((QStandardItemModel*)self, column, items);
}

void q_standarditemmodel_insert_row2(void* self, int row, void* item) {
    QStandardItemModel_InsertRow2((QStandardItemModel*)self, row, (QStandardItem*)item);
}

bool q_standarditemmodel_insert_row3(void* self, int row) {
    return QStandardItemModel_InsertRow3((QStandardItemModel*)self, row);
}

bool q_standarditemmodel_insert_column2(void* self, int column) {
    return QStandardItemModel_InsertColumn2((QStandardItemModel*)self, column);
}

QStandardItem* q_standarditemmodel_take_item(void* self, int row) {
    return QStandardItemModel_TakeItem((QStandardItemModel*)self, row);
}

libqt_list /* of QStandardItem* */ q_standarditemmodel_take_row(void* self, int row) {
    libqt_list _arr = QStandardItemModel_TakeRow((QStandardItemModel*)self, row);
    return _arr;
}

libqt_list /* of QStandardItem* */ q_standarditemmodel_take_column(void* self, int column) {
    libqt_list _arr = QStandardItemModel_TakeColumn((QStandardItemModel*)self, column);
    return _arr;
}

QStandardItem* q_standarditemmodel_take_horizontal_header_item(void* self, int column) {
    return QStandardItemModel_TakeHorizontalHeaderItem((QStandardItemModel*)self, column);
}

QStandardItem* q_standarditemmodel_take_vertical_header_item(void* self, int row) {
    return QStandardItemModel_TakeVerticalHeaderItem((QStandardItemModel*)self, row);
}

const QStandardItem* q_standarditemmodel_item_prototype(void* self) {
    return QStandardItemModel_ItemPrototype((QStandardItemModel*)self);
}

void q_standarditemmodel_set_item_prototype(void* self, void* item) {
    QStandardItemModel_SetItemPrototype((QStandardItemModel*)self, (QStandardItem*)item);
}

libqt_list /* of QStandardItem* */ q_standarditemmodel_find_items(void* self, const char* text) {
    libqt_list _arr = QStandardItemModel_FindItems((QStandardItemModel*)self, qstring(text));
    return _arr;
}

int32_t q_standarditemmodel_sort_role(void* self) {
    return QStandardItemModel_SortRole((QStandardItemModel*)self);
}

void q_standarditemmodel_set_sort_role(void* self, int role) {
    QStandardItemModel_SetSortRole((QStandardItemModel*)self, role);
}

const char** q_standarditemmodel_mime_types(void* self) {
    libqt_list _arr = QStandardItemModel_MimeTypes((QStandardItemModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_standarditemmodel_mime_types");
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

void q_standarditemmodel_on_mime_types(void* self, const char** (*callback)()) {
    QStandardItemModel_OnMimeTypes((QStandardItemModel*)self, (intptr_t)callback);
}

const char** q_standarditemmodel_qbase_mime_types(void* self) {
    libqt_list _arr = QStandardItemModel_QBaseMimeTypes((QStandardItemModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_standarditemmodel_mime_types");
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

QMimeData* q_standarditemmodel_mime_data(void* self, libqt_list indexes) {
    return QStandardItemModel_MimeData((QStandardItemModel*)self, indexes);
}

void q_standarditemmodel_on_mime_data(void* self, QMimeData* (*callback)(void*, QModelIndex**)) {
    QStandardItemModel_OnMimeData((QStandardItemModel*)self, (intptr_t)callback);
}

QMimeData* q_standarditemmodel_qbase_mime_data(void* self, libqt_list indexes) {
    return QStandardItemModel_QBaseMimeData((QStandardItemModel*)self, indexes);
}

bool q_standarditemmodel_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return QStandardItemModel_DropMimeData((QStandardItemModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void q_standarditemmodel_on_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*)) {
    QStandardItemModel_OnDropMimeData((QStandardItemModel*)self, (intptr_t)callback);
}

bool q_standarditemmodel_qbase_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return QStandardItemModel_QBaseDropMimeData((QStandardItemModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void q_standarditemmodel_item_changed(void* self, void* item) {
    QStandardItemModel_ItemChanged((QStandardItemModel*)self, (QStandardItem*)item);
}

void q_standarditemmodel_on_item_changed(void* self, void (*callback)(void*, void*)) {
    QStandardItemModel_Connect_ItemChanged((QStandardItemModel*)self, (intptr_t)callback);
}

const char* q_standarditemmodel_tr2(const char* s, const char* c) {
    libqt_string _str = QStandardItemModel_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_standarditemmodel_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QStandardItemModel_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QStandardItem* q_standarditemmodel_item2(void* self, int row, int column) {
    return QStandardItemModel_Item2((QStandardItemModel*)self, row, column);
}

bool q_standarditemmodel_insert_row22(void* self, int row, void* parent) {
    return QStandardItemModel_InsertRow22((QStandardItemModel*)self, row, (QModelIndex*)parent);
}

bool q_standarditemmodel_insert_column22(void* self, int column, void* parent) {
    return QStandardItemModel_InsertColumn22((QStandardItemModel*)self, column, (QModelIndex*)parent);
}

QStandardItem* q_standarditemmodel_take_item2(void* self, int row, int column) {
    return QStandardItemModel_TakeItem2((QStandardItemModel*)self, row, column);
}

libqt_list /* of QStandardItem* */ q_standarditemmodel_find_items2(void* self, const char* text, int32_t flags) {
    libqt_list _arr = QStandardItemModel_FindItems2((QStandardItemModel*)self, qstring(text), flags);
    return _arr;
}

libqt_list /* of QStandardItem* */ q_standarditemmodel_find_items3(void* self, const char* text, int32_t flags, int column) {
    libqt_list _arr = QStandardItemModel_FindItems3((QStandardItemModel*)self, qstring(text), flags, column);
    return _arr;
}

bool q_standarditemmodel_has_index(void* self, int row, int column) {
    return QAbstractItemModel_HasIndex((QAbstractItemModel*)self, row, column);
}

bool q_standarditemmodel_remove_row(void* self, int row) {
    return QAbstractItemModel_RemoveRow((QAbstractItemModel*)self, row);
}

bool q_standarditemmodel_remove_column(void* self, int column) {
    return QAbstractItemModel_RemoveColumn((QAbstractItemModel*)self, column);
}

bool q_standarditemmodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveRow((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceRow, (QModelIndex*)destinationParent, destinationChild);
}

bool q_standarditemmodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveColumn((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceColumn, (QModelIndex*)destinationParent, destinationChild);
}

bool q_standarditemmodel_check_index(void* self, void* index) {
    return QAbstractItemModel_CheckIndex((QAbstractItemModel*)self, (QModelIndex*)index);
}

void q_standarditemmodel_data_changed(void* self, void* topLeft, void* bottomRight) {
    QAbstractItemModel_DataChanged((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight);
}

void q_standarditemmodel_on_data_changed(void* self, void (*callback)(void*, void*, void*)) {
    QAbstractItemModel_Connect_DataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_standarditemmodel_header_data_changed(void* self, int32_t orientation, int first, int last) {
    QAbstractItemModel_HeaderDataChanged((QAbstractItemModel*)self, orientation, first, last);
}

void q_standarditemmodel_on_header_data_changed(void* self, void (*callback)(void*, int32_t, int, int)) {
    QAbstractItemModel_Connect_HeaderDataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_standarditemmodel_layout_changed(void* self) {
    QAbstractItemModel_LayoutChanged((QAbstractItemModel*)self);
}

void q_standarditemmodel_on_layout_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_standarditemmodel_layout_about_to_be_changed(void* self) {
    QAbstractItemModel_LayoutAboutToBeChanged((QAbstractItemModel*)self);
}

void q_standarditemmodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

bool q_standarditemmodel_has_index3(void* self, int row, int column, void* parent) {
    return QAbstractItemModel_HasIndex3((QAbstractItemModel*)self, row, column, (QModelIndex*)parent);
}

bool q_standarditemmodel_remove_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_RemoveRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool q_standarditemmodel_remove_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_RemoveColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool q_standarditemmodel_check_index2(void* self, void* index, int32_t options) {
    return QAbstractItemModel_CheckIndex2((QAbstractItemModel*)self, (QModelIndex*)index, options);
}

void q_standarditemmodel_data_changed3(void* self, void* topLeft, void* bottomRight, libqt_list roles) {
    QAbstractItemModel_DataChanged3((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles);
}

void q_standarditemmodel_on_data_changed3(void* self, void (*callback)(void*, void*, void*, int*)) {
    QAbstractItemModel_Connect_DataChanged3((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_standarditemmodel_layout_changed1(void* self, libqt_list parents) {
    QAbstractItemModel_LayoutChanged1((QAbstractItemModel*)self, parents);
}

void q_standarditemmodel_on_layout_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**)) {
    QAbstractItemModel_Connect_LayoutChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_standarditemmodel_layout_changed2(void* self, libqt_list parents, int32_t hint) {
    QAbstractItemModel_LayoutChanged2((QAbstractItemModel*)self, parents, hint);
}

void q_standarditemmodel_on_layout_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t)) {
    QAbstractItemModel_Connect_LayoutChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_standarditemmodel_layout_about_to_be_changed1(void* self, libqt_list parents) {
    QAbstractItemModel_LayoutAboutToBeChanged1((QAbstractItemModel*)self, parents);
}

void q_standarditemmodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_standarditemmodel_layout_about_to_be_changed2(void* self, libqt_list parents, int32_t hint) {
    QAbstractItemModel_LayoutAboutToBeChanged2((QAbstractItemModel*)self, parents, hint);
}

void q_standarditemmodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

const char* q_standarditemmodel_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_standarditemmodel_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_standarditemmodel_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_standarditemmodel_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_standarditemmodel_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_standarditemmodel_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_standarditemmodel_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_standarditemmodel_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_standarditemmodel_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_standarditemmodel_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_standarditemmodel_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_standarditemmodel_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_standarditemmodel_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_standarditemmodel_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_standarditemmodel_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_standarditemmodel_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_standarditemmodel_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_standarditemmodel_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_standarditemmodel_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_standarditemmodel_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_standarditemmodel_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_standarditemmodel_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_standarditemmodel_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_standarditemmodel_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_standarditemmodel_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_standarditemmodel_dynamic_property_names");
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

QBindingStorage* q_standarditemmodel_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_standarditemmodel_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_standarditemmodel_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_standarditemmodel_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

bool q_standarditemmodel_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_standarditemmodel_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_standarditemmodel_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_standarditemmodel_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_standarditemmodel_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_standarditemmodel_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_standarditemmodel_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_standarditemmodel_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

QModelIndex* q_standarditemmodel_sibling(void* self, int row, int column, void* idx) {
    return QStandardItemModel_Sibling((QStandardItemModel*)self, row, column, (QModelIndex*)idx);
}

QModelIndex* q_standarditemmodel_qbase_sibling(void* self, int row, int column, void* idx) {
    return QStandardItemModel_QBaseSibling((QStandardItemModel*)self, row, column, (QModelIndex*)idx);
}

void q_standarditemmodel_on_sibling(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    QStandardItemModel_OnSibling((QStandardItemModel*)self, (intptr_t)callback);
}

bool q_standarditemmodel_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return QStandardItemModel_CanDropMimeData((QStandardItemModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool q_standarditemmodel_qbase_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return QStandardItemModel_QBaseCanDropMimeData((QStandardItemModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void q_standarditemmodel_on_can_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*)) {
    QStandardItemModel_OnCanDropMimeData((QStandardItemModel*)self, (intptr_t)callback);
}

int32_t q_standarditemmodel_supported_drag_actions(void* self) {
    return QStandardItemModel_SupportedDragActions((QStandardItemModel*)self);
}

int32_t q_standarditemmodel_qbase_supported_drag_actions(void* self) {
    return QStandardItemModel_QBaseSupportedDragActions((QStandardItemModel*)self);
}

void q_standarditemmodel_on_supported_drag_actions(void* self, int32_t (*callback)()) {
    QStandardItemModel_OnSupportedDragActions((QStandardItemModel*)self, (intptr_t)callback);
}

bool q_standarditemmodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return QStandardItemModel_MoveRows((QStandardItemModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

bool q_standarditemmodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return QStandardItemModel_QBaseMoveRows((QStandardItemModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

void q_standarditemmodel_on_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    QStandardItemModel_OnMoveRows((QStandardItemModel*)self, (intptr_t)callback);
}

bool q_standarditemmodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return QStandardItemModel_MoveColumns((QStandardItemModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

bool q_standarditemmodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return QStandardItemModel_QBaseMoveColumns((QStandardItemModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

void q_standarditemmodel_on_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    QStandardItemModel_OnMoveColumns((QStandardItemModel*)self, (intptr_t)callback);
}

void q_standarditemmodel_fetch_more(void* self, void* parent) {
    QStandardItemModel_FetchMore((QStandardItemModel*)self, (QModelIndex*)parent);
}

void q_standarditemmodel_qbase_fetch_more(void* self, void* parent) {
    QStandardItemModel_QBaseFetchMore((QStandardItemModel*)self, (QModelIndex*)parent);
}

void q_standarditemmodel_on_fetch_more(void* self, void (*callback)(void*, void*)) {
    QStandardItemModel_OnFetchMore((QStandardItemModel*)self, (intptr_t)callback);
}

bool q_standarditemmodel_can_fetch_more(void* self, void* parent) {
    return QStandardItemModel_CanFetchMore((QStandardItemModel*)self, (QModelIndex*)parent);
}

bool q_standarditemmodel_qbase_can_fetch_more(void* self, void* parent) {
    return QStandardItemModel_QBaseCanFetchMore((QStandardItemModel*)self, (QModelIndex*)parent);
}

void q_standarditemmodel_on_can_fetch_more(void* self, bool (*callback)(void*, void*)) {
    QStandardItemModel_OnCanFetchMore((QStandardItemModel*)self, (intptr_t)callback);
}

QModelIndex* q_standarditemmodel_buddy(void* self, void* index) {
    return QStandardItemModel_Buddy((QStandardItemModel*)self, (QModelIndex*)index);
}

QModelIndex* q_standarditemmodel_qbase_buddy(void* self, void* index) {
    return QStandardItemModel_QBaseBuddy((QStandardItemModel*)self, (QModelIndex*)index);
}

void q_standarditemmodel_on_buddy(void* self, QModelIndex* (*callback)(void*, void*)) {
    QStandardItemModel_OnBuddy((QStandardItemModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ q_standarditemmodel_match(void* self, void* start, int role, void* value, int hits, int32_t flags) {
    libqt_list _arr = QStandardItemModel_Match((QStandardItemModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

libqt_list /* of QModelIndex* */ q_standarditemmodel_qbase_match(void* self, void* start, int role, void* value, int hits, int32_t flags) {
    libqt_list _arr = QStandardItemModel_QBaseMatch((QStandardItemModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

void q_standarditemmodel_on_match(void* self, QModelIndex** (*callback)(void*, void*, int, void*, int, int32_t)) {
    QStandardItemModel_OnMatch((QStandardItemModel*)self, (intptr_t)callback);
}

QSize* q_standarditemmodel_span(void* self, void* index) {
    return QStandardItemModel_Span((QStandardItemModel*)self, (QModelIndex*)index);
}

QSize* q_standarditemmodel_qbase_span(void* self, void* index) {
    return QStandardItemModel_QBaseSpan((QStandardItemModel*)self, (QModelIndex*)index);
}

void q_standarditemmodel_on_span(void* self, QSize* (*callback)(void*, void*)) {
    QStandardItemModel_OnSpan((QStandardItemModel*)self, (intptr_t)callback);
}

bool q_standarditemmodel_submit(void* self) {
    return QStandardItemModel_Submit((QStandardItemModel*)self);
}

bool q_standarditemmodel_qbase_submit(void* self) {
    return QStandardItemModel_QBaseSubmit((QStandardItemModel*)self);
}

void q_standarditemmodel_on_submit(void* self, bool (*callback)()) {
    QStandardItemModel_OnSubmit((QStandardItemModel*)self, (intptr_t)callback);
}

void q_standarditemmodel_revert(void* self) {
    QStandardItemModel_Revert((QStandardItemModel*)self);
}

void q_standarditemmodel_qbase_revert(void* self) {
    QStandardItemModel_QBaseRevert((QStandardItemModel*)self);
}

void q_standarditemmodel_on_revert(void* self, void (*callback)()) {
    QStandardItemModel_OnRevert((QStandardItemModel*)self, (intptr_t)callback);
}

void q_standarditemmodel_reset_internal_data(void* self) {
    QStandardItemModel_ResetInternalData((QStandardItemModel*)self);
}

void q_standarditemmodel_qbase_reset_internal_data(void* self) {
    QStandardItemModel_QBaseResetInternalData((QStandardItemModel*)self);
}

void q_standarditemmodel_on_reset_internal_data(void* self, void (*callback)()) {
    QStandardItemModel_OnResetInternalData((QStandardItemModel*)self, (intptr_t)callback);
}

bool q_standarditemmodel_event(void* self, void* event) {
    return QStandardItemModel_Event((QStandardItemModel*)self, (QEvent*)event);
}

bool q_standarditemmodel_qbase_event(void* self, void* event) {
    return QStandardItemModel_QBaseEvent((QStandardItemModel*)self, (QEvent*)event);
}

void q_standarditemmodel_on_event(void* self, bool (*callback)(void*, void*)) {
    QStandardItemModel_OnEvent((QStandardItemModel*)self, (intptr_t)callback);
}

bool q_standarditemmodel_event_filter(void* self, void* watched, void* event) {
    return QStandardItemModel_EventFilter((QStandardItemModel*)self, (QObject*)watched, (QEvent*)event);
}

bool q_standarditemmodel_qbase_event_filter(void* self, void* watched, void* event) {
    return QStandardItemModel_QBaseEventFilter((QStandardItemModel*)self, (QObject*)watched, (QEvent*)event);
}

void q_standarditemmodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QStandardItemModel_OnEventFilter((QStandardItemModel*)self, (intptr_t)callback);
}

void q_standarditemmodel_timer_event(void* self, void* event) {
    QStandardItemModel_TimerEvent((QStandardItemModel*)self, (QTimerEvent*)event);
}

void q_standarditemmodel_qbase_timer_event(void* self, void* event) {
    QStandardItemModel_QBaseTimerEvent((QStandardItemModel*)self, (QTimerEvent*)event);
}

void q_standarditemmodel_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QStandardItemModel_OnTimerEvent((QStandardItemModel*)self, (intptr_t)callback);
}

void q_standarditemmodel_child_event(void* self, void* event) {
    QStandardItemModel_ChildEvent((QStandardItemModel*)self, (QChildEvent*)event);
}

void q_standarditemmodel_qbase_child_event(void* self, void* event) {
    QStandardItemModel_QBaseChildEvent((QStandardItemModel*)self, (QChildEvent*)event);
}

void q_standarditemmodel_on_child_event(void* self, void (*callback)(void*, void*)) {
    QStandardItemModel_OnChildEvent((QStandardItemModel*)self, (intptr_t)callback);
}

void q_standarditemmodel_custom_event(void* self, void* event) {
    QStandardItemModel_CustomEvent((QStandardItemModel*)self, (QEvent*)event);
}

void q_standarditemmodel_qbase_custom_event(void* self, void* event) {
    QStandardItemModel_QBaseCustomEvent((QStandardItemModel*)self, (QEvent*)event);
}

void q_standarditemmodel_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QStandardItemModel_OnCustomEvent((QStandardItemModel*)self, (intptr_t)callback);
}

void q_standarditemmodel_connect_notify(void* self, void* signal) {
    QStandardItemModel_ConnectNotify((QStandardItemModel*)self, (QMetaMethod*)signal);
}

void q_standarditemmodel_qbase_connect_notify(void* self, void* signal) {
    QStandardItemModel_QBaseConnectNotify((QStandardItemModel*)self, (QMetaMethod*)signal);
}

void q_standarditemmodel_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QStandardItemModel_OnConnectNotify((QStandardItemModel*)self, (intptr_t)callback);
}

void q_standarditemmodel_disconnect_notify(void* self, void* signal) {
    QStandardItemModel_DisconnectNotify((QStandardItemModel*)self, (QMetaMethod*)signal);
}

void q_standarditemmodel_qbase_disconnect_notify(void* self, void* signal) {
    QStandardItemModel_QBaseDisconnectNotify((QStandardItemModel*)self, (QMetaMethod*)signal);
}

void q_standarditemmodel_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QStandardItemModel_OnDisconnectNotify((QStandardItemModel*)self, (intptr_t)callback);
}

QModelIndex* q_standarditemmodel_create_index(void* self, int row, int column) {
    return QStandardItemModel_CreateIndex((QStandardItemModel*)self, row, column);
}

QModelIndex* q_standarditemmodel_qbase_create_index(void* self, int row, int column) {
    return QStandardItemModel_QBaseCreateIndex((QStandardItemModel*)self, row, column);
}

void q_standarditemmodel_on_create_index(void* self, QModelIndex* (*callback)(void*, int, int)) {
    QStandardItemModel_OnCreateIndex((QStandardItemModel*)self, (intptr_t)callback);
}

void q_standarditemmodel_encode_data(void* self, libqt_list indexes, void* stream) {
    QStandardItemModel_EncodeData((QStandardItemModel*)self, indexes, (QDataStream*)stream);
}

void q_standarditemmodel_qbase_encode_data(void* self, libqt_list indexes, void* stream) {
    QStandardItemModel_QBaseEncodeData((QStandardItemModel*)self, indexes, (QDataStream*)stream);
}

void q_standarditemmodel_on_encode_data(void* self, void (*callback)(void*, QModelIndex**, void*)) {
    QStandardItemModel_OnEncodeData((QStandardItemModel*)self, (intptr_t)callback);
}

bool q_standarditemmodel_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return QStandardItemModel_DecodeData((QStandardItemModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

bool q_standarditemmodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return QStandardItemModel_QBaseDecodeData((QStandardItemModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

void q_standarditemmodel_on_decode_data(void* self, bool (*callback)(void*, int, int, void*, void*)) {
    QStandardItemModel_OnDecodeData((QStandardItemModel*)self, (intptr_t)callback);
}

void q_standarditemmodel_begin_insert_rows(void* self, void* parent, int first, int last) {
    QStandardItemModel_BeginInsertRows((QStandardItemModel*)self, (QModelIndex*)parent, first, last);
}

void q_standarditemmodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last) {
    QStandardItemModel_QBaseBeginInsertRows((QStandardItemModel*)self, (QModelIndex*)parent, first, last);
}

void q_standarditemmodel_on_begin_insert_rows(void* self, void (*callback)(void*, void*, int, int)) {
    QStandardItemModel_OnBeginInsertRows((QStandardItemModel*)self, (intptr_t)callback);
}

void q_standarditemmodel_end_insert_rows(void* self) {
    QStandardItemModel_EndInsertRows((QStandardItemModel*)self);
}

void q_standarditemmodel_qbase_end_insert_rows(void* self) {
    QStandardItemModel_QBaseEndInsertRows((QStandardItemModel*)self);
}

void q_standarditemmodel_on_end_insert_rows(void* self, void (*callback)()) {
    QStandardItemModel_OnEndInsertRows((QStandardItemModel*)self, (intptr_t)callback);
}

void q_standarditemmodel_begin_remove_rows(void* self, void* parent, int first, int last) {
    QStandardItemModel_BeginRemoveRows((QStandardItemModel*)self, (QModelIndex*)parent, first, last);
}

void q_standarditemmodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last) {
    QStandardItemModel_QBaseBeginRemoveRows((QStandardItemModel*)self, (QModelIndex*)parent, first, last);
}

void q_standarditemmodel_on_begin_remove_rows(void* self, void (*callback)(void*, void*, int, int)) {
    QStandardItemModel_OnBeginRemoveRows((QStandardItemModel*)self, (intptr_t)callback);
}

void q_standarditemmodel_end_remove_rows(void* self) {
    QStandardItemModel_EndRemoveRows((QStandardItemModel*)self);
}

void q_standarditemmodel_qbase_end_remove_rows(void* self) {
    QStandardItemModel_QBaseEndRemoveRows((QStandardItemModel*)self);
}

void q_standarditemmodel_on_end_remove_rows(void* self, void (*callback)()) {
    QStandardItemModel_OnEndRemoveRows((QStandardItemModel*)self, (intptr_t)callback);
}

bool q_standarditemmodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return QStandardItemModel_BeginMoveRows((QStandardItemModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

bool q_standarditemmodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return QStandardItemModel_QBaseBeginMoveRows((QStandardItemModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

void q_standarditemmodel_on_begin_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    QStandardItemModel_OnBeginMoveRows((QStandardItemModel*)self, (intptr_t)callback);
}

void q_standarditemmodel_end_move_rows(void* self) {
    QStandardItemModel_EndMoveRows((QStandardItemModel*)self);
}

void q_standarditemmodel_qbase_end_move_rows(void* self) {
    QStandardItemModel_QBaseEndMoveRows((QStandardItemModel*)self);
}

void q_standarditemmodel_on_end_move_rows(void* self, void (*callback)()) {
    QStandardItemModel_OnEndMoveRows((QStandardItemModel*)self, (intptr_t)callback);
}

void q_standarditemmodel_begin_insert_columns(void* self, void* parent, int first, int last) {
    QStandardItemModel_BeginInsertColumns((QStandardItemModel*)self, (QModelIndex*)parent, first, last);
}

void q_standarditemmodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last) {
    QStandardItemModel_QBaseBeginInsertColumns((QStandardItemModel*)self, (QModelIndex*)parent, first, last);
}

void q_standarditemmodel_on_begin_insert_columns(void* self, void (*callback)(void*, void*, int, int)) {
    QStandardItemModel_OnBeginInsertColumns((QStandardItemModel*)self, (intptr_t)callback);
}

void q_standarditemmodel_end_insert_columns(void* self) {
    QStandardItemModel_EndInsertColumns((QStandardItemModel*)self);
}

void q_standarditemmodel_qbase_end_insert_columns(void* self) {
    QStandardItemModel_QBaseEndInsertColumns((QStandardItemModel*)self);
}

void q_standarditemmodel_on_end_insert_columns(void* self, void (*callback)()) {
    QStandardItemModel_OnEndInsertColumns((QStandardItemModel*)self, (intptr_t)callback);
}

void q_standarditemmodel_begin_remove_columns(void* self, void* parent, int first, int last) {
    QStandardItemModel_BeginRemoveColumns((QStandardItemModel*)self, (QModelIndex*)parent, first, last);
}

void q_standarditemmodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last) {
    QStandardItemModel_QBaseBeginRemoveColumns((QStandardItemModel*)self, (QModelIndex*)parent, first, last);
}

void q_standarditemmodel_on_begin_remove_columns(void* self, void (*callback)(void*, void*, int, int)) {
    QStandardItemModel_OnBeginRemoveColumns((QStandardItemModel*)self, (intptr_t)callback);
}

void q_standarditemmodel_end_remove_columns(void* self) {
    QStandardItemModel_EndRemoveColumns((QStandardItemModel*)self);
}

void q_standarditemmodel_qbase_end_remove_columns(void* self) {
    QStandardItemModel_QBaseEndRemoveColumns((QStandardItemModel*)self);
}

void q_standarditemmodel_on_end_remove_columns(void* self, void (*callback)()) {
    QStandardItemModel_OnEndRemoveColumns((QStandardItemModel*)self, (intptr_t)callback);
}

bool q_standarditemmodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return QStandardItemModel_BeginMoveColumns((QStandardItemModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

bool q_standarditemmodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return QStandardItemModel_QBaseBeginMoveColumns((QStandardItemModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

void q_standarditemmodel_on_begin_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    QStandardItemModel_OnBeginMoveColumns((QStandardItemModel*)self, (intptr_t)callback);
}

void q_standarditemmodel_end_move_columns(void* self) {
    QStandardItemModel_EndMoveColumns((QStandardItemModel*)self);
}

void q_standarditemmodel_qbase_end_move_columns(void* self) {
    QStandardItemModel_QBaseEndMoveColumns((QStandardItemModel*)self);
}

void q_standarditemmodel_on_end_move_columns(void* self, void (*callback)()) {
    QStandardItemModel_OnEndMoveColumns((QStandardItemModel*)self, (intptr_t)callback);
}

void q_standarditemmodel_begin_reset_model(void* self) {
    QStandardItemModel_BeginResetModel((QStandardItemModel*)self);
}

void q_standarditemmodel_qbase_begin_reset_model(void* self) {
    QStandardItemModel_QBaseBeginResetModel((QStandardItemModel*)self);
}

void q_standarditemmodel_on_begin_reset_model(void* self, void (*callback)()) {
    QStandardItemModel_OnBeginResetModel((QStandardItemModel*)self, (intptr_t)callback);
}

void q_standarditemmodel_end_reset_model(void* self) {
    QStandardItemModel_EndResetModel((QStandardItemModel*)self);
}

void q_standarditemmodel_qbase_end_reset_model(void* self) {
    QStandardItemModel_QBaseEndResetModel((QStandardItemModel*)self);
}

void q_standarditemmodel_on_end_reset_model(void* self, void (*callback)()) {
    QStandardItemModel_OnEndResetModel((QStandardItemModel*)self, (intptr_t)callback);
}

void q_standarditemmodel_change_persistent_index(void* self, void* from, void* to) {
    QStandardItemModel_ChangePersistentIndex((QStandardItemModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void q_standarditemmodel_qbase_change_persistent_index(void* self, void* from, void* to) {
    QStandardItemModel_QBaseChangePersistentIndex((QStandardItemModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void q_standarditemmodel_on_change_persistent_index(void* self, void (*callback)(void*, void*, void*)) {
    QStandardItemModel_OnChangePersistentIndex((QStandardItemModel*)self, (intptr_t)callback);
}

void q_standarditemmodel_change_persistent_index_list(void* self, libqt_list from, libqt_list to) {
    QStandardItemModel_ChangePersistentIndexList((QStandardItemModel*)self, from, to);
}

void q_standarditemmodel_qbase_change_persistent_index_list(void* self, libqt_list from, libqt_list to) {
    QStandardItemModel_QBaseChangePersistentIndexList((QStandardItemModel*)self, from, to);
}

void q_standarditemmodel_on_change_persistent_index_list(void* self, void (*callback)(void*, QModelIndex**, QModelIndex**)) {
    QStandardItemModel_OnChangePersistentIndexList((QStandardItemModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ q_standarditemmodel_persistent_index_list(void* self) {
    libqt_list _arr = QStandardItemModel_PersistentIndexList((QStandardItemModel*)self);
    return _arr;
}

libqt_list /* of QModelIndex* */ q_standarditemmodel_qbase_persistent_index_list(void* self) {
    libqt_list _arr = QStandardItemModel_QBasePersistentIndexList((QStandardItemModel*)self);
    return _arr;
}

void q_standarditemmodel_on_persistent_index_list(void* self, QModelIndex** (*callback)()) {
    QStandardItemModel_OnPersistentIndexList((QStandardItemModel*)self, (intptr_t)callback);
}

QObject* q_standarditemmodel_sender(void* self) {
    return QStandardItemModel_Sender((QStandardItemModel*)self);
}

QObject* q_standarditemmodel_qbase_sender(void* self) {
    return QStandardItemModel_QBaseSender((QStandardItemModel*)self);
}

void q_standarditemmodel_on_sender(void* self, QObject* (*callback)()) {
    QStandardItemModel_OnSender((QStandardItemModel*)self, (intptr_t)callback);
}

int32_t q_standarditemmodel_sender_signal_index(void* self) {
    return QStandardItemModel_SenderSignalIndex((QStandardItemModel*)self);
}

int32_t q_standarditemmodel_qbase_sender_signal_index(void* self) {
    return QStandardItemModel_QBaseSenderSignalIndex((QStandardItemModel*)self);
}

void q_standarditemmodel_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QStandardItemModel_OnSenderSignalIndex((QStandardItemModel*)self, (intptr_t)callback);
}

int32_t q_standarditemmodel_receivers(void* self, const char* signal) {
    return QStandardItemModel_Receivers((QStandardItemModel*)self, signal);
}

int32_t q_standarditemmodel_qbase_receivers(void* self, const char* signal) {
    return QStandardItemModel_QBaseReceivers((QStandardItemModel*)self, signal);
}

void q_standarditemmodel_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QStandardItemModel_OnReceivers((QStandardItemModel*)self, (intptr_t)callback);
}

bool q_standarditemmodel_is_signal_connected(void* self, void* signal) {
    return QStandardItemModel_IsSignalConnected((QStandardItemModel*)self, (QMetaMethod*)signal);
}

bool q_standarditemmodel_qbase_is_signal_connected(void* self, void* signal) {
    return QStandardItemModel_QBaseIsSignalConnected((QStandardItemModel*)self, (QMetaMethod*)signal);
}

void q_standarditemmodel_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QStandardItemModel_OnIsSignalConnected((QStandardItemModel*)self, (intptr_t)callback);
}

void q_standarditemmodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_standarditemmodel_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_standarditemmodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_standarditemmodel_on_rows_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_standarditemmodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_standarditemmodel_on_columns_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_standarditemmodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_standarditemmodel_on_columns_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_standarditemmodel_on_model_about_to_be_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelAboutToBeReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_standarditemmodel_on_model_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_standarditemmodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_standarditemmodel_on_rows_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_RowsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_standarditemmodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_standarditemmodel_on_columns_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_ColumnsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void q_standarditemmodel_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_standarditemmodel_delete(void* self) {
    QStandardItemModel_Delete((QStandardItemModel*)(self));
}
