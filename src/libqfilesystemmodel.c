#include "libqabstractfileiconprovider.hpp"
#include "libqabstractitemmodel.hpp"
#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqdatastream.hpp"
#include "libqdatetime.hpp"
#include "libqdir.hpp"
#include "libqfileinfo.hpp"
#include "libqicon.hpp"
#include "libqmetaobject.hpp"
#include "libqmimedata.hpp"
#include "libqobject.hpp"
#include "libqsize.hpp"
#include <string.h>
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqcoreevent.hpp"
#include "libqfilesystemmodel.hpp"
#include "libqfilesystemmodel.h"

/// https://doc.qt.io/qt-6/qfilesystemmodel.html

/// q_filesystemmodel_new constructs a new QFileSystemModel object.
///
///
QFileSystemModel* q_filesystemmodel_new() {
    return QFileSystemModel_new();
}

/// q_filesystemmodel_new2 constructs a new QFileSystemModel object.
///
/// ``` QObject* parent ```
QFileSystemModel* q_filesystemmodel_new2(void* parent) {
    return QFileSystemModel_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QFileSystemModel* self ```
QMetaObject* q_filesystemmodel_meta_object(void* self) {
    return QFileSystemModel_MetaObject((QFileSystemModel*)self);
}

/// ``` QFileSystemModel* self, const char* param1 ```
void* q_filesystemmodel_metacast(void* self, const char* param1) {
    return QFileSystemModel_Metacast((QFileSystemModel*)self, param1);
}

/// ``` QFileSystemModel* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_filesystemmodel_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QFileSystemModel_Metacall((QFileSystemModel*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QFileSystemModel* self, int32_t (*slot)(QFileSystemModel*, enum QMetaObject__Call, int, void*) ```
void q_filesystemmodel_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QFileSystemModel_OnMetacall((QFileSystemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QFileSystemModel* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_filesystemmodel_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QFileSystemModel_QBaseMetacall((QFileSystemModel*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_filesystemmodel_tr(const char* s) {
    libqt_string _str = QFileSystemModel_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#rootPathChanged)
///
/// ``` QFileSystemModel* self, const char* newPath ```
void q_filesystemmodel_root_path_changed(void* self, const char* newPath) {
    QFileSystemModel_RootPathChanged((QFileSystemModel*)self, qstring(newPath));
}

/// ``` QFileSystemModel* self, void (*slot)(QFileSystemModel*, const char*) ```
void q_filesystemmodel_on_root_path_changed(void* self, void (*slot)(void*, const char*)) {
    QFileSystemModel_Connect_RootPathChanged((QFileSystemModel*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#fileRenamed)
///
/// ``` QFileSystemModel* self, const char* path, const char* oldName, const char* newName ```
void q_filesystemmodel_file_renamed(void* self, const char* path, const char* oldName, const char* newName) {
    QFileSystemModel_FileRenamed((QFileSystemModel*)self, qstring(path), qstring(oldName), qstring(newName));
}

/// ``` QFileSystemModel* self, void (*slot)(QFileSystemModel*, const char*, const char*, const char*) ```
void q_filesystemmodel_on_file_renamed(void* self, void (*slot)(void*, const char*, const char*, const char*)) {
    QFileSystemModel_Connect_FileRenamed((QFileSystemModel*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#directoryLoaded)
///
/// ``` QFileSystemModel* self, const char* path ```
void q_filesystemmodel_directory_loaded(void* self, const char* path) {
    QFileSystemModel_DirectoryLoaded((QFileSystemModel*)self, qstring(path));
}

/// ``` QFileSystemModel* self, void (*slot)(QFileSystemModel*, const char*) ```
void q_filesystemmodel_on_directory_loaded(void* self, void (*slot)(void*, const char*)) {
    QFileSystemModel_Connect_DirectoryLoaded((QFileSystemModel*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#index)
///
/// ``` QFileSystemModel* self, int row, int column, QModelIndex* parent ```
QModelIndex* q_filesystemmodel_index(void* self, int row, int column, void* parent) {
    return QFileSystemModel_Index((QFileSystemModel*)self, row, column, (QModelIndex*)parent);
}

/// Allows for overriding the related default method
///
/// ``` QFileSystemModel* self, QModelIndex* (*slot)(QFileSystemModel*, int, int, QModelIndex*) ```
void q_filesystemmodel_on_index(void* self, QModelIndex* (*slot)(void*, int, int, void*)) {
    QFileSystemModel_OnIndex((QFileSystemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QFileSystemModel* self, int row, int column, QModelIndex* parent ```
QModelIndex* q_filesystemmodel_qbase_index(void* self, int row, int column, void* parent) {
    return QFileSystemModel_QBaseIndex((QFileSystemModel*)self, row, column, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#index)
///
/// ``` QFileSystemModel* self, const char* path ```
QModelIndex* q_filesystemmodel_index_with_path(void* self, const char* path) {
    return QFileSystemModel_IndexWithPath((QFileSystemModel*)self, qstring(path));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#parent)
///
/// ``` QFileSystemModel* self, QModelIndex* child ```
QModelIndex* q_filesystemmodel_parent(void* self, void* child) {
    return QFileSystemModel_Parent((QFileSystemModel*)self, (QModelIndex*)child);
}

/// Allows for overriding the related default method
///
/// ``` QFileSystemModel* self, QModelIndex* (*slot)(QFileSystemModel*, QModelIndex*) ```
void q_filesystemmodel_on_parent(void* self, QModelIndex* (*slot)(void*, void*)) {
    QFileSystemModel_OnParent((QFileSystemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QFileSystemModel* self, QModelIndex* child ```
QModelIndex* q_filesystemmodel_qbase_parent(void* self, void* child) {
    return QFileSystemModel_QBaseParent((QFileSystemModel*)self, (QModelIndex*)child);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#sibling)
///
/// ``` QFileSystemModel* self, int row, int column, QModelIndex* idx ```
QModelIndex* q_filesystemmodel_sibling(void* self, int row, int column, void* idx) {
    return QFileSystemModel_Sibling((QFileSystemModel*)self, row, column, (QModelIndex*)idx);
}

/// Allows for overriding the related default method
///
/// ``` QFileSystemModel* self, QModelIndex* (*slot)(QFileSystemModel*, int, int, QModelIndex*) ```
void q_filesystemmodel_on_sibling(void* self, QModelIndex* (*slot)(void*, int, int, void*)) {
    QFileSystemModel_OnSibling((QFileSystemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QFileSystemModel* self, int row, int column, QModelIndex* idx ```
QModelIndex* q_filesystemmodel_qbase_sibling(void* self, int row, int column, void* idx) {
    return QFileSystemModel_QBaseSibling((QFileSystemModel*)self, row, column, (QModelIndex*)idx);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#hasChildren)
///
/// ``` QFileSystemModel* self, QModelIndex* parent ```
bool q_filesystemmodel_has_children(void* self, void* parent) {
    return QFileSystemModel_HasChildren((QFileSystemModel*)self, (QModelIndex*)parent);
}

/// Allows for overriding the related default method
///
/// ``` QFileSystemModel* self, bool (*slot)(QFileSystemModel*, QModelIndex*) ```
void q_filesystemmodel_on_has_children(void* self, bool (*slot)(void*, void*)) {
    QFileSystemModel_OnHasChildren((QFileSystemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QFileSystemModel* self, QModelIndex* parent ```
bool q_filesystemmodel_qbase_has_children(void* self, void* parent) {
    return QFileSystemModel_QBaseHasChildren((QFileSystemModel*)self, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#canFetchMore)
///
/// ``` QFileSystemModel* self, QModelIndex* parent ```
bool q_filesystemmodel_can_fetch_more(void* self, void* parent) {
    return QFileSystemModel_CanFetchMore((QFileSystemModel*)self, (QModelIndex*)parent);
}

/// Allows for overriding the related default method
///
/// ``` QFileSystemModel* self, bool (*slot)(QFileSystemModel*, QModelIndex*) ```
void q_filesystemmodel_on_can_fetch_more(void* self, bool (*slot)(void*, void*)) {
    QFileSystemModel_OnCanFetchMore((QFileSystemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QFileSystemModel* self, QModelIndex* parent ```
bool q_filesystemmodel_qbase_can_fetch_more(void* self, void* parent) {
    return QFileSystemModel_QBaseCanFetchMore((QFileSystemModel*)self, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#fetchMore)
///
/// ``` QFileSystemModel* self, QModelIndex* parent ```
void q_filesystemmodel_fetch_more(void* self, void* parent) {
    QFileSystemModel_FetchMore((QFileSystemModel*)self, (QModelIndex*)parent);
}

/// Allows for overriding the related default method
///
/// ``` QFileSystemModel* self, void (*slot)(QFileSystemModel*, QModelIndex*) ```
void q_filesystemmodel_on_fetch_more(void* self, void (*slot)(void*, void*)) {
    QFileSystemModel_OnFetchMore((QFileSystemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QFileSystemModel* self, QModelIndex* parent ```
void q_filesystemmodel_qbase_fetch_more(void* self, void* parent) {
    QFileSystemModel_QBaseFetchMore((QFileSystemModel*)self, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#rowCount)
///
/// ``` QFileSystemModel* self, QModelIndex* parent ```
int32_t q_filesystemmodel_row_count(void* self, void* parent) {
    return QFileSystemModel_RowCount((QFileSystemModel*)self, (QModelIndex*)parent);
}

/// Allows for overriding the related default method
///
/// ``` QFileSystemModel* self, int32_t (*slot)(QFileSystemModel*, QModelIndex*) ```
void q_filesystemmodel_on_row_count(void* self, int32_t (*slot)(void*, void*)) {
    QFileSystemModel_OnRowCount((QFileSystemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QFileSystemModel* self, QModelIndex* parent ```
int32_t q_filesystemmodel_qbase_row_count(void* self, void* parent) {
    return QFileSystemModel_QBaseRowCount((QFileSystemModel*)self, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#columnCount)
///
/// ``` QFileSystemModel* self, QModelIndex* parent ```
int32_t q_filesystemmodel_column_count(void* self, void* parent) {
    return QFileSystemModel_ColumnCount((QFileSystemModel*)self, (QModelIndex*)parent);
}

/// Allows for overriding the related default method
///
/// ``` QFileSystemModel* self, int32_t (*slot)(QFileSystemModel*, QModelIndex*) ```
void q_filesystemmodel_on_column_count(void* self, int32_t (*slot)(void*, void*)) {
    QFileSystemModel_OnColumnCount((QFileSystemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QFileSystemModel* self, QModelIndex* parent ```
int32_t q_filesystemmodel_qbase_column_count(void* self, void* parent) {
    return QFileSystemModel_QBaseColumnCount((QFileSystemModel*)self, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#myComputer)
///
/// ``` QFileSystemModel* self ```
QVariant* q_filesystemmodel_my_computer(void* self) {
    return QFileSystemModel_MyComputer((QFileSystemModel*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#data)
///
/// ``` QFileSystemModel* self, QModelIndex* index, int role ```
QVariant* q_filesystemmodel_data(void* self, void* index, int role) {
    return QFileSystemModel_Data((QFileSystemModel*)self, (QModelIndex*)index, role);
}

/// Allows for overriding the related default method
///
/// ``` QFileSystemModel* self, QVariant* (*slot)(QFileSystemModel*, QModelIndex*, int) ```
void q_filesystemmodel_on_data(void* self, QVariant* (*slot)(void*, void*, int)) {
    QFileSystemModel_OnData((QFileSystemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QFileSystemModel* self, QModelIndex* index, int role ```
QVariant* q_filesystemmodel_qbase_data(void* self, void* index, int role) {
    return QFileSystemModel_QBaseData((QFileSystemModel*)self, (QModelIndex*)index, role);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#setData)
///
/// ``` QFileSystemModel* self, QModelIndex* index, QVariant* value, int role ```
bool q_filesystemmodel_set_data(void* self, void* index, void* value, int role) {
    return QFileSystemModel_SetData((QFileSystemModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

/// Allows for overriding the related default method
///
/// ``` QFileSystemModel* self, bool (*slot)(QFileSystemModel*, QModelIndex*, QVariant*, int) ```
void q_filesystemmodel_on_set_data(void* self, bool (*slot)(void*, void*, void*, int)) {
    QFileSystemModel_OnSetData((QFileSystemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QFileSystemModel* self, QModelIndex* index, QVariant* value, int role ```
bool q_filesystemmodel_qbase_set_data(void* self, void* index, void* value, int role) {
    return QFileSystemModel_QBaseSetData((QFileSystemModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#headerData)
///
/// ``` QFileSystemModel* self, int section, enum Qt__Orientation orientation, int role ```
QVariant* q_filesystemmodel_header_data(void* self, int section, int64_t orientation, int role) {
    return QFileSystemModel_HeaderData((QFileSystemModel*)self, section, orientation, role);
}

/// Allows for overriding the related default method
///
/// ``` QFileSystemModel* self, QVariant* (*slot)(QFileSystemModel*, int, enum Qt__Orientation, int) ```
void q_filesystemmodel_on_header_data(void* self, QVariant* (*slot)(void*, int, int64_t, int)) {
    QFileSystemModel_OnHeaderData((QFileSystemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QFileSystemModel* self, int section, enum Qt__Orientation orientation, int role ```
QVariant* q_filesystemmodel_qbase_header_data(void* self, int section, int64_t orientation, int role) {
    return QFileSystemModel_QBaseHeaderData((QFileSystemModel*)self, section, orientation, role);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#flags)
///
/// ``` QFileSystemModel* self, QModelIndex* index ```
int64_t q_filesystemmodel_flags(void* self, void* index) {
    return QFileSystemModel_Flags((QFileSystemModel*)self, (QModelIndex*)index);
}

/// Allows for overriding the related default method
///
/// ``` QFileSystemModel* self, int64_t (*slot)(QFileSystemModel*, QModelIndex*) ```
void q_filesystemmodel_on_flags(void* self, int64_t (*slot)(void*, void*)) {
    QFileSystemModel_OnFlags((QFileSystemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QFileSystemModel* self, QModelIndex* index ```
int64_t q_filesystemmodel_qbase_flags(void* self, void* index) {
    return QFileSystemModel_QBaseFlags((QFileSystemModel*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#sort)
///
/// ``` QFileSystemModel* self, int column, enum Qt__SortOrder order ```
void q_filesystemmodel_sort(void* self, int column, int64_t order) {
    QFileSystemModel_Sort((QFileSystemModel*)self, column, order);
}

/// Allows for overriding the related default method
///
/// ``` QFileSystemModel* self, void (*slot)(QFileSystemModel*, int, enum Qt__SortOrder) ```
void q_filesystemmodel_on_sort(void* self, void (*slot)(void*, int, int64_t)) {
    QFileSystemModel_OnSort((QFileSystemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QFileSystemModel* self, int column, enum Qt__SortOrder order ```
void q_filesystemmodel_qbase_sort(void* self, int column, int64_t order) {
    QFileSystemModel_QBaseSort((QFileSystemModel*)self, column, order);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#mimeTypes)
///
/// ``` QFileSystemModel* self ```
const char** q_filesystemmodel_mime_types(void* self) {
    libqt_list _arr = QFileSystemModel_MimeTypes((QFileSystemModel*)self);
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
/// ``` QFileSystemModel* self, const char** (*slot)() ```
void q_filesystemmodel_on_mime_types(void* self, const char** (*slot)()) {
    QFileSystemModel_OnMimeTypes((QFileSystemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QFileSystemModel* self ```
const char** q_filesystemmodel_qbase_mime_types(void* self) {
    libqt_list _arr = QFileSystemModel_QBaseMimeTypes((QFileSystemModel*)self);
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

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#mimeData)
///
/// ``` QFileSystemModel* self, QModelIndex* indexes[] ```
QMimeData* q_filesystemmodel_mime_data(void* self, void* indexes[]) {
    QModelIndex** indexes_arr = (QModelIndex**)indexes;
    size_t indexes_len = 0;
    while (indexes_arr[indexes_len] != NULL) {
        indexes_len++;
    }
    libqt_list indexes_list = {
        .len = indexes_len,
        .data = {(QModelIndex*)indexes},
    };
    return QFileSystemModel_MimeData((QFileSystemModel*)self, indexes_list);
}

/// Allows for overriding the related default method
///
/// ``` QFileSystemModel* self, QMimeData* (*slot)(QFileSystemModel*, QModelIndex*[]) ```
void q_filesystemmodel_on_mime_data(void* self, QMimeData* (*slot)(void*, void*)) {
    QFileSystemModel_OnMimeData((QFileSystemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QFileSystemModel* self, QModelIndex* indexes[] ```
QMimeData* q_filesystemmodel_qbase_mime_data(void* self, void* indexes[]) {
    QModelIndex** indexes_arr = (QModelIndex**)indexes;
    size_t indexes_len = 0;
    while (indexes_arr[indexes_len] != NULL) {
        indexes_len++;
    }
    libqt_list indexes_list = {
        .len = indexes_len,
        .data = {(QModelIndex*)indexes},
    };
    return QFileSystemModel_QBaseMimeData((QFileSystemModel*)self, indexes_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#dropMimeData)
///
/// ``` QFileSystemModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_filesystemmodel_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent) {
    return QFileSystemModel_DropMimeData((QFileSystemModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

/// Allows for overriding the related default method
///
/// ``` QFileSystemModel* self, bool (*slot)(QFileSystemModel*, QMimeData*, enum Qt__DropAction, int, int, QModelIndex*) ```
void q_filesystemmodel_on_drop_mime_data(void* self, bool (*slot)(void*, void*, int64_t, int, int, void*)) {
    QFileSystemModel_OnDropMimeData((QFileSystemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QFileSystemModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_filesystemmodel_qbase_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent) {
    return QFileSystemModel_QBaseDropMimeData((QFileSystemModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#supportedDropActions)
///
/// ``` QFileSystemModel* self ```
int64_t q_filesystemmodel_supported_drop_actions(void* self) {
    return QFileSystemModel_SupportedDropActions((QFileSystemModel*)self);
}

/// Allows for overriding the related default method
///
/// ``` QFileSystemModel* self, int64_t (*slot)() ```
void q_filesystemmodel_on_supported_drop_actions(void* self, int64_t (*slot)()) {
    QFileSystemModel_OnSupportedDropActions((QFileSystemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QFileSystemModel* self ```
int64_t q_filesystemmodel_qbase_supported_drop_actions(void* self) {
    return QFileSystemModel_QBaseSupportedDropActions((QFileSystemModel*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#roleNames)
///
/// ``` QFileSystemModel* self ```
libqt_map /* of int to char* */ q_filesystemmodel_role_names(void* self) {
    return QFileSystemModel_RoleNames((QFileSystemModel*)self);
}

/// Allows for overriding the related default method
///
/// ``` QFileSystemModel* self, libqt_map /* of int to char* */ (*slot)() ```
void q_filesystemmodel_on_role_names(void* self, libqt_map /* of int to char* */ (*slot)()) {
    QFileSystemModel_OnRoleNames((QFileSystemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QFileSystemModel* self ```
libqt_map /* of int to char* */ q_filesystemmodel_qbase_role_names(void* self) {
    return QFileSystemModel_QBaseRoleNames((QFileSystemModel*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#setRootPath)
///
/// ``` QFileSystemModel* self, const char* path ```
QModelIndex* q_filesystemmodel_set_root_path(void* self, const char* path) {
    return QFileSystemModel_SetRootPath((QFileSystemModel*)self, qstring(path));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#rootPath)
///
/// ``` QFileSystemModel* self ```
const char* q_filesystemmodel_root_path(void* self) {
    libqt_string _str = QFileSystemModel_RootPath((QFileSystemModel*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#rootDirectory)
///
/// ``` QFileSystemModel* self ```
QDir* q_filesystemmodel_root_directory(void* self) {
    return QFileSystemModel_RootDirectory((QFileSystemModel*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#setIconProvider)
///
/// ``` QFileSystemModel* self, QAbstractFileIconProvider* provider ```
void q_filesystemmodel_set_icon_provider(void* self, void* provider) {
    QFileSystemModel_SetIconProvider((QFileSystemModel*)self, (QAbstractFileIconProvider*)provider);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#iconProvider)
///
/// ``` QFileSystemModel* self ```
QAbstractFileIconProvider* q_filesystemmodel_icon_provider(void* self) {
    return QFileSystemModel_IconProvider((QFileSystemModel*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#setFilter)
///
/// ``` QFileSystemModel* self, int filters ```
void q_filesystemmodel_set_filter(void* self, int64_t filters) {
    QFileSystemModel_SetFilter((QFileSystemModel*)self, filters);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#filter)
///
/// ``` QFileSystemModel* self ```
int64_t q_filesystemmodel_filter(void* self) {
    return QFileSystemModel_Filter((QFileSystemModel*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#setResolveSymlinks)
///
/// ``` QFileSystemModel* self, bool enable ```
void q_filesystemmodel_set_resolve_symlinks(void* self, bool enable) {
    QFileSystemModel_SetResolveSymlinks((QFileSystemModel*)self, enable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#resolveSymlinks)
///
/// ``` QFileSystemModel* self ```
bool q_filesystemmodel_resolve_symlinks(void* self) {
    return QFileSystemModel_ResolveSymlinks((QFileSystemModel*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#setReadOnly)
///
/// ``` QFileSystemModel* self, bool enable ```
void q_filesystemmodel_set_read_only(void* self, bool enable) {
    QFileSystemModel_SetReadOnly((QFileSystemModel*)self, enable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#isReadOnly)
///
/// ``` QFileSystemModel* self ```
bool q_filesystemmodel_is_read_only(void* self) {
    return QFileSystemModel_IsReadOnly((QFileSystemModel*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#setNameFilterDisables)
///
/// ``` QFileSystemModel* self, bool enable ```
void q_filesystemmodel_set_name_filter_disables(void* self, bool enable) {
    QFileSystemModel_SetNameFilterDisables((QFileSystemModel*)self, enable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#nameFilterDisables)
///
/// ``` QFileSystemModel* self ```
bool q_filesystemmodel_name_filter_disables(void* self) {
    return QFileSystemModel_NameFilterDisables((QFileSystemModel*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#setNameFilters)
///
/// ``` QFileSystemModel* self, const char* filters[] ```
void q_filesystemmodel_set_name_filters(void* self, const char* filters[]) {
    size_t filters_len = libqt_strv_length(filters);
    libqt_string* filters_qstr = malloc(filters_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < filters_len; ++_i) {
        filters_qstr[_i] = qstring(filters[_i]);
    }
    libqt_list filters_list = qstrlist(filters_qstr, filters_len);
    QFileSystemModel_SetNameFilters((QFileSystemModel*)self, filters_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#nameFilters)
///
/// ``` QFileSystemModel* self ```
const char** q_filesystemmodel_name_filters(void* self) {
    libqt_list _arr = QFileSystemModel_NameFilters((QFileSystemModel*)self);
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

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#setOption)
///
/// ``` QFileSystemModel* self, enum QFileSystemModel__Option option ```
void q_filesystemmodel_set_option(void* self, int64_t option) {
    QFileSystemModel_SetOption((QFileSystemModel*)self, option);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#testOption)
///
/// ``` QFileSystemModel* self, enum QFileSystemModel__Option option ```
bool q_filesystemmodel_test_option(void* self, int64_t option) {
    return QFileSystemModel_TestOption((QFileSystemModel*)self, option);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#setOptions)
///
/// ``` QFileSystemModel* self, int options ```
void q_filesystemmodel_set_options(void* self, int64_t options) {
    QFileSystemModel_SetOptions((QFileSystemModel*)self, options);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#options)
///
/// ``` QFileSystemModel* self ```
int64_t q_filesystemmodel_options(void* self) {
    return QFileSystemModel_Options((QFileSystemModel*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#filePath)
///
/// ``` QFileSystemModel* self, QModelIndex* index ```
const char* q_filesystemmodel_file_path(void* self, void* index) {
    libqt_string _str = QFileSystemModel_FilePath((QFileSystemModel*)self, (QModelIndex*)index);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#isDir)
///
/// ``` QFileSystemModel* self, QModelIndex* index ```
bool q_filesystemmodel_is_dir(void* self, void* index) {
    return QFileSystemModel_IsDir((QFileSystemModel*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#size)
///
/// ``` QFileSystemModel* self, QModelIndex* index ```
long long q_filesystemmodel_size(void* self, void* index) {
    return QFileSystemModel_Size((QFileSystemModel*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#type)
///
/// ``` QFileSystemModel* self, QModelIndex* index ```
const char* q_filesystemmodel_type(void* self, void* index) {
    libqt_string _str = QFileSystemModel_Type((QFileSystemModel*)self, (QModelIndex*)index);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#lastModified)
///
/// ``` QFileSystemModel* self, QModelIndex* index ```
QDateTime* q_filesystemmodel_last_modified(void* self, void* index) {
    return QFileSystemModel_LastModified((QFileSystemModel*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#mkdir)
///
/// ``` QFileSystemModel* self, QModelIndex* parent, const char* name ```
QModelIndex* q_filesystemmodel_mkdir(void* self, void* parent, const char* name) {
    return QFileSystemModel_Mkdir((QFileSystemModel*)self, (QModelIndex*)parent, qstring(name));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#rmdir)
///
/// ``` QFileSystemModel* self, QModelIndex* index ```
bool q_filesystemmodel_rmdir(void* self, void* index) {
    return QFileSystemModel_Rmdir((QFileSystemModel*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#fileName)
///
/// ``` QFileSystemModel* self, QModelIndex* index ```
const char* q_filesystemmodel_file_name(void* self, void* index) {
    libqt_string _str = QFileSystemModel_FileName((QFileSystemModel*)self, (QModelIndex*)index);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#fileIcon)
///
/// ``` QFileSystemModel* self, QModelIndex* index ```
QIcon* q_filesystemmodel_file_icon(void* self, void* index) {
    return QFileSystemModel_FileIcon((QFileSystemModel*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#permissions)
///
/// ``` QFileSystemModel* self, QModelIndex* index ```
int64_t q_filesystemmodel_permissions(void* self, void* index) {
    return QFileSystemModel_Permissions((QFileSystemModel*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#fileInfo)
///
/// ``` QFileSystemModel* self, QModelIndex* index ```
QFileInfo* q_filesystemmodel_file_info(void* self, void* index) {
    return QFileSystemModel_FileInfo((QFileSystemModel*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#remove)
///
/// ``` QFileSystemModel* self, QModelIndex* index ```
bool q_filesystemmodel_remove(void* self, void* index) {
    return QFileSystemModel_Remove((QFileSystemModel*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#timerEvent)
///
/// ``` QFileSystemModel* self, QTimerEvent* event ```
void q_filesystemmodel_timer_event(void* self, void* event) {
    QFileSystemModel_TimerEvent((QFileSystemModel*)self, (QTimerEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QFileSystemModel* self, void (*slot)(QFileSystemModel*, QTimerEvent*) ```
void q_filesystemmodel_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QFileSystemModel_OnTimerEvent((QFileSystemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QFileSystemModel* self, QTimerEvent* event ```
void q_filesystemmodel_qbase_timer_event(void* self, void* event) {
    QFileSystemModel_QBaseTimerEvent((QFileSystemModel*)self, (QTimerEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#event)
///
/// ``` QFileSystemModel* self, QEvent* event ```
bool q_filesystemmodel_event(void* self, void* event) {
    return QFileSystemModel_Event((QFileSystemModel*)self, (QEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QFileSystemModel* self, bool (*slot)(QFileSystemModel*, QEvent*) ```
void q_filesystemmodel_on_event(void* self, bool (*slot)(void*, void*)) {
    QFileSystemModel_OnEvent((QFileSystemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QFileSystemModel* self, QEvent* event ```
bool q_filesystemmodel_qbase_event(void* self, void* event) {
    return QFileSystemModel_QBaseEvent((QFileSystemModel*)self, (QEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_filesystemmodel_tr2(const char* s, const char* c) {
    libqt_string _str = QFileSystemModel_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_filesystemmodel_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QFileSystemModel_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#index)
///
/// ``` QFileSystemModel* self, const char* path, int column ```
QModelIndex* q_filesystemmodel_index2(void* self, const char* path, int column) {
    return QFileSystemModel_Index2((QFileSystemModel*)self, qstring(path), column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#myComputer)
///
/// ``` QFileSystemModel* self, int role ```
QVariant* q_filesystemmodel_my_computer1(void* self, int role) {
    return QFileSystemModel_MyComputer1((QFileSystemModel*)self, role);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfilesystemmodel.html#setOption)
///
/// ``` QFileSystemModel* self, enum QFileSystemModel__Option option, bool on ```
void q_filesystemmodel_set_option2(void* self, int64_t option, bool on) {
    QFileSystemModel_SetOption2((QFileSystemModel*)self, option, on);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// ``` QFileSystemModel* self, int row, int column ```
bool q_filesystemmodel_has_index(void* self, int row, int column) {
    return QAbstractItemModel_HasIndex((QAbstractItemModel*)self, row, column);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// ``` QFileSystemModel* self, int row ```
bool q_filesystemmodel_insert_row(void* self, int row) {
    return QAbstractItemModel_InsertRow((QAbstractItemModel*)self, row);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// ``` QFileSystemModel* self, int column ```
bool q_filesystemmodel_insert_column(void* self, int column) {
    return QAbstractItemModel_InsertColumn((QAbstractItemModel*)self, column);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// ``` QFileSystemModel* self, int row ```
bool q_filesystemmodel_remove_row(void* self, int row) {
    return QAbstractItemModel_RemoveRow((QAbstractItemModel*)self, row);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// ``` QFileSystemModel* self, int column ```
bool q_filesystemmodel_remove_column(void* self, int column) {
    return QAbstractItemModel_RemoveColumn((QAbstractItemModel*)self, column);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
///
/// ``` QFileSystemModel* self, QModelIndex* sourceParent, int sourceRow, QModelIndex* destinationParent, int destinationChild ```
bool q_filesystemmodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveRow((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceRow, (QModelIndex*)destinationParent, destinationChild);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
///
/// ``` QFileSystemModel* self, QModelIndex* sourceParent, int sourceColumn, QModelIndex* destinationParent, int destinationChild ```
bool q_filesystemmodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveColumn((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceColumn, (QModelIndex*)destinationParent, destinationChild);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// ``` QFileSystemModel* self, QModelIndex* index ```
bool q_filesystemmodel_check_index(void* self, void* index) {
    return QAbstractItemModel_CheckIndex((QAbstractItemModel*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// ``` QFileSystemModel* self, QModelIndex* topLeft, QModelIndex* bottomRight ```
void q_filesystemmodel_data_changed(void* self, void* topLeft, void* bottomRight) {
    QAbstractItemModel_DataChanged((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight);
}

/// Inherited from QAbstractItemModel
///
/// ``` QFileSystemModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, QModelIndex*) ```
void q_filesystemmodel_on_data_changed(void* self, void (*slot)(void*, void*, void*)) {
    QAbstractItemModel_Connect_DataChanged((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// ``` QFileSystemModel* self, enum Qt__Orientation orientation, int first, int last ```
void q_filesystemmodel_header_data_changed(void* self, int64_t orientation, int first, int last) {
    QAbstractItemModel_HeaderDataChanged((QAbstractItemModel*)self, orientation, first, last);
}

/// Inherited from QAbstractItemModel
///
/// ``` QFileSystemModel* self, void (*slot)(QAbstractItemModel*, enum Qt__Orientation, int, int) ```
void q_filesystemmodel_on_header_data_changed(void* self, void (*slot)(void*, int64_t, int, int)) {
    QAbstractItemModel_Connect_HeaderDataChanged((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QFileSystemModel* self ```
void q_filesystemmodel_layout_changed(void* self) {
    QAbstractItemModel_LayoutChanged((QAbstractItemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// ``` QFileSystemModel* self, void (*slot)(QAbstractItemModel*) ```
void q_filesystemmodel_on_layout_changed(void* self, void (*slot)(void*)) {
    QAbstractItemModel_Connect_LayoutChanged((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QFileSystemModel* self ```
void q_filesystemmodel_layout_about_to_be_changed(void* self) {
    QAbstractItemModel_LayoutAboutToBeChanged((QAbstractItemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// ``` QFileSystemModel* self, void (*slot)(QAbstractItemModel*) ```
void q_filesystemmodel_on_layout_about_to_be_changed(void* self, void (*slot)(void*)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// ``` QFileSystemModel* self, int row, int column, QModelIndex* parent ```
bool q_filesystemmodel_has_index3(void* self, int row, int column, void* parent) {
    return QAbstractItemModel_HasIndex3((QAbstractItemModel*)self, row, column, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// ``` QFileSystemModel* self, int row, QModelIndex* parent ```
bool q_filesystemmodel_insert_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_InsertRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// ``` QFileSystemModel* self, int column, QModelIndex* parent ```
bool q_filesystemmodel_insert_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_InsertColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// ``` QFileSystemModel* self, int row, QModelIndex* parent ```
bool q_filesystemmodel_remove_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_RemoveRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// ``` QFileSystemModel* self, int column, QModelIndex* parent ```
bool q_filesystemmodel_remove_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_RemoveColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// ``` QFileSystemModel* self, QModelIndex* index, int options ```
bool q_filesystemmodel_check_index2(void* self, void* index, int64_t options) {
    return QAbstractItemModel_CheckIndex2((QAbstractItemModel*)self, (QModelIndex*)index, options);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// ``` QFileSystemModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, int* roles[] ```
void q_filesystemmodel_data_changed3(void* self, void* topLeft, void* bottomRight, int* roles[]) {
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
/// ``` QFileSystemModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, QModelIndex*, int*[]) ```
void q_filesystemmodel_on_data_changed3(void* self, void (*slot)(void*, void*, void*, int*)) {
    QAbstractItemModel_Connect_DataChanged3((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QFileSystemModel* self, QPersistentModelIndex* parents[] ```
void q_filesystemmodel_layout_changed1(void* self, void* parents[]) {
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
/// ``` QFileSystemModel* self, void (*slot)(QAbstractItemModel*, QPersistentModelIndex*[]) ```
void q_filesystemmodel_on_layout_changed1(void* self, void (*slot)(void*, void*)) {
    QAbstractItemModel_Connect_LayoutChanged1((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QFileSystemModel* self, QPersistentModelIndex* parents[], enum QAbstractItemModel__LayoutChangeHint hint ```
void q_filesystemmodel_layout_changed2(void* self, void* parents[], int64_t hint) {
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
/// ``` QFileSystemModel* self, void (*slot)(QAbstractItemModel*, QPersistentModelIndex*[], enum QAbstractItemModel__LayoutChangeHint) ```
void q_filesystemmodel_on_layout_changed2(void* self, void (*slot)(void*, void*, int64_t)) {
    QAbstractItemModel_Connect_LayoutChanged2((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QFileSystemModel* self, QPersistentModelIndex* parents[] ```
void q_filesystemmodel_layout_about_to_be_changed1(void* self, void* parents[]) {
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
/// ``` QFileSystemModel* self, void (*slot)(QAbstractItemModel*, QPersistentModelIndex*[]) ```
void q_filesystemmodel_on_layout_about_to_be_changed1(void* self, void (*slot)(void*, void*)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged1((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QFileSystemModel* self, QPersistentModelIndex* parents[], enum QAbstractItemModel__LayoutChangeHint hint ```
void q_filesystemmodel_layout_about_to_be_changed2(void* self, void* parents[], int64_t hint) {
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
/// ``` QFileSystemModel* self, void (*slot)(QAbstractItemModel*, QPersistentModelIndex*[], enum QAbstractItemModel__LayoutChangeHint) ```
void q_filesystemmodel_on_layout_about_to_be_changed2(void* self, void (*slot)(void*, void*, int64_t)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged2((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QFileSystemModel* self ```
const char* q_filesystemmodel_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QFileSystemModel* self, const char* name ```
void q_filesystemmodel_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QFileSystemModel* self ```
bool q_filesystemmodel_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QFileSystemModel* self ```
bool q_filesystemmodel_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QFileSystemModel* self ```
bool q_filesystemmodel_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QFileSystemModel* self ```
bool q_filesystemmodel_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QFileSystemModel* self, bool b ```
bool q_filesystemmodel_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QFileSystemModel* self ```
QThread* q_filesystemmodel_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QFileSystemModel* self, QThread* thread ```
void q_filesystemmodel_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QFileSystemModel* self, int interval ```
int32_t q_filesystemmodel_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QFileSystemModel* self, int id ```
void q_filesystemmodel_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QFileSystemModel* self ```
libqt_list /* of QObject* */ q_filesystemmodel_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QFileSystemModel* self, QObject* parent ```
void q_filesystemmodel_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QFileSystemModel* self, QObject* filterObj ```
void q_filesystemmodel_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QFileSystemModel* self, QObject* obj ```
void q_filesystemmodel_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_filesystemmodel_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QFileSystemModel* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_filesystemmodel_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_filesystemmodel_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_filesystemmodel_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QFileSystemModel* self ```
void q_filesystemmodel_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QFileSystemModel* self ```
void q_filesystemmodel_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QFileSystemModel* self, const char* name, QVariant* value ```
bool q_filesystemmodel_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QFileSystemModel* self, const char* name ```
QVariant* q_filesystemmodel_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QFileSystemModel* self ```
const char** q_filesystemmodel_dynamic_property_names(void* self) {
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
/// ``` QFileSystemModel* self ```
QBindingStorage* q_filesystemmodel_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QFileSystemModel* self ```
QBindingStorage* q_filesystemmodel_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QFileSystemModel* self ```
void q_filesystemmodel_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QFileSystemModel* self, void (*slot)(QObject*) ```
void q_filesystemmodel_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QFileSystemModel* self, const char* classname ```
bool q_filesystemmodel_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QFileSystemModel* self ```
void q_filesystemmodel_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QFileSystemModel* self, int interval, enum Qt__TimerType timerType ```
int32_t q_filesystemmodel_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_filesystemmodel_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QFileSystemModel* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_filesystemmodel_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QFileSystemModel* self, QObject* param1 ```
void q_filesystemmodel_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QFileSystemModel* self, void (*slot)(QObject*, QObject*) ```
void q_filesystemmodel_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role ```
bool q_filesystemmodel_set_header_data(void* self, int section, int64_t orientation, void* value, int role) {
    return QFileSystemModel_SetHeaderData((QFileSystemModel*)self, section, orientation, (QVariant*)value, role);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role ```
bool q_filesystemmodel_qbase_set_header_data(void* self, int section, int64_t orientation, void* value, int role) {
    return QFileSystemModel_QBaseSetHeaderData((QFileSystemModel*)self, section, orientation, (QVariant*)value, role);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, bool (*slot)(QFileSystemModel*, int, enum Qt__Orientation, QVariant*, int) ```
void q_filesystemmodel_on_set_header_data(void* self, bool (*slot)(void*, int, int64_t, void*, int)) {
    QFileSystemModel_OnSetHeaderData((QFileSystemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* index ```
libqt_map /* of int to QVariant* */ q_filesystemmodel_item_data(void* self, void* index) {
    return QFileSystemModel_ItemData((QFileSystemModel*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* index ```
libqt_map /* of int to QVariant* */ q_filesystemmodel_qbase_item_data(void* self, void* index) {
    return QFileSystemModel_QBaseItemData((QFileSystemModel*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, libqt_map /* of int to QVariant* */ (*slot)(QFileSystemModel*, QModelIndex*) ```
void q_filesystemmodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*slot)(void*, void*)) {
    QFileSystemModel_OnItemData((QFileSystemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ roles ```
bool q_filesystemmodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    return QFileSystemModel_SetItemData((QFileSystemModel*)self, (QModelIndex*)index, roles);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ roles ```
bool q_filesystemmodel_qbase_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    return QFileSystemModel_QBaseSetItemData((QFileSystemModel*)self, (QModelIndex*)index, roles);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, bool (*slot)(QFileSystemModel*, QModelIndex*, libqt_map /* of int to QVariant* */) ```
void q_filesystemmodel_on_set_item_data(void* self, bool (*slot)(void*, void*, libqt_map /* of int to QVariant* */)) {
    QFileSystemModel_OnSetItemData((QFileSystemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* index ```
bool q_filesystemmodel_clear_item_data(void* self, void* index) {
    return QFileSystemModel_ClearItemData((QFileSystemModel*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* index ```
bool q_filesystemmodel_qbase_clear_item_data(void* self, void* index) {
    return QFileSystemModel_QBaseClearItemData((QFileSystemModel*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, bool (*slot)(QFileSystemModel*, QModelIndex*) ```
void q_filesystemmodel_on_clear_item_data(void* self, bool (*slot)(void*, void*)) {
    QFileSystemModel_OnClearItemData((QFileSystemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_filesystemmodel_can_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent) {
    return QFileSystemModel_CanDropMimeData((QFileSystemModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_filesystemmodel_qbase_can_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent) {
    return QFileSystemModel_QBaseCanDropMimeData((QFileSystemModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, bool (*slot)(QFileSystemModel*, QMimeData*, enum Qt__DropAction, int, int, QModelIndex*) ```
void q_filesystemmodel_on_can_drop_mime_data(void* self, bool (*slot)(void*, void*, int64_t, int, int, void*)) {
    QFileSystemModel_OnCanDropMimeData((QFileSystemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self ```
int64_t q_filesystemmodel_supported_drag_actions(void* self) {
    return QFileSystemModel_SupportedDragActions((QFileSystemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self ```
int64_t q_filesystemmodel_qbase_supported_drag_actions(void* self) {
    return QFileSystemModel_QBaseSupportedDragActions((QFileSystemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, int64_t (*slot)() ```
void q_filesystemmodel_on_supported_drag_actions(void* self, int64_t (*slot)()) {
    QFileSystemModel_OnSupportedDragActions((QFileSystemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self, int row, int count, QModelIndex* parent ```
bool q_filesystemmodel_insert_rows(void* self, int row, int count, void* parent) {
    return QFileSystemModel_InsertRows((QFileSystemModel*)self, row, count, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self, int row, int count, QModelIndex* parent ```
bool q_filesystemmodel_qbase_insert_rows(void* self, int row, int count, void* parent) {
    return QFileSystemModel_QBaseInsertRows((QFileSystemModel*)self, row, count, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, bool (*slot)(QFileSystemModel*, int, int, QModelIndex*) ```
void q_filesystemmodel_on_insert_rows(void* self, bool (*slot)(void*, int, int, void*)) {
    QFileSystemModel_OnInsertRows((QFileSystemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self, int column, int count, QModelIndex* parent ```
bool q_filesystemmodel_insert_columns(void* self, int column, int count, void* parent) {
    return QFileSystemModel_InsertColumns((QFileSystemModel*)self, column, count, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self, int column, int count, QModelIndex* parent ```
bool q_filesystemmodel_qbase_insert_columns(void* self, int column, int count, void* parent) {
    return QFileSystemModel_QBaseInsertColumns((QFileSystemModel*)self, column, count, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, bool (*slot)(QFileSystemModel*, int, int, QModelIndex*) ```
void q_filesystemmodel_on_insert_columns(void* self, bool (*slot)(void*, int, int, void*)) {
    QFileSystemModel_OnInsertColumns((QFileSystemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self, int row, int count, QModelIndex* parent ```
bool q_filesystemmodel_remove_rows(void* self, int row, int count, void* parent) {
    return QFileSystemModel_RemoveRows((QFileSystemModel*)self, row, count, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self, int row, int count, QModelIndex* parent ```
bool q_filesystemmodel_qbase_remove_rows(void* self, int row, int count, void* parent) {
    return QFileSystemModel_QBaseRemoveRows((QFileSystemModel*)self, row, count, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, bool (*slot)(QFileSystemModel*, int, int, QModelIndex*) ```
void q_filesystemmodel_on_remove_rows(void* self, bool (*slot)(void*, int, int, void*)) {
    QFileSystemModel_OnRemoveRows((QFileSystemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self, int column, int count, QModelIndex* parent ```
bool q_filesystemmodel_remove_columns(void* self, int column, int count, void* parent) {
    return QFileSystemModel_RemoveColumns((QFileSystemModel*)self, column, count, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self, int column, int count, QModelIndex* parent ```
bool q_filesystemmodel_qbase_remove_columns(void* self, int column, int count, void* parent) {
    return QFileSystemModel_QBaseRemoveColumns((QFileSystemModel*)self, column, count, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, bool (*slot)(QFileSystemModel*, int, int, QModelIndex*) ```
void q_filesystemmodel_on_remove_columns(void* self, bool (*slot)(void*, int, int, void*)) {
    QFileSystemModel_OnRemoveColumns((QFileSystemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_filesystemmodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return QFileSystemModel_MoveRows((QFileSystemModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_filesystemmodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return QFileSystemModel_QBaseMoveRows((QFileSystemModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, bool (*slot)(QFileSystemModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_filesystemmodel_on_move_rows(void* self, bool (*slot)(void*, void*, int, int, void*, int)) {
    QFileSystemModel_OnMoveRows((QFileSystemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_filesystemmodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return QFileSystemModel_MoveColumns((QFileSystemModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_filesystemmodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return QFileSystemModel_QBaseMoveColumns((QFileSystemModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, bool (*slot)(QFileSystemModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_filesystemmodel_on_move_columns(void* self, bool (*slot)(void*, void*, int, int, void*, int)) {
    QFileSystemModel_OnMoveColumns((QFileSystemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* index ```
QModelIndex* q_filesystemmodel_buddy(void* self, void* index) {
    return QFileSystemModel_Buddy((QFileSystemModel*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* index ```
QModelIndex* q_filesystemmodel_qbase_buddy(void* self, void* index) {
    return QFileSystemModel_QBaseBuddy((QFileSystemModel*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* (*slot)(QFileSystemModel*, QModelIndex*) ```
void q_filesystemmodel_on_buddy(void* self, QModelIndex* (*slot)(void*, void*)) {
    QFileSystemModel_OnBuddy((QFileSystemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags ```
libqt_list /* of QModelIndex* */ q_filesystemmodel_match(void* self, void* start, int role, void* value, int hits, int64_t flags) {
    libqt_list _arr = QFileSystemModel_Match((QFileSystemModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags ```
libqt_list /* of QModelIndex* */ q_filesystemmodel_qbase_match(void* self, void* start, int role, void* value, int hits, int64_t flags) {
    libqt_list _arr = QFileSystemModel_QBaseMatch((QFileSystemModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, libqt_list /* of QModelIndex* */ (*slot)(QFileSystemModel*, QModelIndex*, int, QVariant*, int, int) ```
void q_filesystemmodel_on_match(void* self, libqt_list /* of QModelIndex* */ (*slot)(void*, void*, int, void*, int, int64_t)) {
    QFileSystemModel_OnMatch((QFileSystemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* index ```
QSize* q_filesystemmodel_span(void* self, void* index) {
    return QFileSystemModel_Span((QFileSystemModel*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* index ```
QSize* q_filesystemmodel_qbase_span(void* self, void* index) {
    return QFileSystemModel_QBaseSpan((QFileSystemModel*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, QSize* (*slot)(QFileSystemModel*, QModelIndex*) ```
void q_filesystemmodel_on_span(void* self, QSize* (*slot)(void*, void*)) {
    QFileSystemModel_OnSpan((QFileSystemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan ```
void q_filesystemmodel_multi_data(void* self, void* index, void* roleDataSpan) {
    QFileSystemModel_MultiData((QFileSystemModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan ```
void q_filesystemmodel_qbase_multi_data(void* self, void* index, void* roleDataSpan) {
    QFileSystemModel_QBaseMultiData((QFileSystemModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, void (*slot)(QFileSystemModel*, QModelIndex*, QModelRoleDataSpan*) ```
void q_filesystemmodel_on_multi_data(void* self, void (*slot)(void*, void*, void*)) {
    QFileSystemModel_OnMultiData((QFileSystemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self ```
bool q_filesystemmodel_submit(void* self) {
    return QFileSystemModel_Submit((QFileSystemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self ```
bool q_filesystemmodel_qbase_submit(void* self) {
    return QFileSystemModel_QBaseSubmit((QFileSystemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, bool (*slot)() ```
void q_filesystemmodel_on_submit(void* self, bool (*slot)()) {
    QFileSystemModel_OnSubmit((QFileSystemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self ```
void q_filesystemmodel_revert(void* self) {
    QFileSystemModel_Revert((QFileSystemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self ```
void q_filesystemmodel_qbase_revert(void* self) {
    QFileSystemModel_QBaseRevert((QFileSystemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, void (*slot)() ```
void q_filesystemmodel_on_revert(void* self, void (*slot)()) {
    QFileSystemModel_OnRevert((QFileSystemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self ```
void q_filesystemmodel_reset_internal_data(void* self) {
    QFileSystemModel_ResetInternalData((QFileSystemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self ```
void q_filesystemmodel_qbase_reset_internal_data(void* self) {
    QFileSystemModel_QBaseResetInternalData((QFileSystemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, void (*slot)() ```
void q_filesystemmodel_on_reset_internal_data(void* self, void (*slot)()) {
    QFileSystemModel_OnResetInternalData((QFileSystemModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self, QObject* watched, QEvent* event ```
bool q_filesystemmodel_event_filter(void* self, void* watched, void* event) {
    return QFileSystemModel_EventFilter((QFileSystemModel*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self, QObject* watched, QEvent* event ```
bool q_filesystemmodel_qbase_event_filter(void* self, void* watched, void* event) {
    return QFileSystemModel_QBaseEventFilter((QFileSystemModel*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, bool (*slot)(QFileSystemModel*, QObject*, QEvent*) ```
void q_filesystemmodel_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QFileSystemModel_OnEventFilter((QFileSystemModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self, QChildEvent* event ```
void q_filesystemmodel_child_event(void* self, void* event) {
    QFileSystemModel_ChildEvent((QFileSystemModel*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self, QChildEvent* event ```
void q_filesystemmodel_qbase_child_event(void* self, void* event) {
    QFileSystemModel_QBaseChildEvent((QFileSystemModel*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, void (*slot)(QFileSystemModel*, QChildEvent*) ```
void q_filesystemmodel_on_child_event(void* self, void (*slot)(void*, void*)) {
    QFileSystemModel_OnChildEvent((QFileSystemModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self, QEvent* event ```
void q_filesystemmodel_custom_event(void* self, void* event) {
    QFileSystemModel_CustomEvent((QFileSystemModel*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self, QEvent* event ```
void q_filesystemmodel_qbase_custom_event(void* self, void* event) {
    QFileSystemModel_QBaseCustomEvent((QFileSystemModel*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, void (*slot)(QFileSystemModel*, QEvent*) ```
void q_filesystemmodel_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QFileSystemModel_OnCustomEvent((QFileSystemModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self, QMetaMethod* signal ```
void q_filesystemmodel_connect_notify(void* self, void* signal) {
    QFileSystemModel_ConnectNotify((QFileSystemModel*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self, QMetaMethod* signal ```
void q_filesystemmodel_qbase_connect_notify(void* self, void* signal) {
    QFileSystemModel_QBaseConnectNotify((QFileSystemModel*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, void (*slot)(QFileSystemModel*, QMetaMethod*) ```
void q_filesystemmodel_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QFileSystemModel_OnConnectNotify((QFileSystemModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self, QMetaMethod* signal ```
void q_filesystemmodel_disconnect_notify(void* self, void* signal) {
    QFileSystemModel_DisconnectNotify((QFileSystemModel*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self, QMetaMethod* signal ```
void q_filesystemmodel_qbase_disconnect_notify(void* self, void* signal) {
    QFileSystemModel_QBaseDisconnectNotify((QFileSystemModel*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, void (*slot)(QFileSystemModel*, QMetaMethod*) ```
void q_filesystemmodel_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QFileSystemModel_OnDisconnectNotify((QFileSystemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self, int row, int column ```
QModelIndex* q_filesystemmodel_create_index(void* self, int row, int column) {
    return QFileSystemModel_CreateIndex((QFileSystemModel*)self, row, column);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self, int row, int column ```
QModelIndex* q_filesystemmodel_qbase_create_index(void* self, int row, int column) {
    return QFileSystemModel_QBaseCreateIndex((QFileSystemModel*)self, row, column);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* (*slot)(QFileSystemModel*, int, int) ```
void q_filesystemmodel_on_create_index(void* self, QModelIndex* (*slot)(void*, int, int)) {
    QFileSystemModel_OnCreateIndex((QFileSystemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* indexes[], QDataStream* stream ```
void q_filesystemmodel_encode_data(void* self, void* indexes[], void* stream) {
    QModelIndex** indexes_arr = (QModelIndex**)indexes;
    size_t indexes_len = 0;
    while (indexes_arr[indexes_len] != NULL) {
        indexes_len++;
    }
    libqt_list indexes_list = {
        .len = indexes_len,
        .data = {(QModelIndex*)indexes},
    };
    QFileSystemModel_EncodeData((QFileSystemModel*)self, indexes_list, (QDataStream*)stream);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* indexes[], QDataStream* stream ```
void q_filesystemmodel_qbase_encode_data(void* self, void* indexes[], void* stream) {
    QModelIndex** indexes_arr = (QModelIndex**)indexes;
    size_t indexes_len = 0;
    while (indexes_arr[indexes_len] != NULL) {
        indexes_len++;
    }
    libqt_list indexes_list = {
        .len = indexes_len,
        .data = {(QModelIndex*)indexes},
    };
    QFileSystemModel_QBaseEncodeData((QFileSystemModel*)self, indexes_list, (QDataStream*)stream);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, void (*slot)(QFileSystemModel*, QModelIndex*[], QDataStream*) ```
void q_filesystemmodel_on_encode_data(void* self, void (*slot)(void*, void*, void*)) {
    QFileSystemModel_OnEncodeData((QFileSystemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self, int row, int column, QModelIndex* parent, QDataStream* stream ```
bool q_filesystemmodel_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return QFileSystemModel_DecodeData((QFileSystemModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self, int row, int column, QModelIndex* parent, QDataStream* stream ```
bool q_filesystemmodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return QFileSystemModel_QBaseDecodeData((QFileSystemModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, bool (*slot)(QFileSystemModel*, int, int, QModelIndex*, QDataStream*) ```
void q_filesystemmodel_on_decode_data(void* self, bool (*slot)(void*, int, int, void*, void*)) {
    QFileSystemModel_OnDecodeData((QFileSystemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* parent, int first, int last ```
void q_filesystemmodel_begin_insert_rows(void* self, void* parent, int first, int last) {
    QFileSystemModel_BeginInsertRows((QFileSystemModel*)self, (QModelIndex*)parent, first, last);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* parent, int first, int last ```
void q_filesystemmodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last) {
    QFileSystemModel_QBaseBeginInsertRows((QFileSystemModel*)self, (QModelIndex*)parent, first, last);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, void (*slot)(QFileSystemModel*, QModelIndex*, int, int) ```
void q_filesystemmodel_on_begin_insert_rows(void* self, void (*slot)(void*, void*, int, int)) {
    QFileSystemModel_OnBeginInsertRows((QFileSystemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self ```
void q_filesystemmodel_end_insert_rows(void* self) {
    QFileSystemModel_EndInsertRows((QFileSystemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self ```
void q_filesystemmodel_qbase_end_insert_rows(void* self) {
    QFileSystemModel_QBaseEndInsertRows((QFileSystemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, void (*slot)() ```
void q_filesystemmodel_on_end_insert_rows(void* self, void (*slot)()) {
    QFileSystemModel_OnEndInsertRows((QFileSystemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* parent, int first, int last ```
void q_filesystemmodel_begin_remove_rows(void* self, void* parent, int first, int last) {
    QFileSystemModel_BeginRemoveRows((QFileSystemModel*)self, (QModelIndex*)parent, first, last);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* parent, int first, int last ```
void q_filesystemmodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last) {
    QFileSystemModel_QBaseBeginRemoveRows((QFileSystemModel*)self, (QModelIndex*)parent, first, last);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, void (*slot)(QFileSystemModel*, QModelIndex*, int, int) ```
void q_filesystemmodel_on_begin_remove_rows(void* self, void (*slot)(void*, void*, int, int)) {
    QFileSystemModel_OnBeginRemoveRows((QFileSystemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self ```
void q_filesystemmodel_end_remove_rows(void* self) {
    QFileSystemModel_EndRemoveRows((QFileSystemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self ```
void q_filesystemmodel_qbase_end_remove_rows(void* self) {
    QFileSystemModel_QBaseEndRemoveRows((QFileSystemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, void (*slot)() ```
void q_filesystemmodel_on_end_remove_rows(void* self, void (*slot)()) {
    QFileSystemModel_OnEndRemoveRows((QFileSystemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow ```
bool q_filesystemmodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return QFileSystemModel_BeginMoveRows((QFileSystemModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow ```
bool q_filesystemmodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return QFileSystemModel_QBaseBeginMoveRows((QFileSystemModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, bool (*slot)(QFileSystemModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_filesystemmodel_on_begin_move_rows(void* self, bool (*slot)(void*, void*, int, int, void*, int)) {
    QFileSystemModel_OnBeginMoveRows((QFileSystemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self ```
void q_filesystemmodel_end_move_rows(void* self) {
    QFileSystemModel_EndMoveRows((QFileSystemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self ```
void q_filesystemmodel_qbase_end_move_rows(void* self) {
    QFileSystemModel_QBaseEndMoveRows((QFileSystemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, void (*slot)() ```
void q_filesystemmodel_on_end_move_rows(void* self, void (*slot)()) {
    QFileSystemModel_OnEndMoveRows((QFileSystemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* parent, int first, int last ```
void q_filesystemmodel_begin_insert_columns(void* self, void* parent, int first, int last) {
    QFileSystemModel_BeginInsertColumns((QFileSystemModel*)self, (QModelIndex*)parent, first, last);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* parent, int first, int last ```
void q_filesystemmodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last) {
    QFileSystemModel_QBaseBeginInsertColumns((QFileSystemModel*)self, (QModelIndex*)parent, first, last);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, void (*slot)(QFileSystemModel*, QModelIndex*, int, int) ```
void q_filesystemmodel_on_begin_insert_columns(void* self, void (*slot)(void*, void*, int, int)) {
    QFileSystemModel_OnBeginInsertColumns((QFileSystemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self ```
void q_filesystemmodel_end_insert_columns(void* self) {
    QFileSystemModel_EndInsertColumns((QFileSystemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self ```
void q_filesystemmodel_qbase_end_insert_columns(void* self) {
    QFileSystemModel_QBaseEndInsertColumns((QFileSystemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, void (*slot)() ```
void q_filesystemmodel_on_end_insert_columns(void* self, void (*slot)()) {
    QFileSystemModel_OnEndInsertColumns((QFileSystemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* parent, int first, int last ```
void q_filesystemmodel_begin_remove_columns(void* self, void* parent, int first, int last) {
    QFileSystemModel_BeginRemoveColumns((QFileSystemModel*)self, (QModelIndex*)parent, first, last);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* parent, int first, int last ```
void q_filesystemmodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last) {
    QFileSystemModel_QBaseBeginRemoveColumns((QFileSystemModel*)self, (QModelIndex*)parent, first, last);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, void (*slot)(QFileSystemModel*, QModelIndex*, int, int) ```
void q_filesystemmodel_on_begin_remove_columns(void* self, void (*slot)(void*, void*, int, int)) {
    QFileSystemModel_OnBeginRemoveColumns((QFileSystemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self ```
void q_filesystemmodel_end_remove_columns(void* self) {
    QFileSystemModel_EndRemoveColumns((QFileSystemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self ```
void q_filesystemmodel_qbase_end_remove_columns(void* self) {
    QFileSystemModel_QBaseEndRemoveColumns((QFileSystemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, void (*slot)() ```
void q_filesystemmodel_on_end_remove_columns(void* self, void (*slot)()) {
    QFileSystemModel_OnEndRemoveColumns((QFileSystemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn ```
bool q_filesystemmodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return QFileSystemModel_BeginMoveColumns((QFileSystemModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn ```
bool q_filesystemmodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return QFileSystemModel_QBaseBeginMoveColumns((QFileSystemModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, bool (*slot)(QFileSystemModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_filesystemmodel_on_begin_move_columns(void* self, bool (*slot)(void*, void*, int, int, void*, int)) {
    QFileSystemModel_OnBeginMoveColumns((QFileSystemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self ```
void q_filesystemmodel_end_move_columns(void* self) {
    QFileSystemModel_EndMoveColumns((QFileSystemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self ```
void q_filesystemmodel_qbase_end_move_columns(void* self) {
    QFileSystemModel_QBaseEndMoveColumns((QFileSystemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, void (*slot)() ```
void q_filesystemmodel_on_end_move_columns(void* self, void (*slot)()) {
    QFileSystemModel_OnEndMoveColumns((QFileSystemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self ```
void q_filesystemmodel_begin_reset_model(void* self) {
    QFileSystemModel_BeginResetModel((QFileSystemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self ```
void q_filesystemmodel_qbase_begin_reset_model(void* self) {
    QFileSystemModel_QBaseBeginResetModel((QFileSystemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, void (*slot)() ```
void q_filesystemmodel_on_begin_reset_model(void* self, void (*slot)()) {
    QFileSystemModel_OnBeginResetModel((QFileSystemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self ```
void q_filesystemmodel_end_reset_model(void* self) {
    QFileSystemModel_EndResetModel((QFileSystemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self ```
void q_filesystemmodel_qbase_end_reset_model(void* self) {
    QFileSystemModel_QBaseEndResetModel((QFileSystemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, void (*slot)() ```
void q_filesystemmodel_on_end_reset_model(void* self, void (*slot)()) {
    QFileSystemModel_OnEndResetModel((QFileSystemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* from, QModelIndex* to ```
void q_filesystemmodel_change_persistent_index(void* self, void* from, void* to) {
    QFileSystemModel_ChangePersistentIndex((QFileSystemModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* from, QModelIndex* to ```
void q_filesystemmodel_qbase_change_persistent_index(void* self, void* from, void* to) {
    QFileSystemModel_QBaseChangePersistentIndex((QFileSystemModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, void (*slot)(QFileSystemModel*, QModelIndex*, QModelIndex*) ```
void q_filesystemmodel_on_change_persistent_index(void* self, void (*slot)(void*, void*, void*)) {
    QFileSystemModel_OnChangePersistentIndex((QFileSystemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* from[], QModelIndex* to[] ```
void q_filesystemmodel_change_persistent_index_list(void* self, void* from[], void* to[]) {
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
    QFileSystemModel_ChangePersistentIndexList((QFileSystemModel*)self, from_list, to_list);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self, QModelIndex* from[], QModelIndex* to[] ```
void q_filesystemmodel_qbase_change_persistent_index_list(void* self, void* from[], void* to[]) {
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
    QFileSystemModel_QBaseChangePersistentIndexList((QFileSystemModel*)self, from_list, to_list);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, void (*slot)(QFileSystemModel*, QModelIndex*[], QModelIndex*[]) ```
void q_filesystemmodel_on_change_persistent_index_list(void* self, void (*slot)(void*, void*, void*)) {
    QFileSystemModel_OnChangePersistentIndexList((QFileSystemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self ```
libqt_list /* of QModelIndex* */ q_filesystemmodel_persistent_index_list(void* self) {
    libqt_list _arr = QFileSystemModel_PersistentIndexList((QFileSystemModel*)self);
    return _arr;
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self ```
libqt_list /* of QModelIndex* */ q_filesystemmodel_qbase_persistent_index_list(void* self) {
    libqt_list _arr = QFileSystemModel_QBasePersistentIndexList((QFileSystemModel*)self);
    return _arr;
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, libqt_list /* of QModelIndex* */ (*slot)() ```
void q_filesystemmodel_on_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ (*slot)()) {
    QFileSystemModel_OnPersistentIndexList((QFileSystemModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self ```
QObject* q_filesystemmodel_sender(void* self) {
    return QFileSystemModel_Sender((QFileSystemModel*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self ```
QObject* q_filesystemmodel_qbase_sender(void* self) {
    return QFileSystemModel_QBaseSender((QFileSystemModel*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, QObject* (*slot)() ```
void q_filesystemmodel_on_sender(void* self, QObject* (*slot)()) {
    QFileSystemModel_OnSender((QFileSystemModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self ```
int32_t q_filesystemmodel_sender_signal_index(void* self) {
    return QFileSystemModel_SenderSignalIndex((QFileSystemModel*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self ```
int32_t q_filesystemmodel_qbase_sender_signal_index(void* self) {
    return QFileSystemModel_QBaseSenderSignalIndex((QFileSystemModel*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, int32_t (*slot)() ```
void q_filesystemmodel_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QFileSystemModel_OnSenderSignalIndex((QFileSystemModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self, const char* signal ```
int32_t q_filesystemmodel_receivers(void* self, const char* signal) {
    return QFileSystemModel_Receivers((QFileSystemModel*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self, const char* signal ```
int32_t q_filesystemmodel_qbase_receivers(void* self, const char* signal) {
    return QFileSystemModel_QBaseReceivers((QFileSystemModel*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, int32_t (*slot)(QFileSystemModel*, const char*) ```
void q_filesystemmodel_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QFileSystemModel_OnReceivers((QFileSystemModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileSystemModel* self, QMetaMethod* signal ```
bool q_filesystemmodel_is_signal_connected(void* self, void* signal) {
    return QFileSystemModel_IsSignalConnected((QFileSystemModel*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileSystemModel* self, QMetaMethod* signal ```
bool q_filesystemmodel_qbase_is_signal_connected(void* self, void* signal) {
    return QFileSystemModel_QBaseIsSignalConnected((QFileSystemModel*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileSystemModel* self, bool (*slot)(QFileSystemModel*, QMetaMethod*) ```
void q_filesystemmodel_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QFileSystemModel_OnIsSignalConnected((QFileSystemModel*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QFileSystemModel* self ```
void q_filesystemmodel_delete(void* self) {
    QFileSystemModel_Delete((QFileSystemModel*)(self));
}