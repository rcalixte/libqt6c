#include "../libqabstractitemmodel.hpp"
#include "../libqanystringview.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqevent.hpp"
#include "../libqdatastream.hpp"
#include "../libqdatetime.hpp"
#include "../libqmetaobject.hpp"
#include "../libqmimedata.hpp"
#include "../libqobject.hpp"
#include "../libqsize.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqurl.hpp"
#include "../libqvariant.hpp"
#include "../libqcoreevent.hpp"
#include "libqwebenginehistory.hpp"
#include "libqwebenginehistory.h"

/// https://doc.qt.io/qt-6/qwebenginehistoryitem.html

/// q_webenginehistoryitem_new constructs a new QWebEngineHistoryItem object.
///
/// ``` QWebEngineHistoryItem* other ```
QWebEngineHistoryItem* q_webenginehistoryitem_new(void* other) {
    return QWebEngineHistoryItem_new((QWebEngineHistoryItem*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehistoryitem.html#operator=)
///
/// ``` QWebEngineHistoryItem* self, QWebEngineHistoryItem* other ```
void q_webenginehistoryitem_operator_assign(void* self, void* other) {
    QWebEngineHistoryItem_OperatorAssign((QWebEngineHistoryItem*)self, (QWebEngineHistoryItem*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehistoryitem.html#originalUrl)
///
/// ``` QWebEngineHistoryItem* self ```
QUrl* q_webenginehistoryitem_original_url(void* self) {
    return QWebEngineHistoryItem_OriginalUrl((QWebEngineHistoryItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehistoryitem.html#url)
///
/// ``` QWebEngineHistoryItem* self ```
QUrl* q_webenginehistoryitem_url(void* self) {
    return QWebEngineHistoryItem_Url((QWebEngineHistoryItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehistoryitem.html#title)
///
/// ``` QWebEngineHistoryItem* self ```
const char* q_webenginehistoryitem_title(void* self) {
    libqt_string _str = QWebEngineHistoryItem_Title((QWebEngineHistoryItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehistoryitem.html#lastVisited)
///
/// ``` QWebEngineHistoryItem* self ```
QDateTime* q_webenginehistoryitem_last_visited(void* self) {
    return QWebEngineHistoryItem_LastVisited((QWebEngineHistoryItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehistoryitem.html#iconUrl)
///
/// ``` QWebEngineHistoryItem* self ```
QUrl* q_webenginehistoryitem_icon_url(void* self) {
    return QWebEngineHistoryItem_IconUrl((QWebEngineHistoryItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehistoryitem.html#isValid)
///
/// ``` QWebEngineHistoryItem* self ```
bool q_webenginehistoryitem_is_valid(void* self) {
    return QWebEngineHistoryItem_IsValid((QWebEngineHistoryItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehistoryitem.html#swap)
///
/// ``` QWebEngineHistoryItem* self, QWebEngineHistoryItem* other ```
void q_webenginehistoryitem_swap(void* self, void* other) {
    QWebEngineHistoryItem_Swap((QWebEngineHistoryItem*)self, (QWebEngineHistoryItem*)other);
}

/// Delete this object from C++ memory.
///
/// ``` QWebEngineHistoryItem* self ```
void q_webenginehistoryitem_delete(void* self) {
    QWebEngineHistoryItem_Delete((QWebEngineHistoryItem*)(self));
}

/// https://doc.qt.io/qt-6/qwebenginehistorymodel.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QWebEngineHistoryModel* self ```
QMetaObject* q_webenginehistorymodel_meta_object(void* self) {
    return QWebEngineHistoryModel_MetaObject((QWebEngineHistoryModel*)self);
}

/// ``` QWebEngineHistoryModel* self, const char* param1 ```
void* q_webenginehistorymodel_metacast(void* self, const char* param1) {
    return QWebEngineHistoryModel_Metacast((QWebEngineHistoryModel*)self, param1);
}

/// ``` QWebEngineHistoryModel* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_webenginehistorymodel_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QWebEngineHistoryModel_Metacall((QWebEngineHistoryModel*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_webenginehistorymodel_tr(const char* s) {
    libqt_string _str = QWebEngineHistoryModel_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehistorymodel.html#rowCount)
///
/// ``` QWebEngineHistoryModel* self, QModelIndex* parent ```
int32_t q_webenginehistorymodel_row_count(void* self, void* parent) {
    return QWebEngineHistoryModel_RowCount((QWebEngineHistoryModel*)self, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehistorymodel.html#data)
///
/// ``` QWebEngineHistoryModel* self, QModelIndex* index, int role ```
QVariant* q_webenginehistorymodel_data(void* self, void* index, int role) {
    return QWebEngineHistoryModel_Data((QWebEngineHistoryModel*)self, (QModelIndex*)index, role);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehistorymodel.html#roleNames)
///
/// ``` QWebEngineHistoryModel* self ```
libqt_map /* of int to char* */ q_webenginehistorymodel_role_names(void* self) {
    return QWebEngineHistoryModel_RoleNames((QWebEngineHistoryModel*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehistorymodel.html#reset)
///
/// ``` QWebEngineHistoryModel* self ```
void q_webenginehistorymodel_reset(void* self) {
    QWebEngineHistoryModel_Reset((QWebEngineHistoryModel*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_webenginehistorymodel_tr2(const char* s, const char* c) {
    libqt_string _str = QWebEngineHistoryModel_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_webenginehistorymodel_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QWebEngineHistoryModel_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractListModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractlistmodel.html#index)
///
/// ``` QWebEngineHistoryModel* self, int row, int column, QModelIndex* parent ```
QModelIndex* q_webenginehistorymodel_index(void* self, int row, int column, void* parent) {
    return QAbstractListModel_Index((QAbstractListModel*)self, row, column, (QModelIndex*)parent);
}

/// Inherited from QAbstractListModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractlistmodel.html#sibling)
///
/// ``` QWebEngineHistoryModel* self, int row, int column, QModelIndex* idx ```
QModelIndex* q_webenginehistorymodel_sibling(void* self, int row, int column, void* idx) {
    return QAbstractListModel_Sibling((QAbstractListModel*)self, row, column, (QModelIndex*)idx);
}

/// Inherited from QAbstractListModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractlistmodel.html#dropMimeData)
///
/// ``` QWebEngineHistoryModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_webenginehistorymodel_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent) {
    return QAbstractListModel_DropMimeData((QAbstractListModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

/// Inherited from QAbstractListModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractlistmodel.html#flags)
///
/// ``` QWebEngineHistoryModel* self, QModelIndex* index ```
int64_t q_webenginehistorymodel_flags(void* self, void* index) {
    return QAbstractListModel_Flags((QAbstractListModel*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// ``` QWebEngineHistoryModel* self, int row, int column ```
bool q_webenginehistorymodel_has_index(void* self, int row, int column) {
    return QAbstractItemModel_HasIndex((QAbstractItemModel*)self, row, column);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
///
/// ``` QWebEngineHistoryModel* self, QModelIndex* child ```
QModelIndex* q_webenginehistorymodel_parent(void* self, void* child) {
    return QAbstractItemModel_Parent((QAbstractItemModel*)self, (QModelIndex*)child);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnCount)
///
/// ``` QWebEngineHistoryModel* self, QModelIndex* parent ```
int32_t q_webenginehistorymodel_column_count(void* self, void* parent) {
    return QAbstractItemModel_ColumnCount((QAbstractItemModel*)self, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// ``` QWebEngineHistoryModel* self, QModelIndex* parent ```
bool q_webenginehistorymodel_has_children(void* self, void* parent) {
    return QAbstractItemModel_HasChildren((QAbstractItemModel*)self, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
///
/// ``` QWebEngineHistoryModel* self, QModelIndex* index, QVariant* value, int role ```
bool q_webenginehistorymodel_set_data(void* self, void* index, void* value, int role) {
    return QAbstractItemModel_SetData((QAbstractItemModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
///
/// ``` QWebEngineHistoryModel* self, int section, enum Qt__Orientation orientation, int role ```
QVariant* q_webenginehistorymodel_header_data(void* self, int section, int64_t orientation, int role) {
    return QAbstractItemModel_HeaderData((QAbstractItemModel*)self, section, orientation, role);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// ``` QWebEngineHistoryModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role ```
bool q_webenginehistorymodel_set_header_data(void* self, int section, int64_t orientation, void* value, int role) {
    return QAbstractItemModel_SetHeaderData((QAbstractItemModel*)self, section, orientation, (QVariant*)value, role);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// ``` QWebEngineHistoryModel* self, QModelIndex* index ```
libqt_map /* of int to QVariant* */ q_webenginehistorymodel_item_data(void* self, void* index) {
    return QAbstractItemModel_ItemData((QAbstractItemModel*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// ``` QWebEngineHistoryModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ roles ```
bool q_webenginehistorymodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    return QAbstractItemModel_SetItemData((QAbstractItemModel*)self, (QModelIndex*)index, roles);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// ``` QWebEngineHistoryModel* self, QModelIndex* index ```
bool q_webenginehistorymodel_clear_item_data(void* self, void* index) {
    return QAbstractItemModel_ClearItemData((QAbstractItemModel*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// ``` QWebEngineHistoryModel* self ```
const char** q_webenginehistorymodel_mime_types(void* self) {
    libqt_list _arr = QAbstractItemModel_MimeTypes((QAbstractItemModel*)self);
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

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// ``` QWebEngineHistoryModel* self, QModelIndex* indexes[] ```
QMimeData* q_webenginehistorymodel_mime_data(void* self, void* indexes[]) {
    QModelIndex** indexes_arr = (QModelIndex**)indexes;
    size_t indexes_len = 0;
    while (indexes_arr[indexes_len] != NULL) {
        indexes_len++;
    }
    libqt_list indexes_list = {
        .len = indexes_len,
        .data = {(QModelIndex*)indexes},
    };
    return QAbstractItemModel_MimeData((QAbstractItemModel*)self, indexes_list);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// ``` QWebEngineHistoryModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_webenginehistorymodel_can_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent) {
    return QAbstractItemModel_CanDropMimeData((QAbstractItemModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// ``` QWebEngineHistoryModel* self ```
int64_t q_webenginehistorymodel_supported_drop_actions(void* self) {
    return QAbstractItemModel_SupportedDropActions((QAbstractItemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// ``` QWebEngineHistoryModel* self ```
int64_t q_webenginehistorymodel_supported_drag_actions(void* self) {
    return QAbstractItemModel_SupportedDragActions((QAbstractItemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// ``` QWebEngineHistoryModel* self, int row, int count, QModelIndex* parent ```
bool q_webenginehistorymodel_insert_rows(void* self, int row, int count, void* parent) {
    return QAbstractItemModel_InsertRows((QAbstractItemModel*)self, row, count, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// ``` QWebEngineHistoryModel* self, int column, int count, QModelIndex* parent ```
bool q_webenginehistorymodel_insert_columns(void* self, int column, int count, void* parent) {
    return QAbstractItemModel_InsertColumns((QAbstractItemModel*)self, column, count, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// ``` QWebEngineHistoryModel* self, int row, int count, QModelIndex* parent ```
bool q_webenginehistorymodel_remove_rows(void* self, int row, int count, void* parent) {
    return QAbstractItemModel_RemoveRows((QAbstractItemModel*)self, row, count, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// ``` QWebEngineHistoryModel* self, int column, int count, QModelIndex* parent ```
bool q_webenginehistorymodel_remove_columns(void* self, int column, int count, void* parent) {
    return QAbstractItemModel_RemoveColumns((QAbstractItemModel*)self, column, count, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// ``` QWebEngineHistoryModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_webenginehistorymodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveRows((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// ``` QWebEngineHistoryModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_webenginehistorymodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveColumns((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// ``` QWebEngineHistoryModel* self, int row ```
bool q_webenginehistorymodel_insert_row(void* self, int row) {
    return QAbstractItemModel_InsertRow((QAbstractItemModel*)self, row);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// ``` QWebEngineHistoryModel* self, int column ```
bool q_webenginehistorymodel_insert_column(void* self, int column) {
    return QAbstractItemModel_InsertColumn((QAbstractItemModel*)self, column);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// ``` QWebEngineHistoryModel* self, int row ```
bool q_webenginehistorymodel_remove_row(void* self, int row) {
    return QAbstractItemModel_RemoveRow((QAbstractItemModel*)self, row);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// ``` QWebEngineHistoryModel* self, int column ```
bool q_webenginehistorymodel_remove_column(void* self, int column) {
    return QAbstractItemModel_RemoveColumn((QAbstractItemModel*)self, column);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
///
/// ``` QWebEngineHistoryModel* self, QModelIndex* sourceParent, int sourceRow, QModelIndex* destinationParent, int destinationChild ```
bool q_webenginehistorymodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveRow((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceRow, (QModelIndex*)destinationParent, destinationChild);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
///
/// ``` QWebEngineHistoryModel* self, QModelIndex* sourceParent, int sourceColumn, QModelIndex* destinationParent, int destinationChild ```
bool q_webenginehistorymodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveColumn((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceColumn, (QModelIndex*)destinationParent, destinationChild);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// ``` QWebEngineHistoryModel* self, QModelIndex* parent ```
void q_webenginehistorymodel_fetch_more(void* self, void* parent) {
    QAbstractItemModel_FetchMore((QAbstractItemModel*)self, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// ``` QWebEngineHistoryModel* self, QModelIndex* parent ```
bool q_webenginehistorymodel_can_fetch_more(void* self, void* parent) {
    return QAbstractItemModel_CanFetchMore((QAbstractItemModel*)self, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
///
/// ``` QWebEngineHistoryModel* self, int column, enum Qt__SortOrder order ```
void q_webenginehistorymodel_sort(void* self, int column, int64_t order) {
    QAbstractItemModel_Sort((QAbstractItemModel*)self, column, order);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// ``` QWebEngineHistoryModel* self, QModelIndex* index ```
QModelIndex* q_webenginehistorymodel_buddy(void* self, void* index) {
    return QAbstractItemModel_Buddy((QAbstractItemModel*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// ``` QWebEngineHistoryModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags ```
libqt_list /* of QModelIndex* */ q_webenginehistorymodel_match(void* self, void* start, int role, void* value, int hits, int64_t flags) {
    libqt_list _arr = QAbstractItemModel_Match((QAbstractItemModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// ``` QWebEngineHistoryModel* self, QModelIndex* index ```
QSize* q_webenginehistorymodel_span(void* self, void* index) {
    return QAbstractItemModel_Span((QAbstractItemModel*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// ``` QWebEngineHistoryModel* self, QModelIndex* index ```
bool q_webenginehistorymodel_check_index(void* self, void* index) {
    return QAbstractItemModel_CheckIndex((QAbstractItemModel*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// ``` QWebEngineHistoryModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan ```
void q_webenginehistorymodel_multi_data(void* self, void* index, void* roleDataSpan) {
    QAbstractItemModel_MultiData((QAbstractItemModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// ``` QWebEngineHistoryModel* self, QModelIndex* topLeft, QModelIndex* bottomRight ```
void q_webenginehistorymodel_data_changed(void* self, void* topLeft, void* bottomRight) {
    QAbstractItemModel_DataChanged((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight);
}

/// Inherited from QAbstractItemModel
///
/// ``` QWebEngineHistoryModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, QModelIndex*) ```
void q_webenginehistorymodel_on_data_changed(void* self, void (*slot)(void*, void*, void*)) {
    QAbstractItemModel_Connect_DataChanged((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// ``` QWebEngineHistoryModel* self, enum Qt__Orientation orientation, int first, int last ```
void q_webenginehistorymodel_header_data_changed(void* self, int64_t orientation, int first, int last) {
    QAbstractItemModel_HeaderDataChanged((QAbstractItemModel*)self, orientation, first, last);
}

/// Inherited from QAbstractItemModel
///
/// ``` QWebEngineHistoryModel* self, void (*slot)(QAbstractItemModel*, enum Qt__Orientation, int, int) ```
void q_webenginehistorymodel_on_header_data_changed(void* self, void (*slot)(void*, int64_t, int, int)) {
    QAbstractItemModel_Connect_HeaderDataChanged((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QWebEngineHistoryModel* self ```
void q_webenginehistorymodel_layout_changed(void* self) {
    QAbstractItemModel_LayoutChanged((QAbstractItemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// ``` QWebEngineHistoryModel* self, void (*slot)(QAbstractItemModel*) ```
void q_webenginehistorymodel_on_layout_changed(void* self, void (*slot)(void*)) {
    QAbstractItemModel_Connect_LayoutChanged((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QWebEngineHistoryModel* self ```
void q_webenginehistorymodel_layout_about_to_be_changed(void* self) {
    QAbstractItemModel_LayoutAboutToBeChanged((QAbstractItemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// ``` QWebEngineHistoryModel* self, void (*slot)(QAbstractItemModel*) ```
void q_webenginehistorymodel_on_layout_about_to_be_changed(void* self, void (*slot)(void*)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// ``` QWebEngineHistoryModel* self ```
bool q_webenginehistorymodel_submit(void* self) {
    return QAbstractItemModel_Submit((QAbstractItemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// ``` QWebEngineHistoryModel* self ```
void q_webenginehistorymodel_revert(void* self) {
    QAbstractItemModel_Revert((QAbstractItemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// ``` QWebEngineHistoryModel* self, int row, int column, QModelIndex* parent ```
bool q_webenginehistorymodel_has_index3(void* self, int row, int column, void* parent) {
    return QAbstractItemModel_HasIndex3((QAbstractItemModel*)self, row, column, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// ``` QWebEngineHistoryModel* self, int row, QModelIndex* parent ```
bool q_webenginehistorymodel_insert_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_InsertRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// ``` QWebEngineHistoryModel* self, int column, QModelIndex* parent ```
bool q_webenginehistorymodel_insert_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_InsertColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// ``` QWebEngineHistoryModel* self, int row, QModelIndex* parent ```
bool q_webenginehistorymodel_remove_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_RemoveRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// ``` QWebEngineHistoryModel* self, int column, QModelIndex* parent ```
bool q_webenginehistorymodel_remove_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_RemoveColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// ``` QWebEngineHistoryModel* self, QModelIndex* index, int options ```
bool q_webenginehistorymodel_check_index2(void* self, void* index, int64_t options) {
    return QAbstractItemModel_CheckIndex2((QAbstractItemModel*)self, (QModelIndex*)index, options);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// ``` QWebEngineHistoryModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, int* roles[] ```
void q_webenginehistorymodel_data_changed3(void* self, void* topLeft, void* bottomRight, int* roles[]) {
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
/// ``` QWebEngineHistoryModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, QModelIndex*, int*[]) ```
void q_webenginehistorymodel_on_data_changed3(void* self, void (*slot)(void*, void*, void*, int*)) {
    QAbstractItemModel_Connect_DataChanged3((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QWebEngineHistoryModel* self, QPersistentModelIndex* parents[] ```
void q_webenginehistorymodel_layout_changed1(void* self, void* parents[]) {
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
/// ``` QWebEngineHistoryModel* self, void (*slot)(QAbstractItemModel*, QPersistentModelIndex*[]) ```
void q_webenginehistorymodel_on_layout_changed1(void* self, void (*slot)(void*, void*)) {
    QAbstractItemModel_Connect_LayoutChanged1((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QWebEngineHistoryModel* self, QPersistentModelIndex* parents[], enum QAbstractItemModel__LayoutChangeHint hint ```
void q_webenginehistorymodel_layout_changed2(void* self, void* parents[], int64_t hint) {
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
/// ``` QWebEngineHistoryModel* self, void (*slot)(QAbstractItemModel*, QPersistentModelIndex*[], enum QAbstractItemModel__LayoutChangeHint) ```
void q_webenginehistorymodel_on_layout_changed2(void* self, void (*slot)(void*, void*, int64_t)) {
    QAbstractItemModel_Connect_LayoutChanged2((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QWebEngineHistoryModel* self, QPersistentModelIndex* parents[] ```
void q_webenginehistorymodel_layout_about_to_be_changed1(void* self, void* parents[]) {
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
/// ``` QWebEngineHistoryModel* self, void (*slot)(QAbstractItemModel*, QPersistentModelIndex*[]) ```
void q_webenginehistorymodel_on_layout_about_to_be_changed1(void* self, void (*slot)(void*, void*)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged1((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QWebEngineHistoryModel* self, QPersistentModelIndex* parents[], enum QAbstractItemModel__LayoutChangeHint hint ```
void q_webenginehistorymodel_layout_about_to_be_changed2(void* self, void* parents[], int64_t hint) {
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
/// ``` QWebEngineHistoryModel* self, void (*slot)(QAbstractItemModel*, QPersistentModelIndex*[], enum QAbstractItemModel__LayoutChangeHint) ```
void q_webenginehistorymodel_on_layout_about_to_be_changed2(void* self, void (*slot)(void*, void*, int64_t)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged2((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// ``` QWebEngineHistoryModel* self, QEvent* event ```
bool q_webenginehistorymodel_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// ``` QWebEngineHistoryModel* self, QObject* watched, QEvent* event ```
bool q_webenginehistorymodel_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QWebEngineHistoryModel* self ```
const char* q_webenginehistorymodel_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QWebEngineHistoryModel* self, const char* name ```
void q_webenginehistorymodel_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QWebEngineHistoryModel* self ```
bool q_webenginehistorymodel_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QWebEngineHistoryModel* self ```
bool q_webenginehistorymodel_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QWebEngineHistoryModel* self ```
bool q_webenginehistorymodel_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QWebEngineHistoryModel* self ```
bool q_webenginehistorymodel_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QWebEngineHistoryModel* self, bool b ```
bool q_webenginehistorymodel_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QWebEngineHistoryModel* self ```
QThread* q_webenginehistorymodel_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QWebEngineHistoryModel* self, QThread* thread ```
void q_webenginehistorymodel_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWebEngineHistoryModel* self, int interval ```
int32_t q_webenginehistorymodel_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QWebEngineHistoryModel* self, int id ```
void q_webenginehistorymodel_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QWebEngineHistoryModel* self ```
libqt_list /* of QObject* */ q_webenginehistorymodel_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QWebEngineHistoryModel* self, QObject* parent ```
void q_webenginehistorymodel_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QWebEngineHistoryModel* self, QObject* filterObj ```
void q_webenginehistorymodel_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QWebEngineHistoryModel* self, QObject* obj ```
void q_webenginehistorymodel_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_webenginehistorymodel_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWebEngineHistoryModel* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_webenginehistorymodel_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_webenginehistorymodel_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_webenginehistorymodel_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QWebEngineHistoryModel* self ```
void q_webenginehistorymodel_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QWebEngineHistoryModel* self ```
void q_webenginehistorymodel_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QWebEngineHistoryModel* self, const char* name, QVariant* value ```
bool q_webenginehistorymodel_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QWebEngineHistoryModel* self, const char* name ```
QVariant* q_webenginehistorymodel_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QWebEngineHistoryModel* self ```
const char** q_webenginehistorymodel_dynamic_property_names(void* self) {
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
/// ``` QWebEngineHistoryModel* self ```
QBindingStorage* q_webenginehistorymodel_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWebEngineHistoryModel* self ```
QBindingStorage* q_webenginehistorymodel_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineHistoryModel* self ```
void q_webenginehistorymodel_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QWebEngineHistoryModel* self, void (*slot)(QObject*) ```
void q_webenginehistorymodel_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QWebEngineHistoryModel* self, const char* classname ```
bool q_webenginehistorymodel_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QWebEngineHistoryModel* self ```
void q_webenginehistorymodel_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWebEngineHistoryModel* self, int interval, enum Qt__TimerType timerType ```
int32_t q_webenginehistorymodel_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_webenginehistorymodel_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWebEngineHistoryModel* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_webenginehistorymodel_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineHistoryModel* self, QObject* param1 ```
void q_webenginehistorymodel_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QWebEngineHistoryModel* self, void (*slot)(QObject*, QObject*) ```
void q_webenginehistorymodel_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// https://doc.qt.io/qt-6/qwebenginehistory.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QWebEngineHistory* self ```
QMetaObject* q_webenginehistory_meta_object(void* self) {
    return QWebEngineHistory_MetaObject((QWebEngineHistory*)self);
}

/// ``` QWebEngineHistory* self, const char* param1 ```
void* q_webenginehistory_metacast(void* self, const char* param1) {
    return QWebEngineHistory_Metacast((QWebEngineHistory*)self, param1);
}

/// ``` QWebEngineHistory* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_webenginehistory_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QWebEngineHistory_Metacall((QWebEngineHistory*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_webenginehistory_tr(const char* s) {
    libqt_string _str = QWebEngineHistory_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehistory.html#clear)
///
/// ``` QWebEngineHistory* self ```
void q_webenginehistory_clear(void* self) {
    QWebEngineHistory_Clear((QWebEngineHistory*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehistory.html#items)
///
/// ``` QWebEngineHistory* self ```
libqt_list /* of QWebEngineHistoryItem* */ q_webenginehistory_items(void* self) {
    libqt_list _arr = QWebEngineHistory_Items((QWebEngineHistory*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehistory.html#backItems)
///
/// ``` QWebEngineHistory* self, int maxItems ```
libqt_list /* of QWebEngineHistoryItem* */ q_webenginehistory_back_items(void* self, int maxItems) {
    libqt_list _arr = QWebEngineHistory_BackItems((QWebEngineHistory*)self, maxItems);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehistory.html#forwardItems)
///
/// ``` QWebEngineHistory* self, int maxItems ```
libqt_list /* of QWebEngineHistoryItem* */ q_webenginehistory_forward_items(void* self, int maxItems) {
    libqt_list _arr = QWebEngineHistory_ForwardItems((QWebEngineHistory*)self, maxItems);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehistory.html#canGoBack)
///
/// ``` QWebEngineHistory* self ```
bool q_webenginehistory_can_go_back(void* self) {
    return QWebEngineHistory_CanGoBack((QWebEngineHistory*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehistory.html#canGoForward)
///
/// ``` QWebEngineHistory* self ```
bool q_webenginehistory_can_go_forward(void* self) {
    return QWebEngineHistory_CanGoForward((QWebEngineHistory*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehistory.html#back)
///
/// ``` QWebEngineHistory* self ```
void q_webenginehistory_back(void* self) {
    QWebEngineHistory_Back((QWebEngineHistory*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehistory.html#forward)
///
/// ``` QWebEngineHistory* self ```
void q_webenginehistory_forward(void* self) {
    QWebEngineHistory_Forward((QWebEngineHistory*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehistory.html#goToItem)
///
/// ``` QWebEngineHistory* self, QWebEngineHistoryItem* item ```
void q_webenginehistory_go_to_item(void* self, void* item) {
    QWebEngineHistory_GoToItem((QWebEngineHistory*)self, (QWebEngineHistoryItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehistory.html#backItem)
///
/// ``` QWebEngineHistory* self ```
QWebEngineHistoryItem* q_webenginehistory_back_item(void* self) {
    return QWebEngineHistory_BackItem((QWebEngineHistory*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehistory.html#currentItem)
///
/// ``` QWebEngineHistory* self ```
QWebEngineHistoryItem* q_webenginehistory_current_item(void* self) {
    return QWebEngineHistory_CurrentItem((QWebEngineHistory*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehistory.html#forwardItem)
///
/// ``` QWebEngineHistory* self ```
QWebEngineHistoryItem* q_webenginehistory_forward_item(void* self) {
    return QWebEngineHistory_ForwardItem((QWebEngineHistory*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehistory.html#itemAt)
///
/// ``` QWebEngineHistory* self, int i ```
QWebEngineHistoryItem* q_webenginehistory_item_at(void* self, int i) {
    return QWebEngineHistory_ItemAt((QWebEngineHistory*)self, i);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehistory.html#currentItemIndex)
///
/// ``` QWebEngineHistory* self ```
int32_t q_webenginehistory_current_item_index(void* self) {
    return QWebEngineHistory_CurrentItemIndex((QWebEngineHistory*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehistory.html#count)
///
/// ``` QWebEngineHistory* self ```
int32_t q_webenginehistory_count(void* self) {
    return QWebEngineHistory_Count((QWebEngineHistory*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehistory.html#itemsModel)
///
/// ``` QWebEngineHistory* self ```
QWebEngineHistoryModel* q_webenginehistory_items_model(void* self) {
    return QWebEngineHistory_ItemsModel((QWebEngineHistory*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehistory.html#backItemsModel)
///
/// ``` QWebEngineHistory* self ```
QWebEngineHistoryModel* q_webenginehistory_back_items_model(void* self) {
    return QWebEngineHistory_BackItemsModel((QWebEngineHistory*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehistory.html#forwardItemsModel)
///
/// ``` QWebEngineHistory* self ```
QWebEngineHistoryModel* q_webenginehistory_forward_items_model(void* self) {
    return QWebEngineHistory_ForwardItemsModel((QWebEngineHistory*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_webenginehistory_tr2(const char* s, const char* c) {
    libqt_string _str = QWebEngineHistory_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_webenginehistory_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QWebEngineHistory_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// ``` QWebEngineHistory* self, QEvent* event ```
bool q_webenginehistory_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// ``` QWebEngineHistory* self, QObject* watched, QEvent* event ```
bool q_webenginehistory_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QWebEngineHistory* self ```
const char* q_webenginehistory_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QWebEngineHistory* self, const char* name ```
void q_webenginehistory_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QWebEngineHistory* self ```
bool q_webenginehistory_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QWebEngineHistory* self ```
bool q_webenginehistory_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QWebEngineHistory* self ```
bool q_webenginehistory_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QWebEngineHistory* self ```
bool q_webenginehistory_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QWebEngineHistory* self, bool b ```
bool q_webenginehistory_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QWebEngineHistory* self ```
QThread* q_webenginehistory_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QWebEngineHistory* self, QThread* thread ```
void q_webenginehistory_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWebEngineHistory* self, int interval ```
int32_t q_webenginehistory_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QWebEngineHistory* self, int id ```
void q_webenginehistory_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QWebEngineHistory* self ```
libqt_list /* of QObject* */ q_webenginehistory_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QWebEngineHistory* self, QObject* parent ```
void q_webenginehistory_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QWebEngineHistory* self, QObject* filterObj ```
void q_webenginehistory_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QWebEngineHistory* self, QObject* obj ```
void q_webenginehistory_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_webenginehistory_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWebEngineHistory* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_webenginehistory_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_webenginehistory_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_webenginehistory_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QWebEngineHistory* self ```
void q_webenginehistory_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QWebEngineHistory* self ```
void q_webenginehistory_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QWebEngineHistory* self, const char* name, QVariant* value ```
bool q_webenginehistory_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QWebEngineHistory* self, const char* name ```
QVariant* q_webenginehistory_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QWebEngineHistory* self ```
const char** q_webenginehistory_dynamic_property_names(void* self) {
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
/// ``` QWebEngineHistory* self ```
QBindingStorage* q_webenginehistory_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWebEngineHistory* self ```
QBindingStorage* q_webenginehistory_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineHistory* self ```
void q_webenginehistory_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QWebEngineHistory* self, void (*slot)(QObject*) ```
void q_webenginehistory_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QWebEngineHistory* self ```
QObject* q_webenginehistory_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QWebEngineHistory* self, const char* classname ```
bool q_webenginehistory_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QWebEngineHistory* self ```
void q_webenginehistory_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWebEngineHistory* self, int interval, enum Qt__TimerType timerType ```
int32_t q_webenginehistory_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_webenginehistory_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWebEngineHistory* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_webenginehistory_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineHistory* self, QObject* param1 ```
void q_webenginehistory_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QWebEngineHistory* self, void (*slot)(QObject*, QObject*) ```
void q_webenginehistory_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}
