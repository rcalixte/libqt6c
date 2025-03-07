#include "libqabstractitemmodel.hpp"
#include "libqabstractproxymodel.hpp"
#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqdatastream.hpp"
#include "libqitemselectionmodel.hpp"
#include "libqmetaobject.hpp"
#include "libqmimedata.hpp"
#include "libqobject.hpp"
#include "libqsize.hpp"
#include <string.h>
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqcoreevent.hpp"
#include "libqidentityproxymodel.hpp"
#include "libqidentityproxymodel.h"

/// https://doc.qt.io/qt-6/qidentityproxymodel.html

/// q_identityproxymodel_new constructs a new QIdentityProxyModel object.
///
///
QIdentityProxyModel* q_identityproxymodel_new() {
    return QIdentityProxyModel_new();
}

/// q_identityproxymodel_new2 constructs a new QIdentityProxyModel object.
///
/// ``` QObject* parent ```
QIdentityProxyModel* q_identityproxymodel_new2(void* parent) {
    return QIdentityProxyModel_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QIdentityProxyModel* self ```
QMetaObject* q_identityproxymodel_meta_object(void* self) {
    return QIdentityProxyModel_MetaObject((QIdentityProxyModel*)self);
}

/// ``` QIdentityProxyModel* self, const char* param1 ```
void* q_identityproxymodel_metacast(void* self, const char* param1) {
    return QIdentityProxyModel_Metacast((QIdentityProxyModel*)self, param1);
}

/// ``` QIdentityProxyModel* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_identityproxymodel_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QIdentityProxyModel_Metacall((QIdentityProxyModel*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QIdentityProxyModel* self, int32_t (*slot)(QIdentityProxyModel*, enum QMetaObject__Call, int, void*) ```
void q_identityproxymodel_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QIdentityProxyModel_OnMetacall((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QIdentityProxyModel* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_identityproxymodel_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QIdentityProxyModel_QBaseMetacall((QIdentityProxyModel*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_identityproxymodel_tr(const char* s) {
    libqt_string _str = QIdentityProxyModel_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#columnCount)
///
/// ``` QIdentityProxyModel* self, QModelIndex* parent ```
int32_t q_identityproxymodel_column_count(void* self, void* parent) {
    return QIdentityProxyModel_ColumnCount((QIdentityProxyModel*)self, (QModelIndex*)parent);
}

/// Allows for overriding the related default method
///
/// ``` QIdentityProxyModel* self, int32_t (*slot)(QIdentityProxyModel*, QModelIndex*) ```
void q_identityproxymodel_on_column_count(void* self, int32_t (*slot)(void*, void*)) {
    QIdentityProxyModel_OnColumnCount((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QIdentityProxyModel* self, QModelIndex* parent ```
int32_t q_identityproxymodel_qbase_column_count(void* self, void* parent) {
    return QIdentityProxyModel_QBaseColumnCount((QIdentityProxyModel*)self, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#index)
///
/// ``` QIdentityProxyModel* self, int row, int column, QModelIndex* parent ```
QModelIndex* q_identityproxymodel_index(void* self, int row, int column, void* parent) {
    return QIdentityProxyModel_Index((QIdentityProxyModel*)self, row, column, (QModelIndex*)parent);
}

/// Allows for overriding the related default method
///
/// ``` QIdentityProxyModel* self, QModelIndex* (*slot)(QIdentityProxyModel*, int, int, QModelIndex*) ```
void q_identityproxymodel_on_index(void* self, QModelIndex* (*slot)(void*, int, int, void*)) {
    QIdentityProxyModel_OnIndex((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QIdentityProxyModel* self, int row, int column, QModelIndex* parent ```
QModelIndex* q_identityproxymodel_qbase_index(void* self, int row, int column, void* parent) {
    return QIdentityProxyModel_QBaseIndex((QIdentityProxyModel*)self, row, column, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#mapFromSource)
///
/// ``` QIdentityProxyModel* self, QModelIndex* sourceIndex ```
QModelIndex* q_identityproxymodel_map_from_source(void* self, void* sourceIndex) {
    return QIdentityProxyModel_MapFromSource((QIdentityProxyModel*)self, (QModelIndex*)sourceIndex);
}

/// Allows for overriding the related default method
///
/// ``` QIdentityProxyModel* self, QModelIndex* (*slot)(QIdentityProxyModel*, QModelIndex*) ```
void q_identityproxymodel_on_map_from_source(void* self, QModelIndex* (*slot)(void*, void*)) {
    QIdentityProxyModel_OnMapFromSource((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QIdentityProxyModel* self, QModelIndex* sourceIndex ```
QModelIndex* q_identityproxymodel_qbase_map_from_source(void* self, void* sourceIndex) {
    return QIdentityProxyModel_QBaseMapFromSource((QIdentityProxyModel*)self, (QModelIndex*)sourceIndex);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#mapToSource)
///
/// ``` QIdentityProxyModel* self, QModelIndex* proxyIndex ```
QModelIndex* q_identityproxymodel_map_to_source(void* self, void* proxyIndex) {
    return QIdentityProxyModel_MapToSource((QIdentityProxyModel*)self, (QModelIndex*)proxyIndex);
}

/// Allows for overriding the related default method
///
/// ``` QIdentityProxyModel* self, QModelIndex* (*slot)(QIdentityProxyModel*, QModelIndex*) ```
void q_identityproxymodel_on_map_to_source(void* self, QModelIndex* (*slot)(void*, void*)) {
    QIdentityProxyModel_OnMapToSource((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QIdentityProxyModel* self, QModelIndex* proxyIndex ```
QModelIndex* q_identityproxymodel_qbase_map_to_source(void* self, void* proxyIndex) {
    return QIdentityProxyModel_QBaseMapToSource((QIdentityProxyModel*)self, (QModelIndex*)proxyIndex);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#parent)
///
/// ``` QIdentityProxyModel* self, QModelIndex* child ```
QModelIndex* q_identityproxymodel_parent(void* self, void* child) {
    return QIdentityProxyModel_Parent((QIdentityProxyModel*)self, (QModelIndex*)child);
}

/// Allows for overriding the related default method
///
/// ``` QIdentityProxyModel* self, QModelIndex* (*slot)(QIdentityProxyModel*, QModelIndex*) ```
void q_identityproxymodel_on_parent(void* self, QModelIndex* (*slot)(void*, void*)) {
    QIdentityProxyModel_OnParent((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QIdentityProxyModel* self, QModelIndex* child ```
QModelIndex* q_identityproxymodel_qbase_parent(void* self, void* child) {
    return QIdentityProxyModel_QBaseParent((QIdentityProxyModel*)self, (QModelIndex*)child);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#rowCount)
///
/// ``` QIdentityProxyModel* self, QModelIndex* parent ```
int32_t q_identityproxymodel_row_count(void* self, void* parent) {
    return QIdentityProxyModel_RowCount((QIdentityProxyModel*)self, (QModelIndex*)parent);
}

/// Allows for overriding the related default method
///
/// ``` QIdentityProxyModel* self, int32_t (*slot)(QIdentityProxyModel*, QModelIndex*) ```
void q_identityproxymodel_on_row_count(void* self, int32_t (*slot)(void*, void*)) {
    QIdentityProxyModel_OnRowCount((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QIdentityProxyModel* self, QModelIndex* parent ```
int32_t q_identityproxymodel_qbase_row_count(void* self, void* parent) {
    return QIdentityProxyModel_QBaseRowCount((QIdentityProxyModel*)self, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#headerData)
///
/// ``` QIdentityProxyModel* self, int section, enum Qt__Orientation orientation, int role ```
QVariant* q_identityproxymodel_header_data(void* self, int section, int64_t orientation, int role) {
    return QIdentityProxyModel_HeaderData((QIdentityProxyModel*)self, section, orientation, role);
}

/// Allows for overriding the related default method
///
/// ``` QIdentityProxyModel* self, QVariant* (*slot)(QIdentityProxyModel*, int, enum Qt__Orientation, int) ```
void q_identityproxymodel_on_header_data(void* self, QVariant* (*slot)(void*, int, int64_t, int)) {
    QIdentityProxyModel_OnHeaderData((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QIdentityProxyModel* self, int section, enum Qt__Orientation orientation, int role ```
QVariant* q_identityproxymodel_qbase_header_data(void* self, int section, int64_t orientation, int role) {
    return QIdentityProxyModel_QBaseHeaderData((QIdentityProxyModel*)self, section, orientation, role);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#dropMimeData)
///
/// ``` QIdentityProxyModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_identityproxymodel_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent) {
    return QIdentityProxyModel_DropMimeData((QIdentityProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

/// Allows for overriding the related default method
///
/// ``` QIdentityProxyModel* self, bool (*slot)(QIdentityProxyModel*, QMimeData*, enum Qt__DropAction, int, int, QModelIndex*) ```
void q_identityproxymodel_on_drop_mime_data(void* self, bool (*slot)(void*, void*, int64_t, int, int, void*)) {
    QIdentityProxyModel_OnDropMimeData((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QIdentityProxyModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_identityproxymodel_qbase_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent) {
    return QIdentityProxyModel_QBaseDropMimeData((QIdentityProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#sibling)
///
/// ``` QIdentityProxyModel* self, int row, int column, QModelIndex* idx ```
QModelIndex* q_identityproxymodel_sibling(void* self, int row, int column, void* idx) {
    return QIdentityProxyModel_Sibling((QIdentityProxyModel*)self, row, column, (QModelIndex*)idx);
}

/// Allows for overriding the related default method
///
/// ``` QIdentityProxyModel* self, QModelIndex* (*slot)(QIdentityProxyModel*, int, int, QModelIndex*) ```
void q_identityproxymodel_on_sibling(void* self, QModelIndex* (*slot)(void*, int, int, void*)) {
    QIdentityProxyModel_OnSibling((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QIdentityProxyModel* self, int row, int column, QModelIndex* idx ```
QModelIndex* q_identityproxymodel_qbase_sibling(void* self, int row, int column, void* idx) {
    return QIdentityProxyModel_QBaseSibling((QIdentityProxyModel*)self, row, column, (QModelIndex*)idx);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#mapSelectionFromSource)
///
/// ``` QIdentityProxyModel* self, QItemSelection* selection ```
QItemSelection* q_identityproxymodel_map_selection_from_source(void* self, void* selection) {
    return QIdentityProxyModel_MapSelectionFromSource((QIdentityProxyModel*)self, (QItemSelection*)selection);
}

/// Allows for overriding the related default method
///
/// ``` QIdentityProxyModel* self, QItemSelection* (*slot)(QIdentityProxyModel*, QItemSelection*) ```
void q_identityproxymodel_on_map_selection_from_source(void* self, QItemSelection* (*slot)(void*, void*)) {
    QIdentityProxyModel_OnMapSelectionFromSource((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QIdentityProxyModel* self, QItemSelection* selection ```
QItemSelection* q_identityproxymodel_qbase_map_selection_from_source(void* self, void* selection) {
    return QIdentityProxyModel_QBaseMapSelectionFromSource((QIdentityProxyModel*)self, (QItemSelection*)selection);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#mapSelectionToSource)
///
/// ``` QIdentityProxyModel* self, QItemSelection* selection ```
QItemSelection* q_identityproxymodel_map_selection_to_source(void* self, void* selection) {
    return QIdentityProxyModel_MapSelectionToSource((QIdentityProxyModel*)self, (QItemSelection*)selection);
}

/// Allows for overriding the related default method
///
/// ``` QIdentityProxyModel* self, QItemSelection* (*slot)(QIdentityProxyModel*, QItemSelection*) ```
void q_identityproxymodel_on_map_selection_to_source(void* self, QItemSelection* (*slot)(void*, void*)) {
    QIdentityProxyModel_OnMapSelectionToSource((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QIdentityProxyModel* self, QItemSelection* selection ```
QItemSelection* q_identityproxymodel_qbase_map_selection_to_source(void* self, void* selection) {
    return QIdentityProxyModel_QBaseMapSelectionToSource((QIdentityProxyModel*)self, (QItemSelection*)selection);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#match)
///
/// ``` QIdentityProxyModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags ```
libqt_list /* of QModelIndex* */ q_identityproxymodel_match(void* self, void* start, int role, void* value, int hits, int64_t flags) {
    libqt_list _arr = QIdentityProxyModel_Match((QIdentityProxyModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

/// Allows for overriding the related default method
///
/// ``` QIdentityProxyModel* self, libqt_list /* of QModelIndex* */ (*slot)(QIdentityProxyModel*, QModelIndex*, int, QVariant*, int, int) ```
void q_identityproxymodel_on_match(void* self, libqt_list /* of QModelIndex* */ (*slot)(void*, void*, int, void*, int, int64_t)) {
    QIdentityProxyModel_OnMatch((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QIdentityProxyModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags ```
libqt_list /* of QModelIndex* */ q_identityproxymodel_qbase_match(void* self, void* start, int role, void* value, int hits, int64_t flags) {
    libqt_list _arr = QIdentityProxyModel_QBaseMatch((QIdentityProxyModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#setSourceModel)
///
/// ``` QIdentityProxyModel* self, QAbstractItemModel* sourceModel ```
void q_identityproxymodel_set_source_model(void* self, void* sourceModel) {
    QIdentityProxyModel_SetSourceModel((QIdentityProxyModel*)self, (QAbstractItemModel*)sourceModel);
}

/// Allows for overriding the related default method
///
/// ``` QIdentityProxyModel* self, void (*slot)(QIdentityProxyModel*, QAbstractItemModel*) ```
void q_identityproxymodel_on_set_source_model(void* self, void (*slot)(void*, void*)) {
    QIdentityProxyModel_OnSetSourceModel((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QIdentityProxyModel* self, QAbstractItemModel* sourceModel ```
void q_identityproxymodel_qbase_set_source_model(void* self, void* sourceModel) {
    QIdentityProxyModel_QBaseSetSourceModel((QIdentityProxyModel*)self, (QAbstractItemModel*)sourceModel);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#insertColumns)
///
/// ``` QIdentityProxyModel* self, int column, int count, QModelIndex* parent ```
bool q_identityproxymodel_insert_columns(void* self, int column, int count, void* parent) {
    return QIdentityProxyModel_InsertColumns((QIdentityProxyModel*)self, column, count, (QModelIndex*)parent);
}

/// Allows for overriding the related default method
///
/// ``` QIdentityProxyModel* self, bool (*slot)(QIdentityProxyModel*, int, int, QModelIndex*) ```
void q_identityproxymodel_on_insert_columns(void* self, bool (*slot)(void*, int, int, void*)) {
    QIdentityProxyModel_OnInsertColumns((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QIdentityProxyModel* self, int column, int count, QModelIndex* parent ```
bool q_identityproxymodel_qbase_insert_columns(void* self, int column, int count, void* parent) {
    return QIdentityProxyModel_QBaseInsertColumns((QIdentityProxyModel*)self, column, count, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#insertRows)
///
/// ``` QIdentityProxyModel* self, int row, int count, QModelIndex* parent ```
bool q_identityproxymodel_insert_rows(void* self, int row, int count, void* parent) {
    return QIdentityProxyModel_InsertRows((QIdentityProxyModel*)self, row, count, (QModelIndex*)parent);
}

/// Allows for overriding the related default method
///
/// ``` QIdentityProxyModel* self, bool (*slot)(QIdentityProxyModel*, int, int, QModelIndex*) ```
void q_identityproxymodel_on_insert_rows(void* self, bool (*slot)(void*, int, int, void*)) {
    QIdentityProxyModel_OnInsertRows((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QIdentityProxyModel* self, int row, int count, QModelIndex* parent ```
bool q_identityproxymodel_qbase_insert_rows(void* self, int row, int count, void* parent) {
    return QIdentityProxyModel_QBaseInsertRows((QIdentityProxyModel*)self, row, count, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#removeColumns)
///
/// ``` QIdentityProxyModel* self, int column, int count, QModelIndex* parent ```
bool q_identityproxymodel_remove_columns(void* self, int column, int count, void* parent) {
    return QIdentityProxyModel_RemoveColumns((QIdentityProxyModel*)self, column, count, (QModelIndex*)parent);
}

/// Allows for overriding the related default method
///
/// ``` QIdentityProxyModel* self, bool (*slot)(QIdentityProxyModel*, int, int, QModelIndex*) ```
void q_identityproxymodel_on_remove_columns(void* self, bool (*slot)(void*, int, int, void*)) {
    QIdentityProxyModel_OnRemoveColumns((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QIdentityProxyModel* self, int column, int count, QModelIndex* parent ```
bool q_identityproxymodel_qbase_remove_columns(void* self, int column, int count, void* parent) {
    return QIdentityProxyModel_QBaseRemoveColumns((QIdentityProxyModel*)self, column, count, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#removeRows)
///
/// ``` QIdentityProxyModel* self, int row, int count, QModelIndex* parent ```
bool q_identityproxymodel_remove_rows(void* self, int row, int count, void* parent) {
    return QIdentityProxyModel_RemoveRows((QIdentityProxyModel*)self, row, count, (QModelIndex*)parent);
}

/// Allows for overriding the related default method
///
/// ``` QIdentityProxyModel* self, bool (*slot)(QIdentityProxyModel*, int, int, QModelIndex*) ```
void q_identityproxymodel_on_remove_rows(void* self, bool (*slot)(void*, int, int, void*)) {
    QIdentityProxyModel_OnRemoveRows((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QIdentityProxyModel* self, int row, int count, QModelIndex* parent ```
bool q_identityproxymodel_qbase_remove_rows(void* self, int row, int count, void* parent) {
    return QIdentityProxyModel_QBaseRemoveRows((QIdentityProxyModel*)self, row, count, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#moveRows)
///
/// ``` QIdentityProxyModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_identityproxymodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return QIdentityProxyModel_MoveRows((QIdentityProxyModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

/// Allows for overriding the related default method
///
/// ``` QIdentityProxyModel* self, bool (*slot)(QIdentityProxyModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_identityproxymodel_on_move_rows(void* self, bool (*slot)(void*, void*, int, int, void*, int)) {
    QIdentityProxyModel_OnMoveRows((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QIdentityProxyModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_identityproxymodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return QIdentityProxyModel_QBaseMoveRows((QIdentityProxyModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#moveColumns)
///
/// ``` QIdentityProxyModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_identityproxymodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return QIdentityProxyModel_MoveColumns((QIdentityProxyModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

/// Allows for overriding the related default method
///
/// ``` QIdentityProxyModel* self, bool (*slot)(QIdentityProxyModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_identityproxymodel_on_move_columns(void* self, bool (*slot)(void*, void*, int, int, void*, int)) {
    QIdentityProxyModel_OnMoveColumns((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QIdentityProxyModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_identityproxymodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return QIdentityProxyModel_QBaseMoveColumns((QIdentityProxyModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_identityproxymodel_tr2(const char* s, const char* c) {
    libqt_string _str = QIdentityProxyModel_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_identityproxymodel_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QIdentityProxyModel_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#sourceModel)
///
/// ``` QIdentityProxyModel* self ```
QAbstractItemModel* q_identityproxymodel_source_model(void* self) {
    return QAbstractProxyModel_SourceModel((QAbstractProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// ``` QIdentityProxyModel* self, int row, int column ```
bool q_identityproxymodel_has_index(void* self, int row, int column) {
    return QAbstractItemModel_HasIndex((QAbstractItemModel*)self, row, column);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// ``` QIdentityProxyModel* self, int row ```
bool q_identityproxymodel_insert_row(void* self, int row) {
    return QAbstractItemModel_InsertRow((QAbstractItemModel*)self, row);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// ``` QIdentityProxyModel* self, int column ```
bool q_identityproxymodel_insert_column(void* self, int column) {
    return QAbstractItemModel_InsertColumn((QAbstractItemModel*)self, column);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// ``` QIdentityProxyModel* self, int row ```
bool q_identityproxymodel_remove_row(void* self, int row) {
    return QAbstractItemModel_RemoveRow((QAbstractItemModel*)self, row);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// ``` QIdentityProxyModel* self, int column ```
bool q_identityproxymodel_remove_column(void* self, int column) {
    return QAbstractItemModel_RemoveColumn((QAbstractItemModel*)self, column);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
///
/// ``` QIdentityProxyModel* self, QModelIndex* sourceParent, int sourceRow, QModelIndex* destinationParent, int destinationChild ```
bool q_identityproxymodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveRow((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceRow, (QModelIndex*)destinationParent, destinationChild);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
///
/// ``` QIdentityProxyModel* self, QModelIndex* sourceParent, int sourceColumn, QModelIndex* destinationParent, int destinationChild ```
bool q_identityproxymodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveColumn((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceColumn, (QModelIndex*)destinationParent, destinationChild);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// ``` QIdentityProxyModel* self, QModelIndex* index ```
bool q_identityproxymodel_check_index(void* self, void* index) {
    return QAbstractItemModel_CheckIndex((QAbstractItemModel*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// ``` QIdentityProxyModel* self, QModelIndex* topLeft, QModelIndex* bottomRight ```
void q_identityproxymodel_data_changed(void* self, void* topLeft, void* bottomRight) {
    QAbstractItemModel_DataChanged((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight);
}

/// Inherited from QAbstractItemModel
///
/// ``` QIdentityProxyModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, QModelIndex*) ```
void q_identityproxymodel_on_data_changed(void* self, void (*slot)(void*, void*, void*)) {
    QAbstractItemModel_Connect_DataChanged((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// ``` QIdentityProxyModel* self, enum Qt__Orientation orientation, int first, int last ```
void q_identityproxymodel_header_data_changed(void* self, int64_t orientation, int first, int last) {
    QAbstractItemModel_HeaderDataChanged((QAbstractItemModel*)self, orientation, first, last);
}

/// Inherited from QAbstractItemModel
///
/// ``` QIdentityProxyModel* self, void (*slot)(QAbstractItemModel*, enum Qt__Orientation, int, int) ```
void q_identityproxymodel_on_header_data_changed(void* self, void (*slot)(void*, int64_t, int, int)) {
    QAbstractItemModel_Connect_HeaderDataChanged((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QIdentityProxyModel* self ```
void q_identityproxymodel_layout_changed(void* self) {
    QAbstractItemModel_LayoutChanged((QAbstractItemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// ``` QIdentityProxyModel* self, void (*slot)(QAbstractItemModel*) ```
void q_identityproxymodel_on_layout_changed(void* self, void (*slot)(void*)) {
    QAbstractItemModel_Connect_LayoutChanged((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QIdentityProxyModel* self ```
void q_identityproxymodel_layout_about_to_be_changed(void* self) {
    QAbstractItemModel_LayoutAboutToBeChanged((QAbstractItemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// ``` QIdentityProxyModel* self, void (*slot)(QAbstractItemModel*) ```
void q_identityproxymodel_on_layout_about_to_be_changed(void* self, void (*slot)(void*)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// ``` QIdentityProxyModel* self, int row, int column, QModelIndex* parent ```
bool q_identityproxymodel_has_index3(void* self, int row, int column, void* parent) {
    return QAbstractItemModel_HasIndex3((QAbstractItemModel*)self, row, column, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// ``` QIdentityProxyModel* self, int row, QModelIndex* parent ```
bool q_identityproxymodel_insert_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_InsertRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// ``` QIdentityProxyModel* self, int column, QModelIndex* parent ```
bool q_identityproxymodel_insert_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_InsertColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// ``` QIdentityProxyModel* self, int row, QModelIndex* parent ```
bool q_identityproxymodel_remove_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_RemoveRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// ``` QIdentityProxyModel* self, int column, QModelIndex* parent ```
bool q_identityproxymodel_remove_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_RemoveColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// ``` QIdentityProxyModel* self, QModelIndex* index, int options ```
bool q_identityproxymodel_check_index2(void* self, void* index, int64_t options) {
    return QAbstractItemModel_CheckIndex2((QAbstractItemModel*)self, (QModelIndex*)index, options);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// ``` QIdentityProxyModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, int* roles[] ```
void q_identityproxymodel_data_changed3(void* self, void* topLeft, void* bottomRight, int* roles[]) {
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
/// ``` QIdentityProxyModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, QModelIndex*, int*[]) ```
void q_identityproxymodel_on_data_changed3(void* self, void (*slot)(void*, void*, void*, int*)) {
    QAbstractItemModel_Connect_DataChanged3((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QIdentityProxyModel* self, QPersistentModelIndex* parents[] ```
void q_identityproxymodel_layout_changed1(void* self, void* parents[]) {
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
/// ``` QIdentityProxyModel* self, void (*slot)(QAbstractItemModel*, QPersistentModelIndex*[]) ```
void q_identityproxymodel_on_layout_changed1(void* self, void (*slot)(void*, void*)) {
    QAbstractItemModel_Connect_LayoutChanged1((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QIdentityProxyModel* self, QPersistentModelIndex* parents[], enum QAbstractItemModel__LayoutChangeHint hint ```
void q_identityproxymodel_layout_changed2(void* self, void* parents[], int64_t hint) {
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
/// ``` QIdentityProxyModel* self, void (*slot)(QAbstractItemModel*, QPersistentModelIndex*[], enum QAbstractItemModel__LayoutChangeHint) ```
void q_identityproxymodel_on_layout_changed2(void* self, void (*slot)(void*, void*, int64_t)) {
    QAbstractItemModel_Connect_LayoutChanged2((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QIdentityProxyModel* self, QPersistentModelIndex* parents[] ```
void q_identityproxymodel_layout_about_to_be_changed1(void* self, void* parents[]) {
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
/// ``` QIdentityProxyModel* self, void (*slot)(QAbstractItemModel*, QPersistentModelIndex*[]) ```
void q_identityproxymodel_on_layout_about_to_be_changed1(void* self, void (*slot)(void*, void*)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged1((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QIdentityProxyModel* self, QPersistentModelIndex* parents[], enum QAbstractItemModel__LayoutChangeHint hint ```
void q_identityproxymodel_layout_about_to_be_changed2(void* self, void* parents[], int64_t hint) {
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
/// ``` QIdentityProxyModel* self, void (*slot)(QAbstractItemModel*, QPersistentModelIndex*[], enum QAbstractItemModel__LayoutChangeHint) ```
void q_identityproxymodel_on_layout_about_to_be_changed2(void* self, void (*slot)(void*, void*, int64_t)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged2((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QIdentityProxyModel* self ```
const char* q_identityproxymodel_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QIdentityProxyModel* self, const char* name ```
void q_identityproxymodel_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QIdentityProxyModel* self ```
bool q_identityproxymodel_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QIdentityProxyModel* self ```
bool q_identityproxymodel_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QIdentityProxyModel* self ```
bool q_identityproxymodel_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QIdentityProxyModel* self ```
bool q_identityproxymodel_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QIdentityProxyModel* self, bool b ```
bool q_identityproxymodel_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QIdentityProxyModel* self ```
QThread* q_identityproxymodel_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QIdentityProxyModel* self, QThread* thread ```
void q_identityproxymodel_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QIdentityProxyModel* self, int interval ```
int32_t q_identityproxymodel_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QIdentityProxyModel* self, int id ```
void q_identityproxymodel_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QIdentityProxyModel* self ```
libqt_list /* of QObject* */ q_identityproxymodel_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QIdentityProxyModel* self, QObject* parent ```
void q_identityproxymodel_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QIdentityProxyModel* self, QObject* filterObj ```
void q_identityproxymodel_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QIdentityProxyModel* self, QObject* obj ```
void q_identityproxymodel_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_identityproxymodel_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QIdentityProxyModel* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_identityproxymodel_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_identityproxymodel_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_identityproxymodel_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QIdentityProxyModel* self ```
void q_identityproxymodel_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QIdentityProxyModel* self ```
void q_identityproxymodel_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QIdentityProxyModel* self, const char* name, QVariant* value ```
bool q_identityproxymodel_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QIdentityProxyModel* self, const char* name ```
QVariant* q_identityproxymodel_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QIdentityProxyModel* self ```
const char** q_identityproxymodel_dynamic_property_names(void* self) {
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
/// ``` QIdentityProxyModel* self ```
QBindingStorage* q_identityproxymodel_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QIdentityProxyModel* self ```
QBindingStorage* q_identityproxymodel_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QIdentityProxyModel* self ```
void q_identityproxymodel_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QIdentityProxyModel* self, void (*slot)(QObject*) ```
void q_identityproxymodel_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QIdentityProxyModel* self, const char* classname ```
bool q_identityproxymodel_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QIdentityProxyModel* self ```
void q_identityproxymodel_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QIdentityProxyModel* self, int interval, enum Qt__TimerType timerType ```
int32_t q_identityproxymodel_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_identityproxymodel_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QIdentityProxyModel* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_identityproxymodel_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QIdentityProxyModel* self, QObject* param1 ```
void q_identityproxymodel_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QIdentityProxyModel* self, void (*slot)(QObject*, QObject*) ```
void q_identityproxymodel_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
bool q_identityproxymodel_submit(void* self) {
    return QIdentityProxyModel_Submit((QIdentityProxyModel*)self);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
bool q_identityproxymodel_qbase_submit(void* self) {
    return QIdentityProxyModel_QBaseSubmit((QIdentityProxyModel*)self);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, bool (*slot)() ```
void q_identityproxymodel_on_submit(void* self, bool (*slot)()) {
    QIdentityProxyModel_OnSubmit((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
void q_identityproxymodel_revert(void* self) {
    QIdentityProxyModel_Revert((QIdentityProxyModel*)self);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
void q_identityproxymodel_qbase_revert(void* self) {
    QIdentityProxyModel_QBaseRevert((QIdentityProxyModel*)self);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, void (*slot)() ```
void q_identityproxymodel_on_revert(void* self, void (*slot)()) {
    QIdentityProxyModel_OnRevert((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#data)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* proxyIndex, int role ```
QVariant* q_identityproxymodel_data(void* self, void* proxyIndex, int role) {
    return QIdentityProxyModel_Data((QIdentityProxyModel*)self, (QModelIndex*)proxyIndex, role);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* proxyIndex, int role ```
QVariant* q_identityproxymodel_qbase_data(void* self, void* proxyIndex, int role) {
    return QIdentityProxyModel_QBaseData((QIdentityProxyModel*)self, (QModelIndex*)proxyIndex, role);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QVariant* (*slot)(QIdentityProxyModel*, QModelIndex*, int) ```
void q_identityproxymodel_on_data(void* self, QVariant* (*slot)(void*, void*, int)) {
    QIdentityProxyModel_OnData((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#itemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* index ```
libqt_map /* of int to QVariant* */ q_identityproxymodel_item_data(void* self, void* index) {
    return QIdentityProxyModel_ItemData((QIdentityProxyModel*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* index ```
libqt_map /* of int to QVariant* */ q_identityproxymodel_qbase_item_data(void* self, void* index) {
    return QIdentityProxyModel_QBaseItemData((QIdentityProxyModel*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, libqt_map /* of int to QVariant* */ (*slot)(QIdentityProxyModel*, QModelIndex*) ```
void q_identityproxymodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*slot)(void*, void*)) {
    QIdentityProxyModel_OnItemData((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#flags)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* index ```
int64_t q_identityproxymodel_flags(void* self, void* index) {
    return QIdentityProxyModel_Flags((QIdentityProxyModel*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* index ```
int64_t q_identityproxymodel_qbase_flags(void* self, void* index) {
    return QIdentityProxyModel_QBaseFlags((QIdentityProxyModel*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, int64_t (*slot)(QIdentityProxyModel*, QModelIndex*) ```
void q_identityproxymodel_on_flags(void* self, int64_t (*slot)(void*, void*)) {
    QIdentityProxyModel_OnFlags((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#setData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* index, QVariant* value, int role ```
bool q_identityproxymodel_set_data(void* self, void* index, void* value, int role) {
    return QIdentityProxyModel_SetData((QIdentityProxyModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* index, QVariant* value, int role ```
bool q_identityproxymodel_qbase_set_data(void* self, void* index, void* value, int role) {
    return QIdentityProxyModel_QBaseSetData((QIdentityProxyModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, bool (*slot)(QIdentityProxyModel*, QModelIndex*, QVariant*, int) ```
void q_identityproxymodel_on_set_data(void* self, bool (*slot)(void*, void*, void*, int)) {
    QIdentityProxyModel_OnSetData((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#setItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ roles ```
bool q_identityproxymodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    return QIdentityProxyModel_SetItemData((QIdentityProxyModel*)self, (QModelIndex*)index, roles);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ roles ```
bool q_identityproxymodel_qbase_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    return QIdentityProxyModel_QBaseSetItemData((QIdentityProxyModel*)self, (QModelIndex*)index, roles);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, bool (*slot)(QIdentityProxyModel*, QModelIndex*, libqt_map /* of int to QVariant* */) ```
void q_identityproxymodel_on_set_item_data(void* self, bool (*slot)(void*, void*, libqt_map /* of int to QVariant* */)) {
    QIdentityProxyModel_OnSetItemData((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#setHeaderData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role ```
bool q_identityproxymodel_set_header_data(void* self, int section, int64_t orientation, void* value, int role) {
    return QIdentityProxyModel_SetHeaderData((QIdentityProxyModel*)self, section, orientation, (QVariant*)value, role);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role ```
bool q_identityproxymodel_qbase_set_header_data(void* self, int section, int64_t orientation, void* value, int role) {
    return QIdentityProxyModel_QBaseSetHeaderData((QIdentityProxyModel*)self, section, orientation, (QVariant*)value, role);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, bool (*slot)(QIdentityProxyModel*, int, enum Qt__Orientation, QVariant*, int) ```
void q_identityproxymodel_on_set_header_data(void* self, bool (*slot)(void*, int, int64_t, void*, int)) {
    QIdentityProxyModel_OnSetHeaderData((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* index ```
bool q_identityproxymodel_clear_item_data(void* self, void* index) {
    return QIdentityProxyModel_ClearItemData((QIdentityProxyModel*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* index ```
bool q_identityproxymodel_qbase_clear_item_data(void* self, void* index) {
    return QIdentityProxyModel_QBaseClearItemData((QIdentityProxyModel*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, bool (*slot)(QIdentityProxyModel*, QModelIndex*) ```
void q_identityproxymodel_on_clear_item_data(void* self, bool (*slot)(void*, void*)) {
    QIdentityProxyModel_OnClearItemData((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#buddy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* index ```
QModelIndex* q_identityproxymodel_buddy(void* self, void* index) {
    return QIdentityProxyModel_Buddy((QIdentityProxyModel*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* index ```
QModelIndex* q_identityproxymodel_qbase_buddy(void* self, void* index) {
    return QIdentityProxyModel_QBaseBuddy((QIdentityProxyModel*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* (*slot)(QIdentityProxyModel*, QModelIndex*) ```
void q_identityproxymodel_on_buddy(void* self, QModelIndex* (*slot)(void*, void*)) {
    QIdentityProxyModel_OnBuddy((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#canFetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* parent ```
bool q_identityproxymodel_can_fetch_more(void* self, void* parent) {
    return QIdentityProxyModel_CanFetchMore((QIdentityProxyModel*)self, (QModelIndex*)parent);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* parent ```
bool q_identityproxymodel_qbase_can_fetch_more(void* self, void* parent) {
    return QIdentityProxyModel_QBaseCanFetchMore((QIdentityProxyModel*)self, (QModelIndex*)parent);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, bool (*slot)(QIdentityProxyModel*, QModelIndex*) ```
void q_identityproxymodel_on_can_fetch_more(void* self, bool (*slot)(void*, void*)) {
    QIdentityProxyModel_OnCanFetchMore((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#fetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* parent ```
void q_identityproxymodel_fetch_more(void* self, void* parent) {
    QIdentityProxyModel_FetchMore((QIdentityProxyModel*)self, (QModelIndex*)parent);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* parent ```
void q_identityproxymodel_qbase_fetch_more(void* self, void* parent) {
    QIdentityProxyModel_QBaseFetchMore((QIdentityProxyModel*)self, (QModelIndex*)parent);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, void (*slot)(QIdentityProxyModel*, QModelIndex*) ```
void q_identityproxymodel_on_fetch_more(void* self, void (*slot)(void*, void*)) {
    QIdentityProxyModel_OnFetchMore((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#sort)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, int column, enum Qt__SortOrder order ```
void q_identityproxymodel_sort(void* self, int column, int64_t order) {
    QIdentityProxyModel_Sort((QIdentityProxyModel*)self, column, order);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, int column, enum Qt__SortOrder order ```
void q_identityproxymodel_qbase_sort(void* self, int column, int64_t order) {
    QIdentityProxyModel_QBaseSort((QIdentityProxyModel*)self, column, order);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, void (*slot)(QIdentityProxyModel*, int, enum Qt__SortOrder) ```
void q_identityproxymodel_on_sort(void* self, void (*slot)(void*, int, int64_t)) {
    QIdentityProxyModel_OnSort((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#span)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* index ```
QSize* q_identityproxymodel_span(void* self, void* index) {
    return QIdentityProxyModel_Span((QIdentityProxyModel*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* index ```
QSize* q_identityproxymodel_qbase_span(void* self, void* index) {
    return QIdentityProxyModel_QBaseSpan((QIdentityProxyModel*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QSize* (*slot)(QIdentityProxyModel*, QModelIndex*) ```
void q_identityproxymodel_on_span(void* self, QSize* (*slot)(void*, void*)) {
    QIdentityProxyModel_OnSpan((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#hasChildren)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* parent ```
bool q_identityproxymodel_has_children(void* self, void* parent) {
    return QIdentityProxyModel_HasChildren((QIdentityProxyModel*)self, (QModelIndex*)parent);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* parent ```
bool q_identityproxymodel_qbase_has_children(void* self, void* parent) {
    return QIdentityProxyModel_QBaseHasChildren((QIdentityProxyModel*)self, (QModelIndex*)parent);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, bool (*slot)(QIdentityProxyModel*, QModelIndex*) ```
void q_identityproxymodel_on_has_children(void* self, bool (*slot)(void*, void*)) {
    QIdentityProxyModel_OnHasChildren((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* indexes[] ```
QMimeData* q_identityproxymodel_mime_data(void* self, void* indexes[]) {
    QModelIndex** indexes_arr = (QModelIndex**)indexes;
    size_t indexes_len = 0;
    while (indexes_arr[indexes_len] != NULL) {
        indexes_len++;
    }
    libqt_list indexes_list = {
        .len = indexes_len,
        .data = {(QModelIndex*)indexes},
    };
    return QIdentityProxyModel_MimeData((QIdentityProxyModel*)self, indexes_list);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* indexes[] ```
QMimeData* q_identityproxymodel_qbase_mime_data(void* self, void* indexes[]) {
    QModelIndex** indexes_arr = (QModelIndex**)indexes;
    size_t indexes_len = 0;
    while (indexes_arr[indexes_len] != NULL) {
        indexes_len++;
    }
    libqt_list indexes_list = {
        .len = indexes_len,
        .data = {(QModelIndex*)indexes},
    };
    return QIdentityProxyModel_QBaseMimeData((QIdentityProxyModel*)self, indexes_list);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QMimeData* (*slot)(QIdentityProxyModel*, QModelIndex*[]) ```
void q_identityproxymodel_on_mime_data(void* self, QMimeData* (*slot)(void*, void*)) {
    QIdentityProxyModel_OnMimeData((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_identityproxymodel_can_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent) {
    return QIdentityProxyModel_CanDropMimeData((QIdentityProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_identityproxymodel_qbase_can_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent) {
    return QIdentityProxyModel_QBaseCanDropMimeData((QIdentityProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, bool (*slot)(QIdentityProxyModel*, QMimeData*, enum Qt__DropAction, int, int, QModelIndex*) ```
void q_identityproxymodel_on_can_drop_mime_data(void* self, bool (*slot)(void*, void*, int64_t, int, int, void*)) {
    QIdentityProxyModel_OnCanDropMimeData((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeTypes)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
const char** q_identityproxymodel_mime_types(void* self) {
    libqt_list _arr = QIdentityProxyModel_MimeTypes((QIdentityProxyModel*)self);
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

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
const char** q_identityproxymodel_qbase_mime_types(void* self) {
    libqt_list _arr = QIdentityProxyModel_QBaseMimeTypes((QIdentityProxyModel*)self);
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

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, const char** (*slot)() ```
void q_identityproxymodel_on_mime_types(void* self, const char** (*slot)()) {
    QIdentityProxyModel_OnMimeTypes((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
int64_t q_identityproxymodel_supported_drag_actions(void* self) {
    return QIdentityProxyModel_SupportedDragActions((QIdentityProxyModel*)self);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
int64_t q_identityproxymodel_qbase_supported_drag_actions(void* self) {
    return QIdentityProxyModel_QBaseSupportedDragActions((QIdentityProxyModel*)self);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, int64_t (*slot)() ```
void q_identityproxymodel_on_supported_drag_actions(void* self, int64_t (*slot)()) {
    QIdentityProxyModel_OnSupportedDragActions((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDropActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
int64_t q_identityproxymodel_supported_drop_actions(void* self) {
    return QIdentityProxyModel_SupportedDropActions((QIdentityProxyModel*)self);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
int64_t q_identityproxymodel_qbase_supported_drop_actions(void* self) {
    return QIdentityProxyModel_QBaseSupportedDropActions((QIdentityProxyModel*)self);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, int64_t (*slot)() ```
void q_identityproxymodel_on_supported_drop_actions(void* self, int64_t (*slot)()) {
    QIdentityProxyModel_OnSupportedDropActions((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#roleNames)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
libqt_map /* of int to char* */ q_identityproxymodel_role_names(void* self) {
    return QIdentityProxyModel_RoleNames((QIdentityProxyModel*)self);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
libqt_map /* of int to char* */ q_identityproxymodel_qbase_role_names(void* self) {
    return QIdentityProxyModel_QBaseRoleNames((QIdentityProxyModel*)self);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, libqt_map /* of int to char* */ (*slot)() ```
void q_identityproxymodel_on_role_names(void* self, libqt_map /* of int to char* */ (*slot)()) {
    QIdentityProxyModel_OnRoleNames((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan ```
void q_identityproxymodel_multi_data(void* self, void* index, void* roleDataSpan) {
    QIdentityProxyModel_MultiData((QIdentityProxyModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan ```
void q_identityproxymodel_qbase_multi_data(void* self, void* index, void* roleDataSpan) {
    QIdentityProxyModel_QBaseMultiData((QIdentityProxyModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, void (*slot)(QIdentityProxyModel*, QModelIndex*, QModelRoleDataSpan*) ```
void q_identityproxymodel_on_multi_data(void* self, void (*slot)(void*, void*, void*)) {
    QIdentityProxyModel_OnMultiData((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
void q_identityproxymodel_reset_internal_data(void* self) {
    QIdentityProxyModel_ResetInternalData((QIdentityProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
void q_identityproxymodel_qbase_reset_internal_data(void* self) {
    QIdentityProxyModel_QBaseResetInternalData((QIdentityProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, void (*slot)() ```
void q_identityproxymodel_on_reset_internal_data(void* self, void (*slot)()) {
    QIdentityProxyModel_OnResetInternalData((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, QEvent* event ```
bool q_identityproxymodel_event(void* self, void* event) {
    return QIdentityProxyModel_Event((QIdentityProxyModel*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QEvent* event ```
bool q_identityproxymodel_qbase_event(void* self, void* event) {
    return QIdentityProxyModel_QBaseEvent((QIdentityProxyModel*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, bool (*slot)(QIdentityProxyModel*, QEvent*) ```
void q_identityproxymodel_on_event(void* self, bool (*slot)(void*, void*)) {
    QIdentityProxyModel_OnEvent((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, QObject* watched, QEvent* event ```
bool q_identityproxymodel_event_filter(void* self, void* watched, void* event) {
    return QIdentityProxyModel_EventFilter((QIdentityProxyModel*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QObject* watched, QEvent* event ```
bool q_identityproxymodel_qbase_event_filter(void* self, void* watched, void* event) {
    return QIdentityProxyModel_QBaseEventFilter((QIdentityProxyModel*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, bool (*slot)(QIdentityProxyModel*, QObject*, QEvent*) ```
void q_identityproxymodel_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QIdentityProxyModel_OnEventFilter((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, QTimerEvent* event ```
void q_identityproxymodel_timer_event(void* self, void* event) {
    QIdentityProxyModel_TimerEvent((QIdentityProxyModel*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QTimerEvent* event ```
void q_identityproxymodel_qbase_timer_event(void* self, void* event) {
    QIdentityProxyModel_QBaseTimerEvent((QIdentityProxyModel*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, void (*slot)(QIdentityProxyModel*, QTimerEvent*) ```
void q_identityproxymodel_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QIdentityProxyModel_OnTimerEvent((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, QChildEvent* event ```
void q_identityproxymodel_child_event(void* self, void* event) {
    QIdentityProxyModel_ChildEvent((QIdentityProxyModel*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QChildEvent* event ```
void q_identityproxymodel_qbase_child_event(void* self, void* event) {
    QIdentityProxyModel_QBaseChildEvent((QIdentityProxyModel*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, void (*slot)(QIdentityProxyModel*, QChildEvent*) ```
void q_identityproxymodel_on_child_event(void* self, void (*slot)(void*, void*)) {
    QIdentityProxyModel_OnChildEvent((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, QEvent* event ```
void q_identityproxymodel_custom_event(void* self, void* event) {
    QIdentityProxyModel_CustomEvent((QIdentityProxyModel*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QEvent* event ```
void q_identityproxymodel_qbase_custom_event(void* self, void* event) {
    QIdentityProxyModel_QBaseCustomEvent((QIdentityProxyModel*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, void (*slot)(QIdentityProxyModel*, QEvent*) ```
void q_identityproxymodel_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QIdentityProxyModel_OnCustomEvent((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, QMetaMethod* signal ```
void q_identityproxymodel_connect_notify(void* self, void* signal) {
    QIdentityProxyModel_ConnectNotify((QIdentityProxyModel*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QMetaMethod* signal ```
void q_identityproxymodel_qbase_connect_notify(void* self, void* signal) {
    QIdentityProxyModel_QBaseConnectNotify((QIdentityProxyModel*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, void (*slot)(QIdentityProxyModel*, QMetaMethod*) ```
void q_identityproxymodel_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QIdentityProxyModel_OnConnectNotify((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, QMetaMethod* signal ```
void q_identityproxymodel_disconnect_notify(void* self, void* signal) {
    QIdentityProxyModel_DisconnectNotify((QIdentityProxyModel*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QMetaMethod* signal ```
void q_identityproxymodel_qbase_disconnect_notify(void* self, void* signal) {
    QIdentityProxyModel_QBaseDisconnectNotify((QIdentityProxyModel*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, void (*slot)(QIdentityProxyModel*, QMetaMethod*) ```
void q_identityproxymodel_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QIdentityProxyModel_OnDisconnectNotify((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, int row, int col, void* internalPtr ```
QModelIndex* q_identityproxymodel_create_source_index(void* self, int row, int col, void* internalPtr) {
    return QIdentityProxyModel_CreateSourceIndex((QIdentityProxyModel*)self, row, col, internalPtr);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, int row, int col, void* internalPtr ```
QModelIndex* q_identityproxymodel_qbase_create_source_index(void* self, int row, int col, void* internalPtr) {
    return QIdentityProxyModel_QBaseCreateSourceIndex((QIdentityProxyModel*)self, row, col, internalPtr);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* (*slot)(QIdentityProxyModel*, int, int, void*) ```
void q_identityproxymodel_on_create_source_index(void* self, QModelIndex* (*slot)(void*, int, int, void*)) {
    QIdentityProxyModel_OnCreateSourceIndex((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, int row, int column ```
QModelIndex* q_identityproxymodel_create_index(void* self, int row, int column) {
    return QIdentityProxyModel_CreateIndex((QIdentityProxyModel*)self, row, column);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, int row, int column ```
QModelIndex* q_identityproxymodel_qbase_create_index(void* self, int row, int column) {
    return QIdentityProxyModel_QBaseCreateIndex((QIdentityProxyModel*)self, row, column);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* (*slot)(QIdentityProxyModel*, int, int) ```
void q_identityproxymodel_on_create_index(void* self, QModelIndex* (*slot)(void*, int, int)) {
    QIdentityProxyModel_OnCreateIndex((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* indexes[], QDataStream* stream ```
void q_identityproxymodel_encode_data(void* self, void* indexes[], void* stream) {
    QModelIndex** indexes_arr = (QModelIndex**)indexes;
    size_t indexes_len = 0;
    while (indexes_arr[indexes_len] != NULL) {
        indexes_len++;
    }
    libqt_list indexes_list = {
        .len = indexes_len,
        .data = {(QModelIndex*)indexes},
    };
    QIdentityProxyModel_EncodeData((QIdentityProxyModel*)self, indexes_list, (QDataStream*)stream);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* indexes[], QDataStream* stream ```
void q_identityproxymodel_qbase_encode_data(void* self, void* indexes[], void* stream) {
    QModelIndex** indexes_arr = (QModelIndex**)indexes;
    size_t indexes_len = 0;
    while (indexes_arr[indexes_len] != NULL) {
        indexes_len++;
    }
    libqt_list indexes_list = {
        .len = indexes_len,
        .data = {(QModelIndex*)indexes},
    };
    QIdentityProxyModel_QBaseEncodeData((QIdentityProxyModel*)self, indexes_list, (QDataStream*)stream);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, void (*slot)(QIdentityProxyModel*, QModelIndex*[], QDataStream*) ```
void q_identityproxymodel_on_encode_data(void* self, void (*slot)(void*, void*, void*)) {
    QIdentityProxyModel_OnEncodeData((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, int row, int column, QModelIndex* parent, QDataStream* stream ```
bool q_identityproxymodel_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return QIdentityProxyModel_DecodeData((QIdentityProxyModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, int row, int column, QModelIndex* parent, QDataStream* stream ```
bool q_identityproxymodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return QIdentityProxyModel_QBaseDecodeData((QIdentityProxyModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, bool (*slot)(QIdentityProxyModel*, int, int, QModelIndex*, QDataStream*) ```
void q_identityproxymodel_on_decode_data(void* self, bool (*slot)(void*, int, int, void*, void*)) {
    QIdentityProxyModel_OnDecodeData((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* parent, int first, int last ```
void q_identityproxymodel_begin_insert_rows(void* self, void* parent, int first, int last) {
    QIdentityProxyModel_BeginInsertRows((QIdentityProxyModel*)self, (QModelIndex*)parent, first, last);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* parent, int first, int last ```
void q_identityproxymodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last) {
    QIdentityProxyModel_QBaseBeginInsertRows((QIdentityProxyModel*)self, (QModelIndex*)parent, first, last);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, void (*slot)(QIdentityProxyModel*, QModelIndex*, int, int) ```
void q_identityproxymodel_on_begin_insert_rows(void* self, void (*slot)(void*, void*, int, int)) {
    QIdentityProxyModel_OnBeginInsertRows((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
void q_identityproxymodel_end_insert_rows(void* self) {
    QIdentityProxyModel_EndInsertRows((QIdentityProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
void q_identityproxymodel_qbase_end_insert_rows(void* self) {
    QIdentityProxyModel_QBaseEndInsertRows((QIdentityProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, void (*slot)() ```
void q_identityproxymodel_on_end_insert_rows(void* self, void (*slot)()) {
    QIdentityProxyModel_OnEndInsertRows((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* parent, int first, int last ```
void q_identityproxymodel_begin_remove_rows(void* self, void* parent, int first, int last) {
    QIdentityProxyModel_BeginRemoveRows((QIdentityProxyModel*)self, (QModelIndex*)parent, first, last);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* parent, int first, int last ```
void q_identityproxymodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last) {
    QIdentityProxyModel_QBaseBeginRemoveRows((QIdentityProxyModel*)self, (QModelIndex*)parent, first, last);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, void (*slot)(QIdentityProxyModel*, QModelIndex*, int, int) ```
void q_identityproxymodel_on_begin_remove_rows(void* self, void (*slot)(void*, void*, int, int)) {
    QIdentityProxyModel_OnBeginRemoveRows((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
void q_identityproxymodel_end_remove_rows(void* self) {
    QIdentityProxyModel_EndRemoveRows((QIdentityProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
void q_identityproxymodel_qbase_end_remove_rows(void* self) {
    QIdentityProxyModel_QBaseEndRemoveRows((QIdentityProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, void (*slot)() ```
void q_identityproxymodel_on_end_remove_rows(void* self, void (*slot)()) {
    QIdentityProxyModel_OnEndRemoveRows((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow ```
bool q_identityproxymodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return QIdentityProxyModel_BeginMoveRows((QIdentityProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow ```
bool q_identityproxymodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return QIdentityProxyModel_QBaseBeginMoveRows((QIdentityProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, bool (*slot)(QIdentityProxyModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_identityproxymodel_on_begin_move_rows(void* self, bool (*slot)(void*, void*, int, int, void*, int)) {
    QIdentityProxyModel_OnBeginMoveRows((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
void q_identityproxymodel_end_move_rows(void* self) {
    QIdentityProxyModel_EndMoveRows((QIdentityProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
void q_identityproxymodel_qbase_end_move_rows(void* self) {
    QIdentityProxyModel_QBaseEndMoveRows((QIdentityProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, void (*slot)() ```
void q_identityproxymodel_on_end_move_rows(void* self, void (*slot)()) {
    QIdentityProxyModel_OnEndMoveRows((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* parent, int first, int last ```
void q_identityproxymodel_begin_insert_columns(void* self, void* parent, int first, int last) {
    QIdentityProxyModel_BeginInsertColumns((QIdentityProxyModel*)self, (QModelIndex*)parent, first, last);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* parent, int first, int last ```
void q_identityproxymodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last) {
    QIdentityProxyModel_QBaseBeginInsertColumns((QIdentityProxyModel*)self, (QModelIndex*)parent, first, last);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, void (*slot)(QIdentityProxyModel*, QModelIndex*, int, int) ```
void q_identityproxymodel_on_begin_insert_columns(void* self, void (*slot)(void*, void*, int, int)) {
    QIdentityProxyModel_OnBeginInsertColumns((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
void q_identityproxymodel_end_insert_columns(void* self) {
    QIdentityProxyModel_EndInsertColumns((QIdentityProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
void q_identityproxymodel_qbase_end_insert_columns(void* self) {
    QIdentityProxyModel_QBaseEndInsertColumns((QIdentityProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, void (*slot)() ```
void q_identityproxymodel_on_end_insert_columns(void* self, void (*slot)()) {
    QIdentityProxyModel_OnEndInsertColumns((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* parent, int first, int last ```
void q_identityproxymodel_begin_remove_columns(void* self, void* parent, int first, int last) {
    QIdentityProxyModel_BeginRemoveColumns((QIdentityProxyModel*)self, (QModelIndex*)parent, first, last);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* parent, int first, int last ```
void q_identityproxymodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last) {
    QIdentityProxyModel_QBaseBeginRemoveColumns((QIdentityProxyModel*)self, (QModelIndex*)parent, first, last);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, void (*slot)(QIdentityProxyModel*, QModelIndex*, int, int) ```
void q_identityproxymodel_on_begin_remove_columns(void* self, void (*slot)(void*, void*, int, int)) {
    QIdentityProxyModel_OnBeginRemoveColumns((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
void q_identityproxymodel_end_remove_columns(void* self) {
    QIdentityProxyModel_EndRemoveColumns((QIdentityProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
void q_identityproxymodel_qbase_end_remove_columns(void* self) {
    QIdentityProxyModel_QBaseEndRemoveColumns((QIdentityProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, void (*slot)() ```
void q_identityproxymodel_on_end_remove_columns(void* self, void (*slot)()) {
    QIdentityProxyModel_OnEndRemoveColumns((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn ```
bool q_identityproxymodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return QIdentityProxyModel_BeginMoveColumns((QIdentityProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn ```
bool q_identityproxymodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return QIdentityProxyModel_QBaseBeginMoveColumns((QIdentityProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, bool (*slot)(QIdentityProxyModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_identityproxymodel_on_begin_move_columns(void* self, bool (*slot)(void*, void*, int, int, void*, int)) {
    QIdentityProxyModel_OnBeginMoveColumns((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
void q_identityproxymodel_end_move_columns(void* self) {
    QIdentityProxyModel_EndMoveColumns((QIdentityProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
void q_identityproxymodel_qbase_end_move_columns(void* self) {
    QIdentityProxyModel_QBaseEndMoveColumns((QIdentityProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, void (*slot)() ```
void q_identityproxymodel_on_end_move_columns(void* self, void (*slot)()) {
    QIdentityProxyModel_OnEndMoveColumns((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
void q_identityproxymodel_begin_reset_model(void* self) {
    QIdentityProxyModel_BeginResetModel((QIdentityProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
void q_identityproxymodel_qbase_begin_reset_model(void* self) {
    QIdentityProxyModel_QBaseBeginResetModel((QIdentityProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, void (*slot)() ```
void q_identityproxymodel_on_begin_reset_model(void* self, void (*slot)()) {
    QIdentityProxyModel_OnBeginResetModel((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
void q_identityproxymodel_end_reset_model(void* self) {
    QIdentityProxyModel_EndResetModel((QIdentityProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
void q_identityproxymodel_qbase_end_reset_model(void* self) {
    QIdentityProxyModel_QBaseEndResetModel((QIdentityProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, void (*slot)() ```
void q_identityproxymodel_on_end_reset_model(void* self, void (*slot)()) {
    QIdentityProxyModel_OnEndResetModel((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* from, QModelIndex* to ```
void q_identityproxymodel_change_persistent_index(void* self, void* from, void* to) {
    QIdentityProxyModel_ChangePersistentIndex((QIdentityProxyModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* from, QModelIndex* to ```
void q_identityproxymodel_qbase_change_persistent_index(void* self, void* from, void* to) {
    QIdentityProxyModel_QBaseChangePersistentIndex((QIdentityProxyModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, void (*slot)(QIdentityProxyModel*, QModelIndex*, QModelIndex*) ```
void q_identityproxymodel_on_change_persistent_index(void* self, void (*slot)(void*, void*, void*)) {
    QIdentityProxyModel_OnChangePersistentIndex((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* from[], QModelIndex* to[] ```
void q_identityproxymodel_change_persistent_index_list(void* self, void* from[], void* to[]) {
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
    QIdentityProxyModel_ChangePersistentIndexList((QIdentityProxyModel*)self, from_list, to_list);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QModelIndex* from[], QModelIndex* to[] ```
void q_identityproxymodel_qbase_change_persistent_index_list(void* self, void* from[], void* to[]) {
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
    QIdentityProxyModel_QBaseChangePersistentIndexList((QIdentityProxyModel*)self, from_list, to_list);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, void (*slot)(QIdentityProxyModel*, QModelIndex*[], QModelIndex*[]) ```
void q_identityproxymodel_on_change_persistent_index_list(void* self, void (*slot)(void*, void*, void*)) {
    QIdentityProxyModel_OnChangePersistentIndexList((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
libqt_list /* of QModelIndex* */ q_identityproxymodel_persistent_index_list(void* self) {
    libqt_list _arr = QIdentityProxyModel_PersistentIndexList((QIdentityProxyModel*)self);
    return _arr;
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
libqt_list /* of QModelIndex* */ q_identityproxymodel_qbase_persistent_index_list(void* self) {
    libqt_list _arr = QIdentityProxyModel_QBasePersistentIndexList((QIdentityProxyModel*)self);
    return _arr;
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, libqt_list /* of QModelIndex* */ (*slot)() ```
void q_identityproxymodel_on_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ (*slot)()) {
    QIdentityProxyModel_OnPersistentIndexList((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
QObject* q_identityproxymodel_sender(void* self) {
    return QIdentityProxyModel_Sender((QIdentityProxyModel*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
QObject* q_identityproxymodel_qbase_sender(void* self) {
    return QIdentityProxyModel_QBaseSender((QIdentityProxyModel*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QObject* (*slot)() ```
void q_identityproxymodel_on_sender(void* self, QObject* (*slot)()) {
    QIdentityProxyModel_OnSender((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
int32_t q_identityproxymodel_sender_signal_index(void* self) {
    return QIdentityProxyModel_SenderSignalIndex((QIdentityProxyModel*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self ```
int32_t q_identityproxymodel_qbase_sender_signal_index(void* self) {
    return QIdentityProxyModel_QBaseSenderSignalIndex((QIdentityProxyModel*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, int32_t (*slot)() ```
void q_identityproxymodel_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QIdentityProxyModel_OnSenderSignalIndex((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, const char* signal ```
int32_t q_identityproxymodel_receivers(void* self, const char* signal) {
    return QIdentityProxyModel_Receivers((QIdentityProxyModel*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, const char* signal ```
int32_t q_identityproxymodel_qbase_receivers(void* self, const char* signal) {
    return QIdentityProxyModel_QBaseReceivers((QIdentityProxyModel*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, int32_t (*slot)(QIdentityProxyModel*, const char*) ```
void q_identityproxymodel_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QIdentityProxyModel_OnReceivers((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIdentityProxyModel* self, QMetaMethod* signal ```
bool q_identityproxymodel_is_signal_connected(void* self, void* signal) {
    return QIdentityProxyModel_IsSignalConnected((QIdentityProxyModel*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, QMetaMethod* signal ```
bool q_identityproxymodel_qbase_is_signal_connected(void* self, void* signal) {
    return QIdentityProxyModel_QBaseIsSignalConnected((QIdentityProxyModel*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIdentityProxyModel* self, bool (*slot)(QIdentityProxyModel*, QMetaMethod*) ```
void q_identityproxymodel_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QIdentityProxyModel_OnIsSignalConnected((QIdentityProxyModel*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QIdentityProxyModel* self ```
void q_identityproxymodel_delete(void* self) {
    QIdentityProxyModel_Delete((QIdentityProxyModel*)(self));
}