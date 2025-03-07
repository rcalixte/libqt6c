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
#include "libqtransposeproxymodel.hpp"
#include "libqtransposeproxymodel.h"

/// https://doc.qt.io/qt-6/qtransposeproxymodel.html

/// q_transposeproxymodel_new constructs a new QTransposeProxyModel object.
///
///
QTransposeProxyModel* q_transposeproxymodel_new() {
    return QTransposeProxyModel_new();
}

/// q_transposeproxymodel_new2 constructs a new QTransposeProxyModel object.
///
/// ``` QObject* parent ```
QTransposeProxyModel* q_transposeproxymodel_new2(void* parent) {
    return QTransposeProxyModel_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QTransposeProxyModel* self ```
QMetaObject* q_transposeproxymodel_meta_object(void* self) {
    return QTransposeProxyModel_MetaObject((QTransposeProxyModel*)self);
}

/// ``` QTransposeProxyModel* self, const char* param1 ```
void* q_transposeproxymodel_metacast(void* self, const char* param1) {
    return QTransposeProxyModel_Metacast((QTransposeProxyModel*)self, param1);
}

/// ``` QTransposeProxyModel* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_transposeproxymodel_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QTransposeProxyModel_Metacall((QTransposeProxyModel*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QTransposeProxyModel* self, int32_t (*slot)(QTransposeProxyModel*, enum QMetaObject__Call, int, void*) ```
void q_transposeproxymodel_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QTransposeProxyModel_OnMetacall((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTransposeProxyModel* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_transposeproxymodel_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QTransposeProxyModel_QBaseMetacall((QTransposeProxyModel*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_transposeproxymodel_tr(const char* s) {
    libqt_string _str = QTransposeProxyModel_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#setSourceModel)
///
/// ``` QTransposeProxyModel* self, QAbstractItemModel* newSourceModel ```
void q_transposeproxymodel_set_source_model(void* self, void* newSourceModel) {
    QTransposeProxyModel_SetSourceModel((QTransposeProxyModel*)self, (QAbstractItemModel*)newSourceModel);
}

/// Allows for overriding the related default method
///
/// ``` QTransposeProxyModel* self, void (*slot)(QTransposeProxyModel*, QAbstractItemModel*) ```
void q_transposeproxymodel_on_set_source_model(void* self, void (*slot)(void*, void*)) {
    QTransposeProxyModel_OnSetSourceModel((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTransposeProxyModel* self, QAbstractItemModel* newSourceModel ```
void q_transposeproxymodel_qbase_set_source_model(void* self, void* newSourceModel) {
    QTransposeProxyModel_QBaseSetSourceModel((QTransposeProxyModel*)self, (QAbstractItemModel*)newSourceModel);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#rowCount)
///
/// ``` QTransposeProxyModel* self, QModelIndex* parent ```
int32_t q_transposeproxymodel_row_count(void* self, void* parent) {
    return QTransposeProxyModel_RowCount((QTransposeProxyModel*)self, (QModelIndex*)parent);
}

/// Allows for overriding the related default method
///
/// ``` QTransposeProxyModel* self, int32_t (*slot)(QTransposeProxyModel*, QModelIndex*) ```
void q_transposeproxymodel_on_row_count(void* self, int32_t (*slot)(void*, void*)) {
    QTransposeProxyModel_OnRowCount((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTransposeProxyModel* self, QModelIndex* parent ```
int32_t q_transposeproxymodel_qbase_row_count(void* self, void* parent) {
    return QTransposeProxyModel_QBaseRowCount((QTransposeProxyModel*)self, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#columnCount)
///
/// ``` QTransposeProxyModel* self, QModelIndex* parent ```
int32_t q_transposeproxymodel_column_count(void* self, void* parent) {
    return QTransposeProxyModel_ColumnCount((QTransposeProxyModel*)self, (QModelIndex*)parent);
}

/// Allows for overriding the related default method
///
/// ``` QTransposeProxyModel* self, int32_t (*slot)(QTransposeProxyModel*, QModelIndex*) ```
void q_transposeproxymodel_on_column_count(void* self, int32_t (*slot)(void*, void*)) {
    QTransposeProxyModel_OnColumnCount((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTransposeProxyModel* self, QModelIndex* parent ```
int32_t q_transposeproxymodel_qbase_column_count(void* self, void* parent) {
    return QTransposeProxyModel_QBaseColumnCount((QTransposeProxyModel*)self, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#headerData)
///
/// ``` QTransposeProxyModel* self, int section, enum Qt__Orientation orientation, int role ```
QVariant* q_transposeproxymodel_header_data(void* self, int section, int64_t orientation, int role) {
    return QTransposeProxyModel_HeaderData((QTransposeProxyModel*)self, section, orientation, role);
}

/// Allows for overriding the related default method
///
/// ``` QTransposeProxyModel* self, QVariant* (*slot)(QTransposeProxyModel*, int, enum Qt__Orientation, int) ```
void q_transposeproxymodel_on_header_data(void* self, QVariant* (*slot)(void*, int, int64_t, int)) {
    QTransposeProxyModel_OnHeaderData((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTransposeProxyModel* self, int section, enum Qt__Orientation orientation, int role ```
QVariant* q_transposeproxymodel_qbase_header_data(void* self, int section, int64_t orientation, int role) {
    return QTransposeProxyModel_QBaseHeaderData((QTransposeProxyModel*)self, section, orientation, role);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#setHeaderData)
///
/// ``` QTransposeProxyModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role ```
bool q_transposeproxymodel_set_header_data(void* self, int section, int64_t orientation, void* value, int role) {
    return QTransposeProxyModel_SetHeaderData((QTransposeProxyModel*)self, section, orientation, (QVariant*)value, role);
}

/// Allows for overriding the related default method
///
/// ``` QTransposeProxyModel* self, bool (*slot)(QTransposeProxyModel*, int, enum Qt__Orientation, QVariant*, int) ```
void q_transposeproxymodel_on_set_header_data(void* self, bool (*slot)(void*, int, int64_t, void*, int)) {
    QTransposeProxyModel_OnSetHeaderData((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTransposeProxyModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role ```
bool q_transposeproxymodel_qbase_set_header_data(void* self, int section, int64_t orientation, void* value, int role) {
    return QTransposeProxyModel_QBaseSetHeaderData((QTransposeProxyModel*)self, section, orientation, (QVariant*)value, role);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#setItemData)
///
/// ``` QTransposeProxyModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ roles ```
bool q_transposeproxymodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    return QTransposeProxyModel_SetItemData((QTransposeProxyModel*)self, (QModelIndex*)index, roles);
}

/// Allows for overriding the related default method
///
/// ``` QTransposeProxyModel* self, bool (*slot)(QTransposeProxyModel*, QModelIndex*, libqt_map /* of int to QVariant* */) ```
void q_transposeproxymodel_on_set_item_data(void* self, bool (*slot)(void*, void*, libqt_map /* of int to QVariant* */)) {
    QTransposeProxyModel_OnSetItemData((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTransposeProxyModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ roles ```
bool q_transposeproxymodel_qbase_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    return QTransposeProxyModel_QBaseSetItemData((QTransposeProxyModel*)self, (QModelIndex*)index, roles);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#span)
///
/// ``` QTransposeProxyModel* self, QModelIndex* index ```
QSize* q_transposeproxymodel_span(void* self, void* index) {
    return QTransposeProxyModel_Span((QTransposeProxyModel*)self, (QModelIndex*)index);
}

/// Allows for overriding the related default method
///
/// ``` QTransposeProxyModel* self, QSize* (*slot)(QTransposeProxyModel*, QModelIndex*) ```
void q_transposeproxymodel_on_span(void* self, QSize* (*slot)(void*, void*)) {
    QTransposeProxyModel_OnSpan((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTransposeProxyModel* self, QModelIndex* index ```
QSize* q_transposeproxymodel_qbase_span(void* self, void* index) {
    return QTransposeProxyModel_QBaseSpan((QTransposeProxyModel*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#itemData)
///
/// ``` QTransposeProxyModel* self, QModelIndex* index ```
libqt_map /* of int to QVariant* */ q_transposeproxymodel_item_data(void* self, void* index) {
    return QTransposeProxyModel_ItemData((QTransposeProxyModel*)self, (QModelIndex*)index);
}

/// Allows for overriding the related default method
///
/// ``` QTransposeProxyModel* self, libqt_map /* of int to QVariant* */ (*slot)(QTransposeProxyModel*, QModelIndex*) ```
void q_transposeproxymodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*slot)(void*, void*)) {
    QTransposeProxyModel_OnItemData((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTransposeProxyModel* self, QModelIndex* index ```
libqt_map /* of int to QVariant* */ q_transposeproxymodel_qbase_item_data(void* self, void* index) {
    return QTransposeProxyModel_QBaseItemData((QTransposeProxyModel*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#mapFromSource)
///
/// ``` QTransposeProxyModel* self, QModelIndex* sourceIndex ```
QModelIndex* q_transposeproxymodel_map_from_source(void* self, void* sourceIndex) {
    return QTransposeProxyModel_MapFromSource((QTransposeProxyModel*)self, (QModelIndex*)sourceIndex);
}

/// Allows for overriding the related default method
///
/// ``` QTransposeProxyModel* self, QModelIndex* (*slot)(QTransposeProxyModel*, QModelIndex*) ```
void q_transposeproxymodel_on_map_from_source(void* self, QModelIndex* (*slot)(void*, void*)) {
    QTransposeProxyModel_OnMapFromSource((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTransposeProxyModel* self, QModelIndex* sourceIndex ```
QModelIndex* q_transposeproxymodel_qbase_map_from_source(void* self, void* sourceIndex) {
    return QTransposeProxyModel_QBaseMapFromSource((QTransposeProxyModel*)self, (QModelIndex*)sourceIndex);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#mapToSource)
///
/// ``` QTransposeProxyModel* self, QModelIndex* proxyIndex ```
QModelIndex* q_transposeproxymodel_map_to_source(void* self, void* proxyIndex) {
    return QTransposeProxyModel_MapToSource((QTransposeProxyModel*)self, (QModelIndex*)proxyIndex);
}

/// Allows for overriding the related default method
///
/// ``` QTransposeProxyModel* self, QModelIndex* (*slot)(QTransposeProxyModel*, QModelIndex*) ```
void q_transposeproxymodel_on_map_to_source(void* self, QModelIndex* (*slot)(void*, void*)) {
    QTransposeProxyModel_OnMapToSource((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTransposeProxyModel* self, QModelIndex* proxyIndex ```
QModelIndex* q_transposeproxymodel_qbase_map_to_source(void* self, void* proxyIndex) {
    return QTransposeProxyModel_QBaseMapToSource((QTransposeProxyModel*)self, (QModelIndex*)proxyIndex);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#parent)
///
/// ``` QTransposeProxyModel* self, QModelIndex* index ```
QModelIndex* q_transposeproxymodel_parent(void* self, void* index) {
    return QTransposeProxyModel_Parent((QTransposeProxyModel*)self, (QModelIndex*)index);
}

/// Allows for overriding the related default method
///
/// ``` QTransposeProxyModel* self, QModelIndex* (*slot)(QTransposeProxyModel*, QModelIndex*) ```
void q_transposeproxymodel_on_parent(void* self, QModelIndex* (*slot)(void*, void*)) {
    QTransposeProxyModel_OnParent((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTransposeProxyModel* self, QModelIndex* index ```
QModelIndex* q_transposeproxymodel_qbase_parent(void* self, void* index) {
    return QTransposeProxyModel_QBaseParent((QTransposeProxyModel*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#index)
///
/// ``` QTransposeProxyModel* self, int row, int column, QModelIndex* parent ```
QModelIndex* q_transposeproxymodel_index(void* self, int row, int column, void* parent) {
    return QTransposeProxyModel_Index((QTransposeProxyModel*)self, row, column, (QModelIndex*)parent);
}

/// Allows for overriding the related default method
///
/// ``` QTransposeProxyModel* self, QModelIndex* (*slot)(QTransposeProxyModel*, int, int, QModelIndex*) ```
void q_transposeproxymodel_on_index(void* self, QModelIndex* (*slot)(void*, int, int, void*)) {
    QTransposeProxyModel_OnIndex((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTransposeProxyModel* self, int row, int column, QModelIndex* parent ```
QModelIndex* q_transposeproxymodel_qbase_index(void* self, int row, int column, void* parent) {
    return QTransposeProxyModel_QBaseIndex((QTransposeProxyModel*)self, row, column, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#insertRows)
///
/// ``` QTransposeProxyModel* self, int row, int count, QModelIndex* parent ```
bool q_transposeproxymodel_insert_rows(void* self, int row, int count, void* parent) {
    return QTransposeProxyModel_InsertRows((QTransposeProxyModel*)self, row, count, (QModelIndex*)parent);
}

/// Allows for overriding the related default method
///
/// ``` QTransposeProxyModel* self, bool (*slot)(QTransposeProxyModel*, int, int, QModelIndex*) ```
void q_transposeproxymodel_on_insert_rows(void* self, bool (*slot)(void*, int, int, void*)) {
    QTransposeProxyModel_OnInsertRows((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTransposeProxyModel* self, int row, int count, QModelIndex* parent ```
bool q_transposeproxymodel_qbase_insert_rows(void* self, int row, int count, void* parent) {
    return QTransposeProxyModel_QBaseInsertRows((QTransposeProxyModel*)self, row, count, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#removeRows)
///
/// ``` QTransposeProxyModel* self, int row, int count, QModelIndex* parent ```
bool q_transposeproxymodel_remove_rows(void* self, int row, int count, void* parent) {
    return QTransposeProxyModel_RemoveRows((QTransposeProxyModel*)self, row, count, (QModelIndex*)parent);
}

/// Allows for overriding the related default method
///
/// ``` QTransposeProxyModel* self, bool (*slot)(QTransposeProxyModel*, int, int, QModelIndex*) ```
void q_transposeproxymodel_on_remove_rows(void* self, bool (*slot)(void*, int, int, void*)) {
    QTransposeProxyModel_OnRemoveRows((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTransposeProxyModel* self, int row, int count, QModelIndex* parent ```
bool q_transposeproxymodel_qbase_remove_rows(void* self, int row, int count, void* parent) {
    return QTransposeProxyModel_QBaseRemoveRows((QTransposeProxyModel*)self, row, count, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#moveRows)
///
/// ``` QTransposeProxyModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_transposeproxymodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return QTransposeProxyModel_MoveRows((QTransposeProxyModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

/// Allows for overriding the related default method
///
/// ``` QTransposeProxyModel* self, bool (*slot)(QTransposeProxyModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_transposeproxymodel_on_move_rows(void* self, bool (*slot)(void*, void*, int, int, void*, int)) {
    QTransposeProxyModel_OnMoveRows((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTransposeProxyModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_transposeproxymodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return QTransposeProxyModel_QBaseMoveRows((QTransposeProxyModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#insertColumns)
///
/// ``` QTransposeProxyModel* self, int column, int count, QModelIndex* parent ```
bool q_transposeproxymodel_insert_columns(void* self, int column, int count, void* parent) {
    return QTransposeProxyModel_InsertColumns((QTransposeProxyModel*)self, column, count, (QModelIndex*)parent);
}

/// Allows for overriding the related default method
///
/// ``` QTransposeProxyModel* self, bool (*slot)(QTransposeProxyModel*, int, int, QModelIndex*) ```
void q_transposeproxymodel_on_insert_columns(void* self, bool (*slot)(void*, int, int, void*)) {
    QTransposeProxyModel_OnInsertColumns((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTransposeProxyModel* self, int column, int count, QModelIndex* parent ```
bool q_transposeproxymodel_qbase_insert_columns(void* self, int column, int count, void* parent) {
    return QTransposeProxyModel_QBaseInsertColumns((QTransposeProxyModel*)self, column, count, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#removeColumns)
///
/// ``` QTransposeProxyModel* self, int column, int count, QModelIndex* parent ```
bool q_transposeproxymodel_remove_columns(void* self, int column, int count, void* parent) {
    return QTransposeProxyModel_RemoveColumns((QTransposeProxyModel*)self, column, count, (QModelIndex*)parent);
}

/// Allows for overriding the related default method
///
/// ``` QTransposeProxyModel* self, bool (*slot)(QTransposeProxyModel*, int, int, QModelIndex*) ```
void q_transposeproxymodel_on_remove_columns(void* self, bool (*slot)(void*, int, int, void*)) {
    QTransposeProxyModel_OnRemoveColumns((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTransposeProxyModel* self, int column, int count, QModelIndex* parent ```
bool q_transposeproxymodel_qbase_remove_columns(void* self, int column, int count, void* parent) {
    return QTransposeProxyModel_QBaseRemoveColumns((QTransposeProxyModel*)self, column, count, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#moveColumns)
///
/// ``` QTransposeProxyModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_transposeproxymodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return QTransposeProxyModel_MoveColumns((QTransposeProxyModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

/// Allows for overriding the related default method
///
/// ``` QTransposeProxyModel* self, bool (*slot)(QTransposeProxyModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_transposeproxymodel_on_move_columns(void* self, bool (*slot)(void*, void*, int, int, void*, int)) {
    QTransposeProxyModel_OnMoveColumns((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTransposeProxyModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_transposeproxymodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return QTransposeProxyModel_QBaseMoveColumns((QTransposeProxyModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#sort)
///
/// ``` QTransposeProxyModel* self, int column, enum Qt__SortOrder order ```
void q_transposeproxymodel_sort(void* self, int column, int64_t order) {
    QTransposeProxyModel_Sort((QTransposeProxyModel*)self, column, order);
}

/// Allows for overriding the related default method
///
/// ``` QTransposeProxyModel* self, void (*slot)(QTransposeProxyModel*, int, enum Qt__SortOrder) ```
void q_transposeproxymodel_on_sort(void* self, void (*slot)(void*, int, int64_t)) {
    QTransposeProxyModel_OnSort((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTransposeProxyModel* self, int column, enum Qt__SortOrder order ```
void q_transposeproxymodel_qbase_sort(void* self, int column, int64_t order) {
    QTransposeProxyModel_QBaseSort((QTransposeProxyModel*)self, column, order);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_transposeproxymodel_tr2(const char* s, const char* c) {
    libqt_string _str = QTransposeProxyModel_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_transposeproxymodel_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QTransposeProxyModel_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#sourceModel)
///
/// ``` QTransposeProxyModel* self ```
QAbstractItemModel* q_transposeproxymodel_source_model(void* self) {
    return QAbstractProxyModel_SourceModel((QAbstractProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// ``` QTransposeProxyModel* self, int row, int column ```
bool q_transposeproxymodel_has_index(void* self, int row, int column) {
    return QAbstractItemModel_HasIndex((QAbstractItemModel*)self, row, column);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// ``` QTransposeProxyModel* self, int row ```
bool q_transposeproxymodel_insert_row(void* self, int row) {
    return QAbstractItemModel_InsertRow((QAbstractItemModel*)self, row);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// ``` QTransposeProxyModel* self, int column ```
bool q_transposeproxymodel_insert_column(void* self, int column) {
    return QAbstractItemModel_InsertColumn((QAbstractItemModel*)self, column);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// ``` QTransposeProxyModel* self, int row ```
bool q_transposeproxymodel_remove_row(void* self, int row) {
    return QAbstractItemModel_RemoveRow((QAbstractItemModel*)self, row);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// ``` QTransposeProxyModel* self, int column ```
bool q_transposeproxymodel_remove_column(void* self, int column) {
    return QAbstractItemModel_RemoveColumn((QAbstractItemModel*)self, column);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
///
/// ``` QTransposeProxyModel* self, QModelIndex* sourceParent, int sourceRow, QModelIndex* destinationParent, int destinationChild ```
bool q_transposeproxymodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveRow((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceRow, (QModelIndex*)destinationParent, destinationChild);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
///
/// ``` QTransposeProxyModel* self, QModelIndex* sourceParent, int sourceColumn, QModelIndex* destinationParent, int destinationChild ```
bool q_transposeproxymodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveColumn((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceColumn, (QModelIndex*)destinationParent, destinationChild);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// ``` QTransposeProxyModel* self, QModelIndex* index ```
bool q_transposeproxymodel_check_index(void* self, void* index) {
    return QAbstractItemModel_CheckIndex((QAbstractItemModel*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// ``` QTransposeProxyModel* self, QModelIndex* topLeft, QModelIndex* bottomRight ```
void q_transposeproxymodel_data_changed(void* self, void* topLeft, void* bottomRight) {
    QAbstractItemModel_DataChanged((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight);
}

/// Inherited from QAbstractItemModel
///
/// ``` QTransposeProxyModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, QModelIndex*) ```
void q_transposeproxymodel_on_data_changed(void* self, void (*slot)(void*, void*, void*)) {
    QAbstractItemModel_Connect_DataChanged((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// ``` QTransposeProxyModel* self, enum Qt__Orientation orientation, int first, int last ```
void q_transposeproxymodel_header_data_changed(void* self, int64_t orientation, int first, int last) {
    QAbstractItemModel_HeaderDataChanged((QAbstractItemModel*)self, orientation, first, last);
}

/// Inherited from QAbstractItemModel
///
/// ``` QTransposeProxyModel* self, void (*slot)(QAbstractItemModel*, enum Qt__Orientation, int, int) ```
void q_transposeproxymodel_on_header_data_changed(void* self, void (*slot)(void*, int64_t, int, int)) {
    QAbstractItemModel_Connect_HeaderDataChanged((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QTransposeProxyModel* self ```
void q_transposeproxymodel_layout_changed(void* self) {
    QAbstractItemModel_LayoutChanged((QAbstractItemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// ``` QTransposeProxyModel* self, void (*slot)(QAbstractItemModel*) ```
void q_transposeproxymodel_on_layout_changed(void* self, void (*slot)(void*)) {
    QAbstractItemModel_Connect_LayoutChanged((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QTransposeProxyModel* self ```
void q_transposeproxymodel_layout_about_to_be_changed(void* self) {
    QAbstractItemModel_LayoutAboutToBeChanged((QAbstractItemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// ``` QTransposeProxyModel* self, void (*slot)(QAbstractItemModel*) ```
void q_transposeproxymodel_on_layout_about_to_be_changed(void* self, void (*slot)(void*)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// ``` QTransposeProxyModel* self, int row, int column, QModelIndex* parent ```
bool q_transposeproxymodel_has_index3(void* self, int row, int column, void* parent) {
    return QAbstractItemModel_HasIndex3((QAbstractItemModel*)self, row, column, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// ``` QTransposeProxyModel* self, int row, QModelIndex* parent ```
bool q_transposeproxymodel_insert_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_InsertRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// ``` QTransposeProxyModel* self, int column, QModelIndex* parent ```
bool q_transposeproxymodel_insert_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_InsertColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// ``` QTransposeProxyModel* self, int row, QModelIndex* parent ```
bool q_transposeproxymodel_remove_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_RemoveRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// ``` QTransposeProxyModel* self, int column, QModelIndex* parent ```
bool q_transposeproxymodel_remove_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_RemoveColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// ``` QTransposeProxyModel* self, QModelIndex* index, int options ```
bool q_transposeproxymodel_check_index2(void* self, void* index, int64_t options) {
    return QAbstractItemModel_CheckIndex2((QAbstractItemModel*)self, (QModelIndex*)index, options);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// ``` QTransposeProxyModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, int* roles[] ```
void q_transposeproxymodel_data_changed3(void* self, void* topLeft, void* bottomRight, int* roles[]) {
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
/// ``` QTransposeProxyModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, QModelIndex*, int*[]) ```
void q_transposeproxymodel_on_data_changed3(void* self, void (*slot)(void*, void*, void*, int*)) {
    QAbstractItemModel_Connect_DataChanged3((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QTransposeProxyModel* self, QPersistentModelIndex* parents[] ```
void q_transposeproxymodel_layout_changed1(void* self, void* parents[]) {
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
/// ``` QTransposeProxyModel* self, void (*slot)(QAbstractItemModel*, QPersistentModelIndex*[]) ```
void q_transposeproxymodel_on_layout_changed1(void* self, void (*slot)(void*, void*)) {
    QAbstractItemModel_Connect_LayoutChanged1((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QTransposeProxyModel* self, QPersistentModelIndex* parents[], enum QAbstractItemModel__LayoutChangeHint hint ```
void q_transposeproxymodel_layout_changed2(void* self, void* parents[], int64_t hint) {
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
/// ``` QTransposeProxyModel* self, void (*slot)(QAbstractItemModel*, QPersistentModelIndex*[], enum QAbstractItemModel__LayoutChangeHint) ```
void q_transposeproxymodel_on_layout_changed2(void* self, void (*slot)(void*, void*, int64_t)) {
    QAbstractItemModel_Connect_LayoutChanged2((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QTransposeProxyModel* self, QPersistentModelIndex* parents[] ```
void q_transposeproxymodel_layout_about_to_be_changed1(void* self, void* parents[]) {
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
/// ``` QTransposeProxyModel* self, void (*slot)(QAbstractItemModel*, QPersistentModelIndex*[]) ```
void q_transposeproxymodel_on_layout_about_to_be_changed1(void* self, void (*slot)(void*, void*)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged1((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QTransposeProxyModel* self, QPersistentModelIndex* parents[], enum QAbstractItemModel__LayoutChangeHint hint ```
void q_transposeproxymodel_layout_about_to_be_changed2(void* self, void* parents[], int64_t hint) {
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
/// ``` QTransposeProxyModel* self, void (*slot)(QAbstractItemModel*, QPersistentModelIndex*[], enum QAbstractItemModel__LayoutChangeHint) ```
void q_transposeproxymodel_on_layout_about_to_be_changed2(void* self, void (*slot)(void*, void*, int64_t)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged2((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QTransposeProxyModel* self ```
const char* q_transposeproxymodel_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QTransposeProxyModel* self, const char* name ```
void q_transposeproxymodel_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QTransposeProxyModel* self ```
bool q_transposeproxymodel_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QTransposeProxyModel* self ```
bool q_transposeproxymodel_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QTransposeProxyModel* self ```
bool q_transposeproxymodel_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QTransposeProxyModel* self ```
bool q_transposeproxymodel_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QTransposeProxyModel* self, bool b ```
bool q_transposeproxymodel_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QTransposeProxyModel* self ```
QThread* q_transposeproxymodel_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QTransposeProxyModel* self, QThread* thread ```
void q_transposeproxymodel_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QTransposeProxyModel* self, int interval ```
int32_t q_transposeproxymodel_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QTransposeProxyModel* self, int id ```
void q_transposeproxymodel_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QTransposeProxyModel* self ```
libqt_list /* of QObject* */ q_transposeproxymodel_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QTransposeProxyModel* self, QObject* parent ```
void q_transposeproxymodel_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QTransposeProxyModel* self, QObject* filterObj ```
void q_transposeproxymodel_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QTransposeProxyModel* self, QObject* obj ```
void q_transposeproxymodel_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_transposeproxymodel_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QTransposeProxyModel* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_transposeproxymodel_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_transposeproxymodel_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_transposeproxymodel_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QTransposeProxyModel* self ```
void q_transposeproxymodel_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QTransposeProxyModel* self ```
void q_transposeproxymodel_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QTransposeProxyModel* self, const char* name, QVariant* value ```
bool q_transposeproxymodel_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QTransposeProxyModel* self, const char* name ```
QVariant* q_transposeproxymodel_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QTransposeProxyModel* self ```
const char** q_transposeproxymodel_dynamic_property_names(void* self) {
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
/// ``` QTransposeProxyModel* self ```
QBindingStorage* q_transposeproxymodel_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QTransposeProxyModel* self ```
QBindingStorage* q_transposeproxymodel_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTransposeProxyModel* self ```
void q_transposeproxymodel_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QTransposeProxyModel* self, void (*slot)(QObject*) ```
void q_transposeproxymodel_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QTransposeProxyModel* self, const char* classname ```
bool q_transposeproxymodel_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QTransposeProxyModel* self ```
void q_transposeproxymodel_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QTransposeProxyModel* self, int interval, enum Qt__TimerType timerType ```
int32_t q_transposeproxymodel_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_transposeproxymodel_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QTransposeProxyModel* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_transposeproxymodel_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTransposeProxyModel* self, QObject* param1 ```
void q_transposeproxymodel_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QTransposeProxyModel* self, void (*slot)(QObject*, QObject*) ```
void q_transposeproxymodel_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#mapSelectionToSource)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTransposeProxyModel* self, QItemSelection* selection ```
QItemSelection* q_transposeproxymodel_map_selection_to_source(void* self, void* selection) {
    return QTransposeProxyModel_MapSelectionToSource((QTransposeProxyModel*)self, (QItemSelection*)selection);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, QItemSelection* selection ```
QItemSelection* q_transposeproxymodel_qbase_map_selection_to_source(void* self, void* selection) {
    return QTransposeProxyModel_QBaseMapSelectionToSource((QTransposeProxyModel*)self, (QItemSelection*)selection);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, QItemSelection* (*slot)(QTransposeProxyModel*, QItemSelection*) ```
void q_transposeproxymodel_on_map_selection_to_source(void* self, QItemSelection* (*slot)(void*, void*)) {
    QTransposeProxyModel_OnMapSelectionToSource((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#mapSelectionFromSource)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTransposeProxyModel* self, QItemSelection* selection ```
QItemSelection* q_transposeproxymodel_map_selection_from_source(void* self, void* selection) {
    return QTransposeProxyModel_MapSelectionFromSource((QTransposeProxyModel*)self, (QItemSelection*)selection);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, QItemSelection* selection ```
QItemSelection* q_transposeproxymodel_qbase_map_selection_from_source(void* self, void* selection) {
    return QTransposeProxyModel_QBaseMapSelectionFromSource((QTransposeProxyModel*)self, (QItemSelection*)selection);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, QItemSelection* (*slot)(QTransposeProxyModel*, QItemSelection*) ```
void q_transposeproxymodel_on_map_selection_from_source(void* self, QItemSelection* (*slot)(void*, void*)) {
    QTransposeProxyModel_OnMapSelectionFromSource((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTransposeProxyModel* self ```
bool q_transposeproxymodel_submit(void* self) {
    return QTransposeProxyModel_Submit((QTransposeProxyModel*)self);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTransposeProxyModel* self ```
bool q_transposeproxymodel_qbase_submit(void* self) {
    return QTransposeProxyModel_QBaseSubmit((QTransposeProxyModel*)self);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, bool (*slot)() ```
void q_transposeproxymodel_on_submit(void* self, bool (*slot)()) {
    QTransposeProxyModel_OnSubmit((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTransposeProxyModel* self ```
void q_transposeproxymodel_revert(void* self) {
    QTransposeProxyModel_Revert((QTransposeProxyModel*)self);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTransposeProxyModel* self ```
void q_transposeproxymodel_qbase_revert(void* self) {
    QTransposeProxyModel_QBaseRevert((QTransposeProxyModel*)self);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, void (*slot)() ```
void q_transposeproxymodel_on_revert(void* self, void (*slot)()) {
    QTransposeProxyModel_OnRevert((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#data)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTransposeProxyModel* self, QModelIndex* proxyIndex, int role ```
QVariant* q_transposeproxymodel_data(void* self, void* proxyIndex, int role) {
    return QTransposeProxyModel_Data((QTransposeProxyModel*)self, (QModelIndex*)proxyIndex, role);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, QModelIndex* proxyIndex, int role ```
QVariant* q_transposeproxymodel_qbase_data(void* self, void* proxyIndex, int role) {
    return QTransposeProxyModel_QBaseData((QTransposeProxyModel*)self, (QModelIndex*)proxyIndex, role);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, QVariant* (*slot)(QTransposeProxyModel*, QModelIndex*, int) ```
void q_transposeproxymodel_on_data(void* self, QVariant* (*slot)(void*, void*, int)) {
    QTransposeProxyModel_OnData((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#flags)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTransposeProxyModel* self, QModelIndex* index ```
int64_t q_transposeproxymodel_flags(void* self, void* index) {
    return QTransposeProxyModel_Flags((QTransposeProxyModel*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, QModelIndex* index ```
int64_t q_transposeproxymodel_qbase_flags(void* self, void* index) {
    return QTransposeProxyModel_QBaseFlags((QTransposeProxyModel*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, int64_t (*slot)(QTransposeProxyModel*, QModelIndex*) ```
void q_transposeproxymodel_on_flags(void* self, int64_t (*slot)(void*, void*)) {
    QTransposeProxyModel_OnFlags((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#setData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTransposeProxyModel* self, QModelIndex* index, QVariant* value, int role ```
bool q_transposeproxymodel_set_data(void* self, void* index, void* value, int role) {
    return QTransposeProxyModel_SetData((QTransposeProxyModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, QModelIndex* index, QVariant* value, int role ```
bool q_transposeproxymodel_qbase_set_data(void* self, void* index, void* value, int role) {
    return QTransposeProxyModel_QBaseSetData((QTransposeProxyModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, bool (*slot)(QTransposeProxyModel*, QModelIndex*, QVariant*, int) ```
void q_transposeproxymodel_on_set_data(void* self, bool (*slot)(void*, void*, void*, int)) {
    QTransposeProxyModel_OnSetData((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTransposeProxyModel* self, QModelIndex* index ```
bool q_transposeproxymodel_clear_item_data(void* self, void* index) {
    return QTransposeProxyModel_ClearItemData((QTransposeProxyModel*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, QModelIndex* index ```
bool q_transposeproxymodel_qbase_clear_item_data(void* self, void* index) {
    return QTransposeProxyModel_QBaseClearItemData((QTransposeProxyModel*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, bool (*slot)(QTransposeProxyModel*, QModelIndex*) ```
void q_transposeproxymodel_on_clear_item_data(void* self, bool (*slot)(void*, void*)) {
    QTransposeProxyModel_OnClearItemData((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#buddy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTransposeProxyModel* self, QModelIndex* index ```
QModelIndex* q_transposeproxymodel_buddy(void* self, void* index) {
    return QTransposeProxyModel_Buddy((QTransposeProxyModel*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, QModelIndex* index ```
QModelIndex* q_transposeproxymodel_qbase_buddy(void* self, void* index) {
    return QTransposeProxyModel_QBaseBuddy((QTransposeProxyModel*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, QModelIndex* (*slot)(QTransposeProxyModel*, QModelIndex*) ```
void q_transposeproxymodel_on_buddy(void* self, QModelIndex* (*slot)(void*, void*)) {
    QTransposeProxyModel_OnBuddy((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#canFetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTransposeProxyModel* self, QModelIndex* parent ```
bool q_transposeproxymodel_can_fetch_more(void* self, void* parent) {
    return QTransposeProxyModel_CanFetchMore((QTransposeProxyModel*)self, (QModelIndex*)parent);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, QModelIndex* parent ```
bool q_transposeproxymodel_qbase_can_fetch_more(void* self, void* parent) {
    return QTransposeProxyModel_QBaseCanFetchMore((QTransposeProxyModel*)self, (QModelIndex*)parent);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, bool (*slot)(QTransposeProxyModel*, QModelIndex*) ```
void q_transposeproxymodel_on_can_fetch_more(void* self, bool (*slot)(void*, void*)) {
    QTransposeProxyModel_OnCanFetchMore((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#fetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTransposeProxyModel* self, QModelIndex* parent ```
void q_transposeproxymodel_fetch_more(void* self, void* parent) {
    QTransposeProxyModel_FetchMore((QTransposeProxyModel*)self, (QModelIndex*)parent);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, QModelIndex* parent ```
void q_transposeproxymodel_qbase_fetch_more(void* self, void* parent) {
    QTransposeProxyModel_QBaseFetchMore((QTransposeProxyModel*)self, (QModelIndex*)parent);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, void (*slot)(QTransposeProxyModel*, QModelIndex*) ```
void q_transposeproxymodel_on_fetch_more(void* self, void (*slot)(void*, void*)) {
    QTransposeProxyModel_OnFetchMore((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#hasChildren)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTransposeProxyModel* self, QModelIndex* parent ```
bool q_transposeproxymodel_has_children(void* self, void* parent) {
    return QTransposeProxyModel_HasChildren((QTransposeProxyModel*)self, (QModelIndex*)parent);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, QModelIndex* parent ```
bool q_transposeproxymodel_qbase_has_children(void* self, void* parent) {
    return QTransposeProxyModel_QBaseHasChildren((QTransposeProxyModel*)self, (QModelIndex*)parent);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, bool (*slot)(QTransposeProxyModel*, QModelIndex*) ```
void q_transposeproxymodel_on_has_children(void* self, bool (*slot)(void*, void*)) {
    QTransposeProxyModel_OnHasChildren((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#sibling)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTransposeProxyModel* self, int row, int column, QModelIndex* idx ```
QModelIndex* q_transposeproxymodel_sibling(void* self, int row, int column, void* idx) {
    return QTransposeProxyModel_Sibling((QTransposeProxyModel*)self, row, column, (QModelIndex*)idx);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, int row, int column, QModelIndex* idx ```
QModelIndex* q_transposeproxymodel_qbase_sibling(void* self, int row, int column, void* idx) {
    return QTransposeProxyModel_QBaseSibling((QTransposeProxyModel*)self, row, column, (QModelIndex*)idx);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, QModelIndex* (*slot)(QTransposeProxyModel*, int, int, QModelIndex*) ```
void q_transposeproxymodel_on_sibling(void* self, QModelIndex* (*slot)(void*, int, int, void*)) {
    QTransposeProxyModel_OnSibling((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTransposeProxyModel* self, QModelIndex* indexes[] ```
QMimeData* q_transposeproxymodel_mime_data(void* self, void* indexes[]) {
    QModelIndex** indexes_arr = (QModelIndex**)indexes;
    size_t indexes_len = 0;
    while (indexes_arr[indexes_len] != NULL) {
        indexes_len++;
    }
    libqt_list indexes_list = {
        .len = indexes_len,
        .data = {(QModelIndex*)indexes},
    };
    return QTransposeProxyModel_MimeData((QTransposeProxyModel*)self, indexes_list);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, QModelIndex* indexes[] ```
QMimeData* q_transposeproxymodel_qbase_mime_data(void* self, void* indexes[]) {
    QModelIndex** indexes_arr = (QModelIndex**)indexes;
    size_t indexes_len = 0;
    while (indexes_arr[indexes_len] != NULL) {
        indexes_len++;
    }
    libqt_list indexes_list = {
        .len = indexes_len,
        .data = {(QModelIndex*)indexes},
    };
    return QTransposeProxyModel_QBaseMimeData((QTransposeProxyModel*)self, indexes_list);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, QMimeData* (*slot)(QTransposeProxyModel*, QModelIndex*[]) ```
void q_transposeproxymodel_on_mime_data(void* self, QMimeData* (*slot)(void*, void*)) {
    QTransposeProxyModel_OnMimeData((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTransposeProxyModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_transposeproxymodel_can_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent) {
    return QTransposeProxyModel_CanDropMimeData((QTransposeProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_transposeproxymodel_qbase_can_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent) {
    return QTransposeProxyModel_QBaseCanDropMimeData((QTransposeProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, bool (*slot)(QTransposeProxyModel*, QMimeData*, enum Qt__DropAction, int, int, QModelIndex*) ```
void q_transposeproxymodel_on_can_drop_mime_data(void* self, bool (*slot)(void*, void*, int64_t, int, int, void*)) {
    QTransposeProxyModel_OnCanDropMimeData((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#dropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTransposeProxyModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_transposeproxymodel_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent) {
    return QTransposeProxyModel_DropMimeData((QTransposeProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_transposeproxymodel_qbase_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent) {
    return QTransposeProxyModel_QBaseDropMimeData((QTransposeProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, bool (*slot)(QTransposeProxyModel*, QMimeData*, enum Qt__DropAction, int, int, QModelIndex*) ```
void q_transposeproxymodel_on_drop_mime_data(void* self, bool (*slot)(void*, void*, int64_t, int, int, void*)) {
    QTransposeProxyModel_OnDropMimeData((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeTypes)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTransposeProxyModel* self ```
const char** q_transposeproxymodel_mime_types(void* self) {
    libqt_list _arr = QTransposeProxyModel_MimeTypes((QTransposeProxyModel*)self);
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
/// ``` QTransposeProxyModel* self ```
const char** q_transposeproxymodel_qbase_mime_types(void* self) {
    libqt_list _arr = QTransposeProxyModel_QBaseMimeTypes((QTransposeProxyModel*)self);
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
/// ``` QTransposeProxyModel* self, const char** (*slot)() ```
void q_transposeproxymodel_on_mime_types(void* self, const char** (*slot)()) {
    QTransposeProxyModel_OnMimeTypes((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTransposeProxyModel* self ```
int64_t q_transposeproxymodel_supported_drag_actions(void* self) {
    return QTransposeProxyModel_SupportedDragActions((QTransposeProxyModel*)self);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTransposeProxyModel* self ```
int64_t q_transposeproxymodel_qbase_supported_drag_actions(void* self) {
    return QTransposeProxyModel_QBaseSupportedDragActions((QTransposeProxyModel*)self);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, int64_t (*slot)() ```
void q_transposeproxymodel_on_supported_drag_actions(void* self, int64_t (*slot)()) {
    QTransposeProxyModel_OnSupportedDragActions((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDropActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTransposeProxyModel* self ```
int64_t q_transposeproxymodel_supported_drop_actions(void* self) {
    return QTransposeProxyModel_SupportedDropActions((QTransposeProxyModel*)self);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTransposeProxyModel* self ```
int64_t q_transposeproxymodel_qbase_supported_drop_actions(void* self) {
    return QTransposeProxyModel_QBaseSupportedDropActions((QTransposeProxyModel*)self);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, int64_t (*slot)() ```
void q_transposeproxymodel_on_supported_drop_actions(void* self, int64_t (*slot)()) {
    QTransposeProxyModel_OnSupportedDropActions((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#roleNames)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTransposeProxyModel* self ```
libqt_map /* of int to char* */ q_transposeproxymodel_role_names(void* self) {
    return QTransposeProxyModel_RoleNames((QTransposeProxyModel*)self);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTransposeProxyModel* self ```
libqt_map /* of int to char* */ q_transposeproxymodel_qbase_role_names(void* self) {
    return QTransposeProxyModel_QBaseRoleNames((QTransposeProxyModel*)self);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, libqt_map /* of int to char* */ (*slot)() ```
void q_transposeproxymodel_on_role_names(void* self, libqt_map /* of int to char* */ (*slot)()) {
    QTransposeProxyModel_OnRoleNames((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTransposeProxyModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags ```
libqt_list /* of QModelIndex* */ q_transposeproxymodel_match(void* self, void* start, int role, void* value, int hits, int64_t flags) {
    libqt_list _arr = QTransposeProxyModel_Match((QTransposeProxyModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags ```
libqt_list /* of QModelIndex* */ q_transposeproxymodel_qbase_match(void* self, void* start, int role, void* value, int hits, int64_t flags) {
    libqt_list _arr = QTransposeProxyModel_QBaseMatch((QTransposeProxyModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, libqt_list /* of QModelIndex* */ (*slot)(QTransposeProxyModel*, QModelIndex*, int, QVariant*, int, int) ```
void q_transposeproxymodel_on_match(void* self, libqt_list /* of QModelIndex* */ (*slot)(void*, void*, int, void*, int, int64_t)) {
    QTransposeProxyModel_OnMatch((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTransposeProxyModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan ```
void q_transposeproxymodel_multi_data(void* self, void* index, void* roleDataSpan) {
    QTransposeProxyModel_MultiData((QTransposeProxyModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan ```
void q_transposeproxymodel_qbase_multi_data(void* self, void* index, void* roleDataSpan) {
    QTransposeProxyModel_QBaseMultiData((QTransposeProxyModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, void (*slot)(QTransposeProxyModel*, QModelIndex*, QModelRoleDataSpan*) ```
void q_transposeproxymodel_on_multi_data(void* self, void (*slot)(void*, void*, void*)) {
    QTransposeProxyModel_OnMultiData((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTransposeProxyModel* self ```
void q_transposeproxymodel_reset_internal_data(void* self) {
    QTransposeProxyModel_ResetInternalData((QTransposeProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTransposeProxyModel* self ```
void q_transposeproxymodel_qbase_reset_internal_data(void* self) {
    QTransposeProxyModel_QBaseResetInternalData((QTransposeProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, void (*slot)() ```
void q_transposeproxymodel_on_reset_internal_data(void* self, void (*slot)()) {
    QTransposeProxyModel_OnResetInternalData((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTransposeProxyModel* self, QEvent* event ```
bool q_transposeproxymodel_event(void* self, void* event) {
    return QTransposeProxyModel_Event((QTransposeProxyModel*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, QEvent* event ```
bool q_transposeproxymodel_qbase_event(void* self, void* event) {
    return QTransposeProxyModel_QBaseEvent((QTransposeProxyModel*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, bool (*slot)(QTransposeProxyModel*, QEvent*) ```
void q_transposeproxymodel_on_event(void* self, bool (*slot)(void*, void*)) {
    QTransposeProxyModel_OnEvent((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTransposeProxyModel* self, QObject* watched, QEvent* event ```
bool q_transposeproxymodel_event_filter(void* self, void* watched, void* event) {
    return QTransposeProxyModel_EventFilter((QTransposeProxyModel*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, QObject* watched, QEvent* event ```
bool q_transposeproxymodel_qbase_event_filter(void* self, void* watched, void* event) {
    return QTransposeProxyModel_QBaseEventFilter((QTransposeProxyModel*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, bool (*slot)(QTransposeProxyModel*, QObject*, QEvent*) ```
void q_transposeproxymodel_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QTransposeProxyModel_OnEventFilter((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTransposeProxyModel* self, QTimerEvent* event ```
void q_transposeproxymodel_timer_event(void* self, void* event) {
    QTransposeProxyModel_TimerEvent((QTransposeProxyModel*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, QTimerEvent* event ```
void q_transposeproxymodel_qbase_timer_event(void* self, void* event) {
    QTransposeProxyModel_QBaseTimerEvent((QTransposeProxyModel*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, void (*slot)(QTransposeProxyModel*, QTimerEvent*) ```
void q_transposeproxymodel_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QTransposeProxyModel_OnTimerEvent((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTransposeProxyModel* self, QChildEvent* event ```
void q_transposeproxymodel_child_event(void* self, void* event) {
    QTransposeProxyModel_ChildEvent((QTransposeProxyModel*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, QChildEvent* event ```
void q_transposeproxymodel_qbase_child_event(void* self, void* event) {
    QTransposeProxyModel_QBaseChildEvent((QTransposeProxyModel*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, void (*slot)(QTransposeProxyModel*, QChildEvent*) ```
void q_transposeproxymodel_on_child_event(void* self, void (*slot)(void*, void*)) {
    QTransposeProxyModel_OnChildEvent((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTransposeProxyModel* self, QEvent* event ```
void q_transposeproxymodel_custom_event(void* self, void* event) {
    QTransposeProxyModel_CustomEvent((QTransposeProxyModel*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, QEvent* event ```
void q_transposeproxymodel_qbase_custom_event(void* self, void* event) {
    QTransposeProxyModel_QBaseCustomEvent((QTransposeProxyModel*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, void (*slot)(QTransposeProxyModel*, QEvent*) ```
void q_transposeproxymodel_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QTransposeProxyModel_OnCustomEvent((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTransposeProxyModel* self, QMetaMethod* signal ```
void q_transposeproxymodel_connect_notify(void* self, void* signal) {
    QTransposeProxyModel_ConnectNotify((QTransposeProxyModel*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, QMetaMethod* signal ```
void q_transposeproxymodel_qbase_connect_notify(void* self, void* signal) {
    QTransposeProxyModel_QBaseConnectNotify((QTransposeProxyModel*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, void (*slot)(QTransposeProxyModel*, QMetaMethod*) ```
void q_transposeproxymodel_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QTransposeProxyModel_OnConnectNotify((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTransposeProxyModel* self, QMetaMethod* signal ```
void q_transposeproxymodel_disconnect_notify(void* self, void* signal) {
    QTransposeProxyModel_DisconnectNotify((QTransposeProxyModel*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, QMetaMethod* signal ```
void q_transposeproxymodel_qbase_disconnect_notify(void* self, void* signal) {
    QTransposeProxyModel_QBaseDisconnectNotify((QTransposeProxyModel*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, void (*slot)(QTransposeProxyModel*, QMetaMethod*) ```
void q_transposeproxymodel_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QTransposeProxyModel_OnDisconnectNotify((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTransposeProxyModel* self, int row, int col, void* internalPtr ```
QModelIndex* q_transposeproxymodel_create_source_index(void* self, int row, int col, void* internalPtr) {
    return QTransposeProxyModel_CreateSourceIndex((QTransposeProxyModel*)self, row, col, internalPtr);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, int row, int col, void* internalPtr ```
QModelIndex* q_transposeproxymodel_qbase_create_source_index(void* self, int row, int col, void* internalPtr) {
    return QTransposeProxyModel_QBaseCreateSourceIndex((QTransposeProxyModel*)self, row, col, internalPtr);
}

/// Inherited from QAbstractProxyModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, QModelIndex* (*slot)(QTransposeProxyModel*, int, int, void*) ```
void q_transposeproxymodel_on_create_source_index(void* self, QModelIndex* (*slot)(void*, int, int, void*)) {
    QTransposeProxyModel_OnCreateSourceIndex((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTransposeProxyModel* self, int row, int column ```
QModelIndex* q_transposeproxymodel_create_index(void* self, int row, int column) {
    return QTransposeProxyModel_CreateIndex((QTransposeProxyModel*)self, row, column);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, int row, int column ```
QModelIndex* q_transposeproxymodel_qbase_create_index(void* self, int row, int column) {
    return QTransposeProxyModel_QBaseCreateIndex((QTransposeProxyModel*)self, row, column);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, QModelIndex* (*slot)(QTransposeProxyModel*, int, int) ```
void q_transposeproxymodel_on_create_index(void* self, QModelIndex* (*slot)(void*, int, int)) {
    QTransposeProxyModel_OnCreateIndex((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTransposeProxyModel* self, QModelIndex* indexes[], QDataStream* stream ```
void q_transposeproxymodel_encode_data(void* self, void* indexes[], void* stream) {
    QModelIndex** indexes_arr = (QModelIndex**)indexes;
    size_t indexes_len = 0;
    while (indexes_arr[indexes_len] != NULL) {
        indexes_len++;
    }
    libqt_list indexes_list = {
        .len = indexes_len,
        .data = {(QModelIndex*)indexes},
    };
    QTransposeProxyModel_EncodeData((QTransposeProxyModel*)self, indexes_list, (QDataStream*)stream);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, QModelIndex* indexes[], QDataStream* stream ```
void q_transposeproxymodel_qbase_encode_data(void* self, void* indexes[], void* stream) {
    QModelIndex** indexes_arr = (QModelIndex**)indexes;
    size_t indexes_len = 0;
    while (indexes_arr[indexes_len] != NULL) {
        indexes_len++;
    }
    libqt_list indexes_list = {
        .len = indexes_len,
        .data = {(QModelIndex*)indexes},
    };
    QTransposeProxyModel_QBaseEncodeData((QTransposeProxyModel*)self, indexes_list, (QDataStream*)stream);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, void (*slot)(QTransposeProxyModel*, QModelIndex*[], QDataStream*) ```
void q_transposeproxymodel_on_encode_data(void* self, void (*slot)(void*, void*, void*)) {
    QTransposeProxyModel_OnEncodeData((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTransposeProxyModel* self, int row, int column, QModelIndex* parent, QDataStream* stream ```
bool q_transposeproxymodel_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return QTransposeProxyModel_DecodeData((QTransposeProxyModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, int row, int column, QModelIndex* parent, QDataStream* stream ```
bool q_transposeproxymodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return QTransposeProxyModel_QBaseDecodeData((QTransposeProxyModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, bool (*slot)(QTransposeProxyModel*, int, int, QModelIndex*, QDataStream*) ```
void q_transposeproxymodel_on_decode_data(void* self, bool (*slot)(void*, int, int, void*, void*)) {
    QTransposeProxyModel_OnDecodeData((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTransposeProxyModel* self, QModelIndex* parent, int first, int last ```
void q_transposeproxymodel_begin_insert_rows(void* self, void* parent, int first, int last) {
    QTransposeProxyModel_BeginInsertRows((QTransposeProxyModel*)self, (QModelIndex*)parent, first, last);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, QModelIndex* parent, int first, int last ```
void q_transposeproxymodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last) {
    QTransposeProxyModel_QBaseBeginInsertRows((QTransposeProxyModel*)self, (QModelIndex*)parent, first, last);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, void (*slot)(QTransposeProxyModel*, QModelIndex*, int, int) ```
void q_transposeproxymodel_on_begin_insert_rows(void* self, void (*slot)(void*, void*, int, int)) {
    QTransposeProxyModel_OnBeginInsertRows((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTransposeProxyModel* self ```
void q_transposeproxymodel_end_insert_rows(void* self) {
    QTransposeProxyModel_EndInsertRows((QTransposeProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTransposeProxyModel* self ```
void q_transposeproxymodel_qbase_end_insert_rows(void* self) {
    QTransposeProxyModel_QBaseEndInsertRows((QTransposeProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, void (*slot)() ```
void q_transposeproxymodel_on_end_insert_rows(void* self, void (*slot)()) {
    QTransposeProxyModel_OnEndInsertRows((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTransposeProxyModel* self, QModelIndex* parent, int first, int last ```
void q_transposeproxymodel_begin_remove_rows(void* self, void* parent, int first, int last) {
    QTransposeProxyModel_BeginRemoveRows((QTransposeProxyModel*)self, (QModelIndex*)parent, first, last);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, QModelIndex* parent, int first, int last ```
void q_transposeproxymodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last) {
    QTransposeProxyModel_QBaseBeginRemoveRows((QTransposeProxyModel*)self, (QModelIndex*)parent, first, last);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, void (*slot)(QTransposeProxyModel*, QModelIndex*, int, int) ```
void q_transposeproxymodel_on_begin_remove_rows(void* self, void (*slot)(void*, void*, int, int)) {
    QTransposeProxyModel_OnBeginRemoveRows((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTransposeProxyModel* self ```
void q_transposeproxymodel_end_remove_rows(void* self) {
    QTransposeProxyModel_EndRemoveRows((QTransposeProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTransposeProxyModel* self ```
void q_transposeproxymodel_qbase_end_remove_rows(void* self) {
    QTransposeProxyModel_QBaseEndRemoveRows((QTransposeProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, void (*slot)() ```
void q_transposeproxymodel_on_end_remove_rows(void* self, void (*slot)()) {
    QTransposeProxyModel_OnEndRemoveRows((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTransposeProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow ```
bool q_transposeproxymodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return QTransposeProxyModel_BeginMoveRows((QTransposeProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow ```
bool q_transposeproxymodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return QTransposeProxyModel_QBaseBeginMoveRows((QTransposeProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, bool (*slot)(QTransposeProxyModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_transposeproxymodel_on_begin_move_rows(void* self, bool (*slot)(void*, void*, int, int, void*, int)) {
    QTransposeProxyModel_OnBeginMoveRows((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTransposeProxyModel* self ```
void q_transposeproxymodel_end_move_rows(void* self) {
    QTransposeProxyModel_EndMoveRows((QTransposeProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTransposeProxyModel* self ```
void q_transposeproxymodel_qbase_end_move_rows(void* self) {
    QTransposeProxyModel_QBaseEndMoveRows((QTransposeProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, void (*slot)() ```
void q_transposeproxymodel_on_end_move_rows(void* self, void (*slot)()) {
    QTransposeProxyModel_OnEndMoveRows((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTransposeProxyModel* self, QModelIndex* parent, int first, int last ```
void q_transposeproxymodel_begin_insert_columns(void* self, void* parent, int first, int last) {
    QTransposeProxyModel_BeginInsertColumns((QTransposeProxyModel*)self, (QModelIndex*)parent, first, last);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, QModelIndex* parent, int first, int last ```
void q_transposeproxymodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last) {
    QTransposeProxyModel_QBaseBeginInsertColumns((QTransposeProxyModel*)self, (QModelIndex*)parent, first, last);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, void (*slot)(QTransposeProxyModel*, QModelIndex*, int, int) ```
void q_transposeproxymodel_on_begin_insert_columns(void* self, void (*slot)(void*, void*, int, int)) {
    QTransposeProxyModel_OnBeginInsertColumns((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTransposeProxyModel* self ```
void q_transposeproxymodel_end_insert_columns(void* self) {
    QTransposeProxyModel_EndInsertColumns((QTransposeProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTransposeProxyModel* self ```
void q_transposeproxymodel_qbase_end_insert_columns(void* self) {
    QTransposeProxyModel_QBaseEndInsertColumns((QTransposeProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, void (*slot)() ```
void q_transposeproxymodel_on_end_insert_columns(void* self, void (*slot)()) {
    QTransposeProxyModel_OnEndInsertColumns((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTransposeProxyModel* self, QModelIndex* parent, int first, int last ```
void q_transposeproxymodel_begin_remove_columns(void* self, void* parent, int first, int last) {
    QTransposeProxyModel_BeginRemoveColumns((QTransposeProxyModel*)self, (QModelIndex*)parent, first, last);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, QModelIndex* parent, int first, int last ```
void q_transposeproxymodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last) {
    QTransposeProxyModel_QBaseBeginRemoveColumns((QTransposeProxyModel*)self, (QModelIndex*)parent, first, last);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, void (*slot)(QTransposeProxyModel*, QModelIndex*, int, int) ```
void q_transposeproxymodel_on_begin_remove_columns(void* self, void (*slot)(void*, void*, int, int)) {
    QTransposeProxyModel_OnBeginRemoveColumns((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTransposeProxyModel* self ```
void q_transposeproxymodel_end_remove_columns(void* self) {
    QTransposeProxyModel_EndRemoveColumns((QTransposeProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTransposeProxyModel* self ```
void q_transposeproxymodel_qbase_end_remove_columns(void* self) {
    QTransposeProxyModel_QBaseEndRemoveColumns((QTransposeProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, void (*slot)() ```
void q_transposeproxymodel_on_end_remove_columns(void* self, void (*slot)()) {
    QTransposeProxyModel_OnEndRemoveColumns((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTransposeProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn ```
bool q_transposeproxymodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return QTransposeProxyModel_BeginMoveColumns((QTransposeProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn ```
bool q_transposeproxymodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return QTransposeProxyModel_QBaseBeginMoveColumns((QTransposeProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, bool (*slot)(QTransposeProxyModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_transposeproxymodel_on_begin_move_columns(void* self, bool (*slot)(void*, void*, int, int, void*, int)) {
    QTransposeProxyModel_OnBeginMoveColumns((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTransposeProxyModel* self ```
void q_transposeproxymodel_end_move_columns(void* self) {
    QTransposeProxyModel_EndMoveColumns((QTransposeProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTransposeProxyModel* self ```
void q_transposeproxymodel_qbase_end_move_columns(void* self) {
    QTransposeProxyModel_QBaseEndMoveColumns((QTransposeProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, void (*slot)() ```
void q_transposeproxymodel_on_end_move_columns(void* self, void (*slot)()) {
    QTransposeProxyModel_OnEndMoveColumns((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTransposeProxyModel* self ```
void q_transposeproxymodel_begin_reset_model(void* self) {
    QTransposeProxyModel_BeginResetModel((QTransposeProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTransposeProxyModel* self ```
void q_transposeproxymodel_qbase_begin_reset_model(void* self) {
    QTransposeProxyModel_QBaseBeginResetModel((QTransposeProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, void (*slot)() ```
void q_transposeproxymodel_on_begin_reset_model(void* self, void (*slot)()) {
    QTransposeProxyModel_OnBeginResetModel((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTransposeProxyModel* self ```
void q_transposeproxymodel_end_reset_model(void* self) {
    QTransposeProxyModel_EndResetModel((QTransposeProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTransposeProxyModel* self ```
void q_transposeproxymodel_qbase_end_reset_model(void* self) {
    QTransposeProxyModel_QBaseEndResetModel((QTransposeProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, void (*slot)() ```
void q_transposeproxymodel_on_end_reset_model(void* self, void (*slot)()) {
    QTransposeProxyModel_OnEndResetModel((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTransposeProxyModel* self, QModelIndex* from, QModelIndex* to ```
void q_transposeproxymodel_change_persistent_index(void* self, void* from, void* to) {
    QTransposeProxyModel_ChangePersistentIndex((QTransposeProxyModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, QModelIndex* from, QModelIndex* to ```
void q_transposeproxymodel_qbase_change_persistent_index(void* self, void* from, void* to) {
    QTransposeProxyModel_QBaseChangePersistentIndex((QTransposeProxyModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, void (*slot)(QTransposeProxyModel*, QModelIndex*, QModelIndex*) ```
void q_transposeproxymodel_on_change_persistent_index(void* self, void (*slot)(void*, void*, void*)) {
    QTransposeProxyModel_OnChangePersistentIndex((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTransposeProxyModel* self, QModelIndex* from[], QModelIndex* to[] ```
void q_transposeproxymodel_change_persistent_index_list(void* self, void* from[], void* to[]) {
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
    QTransposeProxyModel_ChangePersistentIndexList((QTransposeProxyModel*)self, from_list, to_list);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, QModelIndex* from[], QModelIndex* to[] ```
void q_transposeproxymodel_qbase_change_persistent_index_list(void* self, void* from[], void* to[]) {
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
    QTransposeProxyModel_QBaseChangePersistentIndexList((QTransposeProxyModel*)self, from_list, to_list);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, void (*slot)(QTransposeProxyModel*, QModelIndex*[], QModelIndex*[]) ```
void q_transposeproxymodel_on_change_persistent_index_list(void* self, void (*slot)(void*, void*, void*)) {
    QTransposeProxyModel_OnChangePersistentIndexList((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTransposeProxyModel* self ```
libqt_list /* of QModelIndex* */ q_transposeproxymodel_persistent_index_list(void* self) {
    libqt_list _arr = QTransposeProxyModel_PersistentIndexList((QTransposeProxyModel*)self);
    return _arr;
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTransposeProxyModel* self ```
libqt_list /* of QModelIndex* */ q_transposeproxymodel_qbase_persistent_index_list(void* self) {
    libqt_list _arr = QTransposeProxyModel_QBasePersistentIndexList((QTransposeProxyModel*)self);
    return _arr;
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, libqt_list /* of QModelIndex* */ (*slot)() ```
void q_transposeproxymodel_on_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ (*slot)()) {
    QTransposeProxyModel_OnPersistentIndexList((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTransposeProxyModel* self ```
QObject* q_transposeproxymodel_sender(void* self) {
    return QTransposeProxyModel_Sender((QTransposeProxyModel*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTransposeProxyModel* self ```
QObject* q_transposeproxymodel_qbase_sender(void* self) {
    return QTransposeProxyModel_QBaseSender((QTransposeProxyModel*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, QObject* (*slot)() ```
void q_transposeproxymodel_on_sender(void* self, QObject* (*slot)()) {
    QTransposeProxyModel_OnSender((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTransposeProxyModel* self ```
int32_t q_transposeproxymodel_sender_signal_index(void* self) {
    return QTransposeProxyModel_SenderSignalIndex((QTransposeProxyModel*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTransposeProxyModel* self ```
int32_t q_transposeproxymodel_qbase_sender_signal_index(void* self) {
    return QTransposeProxyModel_QBaseSenderSignalIndex((QTransposeProxyModel*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, int32_t (*slot)() ```
void q_transposeproxymodel_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QTransposeProxyModel_OnSenderSignalIndex((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTransposeProxyModel* self, const char* signal ```
int32_t q_transposeproxymodel_receivers(void* self, const char* signal) {
    return QTransposeProxyModel_Receivers((QTransposeProxyModel*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, const char* signal ```
int32_t q_transposeproxymodel_qbase_receivers(void* self, const char* signal) {
    return QTransposeProxyModel_QBaseReceivers((QTransposeProxyModel*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, int32_t (*slot)(QTransposeProxyModel*, const char*) ```
void q_transposeproxymodel_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QTransposeProxyModel_OnReceivers((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTransposeProxyModel* self, QMetaMethod* signal ```
bool q_transposeproxymodel_is_signal_connected(void* self, void* signal) {
    return QTransposeProxyModel_IsSignalConnected((QTransposeProxyModel*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, QMetaMethod* signal ```
bool q_transposeproxymodel_qbase_is_signal_connected(void* self, void* signal) {
    return QTransposeProxyModel_QBaseIsSignalConnected((QTransposeProxyModel*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTransposeProxyModel* self, bool (*slot)(QTransposeProxyModel*, QMetaMethod*) ```
void q_transposeproxymodel_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QTransposeProxyModel_OnIsSignalConnected((QTransposeProxyModel*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QTransposeProxyModel* self ```
void q_transposeproxymodel_delete(void* self) {
    QTransposeProxyModel_Delete((QTransposeProxyModel*)(self));
}