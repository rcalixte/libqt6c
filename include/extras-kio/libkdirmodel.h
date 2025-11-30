#pragma once
#ifndef SRC_EXTRAS_KIO_QT6C_LIBKDIRMODEL_H
#define SRC_EXTRAS_KIO_QT6C_LIBKDIRMODEL_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kdirmodel.html

/// k_dirmodel_new constructs a new KDirModel object.
///
KDirModel* k_dirmodel_new();

/// k_dirmodel_new2 constructs a new KDirModel object.
///
/// @param parent QObject*
KDirModel* k_dirmodel_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KDirModel*
const QMetaObject* k_dirmodel_meta_object(void* self);

/// @param self KDirModel*
/// @param param1 const char*
void* k_dirmodel_metacast(void* self, const char* param1);

/// @param self KDirModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_dirmodel_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KDirModel*
/// @param callback int32_t func(KDirModel* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_dirmodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KDirModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_dirmodel_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_dirmodel_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kdirmodel.html#openUrl)
///
/// @param self KDirModel*
/// @param url QUrl*
void k_dirmodel_open_url(void* self, void* url);

/// [Upstream resources](https://api.kde.org/kdirmodel.html#setDirLister)
///
/// @param self KDirModel*
/// @param dirLister KDirLister*
void k_dirmodel_set_dir_lister(void* self, void* dirLister);

/// [Upstream resources](https://api.kde.org/kdirmodel.html#dirLister)
///
/// @param self KDirModel*
KDirLister* k_dirmodel_dir_lister(void* self);

/// [Upstream resources](https://api.kde.org/kdirmodel.html#itemForIndex)
///
/// @param self KDirModel*
/// @param index QModelIndex*
KFileItem* k_dirmodel_item_for_index(void* self, void* index);

/// [Upstream resources](https://api.kde.org/kdirmodel.html#indexForItem)
///
/// @param self KDirModel*
/// @param param1 KFileItem*
QModelIndex* k_dirmodel_index_for_item(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/kdirmodel.html#indexForUrl)
///
/// @param self KDirModel*
/// @param url QUrl*
QModelIndex* k_dirmodel_index_for_url(void* self, void* url);

/// [Upstream resources](https://api.kde.org/kdirmodel.html#expandToUrl)
///
/// @param self KDirModel*
/// @param url QUrl*
void k_dirmodel_expand_to_url(void* self, void* url);

/// [Upstream resources](https://api.kde.org/kdirmodel.html#itemChanged)
///
/// @param self KDirModel*
/// @param index QModelIndex*
void k_dirmodel_item_changed(void* self, void* index);

/// [Upstream resources](https://api.kde.org/kdirmodel.html#clearAllPreviews)
///
/// @param self KDirModel*
void k_dirmodel_clear_all_previews(void* self);

/// [Upstream resources](https://api.kde.org/kdirmodel.html#setDropsAllowed)
///
/// @param self KDirModel*
/// @param dropsAllowed flag of enum KDirModel__DropsAllowedFlag
void k_dirmodel_set_drops_allowed(void* self, int32_t dropsAllowed);

/// [Upstream resources](https://api.kde.org/kdirmodel.html#canFetchMore)
///
/// @param self KDirModel*
/// @param parent QModelIndex*
bool k_dirmodel_can_fetch_more(void* self, void* parent);

/// [Upstream resources](https://api.kde.org/kdirmodel.html#canFetchMore)
///
/// Allows for overriding the related default method
///
/// @param self KDirModel*
/// @param callback bool func(KDirModel* self, QModelIndex* parent)
void k_dirmodel_on_can_fetch_more(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kdirmodel.html#canFetchMore)
///
/// Base class method implementation
///
/// @param self KDirModel*
/// @param parent QModelIndex*
bool k_dirmodel_qbase_can_fetch_more(void* self, void* parent);

/// [Upstream resources](https://api.kde.org/kdirmodel.html#columnCount)
///
/// @param self KDirModel*
/// @param parent QModelIndex*
int32_t k_dirmodel_column_count(void* self, void* parent);

/// [Upstream resources](https://api.kde.org/kdirmodel.html#columnCount)
///
/// Allows for overriding the related default method
///
/// @param self KDirModel*
/// @param callback int32_t func(KDirModel* self, QModelIndex* parent)
void k_dirmodel_on_column_count(void* self, int32_t (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kdirmodel.html#columnCount)
///
/// Base class method implementation
///
/// @param self KDirModel*
/// @param parent QModelIndex*
int32_t k_dirmodel_qbase_column_count(void* self, void* parent);

/// [Upstream resources](https://api.kde.org/kdirmodel.html#data)
///
/// @param self KDirModel*
/// @param index QModelIndex*
/// @param role int
QVariant* k_dirmodel_data(void* self, void* index, int role);

/// [Upstream resources](https://api.kde.org/kdirmodel.html#data)
///
/// Allows for overriding the related default method
///
/// @param self KDirModel*
/// @param callback QVariant* func(KDirModel* self, QModelIndex* index, int role)
void k_dirmodel_on_data(void* self, QVariant* (*callback)(void*, void*, int));

/// [Upstream resources](https://api.kde.org/kdirmodel.html#data)
///
/// Base class method implementation
///
/// @param self KDirModel*
/// @param index QModelIndex*
/// @param role int
QVariant* k_dirmodel_qbase_data(void* self, void* index, int role);

/// [Upstream resources](https://api.kde.org/kdirmodel.html#dropMimeData)
///
/// @param self KDirModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
bool k_dirmodel_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// [Upstream resources](https://api.kde.org/kdirmodel.html#dropMimeData)
///
/// Allows for overriding the related default method
///
/// @param self KDirModel*
/// @param callback bool func(KDirModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
void k_dirmodel_on_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*));

/// [Upstream resources](https://api.kde.org/kdirmodel.html#dropMimeData)
///
/// Base class method implementation
///
/// @param self KDirModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
bool k_dirmodel_qbase_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// [Upstream resources](https://api.kde.org/kdirmodel.html#fetchMore)
///
/// @param self KDirModel*
/// @param parent QModelIndex*
void k_dirmodel_fetch_more(void* self, void* parent);

/// [Upstream resources](https://api.kde.org/kdirmodel.html#fetchMore)
///
/// Allows for overriding the related default method
///
/// @param self KDirModel*
/// @param callback void func(KDirModel* self, QModelIndex* parent)
void k_dirmodel_on_fetch_more(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kdirmodel.html#fetchMore)
///
/// Base class method implementation
///
/// @param self KDirModel*
/// @param parent QModelIndex*
void k_dirmodel_qbase_fetch_more(void* self, void* parent);

/// [Upstream resources](https://api.kde.org/kdirmodel.html#flags)
///
/// @param self KDirModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
int32_t k_dirmodel_flags(void* self, void* index);

/// [Upstream resources](https://api.kde.org/kdirmodel.html#flags)
///
/// Allows for overriding the related default method
///
/// @param self KDirModel*
/// @param callback int32_t func(KDirModel* self, QModelIndex* index)
void k_dirmodel_on_flags(void* self, int32_t (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kdirmodel.html#flags)
///
/// Base class method implementation
///
/// @param self KDirModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
int32_t k_dirmodel_qbase_flags(void* self, void* index);

/// [Upstream resources](https://api.kde.org/kdirmodel.html#hasChildren)
///
/// @param self KDirModel*
/// @param parent QModelIndex*
bool k_dirmodel_has_children(void* self, void* parent);

/// [Upstream resources](https://api.kde.org/kdirmodel.html#hasChildren)
///
/// Allows for overriding the related default method
///
/// @param self KDirModel*
/// @param callback bool func(KDirModel* self, QModelIndex* parent)
void k_dirmodel_on_has_children(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kdirmodel.html#hasChildren)
///
/// Base class method implementation
///
/// @param self KDirModel*
/// @param parent QModelIndex*
bool k_dirmodel_qbase_has_children(void* self, void* parent);

/// [Upstream resources](https://api.kde.org/kdirmodel.html#headerData)
///
/// @param self KDirModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
QVariant* k_dirmodel_header_data(void* self, int section, int32_t orientation, int role);

/// [Upstream resources](https://api.kde.org/kdirmodel.html#headerData)
///
/// Allows for overriding the related default method
///
/// @param self KDirModel*
/// @param callback QVariant* func(KDirModel* self, int section, enum Qt__Orientation orientation, int role)
void k_dirmodel_on_header_data(void* self, QVariant* (*callback)(void*, int, int32_t, int));

/// [Upstream resources](https://api.kde.org/kdirmodel.html#headerData)
///
/// Base class method implementation
///
/// @param self KDirModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
QVariant* k_dirmodel_qbase_header_data(void* self, int section, int32_t orientation, int role);

/// [Upstream resources](https://api.kde.org/kdirmodel.html#index)
///
/// @param self KDirModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
QModelIndex* k_dirmodel_index(void* self, int row, int column, void* parent);

/// [Upstream resources](https://api.kde.org/kdirmodel.html#index)
///
/// Allows for overriding the related default method
///
/// @param self KDirModel*
/// @param callback QModelIndex* func(KDirModel* self, int row, int column, QModelIndex* parent)
void k_dirmodel_on_index(void* self, QModelIndex* (*callback)(void*, int, int, void*));

/// [Upstream resources](https://api.kde.org/kdirmodel.html#index)
///
/// Base class method implementation
///
/// @param self KDirModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
QModelIndex* k_dirmodel_qbase_index(void* self, int row, int column, void* parent);

/// [Upstream resources](https://api.kde.org/kdirmodel.html#mimeData)
///
/// @param self KDirModel*
/// @param indexes libqt_list /* of QModelIndex* */
QMimeData* k_dirmodel_mime_data(void* self, libqt_list indexes);

/// [Upstream resources](https://api.kde.org/kdirmodel.html#mimeData)
///
/// Allows for overriding the related default method
///
/// @param self KDirModel*
/// @param callback QMimeData* func(KDirModel* self, QModelIndex** indexes)
void k_dirmodel_on_mime_data(void* self, QMimeData* (*callback)(void*, QModelIndex**));

/// [Upstream resources](https://api.kde.org/kdirmodel.html#mimeData)
///
/// Base class method implementation
///
/// @param self KDirModel*
/// @param indexes libqt_list /* of QModelIndex* */
QMimeData* k_dirmodel_qbase_mime_data(void* self, libqt_list indexes);

/// [Upstream resources](https://api.kde.org/kdirmodel.html#mimeTypes)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDirModel*
const char** k_dirmodel_mime_types(void* self);

/// [Upstream resources](https://api.kde.org/kdirmodel.html#mimeTypes)
///
/// Allows for overriding the related default method
///
/// @param self KDirModel*
/// @param callback const char** func()
void k_dirmodel_on_mime_types(void* self, const char** (*callback)());

/// [Upstream resources](https://api.kde.org/kdirmodel.html#mimeTypes)
///
/// Base class method implementation
///
/// @param self KDirModel*
const char** k_dirmodel_qbase_mime_types(void* self);

/// [Upstream resources](https://api.kde.org/kdirmodel.html#parent)
///
/// @param self KDirModel*
/// @param index QModelIndex*
QModelIndex* k_dirmodel_parent(void* self, void* index);

/// [Upstream resources](https://api.kde.org/kdirmodel.html#parent)
///
/// Allows for overriding the related default method
///
/// @param self KDirModel*
/// @param callback QModelIndex* func(KDirModel* self, QModelIndex* index)
void k_dirmodel_on_parent(void* self, QModelIndex* (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kdirmodel.html#parent)
///
/// Base class method implementation
///
/// @param self KDirModel*
/// @param index QModelIndex*
QModelIndex* k_dirmodel_qbase_parent(void* self, void* index);

/// [Upstream resources](https://api.kde.org/kdirmodel.html#sibling)
///
/// @param self KDirModel*
/// @param row int
/// @param column int
/// @param index QModelIndex*
QModelIndex* k_dirmodel_sibling(void* self, int row, int column, void* index);

/// [Upstream resources](https://api.kde.org/kdirmodel.html#sibling)
///
/// Allows for overriding the related default method
///
/// @param self KDirModel*
/// @param callback QModelIndex* func(KDirModel* self, int row, int column, QModelIndex* index)
void k_dirmodel_on_sibling(void* self, QModelIndex* (*callback)(void*, int, int, void*));

/// [Upstream resources](https://api.kde.org/kdirmodel.html#sibling)
///
/// Base class method implementation
///
/// @param self KDirModel*
/// @param row int
/// @param column int
/// @param index QModelIndex*
QModelIndex* k_dirmodel_qbase_sibling(void* self, int row, int column, void* index);

/// [Upstream resources](https://api.kde.org/kdirmodel.html#rowCount)
///
/// @param self KDirModel*
/// @param parent QModelIndex*
int32_t k_dirmodel_row_count(void* self, void* parent);

/// [Upstream resources](https://api.kde.org/kdirmodel.html#rowCount)
///
/// Allows for overriding the related default method
///
/// @param self KDirModel*
/// @param callback int32_t func(KDirModel* self, QModelIndex* parent)
void k_dirmodel_on_row_count(void* self, int32_t (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kdirmodel.html#rowCount)
///
/// Base class method implementation
///
/// @param self KDirModel*
/// @param parent QModelIndex*
int32_t k_dirmodel_qbase_row_count(void* self, void* parent);

/// [Upstream resources](https://api.kde.org/kdirmodel.html#setData)
///
/// @param self KDirModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
bool k_dirmodel_set_data(void* self, void* index, void* value, int role);

/// [Upstream resources](https://api.kde.org/kdirmodel.html#setData)
///
/// Allows for overriding the related default method
///
/// @param self KDirModel*
/// @param callback bool func(KDirModel* self, QModelIndex* index, QVariant* value, int role)
void k_dirmodel_on_set_data(void* self, bool (*callback)(void*, void*, void*, int));

/// [Upstream resources](https://api.kde.org/kdirmodel.html#setData)
///
/// Base class method implementation
///
/// @param self KDirModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
bool k_dirmodel_qbase_set_data(void* self, void* index, void* value, int role);

/// [Upstream resources](https://api.kde.org/kdirmodel.html#sort)
///
/// @param self KDirModel*
/// @param column int
/// @param order enum Qt__SortOrder
void k_dirmodel_sort(void* self, int column, int32_t order);

/// [Upstream resources](https://api.kde.org/kdirmodel.html#sort)
///
/// Allows for overriding the related default method
///
/// @param self KDirModel*
/// @param callback void func(KDirModel* self, int column, enum Qt__SortOrder order)
void k_dirmodel_on_sort(void* self, void (*callback)(void*, int, int32_t));

/// [Upstream resources](https://api.kde.org/kdirmodel.html#sort)
///
/// Base class method implementation
///
/// @param self KDirModel*
/// @param column int
/// @param order enum Qt__SortOrder
void k_dirmodel_qbase_sort(void* self, int column, int32_t order);

/// [Upstream resources](https://api.kde.org/kdirmodel.html#roleNames)
///
/// @param self KDirModel*
libqt_map /* of int to char* */ k_dirmodel_role_names(void* self);

/// [Upstream resources](https://api.kde.org/kdirmodel.html#roleNames)
///
/// Allows for overriding the related default method
///
/// @param self KDirModel*
/// @param callback libqt_map /* of int to char* */ func()
void k_dirmodel_on_role_names(void* self, libqt_map /* of int to char* */ (*callback)());

/// [Upstream resources](https://api.kde.org/kdirmodel.html#roleNames)
///
/// Base class method implementation
///
/// @param self KDirModel*
libqt_map /* of int to char* */ k_dirmodel_qbase_role_names(void* self);

/// [Upstream resources](https://api.kde.org/kdirmodel.html#simplifiedUrlList)
///
/// @param urls libqt_list /* of QUrl* */
libqt_list /* of QUrl* */ k_dirmodel_simplified_url_list(libqt_list urls);

/// [Upstream resources](https://api.kde.org/kdirmodel.html#requestSequenceIcon)
///
/// @param self KDirModel*
/// @param index QModelIndex*
/// @param sequenceIndex int
void k_dirmodel_request_sequence_icon(void* self, void* index, int sequenceIndex);

/// [Upstream resources](https://api.kde.org/kdirmodel.html#setJobTransfersVisible)
///
/// @param self KDirModel*
/// @param show bool
void k_dirmodel_set_job_transfers_visible(void* self, bool show);

/// [Upstream resources](https://api.kde.org/kdirmodel.html#jobTransfersVisible)
///
/// @param self KDirModel*
bool k_dirmodel_job_transfers_visible(void* self);

/// [Upstream resources](https://api.kde.org/kdirmodel.html#supportedDropActions)
///
/// @param self KDirModel*
///
/// @return flag of enum Qt__DropAction
int32_t k_dirmodel_supported_drop_actions(void* self);

/// [Upstream resources](https://api.kde.org/kdirmodel.html#supportedDropActions)
///
/// Allows for overriding the related default method
///
/// @param self KDirModel*
/// @param callback int32_t func()
void k_dirmodel_on_supported_drop_actions(void* self, int32_t (*callback)());

/// [Upstream resources](https://api.kde.org/kdirmodel.html#supportedDropActions)
///
/// Base class method implementation
///
/// @param self KDirModel*
///
/// @return flag of enum Qt__DropAction
int32_t k_dirmodel_qbase_supported_drop_actions(void* self);

/// [Upstream resources](https://api.kde.org/kdirmodel.html#expand)
///
/// @param self KDirModel*
/// @param index QModelIndex*
void k_dirmodel_expand(void* self, void* index);

/// [Upstream resources](https://api.kde.org/kdirmodel.html#expand)
///
/// @param self KDirModel*
/// @param callback void func(KDirModel* self, QModelIndex* index)
void k_dirmodel_on_expand(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kdirmodel.html#needSequenceIcon)
///
/// @param self KDirModel*
/// @param index QModelIndex*
/// @param sequenceIndex int
void k_dirmodel_need_sequence_icon(void* self, void* index, int sequenceIndex);

/// [Upstream resources](https://api.kde.org/kdirmodel.html#needSequenceIcon)
///
/// @param self KDirModel*
/// @param callback void func(KDirModel* self, QModelIndex* index, int sequenceIndex)
void k_dirmodel_on_need_sequence_icon(void* self, void (*callback)(void*, void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_dirmodel_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_dirmodel_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://api.kde.org/kdirmodel.html#openUrl)
///
/// @param self KDirModel*
/// @param url QUrl*
/// @param flags flag of enum KDirModel__OpenUrlFlag
void k_dirmodel_open_url2(void* self, void* url, int32_t flags);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self KDirModel*
/// @param row int
/// @param column int
bool k_dirmodel_has_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// @param self KDirModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
bool k_dirmodel_insert_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Allows for overriding the related default method
///
/// @param self KDirModel*
/// @param callback bool func(KDirModel* self, int row, int count, QModelIndex* parent)
void k_dirmodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Base class method implementation
///
/// @param self KDirModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
bool k_dirmodel_qbase_insert_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// @param self KDirModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
bool k_dirmodel_insert_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Allows for overriding the related default method
///
/// @param self KDirModel*
/// @param callback bool func(KDirModel* self, int column, int count, QModelIndex* parent)
void k_dirmodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Base class method implementation
///
/// @param self KDirModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
bool k_dirmodel_qbase_insert_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// @param self KDirModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
bool k_dirmodel_remove_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Allows for overriding the related default method
///
/// @param self KDirModel*
/// @param callback bool func(KDirModel* self, int row, int count, QModelIndex* parent)
void k_dirmodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Base class method implementation
///
/// @param self KDirModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
bool k_dirmodel_qbase_remove_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// @param self KDirModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
bool k_dirmodel_remove_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Allows for overriding the related default method
///
/// @param self KDirModel*
/// @param callback bool func(KDirModel* self, int column, int count, QModelIndex* parent)
void k_dirmodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Base class method implementation
///
/// @param self KDirModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
bool k_dirmodel_qbase_remove_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self KDirModel*
/// @param row int
bool k_dirmodel_insert_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self KDirModel*
/// @param column int
bool k_dirmodel_insert_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self KDirModel*
/// @param row int
bool k_dirmodel_remove_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self KDirModel*
/// @param column int
bool k_dirmodel_remove_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
///
/// @param self KDirModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
bool k_dirmodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
///
/// @param self KDirModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
bool k_dirmodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self KDirModel*
/// @param index QModelIndex*
bool k_dirmodel_check_index(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KDirModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
void k_dirmodel_data_changed(void* self, void* topLeft, void* bottomRight);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KDirModel*
/// @param callback void func(KDirModel* self, QModelIndex* topLeft, QModelIndex* bottomRight)
void k_dirmodel_on_data_changed(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self KDirModel*
/// @param orientation enum Qt__Orientation
/// @param first int
/// @param last int
void k_dirmodel_header_data_changed(void* self, int32_t orientation, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self KDirModel*
/// @param callback void func(KDirModel* self, enum Qt__Orientation orientation, int first, int last)
void k_dirmodel_on_header_data_changed(void* self, void (*callback)(void*, int32_t, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KDirModel*
void k_dirmodel_layout_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KDirModel*
/// @param callback void func(KDirModel* self)
void k_dirmodel_on_layout_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KDirModel*
void k_dirmodel_layout_about_to_be_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KDirModel*
/// @param callback void func(KDirModel* self)
void k_dirmodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self KDirModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
bool k_dirmodel_has_index3(void* self, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self KDirModel*
/// @param row int
/// @param parent QModelIndex*
bool k_dirmodel_insert_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self KDirModel*
/// @param column int
/// @param parent QModelIndex*
bool k_dirmodel_insert_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self KDirModel*
/// @param row int
/// @param parent QModelIndex*
bool k_dirmodel_remove_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self KDirModel*
/// @param column int
/// @param parent QModelIndex*
bool k_dirmodel_remove_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self KDirModel*
/// @param index QModelIndex*
/// @param options flag of enum QAbstractItemModel__CheckIndexOption
bool k_dirmodel_check_index2(void* self, void* index, int32_t options);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KDirModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
/// @param roles libqt_list /* of int */
void k_dirmodel_data_changed3(void* self, void* topLeft, void* bottomRight, libqt_list roles);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KDirModel*
/// @param callback void func(KDirModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, int* /* of int */)
void k_dirmodel_on_data_changed3(void* self, void (*callback)(void*, void*, void*, int*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KDirModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
void k_dirmodel_layout_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KDirModel*
/// @param callback void func(KDirModel* self, QPersistentModelIndex** parents)
void k_dirmodel_on_layout_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KDirModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
/// @param hint enum QAbstractItemModel__LayoutChangeHint
void k_dirmodel_layout_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KDirModel*
/// @param callback void func(KDirModel* self, QPersistentModelIndex** parents, enum QAbstractItemModel__LayoutChangeHint hint)
void k_dirmodel_on_layout_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KDirModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
void k_dirmodel_layout_about_to_be_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KDirModel*
/// @param callback void func(KDirModel* self, QPersistentModelIndex** parents)
void k_dirmodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KDirModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
/// @param hint enum QAbstractItemModel__LayoutChangeHint
void k_dirmodel_layout_about_to_be_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KDirModel*
/// @param callback void func(KDirModel* self, QPersistentModelIndex** parents, enum QAbstractItemModel__LayoutChangeHint hint)
void k_dirmodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDirModel*
const char* k_dirmodel_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KDirModel*
/// @param name char*
void k_dirmodel_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KDirModel*
bool k_dirmodel_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KDirModel*
bool k_dirmodel_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KDirModel*
bool k_dirmodel_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KDirModel*
bool k_dirmodel_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KDirModel*
/// @param b bool
bool k_dirmodel_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KDirModel*
QThread* k_dirmodel_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KDirModel*
/// @param thread QThread*
bool k_dirmodel_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KDirModel*
/// @param interval int
int32_t k_dirmodel_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KDirModel*
/// @param id int
void k_dirmodel_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KDirModel*
/// @param id enum Qt__TimerId
void k_dirmodel_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KDirModel*
libqt_list /* of QObject* */ k_dirmodel_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KDirModel*
/// @param parent QObject*
void k_dirmodel_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KDirModel*
/// @param filterObj QObject*
void k_dirmodel_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KDirModel*
/// @param obj QObject*
void k_dirmodel_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_dirmodel_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KDirModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_dirmodel_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_dirmodel_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_dirmodel_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KDirModel*
void k_dirmodel_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KDirModel*
void k_dirmodel_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KDirModel*
/// @param name const char*
/// @param value QVariant*
bool k_dirmodel_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KDirModel*
/// @param name const char*
QVariant* k_dirmodel_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDirModel*
const char** k_dirmodel_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KDirModel*
QBindingStorage* k_dirmodel_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KDirModel*
const QBindingStorage* k_dirmodel_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KDirModel*
void k_dirmodel_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KDirModel*
/// @param callback void func(KDirModel* self)
void k_dirmodel_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KDirModel*
/// @param classname const char*
bool k_dirmodel_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KDirModel*
void k_dirmodel_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KDirModel*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_dirmodel_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KDirModel*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_dirmodel_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_dirmodel_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KDirModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_dirmodel_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KDirModel*
/// @param param1 QObject*
void k_dirmodel_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KDirModel*
/// @param callback void func(KDirModel* self, QObject* param1)
void k_dirmodel_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
bool k_dirmodel_set_header_data(void* self, int section, int32_t orientation, void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
bool k_dirmodel_qbase_set_header_data(void* self, int section, int32_t orientation, void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirModel*
/// @param callback bool func(KDirModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role)
void k_dirmodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirModel*
/// @param index QModelIndex*
libqt_map /* of int to QVariant* */ k_dirmodel_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirModel*
/// @param index QModelIndex*
libqt_map /* of int to QVariant* */ k_dirmodel_qbase_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirModel*
/// @param callback libqt_map /* of int to QVariant* */ func(KDirModel* self, QModelIndex* index)
void k_dirmodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirModel*
/// @param index QModelIndex*
/// @param roles libqt_map /* of int to QVariant* */
bool k_dirmodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirModel*
/// @param index QModelIndex*
/// @param roles libqt_map /* of int to QVariant* */
bool k_dirmodel_qbase_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirModel*
/// @param callback bool func(KDirModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ /* of int to QVariant* */)
void k_dirmodel_on_set_item_data(void* self, bool (*callback)(void*, void*, libqt_map /* of int to QVariant* */));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirModel*
/// @param index QModelIndex*
bool k_dirmodel_clear_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirModel*
/// @param index QModelIndex*
bool k_dirmodel_qbase_clear_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirModel*
/// @param callback bool func(KDirModel* self, QModelIndex* index)
void k_dirmodel_on_clear_item_data(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
bool k_dirmodel_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
bool k_dirmodel_qbase_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirModel*
/// @param callback bool func(KDirModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
void k_dirmodel_on_can_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirModel*
///
/// @return flag of enum Qt__DropAction
int32_t k_dirmodel_supported_drag_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirModel*
///
/// @return flag of enum Qt__DropAction
int32_t k_dirmodel_qbase_supported_drag_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirModel*
/// @param callback int32_t func()
void k_dirmodel_on_supported_drag_actions(void* self, int32_t (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
bool k_dirmodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
bool k_dirmodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirModel*
/// @param callback bool func(KDirModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild)
void k_dirmodel_on_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
bool k_dirmodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
bool k_dirmodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirModel*
/// @param callback bool func(KDirModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild)
void k_dirmodel_on_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirModel*
/// @param index QModelIndex*
QModelIndex* k_dirmodel_buddy(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirModel*
/// @param index QModelIndex*
QModelIndex* k_dirmodel_qbase_buddy(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirModel*
/// @param callback QModelIndex* func(KDirModel* self, QModelIndex* index)
void k_dirmodel_on_buddy(void* self, QModelIndex* (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
libqt_list /* of QModelIndex* */ k_dirmodel_match(void* self, void* start, int role, void* value, int hits, int32_t flags);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
libqt_list /* of QModelIndex* */ k_dirmodel_qbase_match(void* self, void* start, int role, void* value, int hits, int32_t flags);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirModel*
/// @param callback QModelIndex** func(KDirModel* self, QModelIndex* start, int role, QVariant* value, int hits, flag of enum Qt__MatchFlag flags)
void k_dirmodel_on_match(void* self, QModelIndex** (*callback)(void*, void*, int, void*, int, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirModel*
/// @param index QModelIndex*
QSize* k_dirmodel_span(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirModel*
/// @param index QModelIndex*
QSize* k_dirmodel_qbase_span(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirModel*
/// @param callback QSize* func(KDirModel* self, QModelIndex* index)
void k_dirmodel_on_span(void* self, QSize* (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
void k_dirmodel_multi_data(void* self, void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
void k_dirmodel_qbase_multi_data(void* self, void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirModel*
/// @param callback void func(KDirModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan)
void k_dirmodel_on_multi_data(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirModel*
bool k_dirmodel_submit(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirModel*
bool k_dirmodel_qbase_submit(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirModel*
/// @param callback bool func()
void k_dirmodel_on_submit(void* self, bool (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirModel*
void k_dirmodel_revert(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirModel*
void k_dirmodel_qbase_revert(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirModel*
/// @param callback void func()
void k_dirmodel_on_revert(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirModel*
void k_dirmodel_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirModel*
void k_dirmodel_qbase_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirModel*
/// @param callback void func()
void k_dirmodel_on_reset_internal_data(void* self, void (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirModel*
/// @param event QEvent*
bool k_dirmodel_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirModel*
/// @param event QEvent*
bool k_dirmodel_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirModel*
/// @param callback bool func(KDirModel* self, QEvent* event)
void k_dirmodel_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirModel*
/// @param watched QObject*
/// @param event QEvent*
bool k_dirmodel_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirModel*
/// @param watched QObject*
/// @param event QEvent*
bool k_dirmodel_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirModel*
/// @param callback bool func(KDirModel* self, QObject* watched, QEvent* event)
void k_dirmodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirModel*
/// @param event QTimerEvent*
void k_dirmodel_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirModel*
/// @param event QTimerEvent*
void k_dirmodel_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirModel*
/// @param callback void func(KDirModel* self, QTimerEvent* event)
void k_dirmodel_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirModel*
/// @param event QChildEvent*
void k_dirmodel_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirModel*
/// @param event QChildEvent*
void k_dirmodel_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirModel*
/// @param callback void func(KDirModel* self, QChildEvent* event)
void k_dirmodel_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirModel*
/// @param event QEvent*
void k_dirmodel_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirModel*
/// @param event QEvent*
void k_dirmodel_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirModel*
/// @param callback void func(KDirModel* self, QEvent* event)
void k_dirmodel_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirModel*
/// @param signal QMetaMethod*
void k_dirmodel_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirModel*
/// @param signal QMetaMethod*
void k_dirmodel_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirModel*
/// @param callback void func(KDirModel* self, QMetaMethod* signal)
void k_dirmodel_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirModel*
/// @param signal QMetaMethod*
void k_dirmodel_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirModel*
/// @param signal QMetaMethod*
void k_dirmodel_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirModel*
/// @param callback void func(KDirModel* self, QMetaMethod* signal)
void k_dirmodel_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirModel*
/// @param row int
/// @param column int
QModelIndex* k_dirmodel_create_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirModel*
/// @param row int
/// @param column int
QModelIndex* k_dirmodel_qbase_create_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirModel*
/// @param callback QModelIndex* func(KDirModel* self, int row, int column)
void k_dirmodel_on_create_index(void* self, QModelIndex* (*callback)(void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirModel*
/// @param indexes libqt_list /* of QModelIndex* */
/// @param stream QDataStream*
void k_dirmodel_encode_data(void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirModel*
/// @param indexes libqt_list /* of QModelIndex* */
/// @param stream QDataStream*
void k_dirmodel_qbase_encode_data(void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirModel*
/// @param callback void func(KDirModel* self, QModelIndex** indexes, QDataStream* stream)
void k_dirmodel_on_encode_data(void* self, void (*callback)(void*, QModelIndex**, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
/// @param stream QDataStream*
bool k_dirmodel_decode_data(void* self, int row, int column, void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
/// @param stream QDataStream*
bool k_dirmodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirModel*
/// @param callback bool func(KDirModel* self, int row, int column, QModelIndex* parent, QDataStream* stream)
void k_dirmodel_on_decode_data(void* self, bool (*callback)(void*, int, int, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void k_dirmodel_begin_insert_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void k_dirmodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirModel*
/// @param callback void func(KDirModel* self, QModelIndex* parent, int first, int last)
void k_dirmodel_on_begin_insert_rows(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirModel*
void k_dirmodel_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirModel*
void k_dirmodel_qbase_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirModel*
/// @param callback void func()
void k_dirmodel_on_end_insert_rows(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void k_dirmodel_begin_remove_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void k_dirmodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirModel*
/// @param callback void func(KDirModel* self, QModelIndex* parent, int first, int last)
void k_dirmodel_on_begin_remove_rows(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirModel*
void k_dirmodel_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirModel*
void k_dirmodel_qbase_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirModel*
/// @param callback void func()
void k_dirmodel_on_end_remove_rows(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationRow int
bool k_dirmodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationRow int
bool k_dirmodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirModel*
/// @param callback bool func(KDirModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow)
void k_dirmodel_on_begin_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirModel*
void k_dirmodel_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirModel*
void k_dirmodel_qbase_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirModel*
/// @param callback void func()
void k_dirmodel_on_end_move_rows(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void k_dirmodel_begin_insert_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void k_dirmodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirModel*
/// @param callback void func(KDirModel* self, QModelIndex* parent, int first, int last)
void k_dirmodel_on_begin_insert_columns(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirModel*
void k_dirmodel_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirModel*
void k_dirmodel_qbase_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirModel*
/// @param callback void func()
void k_dirmodel_on_end_insert_columns(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void k_dirmodel_begin_remove_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void k_dirmodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirModel*
/// @param callback void func(KDirModel* self, QModelIndex* parent, int first, int last)
void k_dirmodel_on_begin_remove_columns(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirModel*
void k_dirmodel_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirModel*
void k_dirmodel_qbase_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirModel*
/// @param callback void func()
void k_dirmodel_on_end_remove_columns(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationColumn int
bool k_dirmodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationColumn int
bool k_dirmodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirModel*
/// @param callback bool func(KDirModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn)
void k_dirmodel_on_begin_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirModel*
void k_dirmodel_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirModel*
void k_dirmodel_qbase_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirModel*
/// @param callback void func()
void k_dirmodel_on_end_move_columns(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirModel*
void k_dirmodel_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirModel*
void k_dirmodel_qbase_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirModel*
/// @param callback void func()
void k_dirmodel_on_begin_reset_model(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirModel*
void k_dirmodel_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirModel*
void k_dirmodel_qbase_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirModel*
/// @param callback void func()
void k_dirmodel_on_end_reset_model(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirModel*
/// @param from QModelIndex*
/// @param to QModelIndex*
void k_dirmodel_change_persistent_index(void* self, void* from, void* to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirModel*
/// @param from QModelIndex*
/// @param to QModelIndex*
void k_dirmodel_qbase_change_persistent_index(void* self, void* from, void* to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirModel*
/// @param callback void func(KDirModel* self, QModelIndex* from, QModelIndex* to)
void k_dirmodel_on_change_persistent_index(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirModel*
/// @param from libqt_list /* of QModelIndex* */
/// @param to libqt_list /* of QModelIndex* */
void k_dirmodel_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirModel*
/// @param from libqt_list /* of QModelIndex* */
/// @param to libqt_list /* of QModelIndex* */
void k_dirmodel_qbase_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirModel*
/// @param callback void func(KDirModel* self, QModelIndex** from, QModelIndex** to)
void k_dirmodel_on_change_persistent_index_list(void* self, void (*callback)(void*, QModelIndex**, QModelIndex**));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirModel*
libqt_list /* of QModelIndex* */ k_dirmodel_persistent_index_list(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirModel*
libqt_list /* of QModelIndex* */ k_dirmodel_qbase_persistent_index_list(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirModel*
/// @param callback QModelIndex** func()
void k_dirmodel_on_persistent_index_list(void* self, QModelIndex** (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirModel*
QObject* k_dirmodel_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirModel*
QObject* k_dirmodel_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirModel*
/// @param callback QObject* func()
void k_dirmodel_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirModel*
int32_t k_dirmodel_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirModel*
int32_t k_dirmodel_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirModel*
/// @param callback int32_t func()
void k_dirmodel_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirModel*
/// @param signal const char*
int32_t k_dirmodel_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirModel*
/// @param signal const char*
int32_t k_dirmodel_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirModel*
/// @param callback int32_t func(KDirModel* self, const char* signal)
void k_dirmodel_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirModel*
/// @param signal QMetaMethod*
bool k_dirmodel_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirModel*
/// @param signal QMetaMethod*
bool k_dirmodel_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirModel*
/// @param callback bool func(KDirModel* self, QMetaMethod* signal)
void k_dirmodel_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KDirModel*
/// @param callback void func(KDirModel* self, QModelIndex* parent, int first, int last)
void k_dirmodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KDirModel*
/// @param callback void func(KDirModel* self, QModelIndex* parent, int first, int last)
void k_dirmodel_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KDirModel*
/// @param callback void func(KDirModel* self, QModelIndex* parent, int first, int last)
void k_dirmodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KDirModel*
/// @param callback void func(KDirModel* self, QModelIndex* parent, int first, int last)
void k_dirmodel_on_rows_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KDirModel*
/// @param callback void func(KDirModel* self, QModelIndex* parent, int first, int last)
void k_dirmodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KDirModel*
/// @param callback void func(KDirModel* self, QModelIndex* parent, int first, int last)
void k_dirmodel_on_columns_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KDirModel*
/// @param callback void func(KDirModel* self, QModelIndex* parent, int first, int last)
void k_dirmodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KDirModel*
/// @param callback void func(KDirModel* self, QModelIndex* parent, int first, int last)
void k_dirmodel_on_columns_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelAboutToBeReset)
///
/// Wrapper to allow calling private signal
///
/// @param self KDirModel*
/// @param callback void func(KDirModel* self)
void k_dirmodel_on_model_about_to_be_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelReset)
///
/// Wrapper to allow calling private signal
///
/// @param self KDirModel*
/// @param callback void func(KDirModel* self)
void k_dirmodel_on_model_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KDirModel*
/// @param callback void func(KDirModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
void k_dirmodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KDirModel*
/// @param callback void func(KDirModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
void k_dirmodel_on_rows_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KDirModel*
/// @param callback void func(KDirModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
void k_dirmodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KDirModel*
/// @param callback void func(KDirModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
void k_dirmodel_on_columns_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KDirModel*
/// @param callback void func(KDirModel* self, const char* objectName)
void k_dirmodel_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kdirmodel.html#dtor.KDirModel)
///
/// Delete this object from C++ memory.
///
/// @param self KDirModel*
void k_dirmodel_delete(void* self);

/// https://api.kde.org/kdirmodel.html#types

typedef enum {
    KDIRMODEL_OPENURLFLAG_NOFLAGS = 0,
    KDIRMODEL_OPENURLFLAG_RELOAD = 1,
    KDIRMODEL_OPENURLFLAG_SHOWROOT = 2
} KDirModel__OpenUrlFlag;

typedef enum {
    KDIRMODEL_MODELCOLUMNS_NAME = 0,
    KDIRMODEL_MODELCOLUMNS_SIZE = 1,
    KDIRMODEL_MODELCOLUMNS_MODIFIEDTIME = 2,
    KDIRMODEL_MODELCOLUMNS_PERMISSIONS = 3,
    KDIRMODEL_MODELCOLUMNS_OWNER = 4,
    KDIRMODEL_MODELCOLUMNS_GROUP = 5,
    KDIRMODEL_MODELCOLUMNS_TYPE = 6,
    KDIRMODEL_MODELCOLUMNS_COLUMNCOUNT = 7
} KDirModel__ModelColumns;

typedef enum {
    KDIRMODEL__CHILDCOUNTUNKNOWN = -1
} KDirModel__;

typedef enum {
    KDIRMODEL_ADDITIONALROLES_FILEITEMROLE = 128082943,
    KDIRMODEL_ADDITIONALROLES_CHILDCOUNTROLE = 743246400,
    KDIRMODEL_ADDITIONALROLES_HASJOBROLE = 31806885,
    KDIRMODEL_ADDITIONALROLES_HANDLESEQUENCESROLE = 509878898
} KDirModel__AdditionalRoles;

typedef enum {
    KDIRMODEL_DROPSALLOWEDFLAG_NODROPS = 0,
    KDIRMODEL_DROPSALLOWEDFLAG_DROPONDIRECTORY = 1,
    KDIRMODEL_DROPSALLOWEDFLAG_DROPONANYFILE = 2,
    KDIRMODEL_DROPSALLOWEDFLAG_DROPONLOCALEXECUTABLE = 4
} KDirModel__DropsAllowedFlag;

#endif
