#include "libqabstractitemmodel.hpp"
#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqdatastream.hpp"
#include "libqmetaobject.hpp"
#include "libqmimedata.hpp"
#include "libqobject.hpp"
#include "libqsize.hpp"
#include <string.h>
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqcoreevent.hpp"
#include "libqconcatenatetablesproxymodel.hpp"
#include "libqconcatenatetablesproxymodel.h"

/// https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html

/// q_concatenatetablesproxymodel_new constructs a new QConcatenateTablesProxyModel object.
///
///
QConcatenateTablesProxyModel* q_concatenatetablesproxymodel_new() {
    return QConcatenateTablesProxyModel_new();
}

/// q_concatenatetablesproxymodel_new2 constructs a new QConcatenateTablesProxyModel object.
///
/// ``` QObject* parent ```
QConcatenateTablesProxyModel* q_concatenatetablesproxymodel_new2(void* parent) {
    return QConcatenateTablesProxyModel_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QConcatenateTablesProxyModel* self ```
QMetaObject* q_concatenatetablesproxymodel_meta_object(void* self) {
    return QConcatenateTablesProxyModel_MetaObject((QConcatenateTablesProxyModel*)self);
}

/// ``` QConcatenateTablesProxyModel* self, const char* param1 ```
void* q_concatenatetablesproxymodel_metacast(void* self, const char* param1) {
    return QConcatenateTablesProxyModel_Metacast((QConcatenateTablesProxyModel*)self, param1);
}

/// ``` QConcatenateTablesProxyModel* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_concatenatetablesproxymodel_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QConcatenateTablesProxyModel_Metacall((QConcatenateTablesProxyModel*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QConcatenateTablesProxyModel* self, int32_t (*slot)(QConcatenateTablesProxyModel*, enum QMetaObject__Call, int, void*) ```
void q_concatenatetablesproxymodel_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QConcatenateTablesProxyModel_OnMetacall((QConcatenateTablesProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QConcatenateTablesProxyModel* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_concatenatetablesproxymodel_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QConcatenateTablesProxyModel_QBaseMetacall((QConcatenateTablesProxyModel*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_concatenatetablesproxymodel_tr(const char* s) {
    libqt_string _str = QConcatenateTablesProxyModel_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#sourceModels)
///
/// ``` QConcatenateTablesProxyModel* self ```
libqt_list /* of QAbstractItemModel* */ q_concatenatetablesproxymodel_source_models(void* self) {
    libqt_list _arr = QConcatenateTablesProxyModel_SourceModels((QConcatenateTablesProxyModel*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#addSourceModel)
///
/// ``` QConcatenateTablesProxyModel* self, QAbstractItemModel* sourceModel ```
void q_concatenatetablesproxymodel_add_source_model(void* self, void* sourceModel) {
    QConcatenateTablesProxyModel_AddSourceModel((QConcatenateTablesProxyModel*)self, (QAbstractItemModel*)sourceModel);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#removeSourceModel)
///
/// ``` QConcatenateTablesProxyModel* self, QAbstractItemModel* sourceModel ```
void q_concatenatetablesproxymodel_remove_source_model(void* self, void* sourceModel) {
    QConcatenateTablesProxyModel_RemoveSourceModel((QConcatenateTablesProxyModel*)self, (QAbstractItemModel*)sourceModel);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#mapFromSource)
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* sourceIndex ```
QModelIndex* q_concatenatetablesproxymodel_map_from_source(void* self, void* sourceIndex) {
    return QConcatenateTablesProxyModel_MapFromSource((QConcatenateTablesProxyModel*)self, (QModelIndex*)sourceIndex);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#mapToSource)
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* proxyIndex ```
QModelIndex* q_concatenatetablesproxymodel_map_to_source(void* self, void* proxyIndex) {
    return QConcatenateTablesProxyModel_MapToSource((QConcatenateTablesProxyModel*)self, (QModelIndex*)proxyIndex);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#data)
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* index, int role ```
QVariant* q_concatenatetablesproxymodel_data(void* self, void* index, int role) {
    return QConcatenateTablesProxyModel_Data((QConcatenateTablesProxyModel*)self, (QModelIndex*)index, role);
}

/// Allows for overriding the related default method
///
/// ``` QConcatenateTablesProxyModel* self, QVariant* (*slot)(QConcatenateTablesProxyModel*, QModelIndex*, int) ```
void q_concatenatetablesproxymodel_on_data(void* self, QVariant* (*slot)(void*, void*, int)) {
    QConcatenateTablesProxyModel_OnData((QConcatenateTablesProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* index, int role ```
QVariant* q_concatenatetablesproxymodel_qbase_data(void* self, void* index, int role) {
    return QConcatenateTablesProxyModel_QBaseData((QConcatenateTablesProxyModel*)self, (QModelIndex*)index, role);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#setData)
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* index, QVariant* value, int role ```
bool q_concatenatetablesproxymodel_set_data(void* self, void* index, void* value, int role) {
    return QConcatenateTablesProxyModel_SetData((QConcatenateTablesProxyModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

/// Allows for overriding the related default method
///
/// ``` QConcatenateTablesProxyModel* self, bool (*slot)(QConcatenateTablesProxyModel*, QModelIndex*, QVariant*, int) ```
void q_concatenatetablesproxymodel_on_set_data(void* self, bool (*slot)(void*, void*, void*, int)) {
    QConcatenateTablesProxyModel_OnSetData((QConcatenateTablesProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* index, QVariant* value, int role ```
bool q_concatenatetablesproxymodel_qbase_set_data(void* self, void* index, void* value, int role) {
    return QConcatenateTablesProxyModel_QBaseSetData((QConcatenateTablesProxyModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#itemData)
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* proxyIndex ```
libqt_map /* of int to QVariant* */ q_concatenatetablesproxymodel_item_data(void* self, void* proxyIndex) {
    return QConcatenateTablesProxyModel_ItemData((QConcatenateTablesProxyModel*)self, (QModelIndex*)proxyIndex);
}

/// Allows for overriding the related default method
///
/// ``` QConcatenateTablesProxyModel* self, libqt_map /* of int to QVariant* */ (*slot)(QConcatenateTablesProxyModel*, QModelIndex*) ```
void q_concatenatetablesproxymodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*slot)(void*, void*)) {
    QConcatenateTablesProxyModel_OnItemData((QConcatenateTablesProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* proxyIndex ```
libqt_map /* of int to QVariant* */ q_concatenatetablesproxymodel_qbase_item_data(void* self, void* proxyIndex) {
    return QConcatenateTablesProxyModel_QBaseItemData((QConcatenateTablesProxyModel*)self, (QModelIndex*)proxyIndex);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#setItemData)
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ roles ```
bool q_concatenatetablesproxymodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    return QConcatenateTablesProxyModel_SetItemData((QConcatenateTablesProxyModel*)self, (QModelIndex*)index, roles);
}

/// Allows for overriding the related default method
///
/// ``` QConcatenateTablesProxyModel* self, bool (*slot)(QConcatenateTablesProxyModel*, QModelIndex*, libqt_map /* of int to QVariant* */) ```
void q_concatenatetablesproxymodel_on_set_item_data(void* self, bool (*slot)(void*, void*, libqt_map /* of int to QVariant* */)) {
    QConcatenateTablesProxyModel_OnSetItemData((QConcatenateTablesProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ roles ```
bool q_concatenatetablesproxymodel_qbase_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    return QConcatenateTablesProxyModel_QBaseSetItemData((QConcatenateTablesProxyModel*)self, (QModelIndex*)index, roles);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#flags)
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* index ```
int64_t q_concatenatetablesproxymodel_flags(void* self, void* index) {
    return QConcatenateTablesProxyModel_Flags((QConcatenateTablesProxyModel*)self, (QModelIndex*)index);
}

/// Allows for overriding the related default method
///
/// ``` QConcatenateTablesProxyModel* self, int64_t (*slot)(QConcatenateTablesProxyModel*, QModelIndex*) ```
void q_concatenatetablesproxymodel_on_flags(void* self, int64_t (*slot)(void*, void*)) {
    QConcatenateTablesProxyModel_OnFlags((QConcatenateTablesProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* index ```
int64_t q_concatenatetablesproxymodel_qbase_flags(void* self, void* index) {
    return QConcatenateTablesProxyModel_QBaseFlags((QConcatenateTablesProxyModel*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#index)
///
/// ``` QConcatenateTablesProxyModel* self, int row, int column, QModelIndex* parent ```
QModelIndex* q_concatenatetablesproxymodel_index(void* self, int row, int column, void* parent) {
    return QConcatenateTablesProxyModel_Index((QConcatenateTablesProxyModel*)self, row, column, (QModelIndex*)parent);
}

/// Allows for overriding the related default method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* (*slot)(QConcatenateTablesProxyModel*, int, int, QModelIndex*) ```
void q_concatenatetablesproxymodel_on_index(void* self, QModelIndex* (*slot)(void*, int, int, void*)) {
    QConcatenateTablesProxyModel_OnIndex((QConcatenateTablesProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QConcatenateTablesProxyModel* self, int row, int column, QModelIndex* parent ```
QModelIndex* q_concatenatetablesproxymodel_qbase_index(void* self, int row, int column, void* parent) {
    return QConcatenateTablesProxyModel_QBaseIndex((QConcatenateTablesProxyModel*)self, row, column, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#parent)
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* index ```
QModelIndex* q_concatenatetablesproxymodel_parent(void* self, void* index) {
    return QConcatenateTablesProxyModel_Parent((QConcatenateTablesProxyModel*)self, (QModelIndex*)index);
}

/// Allows for overriding the related default method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* (*slot)(QConcatenateTablesProxyModel*, QModelIndex*) ```
void q_concatenatetablesproxymodel_on_parent(void* self, QModelIndex* (*slot)(void*, void*)) {
    QConcatenateTablesProxyModel_OnParent((QConcatenateTablesProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* index ```
QModelIndex* q_concatenatetablesproxymodel_qbase_parent(void* self, void* index) {
    return QConcatenateTablesProxyModel_QBaseParent((QConcatenateTablesProxyModel*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#rowCount)
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* parent ```
int32_t q_concatenatetablesproxymodel_row_count(void* self, void* parent) {
    return QConcatenateTablesProxyModel_RowCount((QConcatenateTablesProxyModel*)self, (QModelIndex*)parent);
}

/// Allows for overriding the related default method
///
/// ``` QConcatenateTablesProxyModel* self, int32_t (*slot)(QConcatenateTablesProxyModel*, QModelIndex*) ```
void q_concatenatetablesproxymodel_on_row_count(void* self, int32_t (*slot)(void*, void*)) {
    QConcatenateTablesProxyModel_OnRowCount((QConcatenateTablesProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* parent ```
int32_t q_concatenatetablesproxymodel_qbase_row_count(void* self, void* parent) {
    return QConcatenateTablesProxyModel_QBaseRowCount((QConcatenateTablesProxyModel*)self, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#headerData)
///
/// ``` QConcatenateTablesProxyModel* self, int section, enum Qt__Orientation orientation, int role ```
QVariant* q_concatenatetablesproxymodel_header_data(void* self, int section, int64_t orientation, int role) {
    return QConcatenateTablesProxyModel_HeaderData((QConcatenateTablesProxyModel*)self, section, orientation, role);
}

/// Allows for overriding the related default method
///
/// ``` QConcatenateTablesProxyModel* self, QVariant* (*slot)(QConcatenateTablesProxyModel*, int, enum Qt__Orientation, int) ```
void q_concatenatetablesproxymodel_on_header_data(void* self, QVariant* (*slot)(void*, int, int64_t, int)) {
    QConcatenateTablesProxyModel_OnHeaderData((QConcatenateTablesProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QConcatenateTablesProxyModel* self, int section, enum Qt__Orientation orientation, int role ```
QVariant* q_concatenatetablesproxymodel_qbase_header_data(void* self, int section, int64_t orientation, int role) {
    return QConcatenateTablesProxyModel_QBaseHeaderData((QConcatenateTablesProxyModel*)self, section, orientation, role);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#columnCount)
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* parent ```
int32_t q_concatenatetablesproxymodel_column_count(void* self, void* parent) {
    return QConcatenateTablesProxyModel_ColumnCount((QConcatenateTablesProxyModel*)self, (QModelIndex*)parent);
}

/// Allows for overriding the related default method
///
/// ``` QConcatenateTablesProxyModel* self, int32_t (*slot)(QConcatenateTablesProxyModel*, QModelIndex*) ```
void q_concatenatetablesproxymodel_on_column_count(void* self, int32_t (*slot)(void*, void*)) {
    QConcatenateTablesProxyModel_OnColumnCount((QConcatenateTablesProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* parent ```
int32_t q_concatenatetablesproxymodel_qbase_column_count(void* self, void* parent) {
    return QConcatenateTablesProxyModel_QBaseColumnCount((QConcatenateTablesProxyModel*)self, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#mimeTypes)
///
/// ``` QConcatenateTablesProxyModel* self ```
const char** q_concatenatetablesproxymodel_mime_types(void* self) {
    libqt_list _arr = QConcatenateTablesProxyModel_MimeTypes((QConcatenateTablesProxyModel*)self);
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
/// ``` QConcatenateTablesProxyModel* self, const char** (*slot)() ```
void q_concatenatetablesproxymodel_on_mime_types(void* self, const char** (*slot)()) {
    QConcatenateTablesProxyModel_OnMimeTypes((QConcatenateTablesProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QConcatenateTablesProxyModel* self ```
const char** q_concatenatetablesproxymodel_qbase_mime_types(void* self) {
    libqt_list _arr = QConcatenateTablesProxyModel_QBaseMimeTypes((QConcatenateTablesProxyModel*)self);
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

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#mimeData)
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* indexes[] ```
QMimeData* q_concatenatetablesproxymodel_mime_data(void* self, void* indexes[]) {
    QModelIndex** indexes_arr = (QModelIndex**)indexes;
    size_t indexes_len = 0;
    while (indexes_arr[indexes_len] != NULL) {
        indexes_len++;
    }
    libqt_list indexes_list = {
        .len = indexes_len,
        .data = {(QModelIndex*)indexes},
    };
    return QConcatenateTablesProxyModel_MimeData((QConcatenateTablesProxyModel*)self, indexes_list);
}

/// Allows for overriding the related default method
///
/// ``` QConcatenateTablesProxyModel* self, QMimeData* (*slot)(QConcatenateTablesProxyModel*, QModelIndex*[]) ```
void q_concatenatetablesproxymodel_on_mime_data(void* self, QMimeData* (*slot)(void*, void*)) {
    QConcatenateTablesProxyModel_OnMimeData((QConcatenateTablesProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* indexes[] ```
QMimeData* q_concatenatetablesproxymodel_qbase_mime_data(void* self, void* indexes[]) {
    QModelIndex** indexes_arr = (QModelIndex**)indexes;
    size_t indexes_len = 0;
    while (indexes_arr[indexes_len] != NULL) {
        indexes_len++;
    }
    libqt_list indexes_list = {
        .len = indexes_len,
        .data = {(QModelIndex*)indexes},
    };
    return QConcatenateTablesProxyModel_QBaseMimeData((QConcatenateTablesProxyModel*)self, indexes_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#canDropMimeData)
///
/// ``` QConcatenateTablesProxyModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_concatenatetablesproxymodel_can_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent) {
    return QConcatenateTablesProxyModel_CanDropMimeData((QConcatenateTablesProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

/// Allows for overriding the related default method
///
/// ``` QConcatenateTablesProxyModel* self, bool (*slot)(QConcatenateTablesProxyModel*, QMimeData*, enum Qt__DropAction, int, int, QModelIndex*) ```
void q_concatenatetablesproxymodel_on_can_drop_mime_data(void* self, bool (*slot)(void*, void*, int64_t, int, int, void*)) {
    QConcatenateTablesProxyModel_OnCanDropMimeData((QConcatenateTablesProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QConcatenateTablesProxyModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_concatenatetablesproxymodel_qbase_can_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent) {
    return QConcatenateTablesProxyModel_QBaseCanDropMimeData((QConcatenateTablesProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#dropMimeData)
///
/// ``` QConcatenateTablesProxyModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_concatenatetablesproxymodel_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent) {
    return QConcatenateTablesProxyModel_DropMimeData((QConcatenateTablesProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

/// Allows for overriding the related default method
///
/// ``` QConcatenateTablesProxyModel* self, bool (*slot)(QConcatenateTablesProxyModel*, QMimeData*, enum Qt__DropAction, int, int, QModelIndex*) ```
void q_concatenatetablesproxymodel_on_drop_mime_data(void* self, bool (*slot)(void*, void*, int64_t, int, int, void*)) {
    QConcatenateTablesProxyModel_OnDropMimeData((QConcatenateTablesProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QConcatenateTablesProxyModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_concatenatetablesproxymodel_qbase_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent) {
    return QConcatenateTablesProxyModel_QBaseDropMimeData((QConcatenateTablesProxyModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qconcatenatetablesproxymodel.html#span)
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* index ```
QSize* q_concatenatetablesproxymodel_span(void* self, void* index) {
    return QConcatenateTablesProxyModel_Span((QConcatenateTablesProxyModel*)self, (QModelIndex*)index);
}

/// Allows for overriding the related default method
///
/// ``` QConcatenateTablesProxyModel* self, QSize* (*slot)(QConcatenateTablesProxyModel*, QModelIndex*) ```
void q_concatenatetablesproxymodel_on_span(void* self, QSize* (*slot)(void*, void*)) {
    QConcatenateTablesProxyModel_OnSpan((QConcatenateTablesProxyModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* index ```
QSize* q_concatenatetablesproxymodel_qbase_span(void* self, void* index) {
    return QConcatenateTablesProxyModel_QBaseSpan((QConcatenateTablesProxyModel*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_concatenatetablesproxymodel_tr2(const char* s, const char* c) {
    libqt_string _str = QConcatenateTablesProxyModel_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_concatenatetablesproxymodel_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QConcatenateTablesProxyModel_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// ``` QConcatenateTablesProxyModel* self, int row, int column ```
bool q_concatenatetablesproxymodel_has_index(void* self, int row, int column) {
    return QAbstractItemModel_HasIndex((QAbstractItemModel*)self, row, column);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// ``` QConcatenateTablesProxyModel* self, int row ```
bool q_concatenatetablesproxymodel_insert_row(void* self, int row) {
    return QAbstractItemModel_InsertRow((QAbstractItemModel*)self, row);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// ``` QConcatenateTablesProxyModel* self, int column ```
bool q_concatenatetablesproxymodel_insert_column(void* self, int column) {
    return QAbstractItemModel_InsertColumn((QAbstractItemModel*)self, column);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// ``` QConcatenateTablesProxyModel* self, int row ```
bool q_concatenatetablesproxymodel_remove_row(void* self, int row) {
    return QAbstractItemModel_RemoveRow((QAbstractItemModel*)self, row);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// ``` QConcatenateTablesProxyModel* self, int column ```
bool q_concatenatetablesproxymodel_remove_column(void* self, int column) {
    return QAbstractItemModel_RemoveColumn((QAbstractItemModel*)self, column);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* sourceParent, int sourceRow, QModelIndex* destinationParent, int destinationChild ```
bool q_concatenatetablesproxymodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveRow((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceRow, (QModelIndex*)destinationParent, destinationChild);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* sourceParent, int sourceColumn, QModelIndex* destinationParent, int destinationChild ```
bool q_concatenatetablesproxymodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveColumn((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceColumn, (QModelIndex*)destinationParent, destinationChild);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* index ```
bool q_concatenatetablesproxymodel_check_index(void* self, void* index) {
    return QAbstractItemModel_CheckIndex((QAbstractItemModel*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* topLeft, QModelIndex* bottomRight ```
void q_concatenatetablesproxymodel_data_changed(void* self, void* topLeft, void* bottomRight) {
    QAbstractItemModel_DataChanged((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight);
}

/// Inherited from QAbstractItemModel
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, QModelIndex*) ```
void q_concatenatetablesproxymodel_on_data_changed(void* self, void (*slot)(void*, void*, void*)) {
    QAbstractItemModel_Connect_DataChanged((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// ``` QConcatenateTablesProxyModel* self, enum Qt__Orientation orientation, int first, int last ```
void q_concatenatetablesproxymodel_header_data_changed(void* self, int64_t orientation, int first, int last) {
    QAbstractItemModel_HeaderDataChanged((QAbstractItemModel*)self, orientation, first, last);
}

/// Inherited from QAbstractItemModel
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)(QAbstractItemModel*, enum Qt__Orientation, int, int) ```
void q_concatenatetablesproxymodel_on_header_data_changed(void* self, void (*slot)(void*, int64_t, int, int)) {
    QAbstractItemModel_Connect_HeaderDataChanged((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QConcatenateTablesProxyModel* self ```
void q_concatenatetablesproxymodel_layout_changed(void* self) {
    QAbstractItemModel_LayoutChanged((QAbstractItemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)(QAbstractItemModel*) ```
void q_concatenatetablesproxymodel_on_layout_changed(void* self, void (*slot)(void*)) {
    QAbstractItemModel_Connect_LayoutChanged((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QConcatenateTablesProxyModel* self ```
void q_concatenatetablesproxymodel_layout_about_to_be_changed(void* self) {
    QAbstractItemModel_LayoutAboutToBeChanged((QAbstractItemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)(QAbstractItemModel*) ```
void q_concatenatetablesproxymodel_on_layout_about_to_be_changed(void* self, void (*slot)(void*)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// ``` QConcatenateTablesProxyModel* self, int row, int column, QModelIndex* parent ```
bool q_concatenatetablesproxymodel_has_index3(void* self, int row, int column, void* parent) {
    return QAbstractItemModel_HasIndex3((QAbstractItemModel*)self, row, column, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// ``` QConcatenateTablesProxyModel* self, int row, QModelIndex* parent ```
bool q_concatenatetablesproxymodel_insert_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_InsertRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// ``` QConcatenateTablesProxyModel* self, int column, QModelIndex* parent ```
bool q_concatenatetablesproxymodel_insert_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_InsertColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// ``` QConcatenateTablesProxyModel* self, int row, QModelIndex* parent ```
bool q_concatenatetablesproxymodel_remove_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_RemoveRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// ``` QConcatenateTablesProxyModel* self, int column, QModelIndex* parent ```
bool q_concatenatetablesproxymodel_remove_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_RemoveColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* index, int options ```
bool q_concatenatetablesproxymodel_check_index2(void* self, void* index, int64_t options) {
    return QAbstractItemModel_CheckIndex2((QAbstractItemModel*)self, (QModelIndex*)index, options);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, int* roles[] ```
void q_concatenatetablesproxymodel_data_changed3(void* self, void* topLeft, void* bottomRight, int* roles[]) {
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
/// ``` QConcatenateTablesProxyModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, QModelIndex*, int*[]) ```
void q_concatenatetablesproxymodel_on_data_changed3(void* self, void (*slot)(void*, void*, void*, int*)) {
    QAbstractItemModel_Connect_DataChanged3((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QConcatenateTablesProxyModel* self, QPersistentModelIndex* parents[] ```
void q_concatenatetablesproxymodel_layout_changed1(void* self, void* parents[]) {
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
/// ``` QConcatenateTablesProxyModel* self, void (*slot)(QAbstractItemModel*, QPersistentModelIndex*[]) ```
void q_concatenatetablesproxymodel_on_layout_changed1(void* self, void (*slot)(void*, void*)) {
    QAbstractItemModel_Connect_LayoutChanged1((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QConcatenateTablesProxyModel* self, QPersistentModelIndex* parents[], enum QAbstractItemModel__LayoutChangeHint hint ```
void q_concatenatetablesproxymodel_layout_changed2(void* self, void* parents[], int64_t hint) {
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
/// ``` QConcatenateTablesProxyModel* self, void (*slot)(QAbstractItemModel*, QPersistentModelIndex*[], enum QAbstractItemModel__LayoutChangeHint) ```
void q_concatenatetablesproxymodel_on_layout_changed2(void* self, void (*slot)(void*, void*, int64_t)) {
    QAbstractItemModel_Connect_LayoutChanged2((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QConcatenateTablesProxyModel* self, QPersistentModelIndex* parents[] ```
void q_concatenatetablesproxymodel_layout_about_to_be_changed1(void* self, void* parents[]) {
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
/// ``` QConcatenateTablesProxyModel* self, void (*slot)(QAbstractItemModel*, QPersistentModelIndex*[]) ```
void q_concatenatetablesproxymodel_on_layout_about_to_be_changed1(void* self, void (*slot)(void*, void*)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged1((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QConcatenateTablesProxyModel* self, QPersistentModelIndex* parents[], enum QAbstractItemModel__LayoutChangeHint hint ```
void q_concatenatetablesproxymodel_layout_about_to_be_changed2(void* self, void* parents[], int64_t hint) {
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
/// ``` QConcatenateTablesProxyModel* self, void (*slot)(QAbstractItemModel*, QPersistentModelIndex*[], enum QAbstractItemModel__LayoutChangeHint) ```
void q_concatenatetablesproxymodel_on_layout_about_to_be_changed2(void* self, void (*slot)(void*, void*, int64_t)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged2((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QConcatenateTablesProxyModel* self ```
const char* q_concatenatetablesproxymodel_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QConcatenateTablesProxyModel* self, const char* name ```
void q_concatenatetablesproxymodel_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QConcatenateTablesProxyModel* self ```
bool q_concatenatetablesproxymodel_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QConcatenateTablesProxyModel* self ```
bool q_concatenatetablesproxymodel_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QConcatenateTablesProxyModel* self ```
bool q_concatenatetablesproxymodel_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QConcatenateTablesProxyModel* self ```
bool q_concatenatetablesproxymodel_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QConcatenateTablesProxyModel* self, bool b ```
bool q_concatenatetablesproxymodel_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QConcatenateTablesProxyModel* self ```
QThread* q_concatenatetablesproxymodel_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QConcatenateTablesProxyModel* self, QThread* thread ```
void q_concatenatetablesproxymodel_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QConcatenateTablesProxyModel* self, int interval ```
int32_t q_concatenatetablesproxymodel_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QConcatenateTablesProxyModel* self, int id ```
void q_concatenatetablesproxymodel_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QConcatenateTablesProxyModel* self ```
libqt_list /* of QObject* */ q_concatenatetablesproxymodel_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QConcatenateTablesProxyModel* self, QObject* parent ```
void q_concatenatetablesproxymodel_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QConcatenateTablesProxyModel* self, QObject* filterObj ```
void q_concatenatetablesproxymodel_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QConcatenateTablesProxyModel* self, QObject* obj ```
void q_concatenatetablesproxymodel_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_concatenatetablesproxymodel_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QConcatenateTablesProxyModel* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_concatenatetablesproxymodel_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_concatenatetablesproxymodel_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_concatenatetablesproxymodel_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QConcatenateTablesProxyModel* self ```
void q_concatenatetablesproxymodel_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QConcatenateTablesProxyModel* self ```
void q_concatenatetablesproxymodel_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QConcatenateTablesProxyModel* self, const char* name, QVariant* value ```
bool q_concatenatetablesproxymodel_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QConcatenateTablesProxyModel* self, const char* name ```
QVariant* q_concatenatetablesproxymodel_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QConcatenateTablesProxyModel* self ```
const char** q_concatenatetablesproxymodel_dynamic_property_names(void* self) {
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
/// ``` QConcatenateTablesProxyModel* self ```
QBindingStorage* q_concatenatetablesproxymodel_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QConcatenateTablesProxyModel* self ```
QBindingStorage* q_concatenatetablesproxymodel_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QConcatenateTablesProxyModel* self ```
void q_concatenatetablesproxymodel_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)(QObject*) ```
void q_concatenatetablesproxymodel_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QConcatenateTablesProxyModel* self, const char* classname ```
bool q_concatenatetablesproxymodel_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QConcatenateTablesProxyModel* self ```
void q_concatenatetablesproxymodel_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QConcatenateTablesProxyModel* self, int interval, enum Qt__TimerType timerType ```
int32_t q_concatenatetablesproxymodel_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_concatenatetablesproxymodel_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QConcatenateTablesProxyModel* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_concatenatetablesproxymodel_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QConcatenateTablesProxyModel* self, QObject* param1 ```
void q_concatenatetablesproxymodel_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)(QObject*, QObject*) ```
void q_concatenatetablesproxymodel_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#sibling)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, int row, int column, QModelIndex* idx ```
QModelIndex* q_concatenatetablesproxymodel_sibling(void* self, int row, int column, void* idx) {
    return QConcatenateTablesProxyModel_Sibling((QConcatenateTablesProxyModel*)self, row, column, (QModelIndex*)idx);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, int row, int column, QModelIndex* idx ```
QModelIndex* q_concatenatetablesproxymodel_qbase_sibling(void* self, int row, int column, void* idx) {
    return QConcatenateTablesProxyModel_QBaseSibling((QConcatenateTablesProxyModel*)self, row, column, (QModelIndex*)idx);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* (*slot)(QConcatenateTablesProxyModel*, int, int, QModelIndex*) ```
void q_concatenatetablesproxymodel_on_sibling(void* self, QModelIndex* (*slot)(void*, int, int, void*)) {
    QConcatenateTablesProxyModel_OnSibling((QConcatenateTablesProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* parent ```
bool q_concatenatetablesproxymodel_has_children(void* self, void* parent) {
    return QConcatenateTablesProxyModel_HasChildren((QConcatenateTablesProxyModel*)self, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* parent ```
bool q_concatenatetablesproxymodel_qbase_has_children(void* self, void* parent) {
    return QConcatenateTablesProxyModel_QBaseHasChildren((QConcatenateTablesProxyModel*)self, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, bool (*slot)(QConcatenateTablesProxyModel*, QModelIndex*) ```
void q_concatenatetablesproxymodel_on_has_children(void* self, bool (*slot)(void*, void*)) {
    QConcatenateTablesProxyModel_OnHasChildren((QConcatenateTablesProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role ```
bool q_concatenatetablesproxymodel_set_header_data(void* self, int section, int64_t orientation, void* value, int role) {
    return QConcatenateTablesProxyModel_SetHeaderData((QConcatenateTablesProxyModel*)self, section, orientation, (QVariant*)value, role);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role ```
bool q_concatenatetablesproxymodel_qbase_set_header_data(void* self, int section, int64_t orientation, void* value, int role) {
    return QConcatenateTablesProxyModel_QBaseSetHeaderData((QConcatenateTablesProxyModel*)self, section, orientation, (QVariant*)value, role);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, bool (*slot)(QConcatenateTablesProxyModel*, int, enum Qt__Orientation, QVariant*, int) ```
void q_concatenatetablesproxymodel_on_set_header_data(void* self, bool (*slot)(void*, int, int64_t, void*, int)) {
    QConcatenateTablesProxyModel_OnSetHeaderData((QConcatenateTablesProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* index ```
bool q_concatenatetablesproxymodel_clear_item_data(void* self, void* index) {
    return QConcatenateTablesProxyModel_ClearItemData((QConcatenateTablesProxyModel*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* index ```
bool q_concatenatetablesproxymodel_qbase_clear_item_data(void* self, void* index) {
    return QConcatenateTablesProxyModel_QBaseClearItemData((QConcatenateTablesProxyModel*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, bool (*slot)(QConcatenateTablesProxyModel*, QModelIndex*) ```
void q_concatenatetablesproxymodel_on_clear_item_data(void* self, bool (*slot)(void*, void*)) {
    QConcatenateTablesProxyModel_OnClearItemData((QConcatenateTablesProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self ```
int64_t q_concatenatetablesproxymodel_supported_drop_actions(void* self) {
    return QConcatenateTablesProxyModel_SupportedDropActions((QConcatenateTablesProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self ```
int64_t q_concatenatetablesproxymodel_qbase_supported_drop_actions(void* self) {
    return QConcatenateTablesProxyModel_QBaseSupportedDropActions((QConcatenateTablesProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, int64_t (*slot)() ```
void q_concatenatetablesproxymodel_on_supported_drop_actions(void* self, int64_t (*slot)()) {
    QConcatenateTablesProxyModel_OnSupportedDropActions((QConcatenateTablesProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self ```
int64_t q_concatenatetablesproxymodel_supported_drag_actions(void* self) {
    return QConcatenateTablesProxyModel_SupportedDragActions((QConcatenateTablesProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self ```
int64_t q_concatenatetablesproxymodel_qbase_supported_drag_actions(void* self) {
    return QConcatenateTablesProxyModel_QBaseSupportedDragActions((QConcatenateTablesProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, int64_t (*slot)() ```
void q_concatenatetablesproxymodel_on_supported_drag_actions(void* self, int64_t (*slot)()) {
    QConcatenateTablesProxyModel_OnSupportedDragActions((QConcatenateTablesProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, int row, int count, QModelIndex* parent ```
bool q_concatenatetablesproxymodel_insert_rows(void* self, int row, int count, void* parent) {
    return QConcatenateTablesProxyModel_InsertRows((QConcatenateTablesProxyModel*)self, row, count, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, int row, int count, QModelIndex* parent ```
bool q_concatenatetablesproxymodel_qbase_insert_rows(void* self, int row, int count, void* parent) {
    return QConcatenateTablesProxyModel_QBaseInsertRows((QConcatenateTablesProxyModel*)self, row, count, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, bool (*slot)(QConcatenateTablesProxyModel*, int, int, QModelIndex*) ```
void q_concatenatetablesproxymodel_on_insert_rows(void* self, bool (*slot)(void*, int, int, void*)) {
    QConcatenateTablesProxyModel_OnInsertRows((QConcatenateTablesProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, int column, int count, QModelIndex* parent ```
bool q_concatenatetablesproxymodel_insert_columns(void* self, int column, int count, void* parent) {
    return QConcatenateTablesProxyModel_InsertColumns((QConcatenateTablesProxyModel*)self, column, count, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, int column, int count, QModelIndex* parent ```
bool q_concatenatetablesproxymodel_qbase_insert_columns(void* self, int column, int count, void* parent) {
    return QConcatenateTablesProxyModel_QBaseInsertColumns((QConcatenateTablesProxyModel*)self, column, count, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, bool (*slot)(QConcatenateTablesProxyModel*, int, int, QModelIndex*) ```
void q_concatenatetablesproxymodel_on_insert_columns(void* self, bool (*slot)(void*, int, int, void*)) {
    QConcatenateTablesProxyModel_OnInsertColumns((QConcatenateTablesProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, int row, int count, QModelIndex* parent ```
bool q_concatenatetablesproxymodel_remove_rows(void* self, int row, int count, void* parent) {
    return QConcatenateTablesProxyModel_RemoveRows((QConcatenateTablesProxyModel*)self, row, count, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, int row, int count, QModelIndex* parent ```
bool q_concatenatetablesproxymodel_qbase_remove_rows(void* self, int row, int count, void* parent) {
    return QConcatenateTablesProxyModel_QBaseRemoveRows((QConcatenateTablesProxyModel*)self, row, count, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, bool (*slot)(QConcatenateTablesProxyModel*, int, int, QModelIndex*) ```
void q_concatenatetablesproxymodel_on_remove_rows(void* self, bool (*slot)(void*, int, int, void*)) {
    QConcatenateTablesProxyModel_OnRemoveRows((QConcatenateTablesProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, int column, int count, QModelIndex* parent ```
bool q_concatenatetablesproxymodel_remove_columns(void* self, int column, int count, void* parent) {
    return QConcatenateTablesProxyModel_RemoveColumns((QConcatenateTablesProxyModel*)self, column, count, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, int column, int count, QModelIndex* parent ```
bool q_concatenatetablesproxymodel_qbase_remove_columns(void* self, int column, int count, void* parent) {
    return QConcatenateTablesProxyModel_QBaseRemoveColumns((QConcatenateTablesProxyModel*)self, column, count, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, bool (*slot)(QConcatenateTablesProxyModel*, int, int, QModelIndex*) ```
void q_concatenatetablesproxymodel_on_remove_columns(void* self, bool (*slot)(void*, int, int, void*)) {
    QConcatenateTablesProxyModel_OnRemoveColumns((QConcatenateTablesProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_concatenatetablesproxymodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return QConcatenateTablesProxyModel_MoveRows((QConcatenateTablesProxyModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_concatenatetablesproxymodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return QConcatenateTablesProxyModel_QBaseMoveRows((QConcatenateTablesProxyModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, bool (*slot)(QConcatenateTablesProxyModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_concatenatetablesproxymodel_on_move_rows(void* self, bool (*slot)(void*, void*, int, int, void*, int)) {
    QConcatenateTablesProxyModel_OnMoveRows((QConcatenateTablesProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_concatenatetablesproxymodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return QConcatenateTablesProxyModel_MoveColumns((QConcatenateTablesProxyModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_concatenatetablesproxymodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return QConcatenateTablesProxyModel_QBaseMoveColumns((QConcatenateTablesProxyModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, bool (*slot)(QConcatenateTablesProxyModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_concatenatetablesproxymodel_on_move_columns(void* self, bool (*slot)(void*, void*, int, int, void*, int)) {
    QConcatenateTablesProxyModel_OnMoveColumns((QConcatenateTablesProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* parent ```
void q_concatenatetablesproxymodel_fetch_more(void* self, void* parent) {
    QConcatenateTablesProxyModel_FetchMore((QConcatenateTablesProxyModel*)self, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* parent ```
void q_concatenatetablesproxymodel_qbase_fetch_more(void* self, void* parent) {
    QConcatenateTablesProxyModel_QBaseFetchMore((QConcatenateTablesProxyModel*)self, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)(QConcatenateTablesProxyModel*, QModelIndex*) ```
void q_concatenatetablesproxymodel_on_fetch_more(void* self, void (*slot)(void*, void*)) {
    QConcatenateTablesProxyModel_OnFetchMore((QConcatenateTablesProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* parent ```
bool q_concatenatetablesproxymodel_can_fetch_more(void* self, void* parent) {
    return QConcatenateTablesProxyModel_CanFetchMore((QConcatenateTablesProxyModel*)self, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* parent ```
bool q_concatenatetablesproxymodel_qbase_can_fetch_more(void* self, void* parent) {
    return QConcatenateTablesProxyModel_QBaseCanFetchMore((QConcatenateTablesProxyModel*)self, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, bool (*slot)(QConcatenateTablesProxyModel*, QModelIndex*) ```
void q_concatenatetablesproxymodel_on_can_fetch_more(void* self, bool (*slot)(void*, void*)) {
    QConcatenateTablesProxyModel_OnCanFetchMore((QConcatenateTablesProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, int column, enum Qt__SortOrder order ```
void q_concatenatetablesproxymodel_sort(void* self, int column, int64_t order) {
    QConcatenateTablesProxyModel_Sort((QConcatenateTablesProxyModel*)self, column, order);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, int column, enum Qt__SortOrder order ```
void q_concatenatetablesproxymodel_qbase_sort(void* self, int column, int64_t order) {
    QConcatenateTablesProxyModel_QBaseSort((QConcatenateTablesProxyModel*)self, column, order);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)(QConcatenateTablesProxyModel*, int, enum Qt__SortOrder) ```
void q_concatenatetablesproxymodel_on_sort(void* self, void (*slot)(void*, int, int64_t)) {
    QConcatenateTablesProxyModel_OnSort((QConcatenateTablesProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* index ```
QModelIndex* q_concatenatetablesproxymodel_buddy(void* self, void* index) {
    return QConcatenateTablesProxyModel_Buddy((QConcatenateTablesProxyModel*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* index ```
QModelIndex* q_concatenatetablesproxymodel_qbase_buddy(void* self, void* index) {
    return QConcatenateTablesProxyModel_QBaseBuddy((QConcatenateTablesProxyModel*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* (*slot)(QConcatenateTablesProxyModel*, QModelIndex*) ```
void q_concatenatetablesproxymodel_on_buddy(void* self, QModelIndex* (*slot)(void*, void*)) {
    QConcatenateTablesProxyModel_OnBuddy((QConcatenateTablesProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags ```
libqt_list /* of QModelIndex* */ q_concatenatetablesproxymodel_match(void* self, void* start, int role, void* value, int hits, int64_t flags) {
    libqt_list _arr = QConcatenateTablesProxyModel_Match((QConcatenateTablesProxyModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags ```
libqt_list /* of QModelIndex* */ q_concatenatetablesproxymodel_qbase_match(void* self, void* start, int role, void* value, int hits, int64_t flags) {
    libqt_list _arr = QConcatenateTablesProxyModel_QBaseMatch((QConcatenateTablesProxyModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, libqt_list /* of QModelIndex* */ (*slot)(QConcatenateTablesProxyModel*, QModelIndex*, int, QVariant*, int, int) ```
void q_concatenatetablesproxymodel_on_match(void* self, libqt_list /* of QModelIndex* */ (*slot)(void*, void*, int, void*, int, int64_t)) {
    QConcatenateTablesProxyModel_OnMatch((QConcatenateTablesProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#roleNames)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self ```
libqt_map /* of int to char* */ q_concatenatetablesproxymodel_role_names(void* self) {
    return QConcatenateTablesProxyModel_RoleNames((QConcatenateTablesProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self ```
libqt_map /* of int to char* */ q_concatenatetablesproxymodel_qbase_role_names(void* self) {
    return QConcatenateTablesProxyModel_QBaseRoleNames((QConcatenateTablesProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, libqt_map /* of int to char* */ (*slot)() ```
void q_concatenatetablesproxymodel_on_role_names(void* self, libqt_map /* of int to char* */ (*slot)()) {
    QConcatenateTablesProxyModel_OnRoleNames((QConcatenateTablesProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan ```
void q_concatenatetablesproxymodel_multi_data(void* self, void* index, void* roleDataSpan) {
    QConcatenateTablesProxyModel_MultiData((QConcatenateTablesProxyModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan ```
void q_concatenatetablesproxymodel_qbase_multi_data(void* self, void* index, void* roleDataSpan) {
    QConcatenateTablesProxyModel_QBaseMultiData((QConcatenateTablesProxyModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)(QConcatenateTablesProxyModel*, QModelIndex*, QModelRoleDataSpan*) ```
void q_concatenatetablesproxymodel_on_multi_data(void* self, void (*slot)(void*, void*, void*)) {
    QConcatenateTablesProxyModel_OnMultiData((QConcatenateTablesProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self ```
bool q_concatenatetablesproxymodel_submit(void* self) {
    return QConcatenateTablesProxyModel_Submit((QConcatenateTablesProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self ```
bool q_concatenatetablesproxymodel_qbase_submit(void* self) {
    return QConcatenateTablesProxyModel_QBaseSubmit((QConcatenateTablesProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, bool (*slot)() ```
void q_concatenatetablesproxymodel_on_submit(void* self, bool (*slot)()) {
    QConcatenateTablesProxyModel_OnSubmit((QConcatenateTablesProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self ```
void q_concatenatetablesproxymodel_revert(void* self) {
    QConcatenateTablesProxyModel_Revert((QConcatenateTablesProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self ```
void q_concatenatetablesproxymodel_qbase_revert(void* self) {
    QConcatenateTablesProxyModel_QBaseRevert((QConcatenateTablesProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)() ```
void q_concatenatetablesproxymodel_on_revert(void* self, void (*slot)()) {
    QConcatenateTablesProxyModel_OnRevert((QConcatenateTablesProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self ```
void q_concatenatetablesproxymodel_reset_internal_data(void* self) {
    QConcatenateTablesProxyModel_ResetInternalData((QConcatenateTablesProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self ```
void q_concatenatetablesproxymodel_qbase_reset_internal_data(void* self) {
    QConcatenateTablesProxyModel_QBaseResetInternalData((QConcatenateTablesProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)() ```
void q_concatenatetablesproxymodel_on_reset_internal_data(void* self, void (*slot)()) {
    QConcatenateTablesProxyModel_OnResetInternalData((QConcatenateTablesProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QEvent* event ```
bool q_concatenatetablesproxymodel_event(void* self, void* event) {
    return QConcatenateTablesProxyModel_Event((QConcatenateTablesProxyModel*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QEvent* event ```
bool q_concatenatetablesproxymodel_qbase_event(void* self, void* event) {
    return QConcatenateTablesProxyModel_QBaseEvent((QConcatenateTablesProxyModel*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, bool (*slot)(QConcatenateTablesProxyModel*, QEvent*) ```
void q_concatenatetablesproxymodel_on_event(void* self, bool (*slot)(void*, void*)) {
    QConcatenateTablesProxyModel_OnEvent((QConcatenateTablesProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QObject* watched, QEvent* event ```
bool q_concatenatetablesproxymodel_event_filter(void* self, void* watched, void* event) {
    return QConcatenateTablesProxyModel_EventFilter((QConcatenateTablesProxyModel*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QObject* watched, QEvent* event ```
bool q_concatenatetablesproxymodel_qbase_event_filter(void* self, void* watched, void* event) {
    return QConcatenateTablesProxyModel_QBaseEventFilter((QConcatenateTablesProxyModel*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, bool (*slot)(QConcatenateTablesProxyModel*, QObject*, QEvent*) ```
void q_concatenatetablesproxymodel_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QConcatenateTablesProxyModel_OnEventFilter((QConcatenateTablesProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QTimerEvent* event ```
void q_concatenatetablesproxymodel_timer_event(void* self, void* event) {
    QConcatenateTablesProxyModel_TimerEvent((QConcatenateTablesProxyModel*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QTimerEvent* event ```
void q_concatenatetablesproxymodel_qbase_timer_event(void* self, void* event) {
    QConcatenateTablesProxyModel_QBaseTimerEvent((QConcatenateTablesProxyModel*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)(QConcatenateTablesProxyModel*, QTimerEvent*) ```
void q_concatenatetablesproxymodel_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QConcatenateTablesProxyModel_OnTimerEvent((QConcatenateTablesProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QChildEvent* event ```
void q_concatenatetablesproxymodel_child_event(void* self, void* event) {
    QConcatenateTablesProxyModel_ChildEvent((QConcatenateTablesProxyModel*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QChildEvent* event ```
void q_concatenatetablesproxymodel_qbase_child_event(void* self, void* event) {
    QConcatenateTablesProxyModel_QBaseChildEvent((QConcatenateTablesProxyModel*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)(QConcatenateTablesProxyModel*, QChildEvent*) ```
void q_concatenatetablesproxymodel_on_child_event(void* self, void (*slot)(void*, void*)) {
    QConcatenateTablesProxyModel_OnChildEvent((QConcatenateTablesProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QEvent* event ```
void q_concatenatetablesproxymodel_custom_event(void* self, void* event) {
    QConcatenateTablesProxyModel_CustomEvent((QConcatenateTablesProxyModel*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QEvent* event ```
void q_concatenatetablesproxymodel_qbase_custom_event(void* self, void* event) {
    QConcatenateTablesProxyModel_QBaseCustomEvent((QConcatenateTablesProxyModel*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)(QConcatenateTablesProxyModel*, QEvent*) ```
void q_concatenatetablesproxymodel_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QConcatenateTablesProxyModel_OnCustomEvent((QConcatenateTablesProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QMetaMethod* signal ```
void q_concatenatetablesproxymodel_connect_notify(void* self, void* signal) {
    QConcatenateTablesProxyModel_ConnectNotify((QConcatenateTablesProxyModel*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QMetaMethod* signal ```
void q_concatenatetablesproxymodel_qbase_connect_notify(void* self, void* signal) {
    QConcatenateTablesProxyModel_QBaseConnectNotify((QConcatenateTablesProxyModel*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)(QConcatenateTablesProxyModel*, QMetaMethod*) ```
void q_concatenatetablesproxymodel_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QConcatenateTablesProxyModel_OnConnectNotify((QConcatenateTablesProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QMetaMethod* signal ```
void q_concatenatetablesproxymodel_disconnect_notify(void* self, void* signal) {
    QConcatenateTablesProxyModel_DisconnectNotify((QConcatenateTablesProxyModel*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QMetaMethod* signal ```
void q_concatenatetablesproxymodel_qbase_disconnect_notify(void* self, void* signal) {
    QConcatenateTablesProxyModel_QBaseDisconnectNotify((QConcatenateTablesProxyModel*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)(QConcatenateTablesProxyModel*, QMetaMethod*) ```
void q_concatenatetablesproxymodel_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QConcatenateTablesProxyModel_OnDisconnectNotify((QConcatenateTablesProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, int row, int column ```
QModelIndex* q_concatenatetablesproxymodel_create_index(void* self, int row, int column) {
    return QConcatenateTablesProxyModel_CreateIndex((QConcatenateTablesProxyModel*)self, row, column);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, int row, int column ```
QModelIndex* q_concatenatetablesproxymodel_qbase_create_index(void* self, int row, int column) {
    return QConcatenateTablesProxyModel_QBaseCreateIndex((QConcatenateTablesProxyModel*)self, row, column);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* (*slot)(QConcatenateTablesProxyModel*, int, int) ```
void q_concatenatetablesproxymodel_on_create_index(void* self, QModelIndex* (*slot)(void*, int, int)) {
    QConcatenateTablesProxyModel_OnCreateIndex((QConcatenateTablesProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* indexes[], QDataStream* stream ```
void q_concatenatetablesproxymodel_encode_data(void* self, void* indexes[], void* stream) {
    QModelIndex** indexes_arr = (QModelIndex**)indexes;
    size_t indexes_len = 0;
    while (indexes_arr[indexes_len] != NULL) {
        indexes_len++;
    }
    libqt_list indexes_list = {
        .len = indexes_len,
        .data = {(QModelIndex*)indexes},
    };
    QConcatenateTablesProxyModel_EncodeData((QConcatenateTablesProxyModel*)self, indexes_list, (QDataStream*)stream);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* indexes[], QDataStream* stream ```
void q_concatenatetablesproxymodel_qbase_encode_data(void* self, void* indexes[], void* stream) {
    QModelIndex** indexes_arr = (QModelIndex**)indexes;
    size_t indexes_len = 0;
    while (indexes_arr[indexes_len] != NULL) {
        indexes_len++;
    }
    libqt_list indexes_list = {
        .len = indexes_len,
        .data = {(QModelIndex*)indexes},
    };
    QConcatenateTablesProxyModel_QBaseEncodeData((QConcatenateTablesProxyModel*)self, indexes_list, (QDataStream*)stream);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)(QConcatenateTablesProxyModel*, QModelIndex*[], QDataStream*) ```
void q_concatenatetablesproxymodel_on_encode_data(void* self, void (*slot)(void*, void*, void*)) {
    QConcatenateTablesProxyModel_OnEncodeData((QConcatenateTablesProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, int row, int column, QModelIndex* parent, QDataStream* stream ```
bool q_concatenatetablesproxymodel_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return QConcatenateTablesProxyModel_DecodeData((QConcatenateTablesProxyModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, int row, int column, QModelIndex* parent, QDataStream* stream ```
bool q_concatenatetablesproxymodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return QConcatenateTablesProxyModel_QBaseDecodeData((QConcatenateTablesProxyModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, bool (*slot)(QConcatenateTablesProxyModel*, int, int, QModelIndex*, QDataStream*) ```
void q_concatenatetablesproxymodel_on_decode_data(void* self, bool (*slot)(void*, int, int, void*, void*)) {
    QConcatenateTablesProxyModel_OnDecodeData((QConcatenateTablesProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* parent, int first, int last ```
void q_concatenatetablesproxymodel_begin_insert_rows(void* self, void* parent, int first, int last) {
    QConcatenateTablesProxyModel_BeginInsertRows((QConcatenateTablesProxyModel*)self, (QModelIndex*)parent, first, last);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* parent, int first, int last ```
void q_concatenatetablesproxymodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last) {
    QConcatenateTablesProxyModel_QBaseBeginInsertRows((QConcatenateTablesProxyModel*)self, (QModelIndex*)parent, first, last);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)(QConcatenateTablesProxyModel*, QModelIndex*, int, int) ```
void q_concatenatetablesproxymodel_on_begin_insert_rows(void* self, void (*slot)(void*, void*, int, int)) {
    QConcatenateTablesProxyModel_OnBeginInsertRows((QConcatenateTablesProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self ```
void q_concatenatetablesproxymodel_end_insert_rows(void* self) {
    QConcatenateTablesProxyModel_EndInsertRows((QConcatenateTablesProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self ```
void q_concatenatetablesproxymodel_qbase_end_insert_rows(void* self) {
    QConcatenateTablesProxyModel_QBaseEndInsertRows((QConcatenateTablesProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)() ```
void q_concatenatetablesproxymodel_on_end_insert_rows(void* self, void (*slot)()) {
    QConcatenateTablesProxyModel_OnEndInsertRows((QConcatenateTablesProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* parent, int first, int last ```
void q_concatenatetablesproxymodel_begin_remove_rows(void* self, void* parent, int first, int last) {
    QConcatenateTablesProxyModel_BeginRemoveRows((QConcatenateTablesProxyModel*)self, (QModelIndex*)parent, first, last);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* parent, int first, int last ```
void q_concatenatetablesproxymodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last) {
    QConcatenateTablesProxyModel_QBaseBeginRemoveRows((QConcatenateTablesProxyModel*)self, (QModelIndex*)parent, first, last);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)(QConcatenateTablesProxyModel*, QModelIndex*, int, int) ```
void q_concatenatetablesproxymodel_on_begin_remove_rows(void* self, void (*slot)(void*, void*, int, int)) {
    QConcatenateTablesProxyModel_OnBeginRemoveRows((QConcatenateTablesProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self ```
void q_concatenatetablesproxymodel_end_remove_rows(void* self) {
    QConcatenateTablesProxyModel_EndRemoveRows((QConcatenateTablesProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self ```
void q_concatenatetablesproxymodel_qbase_end_remove_rows(void* self) {
    QConcatenateTablesProxyModel_QBaseEndRemoveRows((QConcatenateTablesProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)() ```
void q_concatenatetablesproxymodel_on_end_remove_rows(void* self, void (*slot)()) {
    QConcatenateTablesProxyModel_OnEndRemoveRows((QConcatenateTablesProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow ```
bool q_concatenatetablesproxymodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return QConcatenateTablesProxyModel_BeginMoveRows((QConcatenateTablesProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow ```
bool q_concatenatetablesproxymodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return QConcatenateTablesProxyModel_QBaseBeginMoveRows((QConcatenateTablesProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, bool (*slot)(QConcatenateTablesProxyModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_concatenatetablesproxymodel_on_begin_move_rows(void* self, bool (*slot)(void*, void*, int, int, void*, int)) {
    QConcatenateTablesProxyModel_OnBeginMoveRows((QConcatenateTablesProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self ```
void q_concatenatetablesproxymodel_end_move_rows(void* self) {
    QConcatenateTablesProxyModel_EndMoveRows((QConcatenateTablesProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self ```
void q_concatenatetablesproxymodel_qbase_end_move_rows(void* self) {
    QConcatenateTablesProxyModel_QBaseEndMoveRows((QConcatenateTablesProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)() ```
void q_concatenatetablesproxymodel_on_end_move_rows(void* self, void (*slot)()) {
    QConcatenateTablesProxyModel_OnEndMoveRows((QConcatenateTablesProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* parent, int first, int last ```
void q_concatenatetablesproxymodel_begin_insert_columns(void* self, void* parent, int first, int last) {
    QConcatenateTablesProxyModel_BeginInsertColumns((QConcatenateTablesProxyModel*)self, (QModelIndex*)parent, first, last);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* parent, int first, int last ```
void q_concatenatetablesproxymodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last) {
    QConcatenateTablesProxyModel_QBaseBeginInsertColumns((QConcatenateTablesProxyModel*)self, (QModelIndex*)parent, first, last);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)(QConcatenateTablesProxyModel*, QModelIndex*, int, int) ```
void q_concatenatetablesproxymodel_on_begin_insert_columns(void* self, void (*slot)(void*, void*, int, int)) {
    QConcatenateTablesProxyModel_OnBeginInsertColumns((QConcatenateTablesProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self ```
void q_concatenatetablesproxymodel_end_insert_columns(void* self) {
    QConcatenateTablesProxyModel_EndInsertColumns((QConcatenateTablesProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self ```
void q_concatenatetablesproxymodel_qbase_end_insert_columns(void* self) {
    QConcatenateTablesProxyModel_QBaseEndInsertColumns((QConcatenateTablesProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)() ```
void q_concatenatetablesproxymodel_on_end_insert_columns(void* self, void (*slot)()) {
    QConcatenateTablesProxyModel_OnEndInsertColumns((QConcatenateTablesProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* parent, int first, int last ```
void q_concatenatetablesproxymodel_begin_remove_columns(void* self, void* parent, int first, int last) {
    QConcatenateTablesProxyModel_BeginRemoveColumns((QConcatenateTablesProxyModel*)self, (QModelIndex*)parent, first, last);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* parent, int first, int last ```
void q_concatenatetablesproxymodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last) {
    QConcatenateTablesProxyModel_QBaseBeginRemoveColumns((QConcatenateTablesProxyModel*)self, (QModelIndex*)parent, first, last);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)(QConcatenateTablesProxyModel*, QModelIndex*, int, int) ```
void q_concatenatetablesproxymodel_on_begin_remove_columns(void* self, void (*slot)(void*, void*, int, int)) {
    QConcatenateTablesProxyModel_OnBeginRemoveColumns((QConcatenateTablesProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self ```
void q_concatenatetablesproxymodel_end_remove_columns(void* self) {
    QConcatenateTablesProxyModel_EndRemoveColumns((QConcatenateTablesProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self ```
void q_concatenatetablesproxymodel_qbase_end_remove_columns(void* self) {
    QConcatenateTablesProxyModel_QBaseEndRemoveColumns((QConcatenateTablesProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)() ```
void q_concatenatetablesproxymodel_on_end_remove_columns(void* self, void (*slot)()) {
    QConcatenateTablesProxyModel_OnEndRemoveColumns((QConcatenateTablesProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn ```
bool q_concatenatetablesproxymodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return QConcatenateTablesProxyModel_BeginMoveColumns((QConcatenateTablesProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn ```
bool q_concatenatetablesproxymodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return QConcatenateTablesProxyModel_QBaseBeginMoveColumns((QConcatenateTablesProxyModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, bool (*slot)(QConcatenateTablesProxyModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_concatenatetablesproxymodel_on_begin_move_columns(void* self, bool (*slot)(void*, void*, int, int, void*, int)) {
    QConcatenateTablesProxyModel_OnBeginMoveColumns((QConcatenateTablesProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self ```
void q_concatenatetablesproxymodel_end_move_columns(void* self) {
    QConcatenateTablesProxyModel_EndMoveColumns((QConcatenateTablesProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self ```
void q_concatenatetablesproxymodel_qbase_end_move_columns(void* self) {
    QConcatenateTablesProxyModel_QBaseEndMoveColumns((QConcatenateTablesProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)() ```
void q_concatenatetablesproxymodel_on_end_move_columns(void* self, void (*slot)()) {
    QConcatenateTablesProxyModel_OnEndMoveColumns((QConcatenateTablesProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self ```
void q_concatenatetablesproxymodel_begin_reset_model(void* self) {
    QConcatenateTablesProxyModel_BeginResetModel((QConcatenateTablesProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self ```
void q_concatenatetablesproxymodel_qbase_begin_reset_model(void* self) {
    QConcatenateTablesProxyModel_QBaseBeginResetModel((QConcatenateTablesProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)() ```
void q_concatenatetablesproxymodel_on_begin_reset_model(void* self, void (*slot)()) {
    QConcatenateTablesProxyModel_OnBeginResetModel((QConcatenateTablesProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self ```
void q_concatenatetablesproxymodel_end_reset_model(void* self) {
    QConcatenateTablesProxyModel_EndResetModel((QConcatenateTablesProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self ```
void q_concatenatetablesproxymodel_qbase_end_reset_model(void* self) {
    QConcatenateTablesProxyModel_QBaseEndResetModel((QConcatenateTablesProxyModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)() ```
void q_concatenatetablesproxymodel_on_end_reset_model(void* self, void (*slot)()) {
    QConcatenateTablesProxyModel_OnEndResetModel((QConcatenateTablesProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* from, QModelIndex* to ```
void q_concatenatetablesproxymodel_change_persistent_index(void* self, void* from, void* to) {
    QConcatenateTablesProxyModel_ChangePersistentIndex((QConcatenateTablesProxyModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* from, QModelIndex* to ```
void q_concatenatetablesproxymodel_qbase_change_persistent_index(void* self, void* from, void* to) {
    QConcatenateTablesProxyModel_QBaseChangePersistentIndex((QConcatenateTablesProxyModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)(QConcatenateTablesProxyModel*, QModelIndex*, QModelIndex*) ```
void q_concatenatetablesproxymodel_on_change_persistent_index(void* self, void (*slot)(void*, void*, void*)) {
    QConcatenateTablesProxyModel_OnChangePersistentIndex((QConcatenateTablesProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* from[], QModelIndex* to[] ```
void q_concatenatetablesproxymodel_change_persistent_index_list(void* self, void* from[], void* to[]) {
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
    QConcatenateTablesProxyModel_ChangePersistentIndexList((QConcatenateTablesProxyModel*)self, from_list, to_list);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QModelIndex* from[], QModelIndex* to[] ```
void q_concatenatetablesproxymodel_qbase_change_persistent_index_list(void* self, void* from[], void* to[]) {
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
    QConcatenateTablesProxyModel_QBaseChangePersistentIndexList((QConcatenateTablesProxyModel*)self, from_list, to_list);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, void (*slot)(QConcatenateTablesProxyModel*, QModelIndex*[], QModelIndex*[]) ```
void q_concatenatetablesproxymodel_on_change_persistent_index_list(void* self, void (*slot)(void*, void*, void*)) {
    QConcatenateTablesProxyModel_OnChangePersistentIndexList((QConcatenateTablesProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self ```
libqt_list /* of QModelIndex* */ q_concatenatetablesproxymodel_persistent_index_list(void* self) {
    libqt_list _arr = QConcatenateTablesProxyModel_PersistentIndexList((QConcatenateTablesProxyModel*)self);
    return _arr;
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self ```
libqt_list /* of QModelIndex* */ q_concatenatetablesproxymodel_qbase_persistent_index_list(void* self) {
    libqt_list _arr = QConcatenateTablesProxyModel_QBasePersistentIndexList((QConcatenateTablesProxyModel*)self);
    return _arr;
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, libqt_list /* of QModelIndex* */ (*slot)() ```
void q_concatenatetablesproxymodel_on_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ (*slot)()) {
    QConcatenateTablesProxyModel_OnPersistentIndexList((QConcatenateTablesProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self ```
QObject* q_concatenatetablesproxymodel_sender(void* self) {
    return QConcatenateTablesProxyModel_Sender((QConcatenateTablesProxyModel*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self ```
QObject* q_concatenatetablesproxymodel_qbase_sender(void* self) {
    return QConcatenateTablesProxyModel_QBaseSender((QConcatenateTablesProxyModel*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QObject* (*slot)() ```
void q_concatenatetablesproxymodel_on_sender(void* self, QObject* (*slot)()) {
    QConcatenateTablesProxyModel_OnSender((QConcatenateTablesProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self ```
int32_t q_concatenatetablesproxymodel_sender_signal_index(void* self) {
    return QConcatenateTablesProxyModel_SenderSignalIndex((QConcatenateTablesProxyModel*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self ```
int32_t q_concatenatetablesproxymodel_qbase_sender_signal_index(void* self) {
    return QConcatenateTablesProxyModel_QBaseSenderSignalIndex((QConcatenateTablesProxyModel*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, int32_t (*slot)() ```
void q_concatenatetablesproxymodel_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QConcatenateTablesProxyModel_OnSenderSignalIndex((QConcatenateTablesProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, const char* signal ```
int32_t q_concatenatetablesproxymodel_receivers(void* self, const char* signal) {
    return QConcatenateTablesProxyModel_Receivers((QConcatenateTablesProxyModel*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, const char* signal ```
int32_t q_concatenatetablesproxymodel_qbase_receivers(void* self, const char* signal) {
    return QConcatenateTablesProxyModel_QBaseReceivers((QConcatenateTablesProxyModel*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, int32_t (*slot)(QConcatenateTablesProxyModel*, const char*) ```
void q_concatenatetablesproxymodel_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QConcatenateTablesProxyModel_OnReceivers((QConcatenateTablesProxyModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QMetaMethod* signal ```
bool q_concatenatetablesproxymodel_is_signal_connected(void* self, void* signal) {
    return QConcatenateTablesProxyModel_IsSignalConnected((QConcatenateTablesProxyModel*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, QMetaMethod* signal ```
bool q_concatenatetablesproxymodel_qbase_is_signal_connected(void* self, void* signal) {
    return QConcatenateTablesProxyModel_QBaseIsSignalConnected((QConcatenateTablesProxyModel*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QConcatenateTablesProxyModel* self, bool (*slot)(QConcatenateTablesProxyModel*, QMetaMethod*) ```
void q_concatenatetablesproxymodel_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QConcatenateTablesProxyModel_OnIsSignalConnected((QConcatenateTablesProxyModel*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QConcatenateTablesProxyModel* self ```
void q_concatenatetablesproxymodel_delete(void* self) {
    QConcatenateTablesProxyModel_Delete((QConcatenateTablesProxyModel*)(self));
}