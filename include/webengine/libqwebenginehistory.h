#pragma once
#ifndef SRC_WEBENGINEQT6C_LIBQWEBENGINEHISTORY_H
#define SRC_WEBENGINEQT6C_LIBQWEBENGINEHISTORY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqabstractitemmodel.h"
#include "../libqanystringview.h"
#include "../libqbindingstorage.h"
#include "../libqevent.h"
#include "../libqdatastream.h"
#include "../libqdatetime.h"
#include "../libqmetaobject.h"
#include "../libqmimedata.h"
#include "../libqobject.h"
#include "../libqsize.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqurl.h"
#include "../libqvariant.h"

/// https://doc.qt.io/qt-6/qwebenginehistoryitem.html

/// q_webenginehistoryitem_new constructs a new QWebEngineHistoryItem object.
///
/// ``` QWebEngineHistoryItem* other ```
QWebEngineHistoryItem* q_webenginehistoryitem_new(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehistoryitem.html#operator=)
///
/// ``` QWebEngineHistoryItem* self, QWebEngineHistoryItem* other ```
void q_webenginehistoryitem_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehistoryitem.html#originalUrl)
///
/// ``` QWebEngineHistoryItem* self ```
QUrl* q_webenginehistoryitem_original_url(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehistoryitem.html#url)
///
/// ``` QWebEngineHistoryItem* self ```
QUrl* q_webenginehistoryitem_url(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehistoryitem.html#title)
///
/// ``` QWebEngineHistoryItem* self ```
const char* q_webenginehistoryitem_title(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehistoryitem.html#lastVisited)
///
/// ``` QWebEngineHistoryItem* self ```
QDateTime* q_webenginehistoryitem_last_visited(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehistoryitem.html#iconUrl)
///
/// ``` QWebEngineHistoryItem* self ```
QUrl* q_webenginehistoryitem_icon_url(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehistoryitem.html#isValid)
///
/// ``` QWebEngineHistoryItem* self ```
bool q_webenginehistoryitem_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehistoryitem.html#swap)
///
/// ``` QWebEngineHistoryItem* self, QWebEngineHistoryItem* other ```
void q_webenginehistoryitem_swap(void* self, void* other);

/// Delete this object from C++ memory.
///
/// ``` QWebEngineHistoryItem* self ```
void q_webenginehistoryitem_delete(void* self);

/// https://doc.qt.io/qt-6/qwebenginehistorymodel.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QWebEngineHistoryModel* self ```
QMetaObject* q_webenginehistorymodel_meta_object(void* self);

/// ``` QWebEngineHistoryModel* self, const char* param1 ```
void* q_webenginehistorymodel_metacast(void* self, const char* param1);

/// ``` QWebEngineHistoryModel* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_webenginehistorymodel_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_webenginehistorymodel_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehistorymodel.html#rowCount)
///
/// ``` QWebEngineHistoryModel* self, QModelIndex* parent ```
int32_t q_webenginehistorymodel_row_count(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehistorymodel.html#data)
///
/// ``` QWebEngineHistoryModel* self, QModelIndex* index, int role ```
QVariant* q_webenginehistorymodel_data(void* self, void* index, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehistorymodel.html#roleNames)
///
/// ``` QWebEngineHistoryModel* self ```
libqt_map /* of int to char* */ q_webenginehistorymodel_role_names(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehistorymodel.html#reset)
///
/// ``` QWebEngineHistoryModel* self ```
void q_webenginehistorymodel_reset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_webenginehistorymodel_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_webenginehistorymodel_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractListModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractlistmodel.html#index)
///
/// ``` QWebEngineHistoryModel* self, int row, int column, QModelIndex* parent ```
QModelIndex* q_webenginehistorymodel_index(void* self, int row, int column, void* parent);

/// Inherited from QAbstractListModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractlistmodel.html#sibling)
///
/// ``` QWebEngineHistoryModel* self, int row, int column, QModelIndex* idx ```
QModelIndex* q_webenginehistorymodel_sibling(void* self, int row, int column, void* idx);

/// Inherited from QAbstractListModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractlistmodel.html#dropMimeData)
///
/// ``` QWebEngineHistoryModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_webenginehistorymodel_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent);

/// Inherited from QAbstractListModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractlistmodel.html#flags)
///
/// ``` QWebEngineHistoryModel* self, QModelIndex* index ```
int64_t q_webenginehistorymodel_flags(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// ``` QWebEngineHistoryModel* self, int row, int column ```
bool q_webenginehistorymodel_has_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
///
/// ``` QWebEngineHistoryModel* self, QModelIndex* child ```
QModelIndex* q_webenginehistorymodel_parent(void* self, void* child);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnCount)
///
/// ``` QWebEngineHistoryModel* self, QModelIndex* parent ```
int32_t q_webenginehistorymodel_column_count(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// ``` QWebEngineHistoryModel* self, QModelIndex* parent ```
bool q_webenginehistorymodel_has_children(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
///
/// ``` QWebEngineHistoryModel* self, QModelIndex* index, QVariant* value, int role ```
bool q_webenginehistorymodel_set_data(void* self, void* index, void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
///
/// ``` QWebEngineHistoryModel* self, int section, enum Qt__Orientation orientation, int role ```
QVariant* q_webenginehistorymodel_header_data(void* self, int section, int64_t orientation, int role);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// ``` QWebEngineHistoryModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role ```
bool q_webenginehistorymodel_set_header_data(void* self, int section, int64_t orientation, void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// ``` QWebEngineHistoryModel* self, QModelIndex* index ```
libqt_map /* of int to QVariant* */ q_webenginehistorymodel_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// ``` QWebEngineHistoryModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ roles ```
bool q_webenginehistorymodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// ``` QWebEngineHistoryModel* self, QModelIndex* index ```
bool q_webenginehistorymodel_clear_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// ``` QWebEngineHistoryModel* self ```
const char** q_webenginehistorymodel_mime_types(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// ``` QWebEngineHistoryModel* self, QModelIndex* indexes[] ```
QMimeData* q_webenginehistorymodel_mime_data(void* self, void* indexes[]);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// ``` QWebEngineHistoryModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_webenginehistorymodel_can_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// ``` QWebEngineHistoryModel* self ```
int64_t q_webenginehistorymodel_supported_drop_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// ``` QWebEngineHistoryModel* self ```
int64_t q_webenginehistorymodel_supported_drag_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// ``` QWebEngineHistoryModel* self, int row, int count, QModelIndex* parent ```
bool q_webenginehistorymodel_insert_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// ``` QWebEngineHistoryModel* self, int column, int count, QModelIndex* parent ```
bool q_webenginehistorymodel_insert_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// ``` QWebEngineHistoryModel* self, int row, int count, QModelIndex* parent ```
bool q_webenginehistorymodel_remove_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// ``` QWebEngineHistoryModel* self, int column, int count, QModelIndex* parent ```
bool q_webenginehistorymodel_remove_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// ``` QWebEngineHistoryModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_webenginehistorymodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// ``` QWebEngineHistoryModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_webenginehistorymodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// ``` QWebEngineHistoryModel* self, int row ```
bool q_webenginehistorymodel_insert_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// ``` QWebEngineHistoryModel* self, int column ```
bool q_webenginehistorymodel_insert_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// ``` QWebEngineHistoryModel* self, int row ```
bool q_webenginehistorymodel_remove_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// ``` QWebEngineHistoryModel* self, int column ```
bool q_webenginehistorymodel_remove_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
///
/// ``` QWebEngineHistoryModel* self, QModelIndex* sourceParent, int sourceRow, QModelIndex* destinationParent, int destinationChild ```
bool q_webenginehistorymodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
///
/// ``` QWebEngineHistoryModel* self, QModelIndex* sourceParent, int sourceColumn, QModelIndex* destinationParent, int destinationChild ```
bool q_webenginehistorymodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// ``` QWebEngineHistoryModel* self, QModelIndex* parent ```
void q_webenginehistorymodel_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// ``` QWebEngineHistoryModel* self, QModelIndex* parent ```
bool q_webenginehistorymodel_can_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
///
/// ``` QWebEngineHistoryModel* self, int column, enum Qt__SortOrder order ```
void q_webenginehistorymodel_sort(void* self, int column, int64_t order);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// ``` QWebEngineHistoryModel* self, QModelIndex* index ```
QModelIndex* q_webenginehistorymodel_buddy(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// ``` QWebEngineHistoryModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags ```
libqt_list /* of QModelIndex* */ q_webenginehistorymodel_match(void* self, void* start, int role, void* value, int hits, int64_t flags);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// ``` QWebEngineHistoryModel* self, QModelIndex* index ```
QSize* q_webenginehistorymodel_span(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// ``` QWebEngineHistoryModel* self, QModelIndex* index ```
bool q_webenginehistorymodel_check_index(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// ``` QWebEngineHistoryModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan ```
void q_webenginehistorymodel_multi_data(void* self, void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// ``` QWebEngineHistoryModel* self, QModelIndex* topLeft, QModelIndex* bottomRight ```
void q_webenginehistorymodel_data_changed(void* self, void* topLeft, void* bottomRight);

/// Inherited from QAbstractItemModel
///
/// ``` QWebEngineHistoryModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, QModelIndex*) ```
void q_webenginehistorymodel_on_data_changed(void* self, void (*slot)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// ``` QWebEngineHistoryModel* self, enum Qt__Orientation orientation, int first, int last ```
void q_webenginehistorymodel_header_data_changed(void* self, int64_t orientation, int first, int last);

/// Inherited from QAbstractItemModel
///
/// ``` QWebEngineHistoryModel* self, void (*slot)(QAbstractItemModel*, enum Qt__Orientation, int, int) ```
void q_webenginehistorymodel_on_header_data_changed(void* self, void (*slot)(void*, int64_t, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QWebEngineHistoryModel* self ```
void q_webenginehistorymodel_layout_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// ``` QWebEngineHistoryModel* self, void (*slot)(QAbstractItemModel*) ```
void q_webenginehistorymodel_on_layout_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QWebEngineHistoryModel* self ```
void q_webenginehistorymodel_layout_about_to_be_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// ``` QWebEngineHistoryModel* self, void (*slot)(QAbstractItemModel*) ```
void q_webenginehistorymodel_on_layout_about_to_be_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// ``` QWebEngineHistoryModel* self ```
bool q_webenginehistorymodel_submit(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// ``` QWebEngineHistoryModel* self ```
void q_webenginehistorymodel_revert(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// ``` QWebEngineHistoryModel* self, int row, int column, QModelIndex* parent ```
bool q_webenginehistorymodel_has_index3(void* self, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// ``` QWebEngineHistoryModel* self, int row, QModelIndex* parent ```
bool q_webenginehistorymodel_insert_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// ``` QWebEngineHistoryModel* self, int column, QModelIndex* parent ```
bool q_webenginehistorymodel_insert_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// ``` QWebEngineHistoryModel* self, int row, QModelIndex* parent ```
bool q_webenginehistorymodel_remove_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// ``` QWebEngineHistoryModel* self, int column, QModelIndex* parent ```
bool q_webenginehistorymodel_remove_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// ``` QWebEngineHistoryModel* self, QModelIndex* index, int options ```
bool q_webenginehistorymodel_check_index2(void* self, void* index, int64_t options);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// ``` QWebEngineHistoryModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, int* roles[] ```
void q_webenginehistorymodel_data_changed3(void* self, void* topLeft, void* bottomRight, int* roles[]);

/// Inherited from QAbstractItemModel
///
/// ``` QWebEngineHistoryModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, QModelIndex*, int*[]) ```
void q_webenginehistorymodel_on_data_changed3(void* self, void (*slot)(void*, void*, void*, int*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QWebEngineHistoryModel* self, QPersistentModelIndex* parents[] ```
void q_webenginehistorymodel_layout_changed1(void* self, void* parents[]);

/// Inherited from QAbstractItemModel
///
/// ``` QWebEngineHistoryModel* self, void (*slot)(QAbstractItemModel*, QPersistentModelIndex*[]) ```
void q_webenginehistorymodel_on_layout_changed1(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QWebEngineHistoryModel* self, QPersistentModelIndex* parents[], enum QAbstractItemModel__LayoutChangeHint hint ```
void q_webenginehistorymodel_layout_changed2(void* self, void* parents[], int64_t hint);

/// Inherited from QAbstractItemModel
///
/// ``` QWebEngineHistoryModel* self, void (*slot)(QAbstractItemModel*, QPersistentModelIndex*[], enum QAbstractItemModel__LayoutChangeHint) ```
void q_webenginehistorymodel_on_layout_changed2(void* self, void (*slot)(void*, void*, int64_t));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QWebEngineHistoryModel* self, QPersistentModelIndex* parents[] ```
void q_webenginehistorymodel_layout_about_to_be_changed1(void* self, void* parents[]);

/// Inherited from QAbstractItemModel
///
/// ``` QWebEngineHistoryModel* self, void (*slot)(QAbstractItemModel*, QPersistentModelIndex*[]) ```
void q_webenginehistorymodel_on_layout_about_to_be_changed1(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QWebEngineHistoryModel* self, QPersistentModelIndex* parents[], enum QAbstractItemModel__LayoutChangeHint hint ```
void q_webenginehistorymodel_layout_about_to_be_changed2(void* self, void* parents[], int64_t hint);

/// Inherited from QAbstractItemModel
///
/// ``` QWebEngineHistoryModel* self, void (*slot)(QAbstractItemModel*, QPersistentModelIndex*[], enum QAbstractItemModel__LayoutChangeHint) ```
void q_webenginehistorymodel_on_layout_about_to_be_changed2(void* self, void (*slot)(void*, void*, int64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// ``` QWebEngineHistoryModel* self, QEvent* event ```
bool q_webenginehistorymodel_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// ``` QWebEngineHistoryModel* self, QObject* watched, QEvent* event ```
bool q_webenginehistorymodel_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QWebEngineHistoryModel* self ```
const char* q_webenginehistorymodel_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QWebEngineHistoryModel* self, char* name ```
void q_webenginehistorymodel_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QWebEngineHistoryModel* self ```
bool q_webenginehistorymodel_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QWebEngineHistoryModel* self ```
bool q_webenginehistorymodel_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QWebEngineHistoryModel* self ```
bool q_webenginehistorymodel_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QWebEngineHistoryModel* self ```
bool q_webenginehistorymodel_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QWebEngineHistoryModel* self, bool b ```
bool q_webenginehistorymodel_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QWebEngineHistoryModel* self ```
QThread* q_webenginehistorymodel_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QWebEngineHistoryModel* self, QThread* thread ```
void q_webenginehistorymodel_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWebEngineHistoryModel* self, int interval ```
int32_t q_webenginehistorymodel_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QWebEngineHistoryModel* self, int id ```
void q_webenginehistorymodel_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QWebEngineHistoryModel* self ```
libqt_list /* of QObject* */ q_webenginehistorymodel_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QWebEngineHistoryModel* self, QObject* parent ```
void q_webenginehistorymodel_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QWebEngineHistoryModel* self, QObject* filterObj ```
void q_webenginehistorymodel_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QWebEngineHistoryModel* self, QObject* obj ```
void q_webenginehistorymodel_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_webenginehistorymodel_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWebEngineHistoryModel* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_webenginehistorymodel_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_webenginehistorymodel_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_webenginehistorymodel_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QWebEngineHistoryModel* self ```
void q_webenginehistorymodel_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QWebEngineHistoryModel* self ```
void q_webenginehistorymodel_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QWebEngineHistoryModel* self, const char* name, QVariant* value ```
bool q_webenginehistorymodel_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QWebEngineHistoryModel* self, const char* name ```
QVariant* q_webenginehistorymodel_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QWebEngineHistoryModel* self ```
const char** q_webenginehistorymodel_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWebEngineHistoryModel* self ```
QBindingStorage* q_webenginehistorymodel_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWebEngineHistoryModel* self ```
QBindingStorage* q_webenginehistorymodel_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineHistoryModel* self ```
void q_webenginehistorymodel_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QWebEngineHistoryModel* self, void (*slot)(QObject*) ```
void q_webenginehistorymodel_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QWebEngineHistoryModel* self, const char* classname ```
bool q_webenginehistorymodel_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QWebEngineHistoryModel* self ```
void q_webenginehistorymodel_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWebEngineHistoryModel* self, int interval, enum Qt__TimerType timerType ```
int32_t q_webenginehistorymodel_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_webenginehistorymodel_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWebEngineHistoryModel* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_webenginehistorymodel_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineHistoryModel* self, QObject* param1 ```
void q_webenginehistorymodel_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QWebEngineHistoryModel* self, void (*slot)(QObject*, QObject*) ```
void q_webenginehistorymodel_on_destroyed1(void* self, void (*slot)(void*, void*));

/// https://doc.qt.io/qt-6/qwebenginehistory.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QWebEngineHistory* self ```
QMetaObject* q_webenginehistory_meta_object(void* self);

/// ``` QWebEngineHistory* self, const char* param1 ```
void* q_webenginehistory_metacast(void* self, const char* param1);

/// ``` QWebEngineHistory* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_webenginehistory_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_webenginehistory_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehistory.html#clear)
///
/// ``` QWebEngineHistory* self ```
void q_webenginehistory_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehistory.html#items)
///
/// ``` QWebEngineHistory* self ```
libqt_list /* of QWebEngineHistoryItem* */ q_webenginehistory_items(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehistory.html#backItems)
///
/// ``` QWebEngineHistory* self, int maxItems ```
libqt_list /* of QWebEngineHistoryItem* */ q_webenginehistory_back_items(void* self, int maxItems);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehistory.html#forwardItems)
///
/// ``` QWebEngineHistory* self, int maxItems ```
libqt_list /* of QWebEngineHistoryItem* */ q_webenginehistory_forward_items(void* self, int maxItems);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehistory.html#canGoBack)
///
/// ``` QWebEngineHistory* self ```
bool q_webenginehistory_can_go_back(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehistory.html#canGoForward)
///
/// ``` QWebEngineHistory* self ```
bool q_webenginehistory_can_go_forward(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehistory.html#back)
///
/// ``` QWebEngineHistory* self ```
void q_webenginehistory_back(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehistory.html#forward)
///
/// ``` QWebEngineHistory* self ```
void q_webenginehistory_forward(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehistory.html#goToItem)
///
/// ``` QWebEngineHistory* self, QWebEngineHistoryItem* item ```
void q_webenginehistory_go_to_item(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehistory.html#backItem)
///
/// ``` QWebEngineHistory* self ```
QWebEngineHistoryItem* q_webenginehistory_back_item(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehistory.html#currentItem)
///
/// ``` QWebEngineHistory* self ```
QWebEngineHistoryItem* q_webenginehistory_current_item(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehistory.html#forwardItem)
///
/// ``` QWebEngineHistory* self ```
QWebEngineHistoryItem* q_webenginehistory_forward_item(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehistory.html#itemAt)
///
/// ``` QWebEngineHistory* self, int i ```
QWebEngineHistoryItem* q_webenginehistory_item_at(void* self, int i);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehistory.html#currentItemIndex)
///
/// ``` QWebEngineHistory* self ```
int32_t q_webenginehistory_current_item_index(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehistory.html#count)
///
/// ``` QWebEngineHistory* self ```
int32_t q_webenginehistory_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehistory.html#itemsModel)
///
/// ``` QWebEngineHistory* self ```
QWebEngineHistoryModel* q_webenginehistory_items_model(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehistory.html#backItemsModel)
///
/// ``` QWebEngineHistory* self ```
QWebEngineHistoryModel* q_webenginehistory_back_items_model(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehistory.html#forwardItemsModel)
///
/// ``` QWebEngineHistory* self ```
QWebEngineHistoryModel* q_webenginehistory_forward_items_model(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_webenginehistory_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_webenginehistory_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// ``` QWebEngineHistory* self, QEvent* event ```
bool q_webenginehistory_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// ``` QWebEngineHistory* self, QObject* watched, QEvent* event ```
bool q_webenginehistory_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QWebEngineHistory* self ```
const char* q_webenginehistory_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QWebEngineHistory* self, char* name ```
void q_webenginehistory_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QWebEngineHistory* self ```
bool q_webenginehistory_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QWebEngineHistory* self ```
bool q_webenginehistory_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QWebEngineHistory* self ```
bool q_webenginehistory_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QWebEngineHistory* self ```
bool q_webenginehistory_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QWebEngineHistory* self, bool b ```
bool q_webenginehistory_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QWebEngineHistory* self ```
QThread* q_webenginehistory_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QWebEngineHistory* self, QThread* thread ```
void q_webenginehistory_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWebEngineHistory* self, int interval ```
int32_t q_webenginehistory_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QWebEngineHistory* self, int id ```
void q_webenginehistory_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QWebEngineHistory* self ```
libqt_list /* of QObject* */ q_webenginehistory_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QWebEngineHistory* self, QObject* parent ```
void q_webenginehistory_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QWebEngineHistory* self, QObject* filterObj ```
void q_webenginehistory_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QWebEngineHistory* self, QObject* obj ```
void q_webenginehistory_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_webenginehistory_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWebEngineHistory* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_webenginehistory_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_webenginehistory_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_webenginehistory_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QWebEngineHistory* self ```
void q_webenginehistory_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QWebEngineHistory* self ```
void q_webenginehistory_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QWebEngineHistory* self, const char* name, QVariant* value ```
bool q_webenginehistory_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QWebEngineHistory* self, const char* name ```
QVariant* q_webenginehistory_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QWebEngineHistory* self ```
const char** q_webenginehistory_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWebEngineHistory* self ```
QBindingStorage* q_webenginehistory_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWebEngineHistory* self ```
QBindingStorage* q_webenginehistory_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineHistory* self ```
void q_webenginehistory_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QWebEngineHistory* self, void (*slot)(QObject*) ```
void q_webenginehistory_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QWebEngineHistory* self ```
QObject* q_webenginehistory_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QWebEngineHistory* self, const char* classname ```
bool q_webenginehistory_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QWebEngineHistory* self ```
void q_webenginehistory_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWebEngineHistory* self, int interval, enum Qt__TimerType timerType ```
int32_t q_webenginehistory_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_webenginehistory_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWebEngineHistory* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_webenginehistory_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineHistory* self, QObject* param1 ```
void q_webenginehistory_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QWebEngineHistory* self, void (*slot)(QObject*, QObject*) ```
void q_webenginehistory_on_destroyed1(void* self, void (*slot)(void*, void*));

/// https://doc.qt.io/qt-6/qwebenginehistory.html#types

typedef enum {
    QWEBENGINEHISTORYMODEL_ROLES_URLROLE = 256,
    QWEBENGINEHISTORYMODEL_ROLES_TITLEROLE = 257,
    QWEBENGINEHISTORYMODEL_ROLES_OFFSETROLE = 258,
    QWEBENGINEHISTORYMODEL_ROLES_ICONURLROLE = 259
} QWebEngineHistoryModel__Roles;

#endif
