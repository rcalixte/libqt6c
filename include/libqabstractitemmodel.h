#pragma once
#ifndef LIBQABSTRACTITEMMODEL_H
#define LIBQABSTRACTITEMMODEL_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qmodelroledata.html)

/// q_modelroledata_new constructs a new QModelRoleData object.
///
/// @param role int
///
QModelRoleData* q_modelroledata_new(int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qmodelroledata.html)

/// q_modelroledata_new2 constructs a new QModelRoleData object.
///
/// @param param1 QModelRoleData*
///
QModelRoleData* q_modelroledata_new2(const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmodelroledata.html#role)
///
/// @param self const QModelRoleData*
///
int32_t q_modelroledata_role(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmodelroledata.html#data)
///
/// @param self QModelRoleData*
///
QVariant* q_modelroledata_data(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmodelroledata.html#data)
///
/// @param self const QModelRoleData*
///
const QVariant* q_modelroledata_data2(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmodelroledata.html#clearData)
///
/// @param self QModelRoleData*
///
void q_modelroledata_clear_data(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmodelroledata.html#operator-eq)
///
/// @param self QModelRoleData*
/// @param param1 QModelRoleData*
///
void q_modelroledata_operator_assign(void* self, const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmodelroledata.html#dtor.QModelRoleData)
///
/// Delete this object from C++ memory.
///
/// @param self QModelRoleData*
///
void q_modelroledata_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmodelroledataspan.html)

/// q_modelroledataspan_new constructs a new QModelRoleDataSpan object.
///
/// @param other QModelRoleDataSpan*
///
QModelRoleDataSpan* q_modelroledataspan_new(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmodelroledataspan.html)

/// q_modelroledataspan_new2 constructs a new QModelRoleDataSpan object and invalidates the source QModelRoleDataSpan object.
///
/// @param other QModelRoleDataSpan*
///
QModelRoleDataSpan* q_modelroledataspan_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmodelroledataspan.html)

/// q_modelroledataspan_new3 constructs a new QModelRoleDataSpan object.
///
QModelRoleDataSpan* q_modelroledataspan_new3();

/// [Upstream resources](https://doc.qt.io/qt-6/qmodelroledataspan.html)

/// q_modelroledataspan_new4 constructs a new QModelRoleDataSpan object.
///
/// @param modelRoleData QModelRoleData*
///
QModelRoleDataSpan* q_modelroledataspan_new4(void* modelRoleData);

/// [Upstream resources](https://doc.qt.io/qt-6/qmodelroledataspan.html)

/// q_modelroledataspan_new5 constructs a new QModelRoleDataSpan object.
///
/// @param modelRoleData QModelRoleData*
/// @param lenVal intptr_t
///
QModelRoleDataSpan* q_modelroledataspan_new5(void* modelRoleData, intptr_t lenVal);

/// [Upstream resources](https://doc.qt.io/qt-6/qmodelroledataspan.html)

/// q_modelroledataspan_new6 constructs a new QModelRoleDataSpan object.
///
/// @param param1 QModelRoleDataSpan*
///
QModelRoleDataSpan* q_modelroledataspan_new6(const void* param1);

/// q_modelroledataspan_copy_assign shallow copies `other` into `self`.
///
/// @param self QModelRoleDataSpan*
/// @param other QModelRoleDataSpan*
///
void q_modelroledataspan_copy_assign(void* self, void* other);

/// q_modelroledataspan_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QModelRoleDataSpan*
/// @param other QModelRoleDataSpan*
///
void q_modelroledataspan_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmodelroledataspan.html#size)
///
/// @param self const QModelRoleDataSpan*
///
intptr_t q_modelroledataspan_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmodelroledataspan.html#length)
///
/// @param self const QModelRoleDataSpan*
///
intptr_t q_modelroledataspan_length(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmodelroledataspan.html#data)
///
/// @param self const QModelRoleDataSpan*
///
QModelRoleData* q_modelroledataspan_data(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmodelroledataspan.html#begin)
///
/// @param self const QModelRoleDataSpan*
///
QModelRoleData* q_modelroledataspan_begin(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmodelroledataspan.html#end)
///
/// @param self const QModelRoleDataSpan*
///
QModelRoleData* q_modelroledataspan_end(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmodelroledataspan.html#operator-5b-5d)
///
/// @param self const QModelRoleDataSpan*
/// @param index intptr_t
///
QModelRoleData* q_modelroledataspan_operator_subscript(const void* self, intptr_t index);

/// [Upstream resources](https://doc.qt.io/qt-6/qmodelroledataspan.html#dataForRole)
///
/// @param self const QModelRoleDataSpan*
/// @param role int
///
QVariant* q_modelroledataspan_data_for_role(const void* self, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qmodelroledataspan.html#dtor.QModelRoleDataSpan)
///
/// Delete this object from C++ memory.
///
/// @param self QModelRoleDataSpan*
///
void q_modelroledataspan_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmodelindex.html)

/// q_modelindex_new constructs a new QModelIndex object.
///
/// @param other QModelIndex*
///
QModelIndex* q_modelindex_new(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmodelindex.html)

/// q_modelindex_new2 constructs a new QModelIndex object and invalidates the source QModelIndex object.
///
/// @param other QModelIndex*
///
QModelIndex* q_modelindex_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmodelindex.html)

/// q_modelindex_new3 constructs a new QModelIndex object.
///
QModelIndex* q_modelindex_new3();

/// [Upstream resources](https://doc.qt.io/qt-6/qmodelindex.html)

/// q_modelindex_new4 constructs a new QModelIndex object.
///
/// @param param1 QModelIndex*
///
QModelIndex* q_modelindex_new4(const void* param1);

/// q_modelindex_copy_assign shallow copies `other` into `self`.
///
/// @param self QModelIndex*
/// @param other QModelIndex*
///
void q_modelindex_copy_assign(void* self, void* other);

/// q_modelindex_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QModelIndex*
/// @param other QModelIndex*
///
void q_modelindex_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmodelindex.html#row)
///
/// @param self const QModelIndex*
///
int32_t q_modelindex_row(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmodelindex.html#column)
///
/// @param self const QModelIndex*
///
int32_t q_modelindex_column(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmodelindex.html#internalId)
///
/// @param self const QModelIndex*
///
uintptr_t q_modelindex_internal_id(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmodelindex.html#internalPointer)
///
/// @param self const QModelIndex*
///
void* q_modelindex_internal_pointer(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmodelindex.html#constInternalPointer)
///
/// @param self const QModelIndex*
///
const void* q_modelindex_const_internal_pointer(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmodelindex.html#parent)
///
/// @param self const QModelIndex*
///
QModelIndex* q_modelindex_parent(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmodelindex.html#sibling)
///
/// @param self const QModelIndex*
/// @param row int
/// @param column int
///
QModelIndex* q_modelindex_sibling(const void* self, int row, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qmodelindex.html#siblingAtColumn)
///
/// @param self const QModelIndex*
/// @param column int
///
QModelIndex* q_modelindex_sibling_at_column(const void* self, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qmodelindex.html#siblingAtRow)
///
/// @param self const QModelIndex*
/// @param row int
///
QModelIndex* q_modelindex_sibling_at_row(const void* self, int row);

/// [Upstream resources](https://doc.qt.io/qt-6/qmodelindex.html#data)
///
/// @param self const QModelIndex*
///
QVariant* q_modelindex_data(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmodelindex.html#multiData)
///
/// @param self const QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
///
void q_modelindex_multi_data(const void* self, void* roleDataSpan);

/// [Upstream resources](https://doc.qt.io/qt-6/qmodelindex.html#flags)
///
/// @param self const QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
///
int32_t q_modelindex_flags(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmodelindex.html#model)
///
/// @param self const QModelIndex*
///
const QAbstractItemModel* q_modelindex_model(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmodelindex.html#isValid)
///
/// @param self const QModelIndex*
///
bool q_modelindex_is_valid(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmodelindex.html#data)
///
/// @param self const QModelIndex*
/// @param role int
///
QVariant* q_modelindex_data1(const void* self, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qmodelindex.html#dtor.QModelIndex)
///
/// Delete this object from C++ memory.
///
/// @param self QModelIndex*
///
void q_modelindex_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#qHash)
///
/// @param index QPersistentModelIndex*
/// @param seed size_t
///
size_t q_qabstractitemmodel_q_hash(const void* index, size_t seed);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#qHash)
///
/// @param index QPersistentModelIndex*
/// @param seed size_t
///
size_t q_qabstractitemmodel_q_hash2(const void* index, size_t seed);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#qHash)
///
/// @param index QModelIndex*
/// @param seed size_t
///
size_t q_qabstractitemmodel_q_hash3(const void* index, size_t seed);

/// [Upstream resources](https://doc.qt.io/qt-6/qpersistentmodelindex.html)

/// q_persistentmodelindex_new constructs a new QPersistentModelIndex object.
///
QPersistentModelIndex* q_persistentmodelindex_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qpersistentmodelindex.html)

/// q_persistentmodelindex_new2 constructs a new QPersistentModelIndex object.
///
/// @param index QModelIndex*
///
QPersistentModelIndex* q_persistentmodelindex_new2(const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qpersistentmodelindex.html)

/// q_persistentmodelindex_new3 constructs a new QPersistentModelIndex object.
///
/// @param other QPersistentModelIndex*
///
QPersistentModelIndex* q_persistentmodelindex_new3(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qpersistentmodelindex.html#operator-eq)
///
/// @param self QPersistentModelIndex*
/// @param other QPersistentModelIndex*
///
void q_persistentmodelindex_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qpersistentmodelindex.html#swap)
///
/// @param self QPersistentModelIndex*
/// @param other QPersistentModelIndex*
///
void q_persistentmodelindex_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qpersistentmodelindex.html#operator-eq)
///
/// @param self QPersistentModelIndex*
/// @param other QModelIndex*
///
void q_persistentmodelindex_operator_assign2(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qpersistentmodelindex.html#operator-QModelIndex)
///
/// @param self const QPersistentModelIndex*
///
QModelIndex* q_persistentmodelindex_to_q_model_index(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpersistentmodelindex.html#row)
///
/// @param self const QPersistentModelIndex*
///
int32_t q_persistentmodelindex_row(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpersistentmodelindex.html#column)
///
/// @param self const QPersistentModelIndex*
///
int32_t q_persistentmodelindex_column(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpersistentmodelindex.html#internalPointer)
///
/// @param self const QPersistentModelIndex*
///
void* q_persistentmodelindex_internal_pointer(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpersistentmodelindex.html#constInternalPointer)
///
/// @param self const QPersistentModelIndex*
///
const void* q_persistentmodelindex_const_internal_pointer(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpersistentmodelindex.html#internalId)
///
/// @param self const QPersistentModelIndex*
///
uintptr_t q_persistentmodelindex_internal_id(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpersistentmodelindex.html#parent)
///
/// @param self const QPersistentModelIndex*
///
QModelIndex* q_persistentmodelindex_parent(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpersistentmodelindex.html#sibling)
///
/// @param self const QPersistentModelIndex*
/// @param row int
/// @param column int
///
QModelIndex* q_persistentmodelindex_sibling(const void* self, int row, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qpersistentmodelindex.html#data)
///
/// @param self const QPersistentModelIndex*
///
QVariant* q_persistentmodelindex_data(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpersistentmodelindex.html#multiData)
///
/// @param self const QPersistentModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
///
void q_persistentmodelindex_multi_data(const void* self, void* roleDataSpan);

/// [Upstream resources](https://doc.qt.io/qt-6/qpersistentmodelindex.html#flags)
///
/// @param self const QPersistentModelIndex*
///
/// @return flag of enum Qt__ItemFlag
///
int32_t q_persistentmodelindex_flags(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpersistentmodelindex.html#model)
///
/// @param self const QPersistentModelIndex*
///
const QAbstractItemModel* q_persistentmodelindex_model(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpersistentmodelindex.html#isValid)
///
/// @param self const QPersistentModelIndex*
///
bool q_persistentmodelindex_is_valid(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpersistentmodelindex.html#data)
///
/// @param self const QPersistentModelIndex*
/// @param role int
///
QVariant* q_persistentmodelindex_data1(const void* self, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qpersistentmodelindex.html#dtor.QPersistentModelIndex)
///
/// Delete this object from C++ memory.
///
/// @param self QPersistentModelIndex*
///
void q_persistentmodelindex_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html)

/// q_abstractitemmodel_new constructs a new QAbstractItemModel object.
///
QAbstractItemModel* q_abstractitemmodel_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html)

/// q_abstractitemmodel_new2 constructs a new QAbstractItemModel object.
///
/// @param parent QObject*
///
QAbstractItemModel* q_abstractitemmodel_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QAbstractItemModel*
///
const QMetaObject* q_abstractitemmodel_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const QAbstractItemModel*
/// @param callback const QMetaObject* func(const QAbstractItemModel* self)
///
void q_abstractitemmodel_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QAbstractItemModel*
///
const QMetaObject* q_abstractitemmodel_super_meta_object(const void* self);

/// @param self QAbstractItemModel*
/// @param param1 const char*
///
void* q_abstractitemmodel_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback void* func(QAbstractItemModel* self, const char* param1)
///
void q_abstractitemmodel_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QAbstractItemModel*
/// @param param1 const char*
///
void* q_abstractitemmodel_super_metacast(void* self, const char* param1);

/// @param self QAbstractItemModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_abstractitemmodel_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback int32_t func(QAbstractItemModel* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_abstractitemmodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QAbstractItemModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_abstractitemmodel_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_abstractitemmodel_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self const QAbstractItemModel*
/// @param row int
/// @param column int
///
bool q_abstractitemmodel_has_index(const void* self, int row, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#index)
///
/// @warning This method must be implemented with `q_abstractitemmodel_on_index` before it can be called.
///
/// @param self const QAbstractItemModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
QModelIndex* q_abstractitemmodel_index(const void* self, int row, int column, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#index)
///
/// Allows for overriding the related default method
///
/// @param self const QAbstractItemModel*
/// @param callback QModelIndex* func(const QAbstractItemModel* self, int row, int column, QModelIndex* parent)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_abstractitemmodel_on_index(const void* self, QModelIndex* (*callback)(const void*, int, int, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
///
/// @warning This method must be implemented with `q_abstractitemmodel_on_parent` before it can be called.
///
/// @param self const QAbstractItemModel*
/// @param child QModelIndex*
///
QModelIndex* q_abstractitemmodel_parent(const void* self, const void* child);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
///
/// Allows for overriding the related default method
///
/// @param self const QAbstractItemModel*
/// @param callback QModelIndex* func(const QAbstractItemModel* self, QModelIndex* child)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_abstractitemmodel_on_parent(const void* self, QModelIndex* (*callback)(const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sibling)
///
/// @param self const QAbstractItemModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
///
QModelIndex* q_abstractitemmodel_sibling(const void* self, int row, int column, const void* idx);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sibling)
///
/// Allows for overriding the related default method
///
/// @param self const QAbstractItemModel*
/// @param callback QModelIndex* func(const QAbstractItemModel* self, int row, int column, QModelIndex* idx)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_abstractitemmodel_on_sibling(const void* self, QModelIndex* (*callback)(const void*, int, int, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sibling)
///
/// Base class method implementation
///
/// @param self const QAbstractItemModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
///
QModelIndex* q_abstractitemmodel_super_sibling(const void* self, int row, int column, const void* idx);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowCount)
///
/// @warning This method must be implemented with `q_abstractitemmodel_on_row_count` before it can be called.
///
/// @param self const QAbstractItemModel*
/// @param parent QModelIndex*
///
int32_t q_abstractitemmodel_row_count(const void* self, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowCount)
///
/// Allows for overriding the related default method
///
/// @param self const QAbstractItemModel*
/// @param callback int32_t func(const QAbstractItemModel* self, QModelIndex* parent)
///
void q_abstractitemmodel_on_row_count(const void* self, int32_t (*callback)(const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnCount)
///
/// @warning This method must be implemented with `q_abstractitemmodel_on_column_count` before it can be called.
///
/// @param self const QAbstractItemModel*
/// @param parent QModelIndex*
///
int32_t q_abstractitemmodel_column_count(const void* self, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnCount)
///
/// Allows for overriding the related default method
///
/// @param self const QAbstractItemModel*
/// @param callback int32_t func(const QAbstractItemModel* self, QModelIndex* parent)
///
void q_abstractitemmodel_on_column_count(const void* self, int32_t (*callback)(const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// @param self const QAbstractItemModel*
/// @param parent QModelIndex*
///
bool q_abstractitemmodel_has_children(const void* self, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// Allows for overriding the related default method
///
/// @param self const QAbstractItemModel*
/// @param callback bool func(const QAbstractItemModel* self, QModelIndex* parent)
///
void q_abstractitemmodel_on_has_children(const void* self, bool (*callback)(const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// Base class method implementation
///
/// @param self const QAbstractItemModel*
/// @param parent QModelIndex*
///
bool q_abstractitemmodel_super_has_children(const void* self, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#data)
///
/// @warning This method must be implemented with `q_abstractitemmodel_on_data` before it can be called.
///
/// @param self const QAbstractItemModel*
/// @param index QModelIndex*
/// @param role int
///
QVariant* q_abstractitemmodel_data(const void* self, const void* index, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#data)
///
/// Allows for overriding the related default method
///
/// @param self const QAbstractItemModel*
/// @param callback QVariant* func(const QAbstractItemModel* self, QModelIndex* index, int role)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_abstractitemmodel_on_data(const void* self, QVariant* (*callback)(const void*, const void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
///
/// @param self QAbstractItemModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
///
bool q_abstractitemmodel_set_data(void* self, const void* index, const void* value, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback bool func(QAbstractItemModel* self, QModelIndex* index, QVariant* value, int role)
///
void q_abstractitemmodel_on_set_data(void* self, bool (*callback)(void*, const void*, const void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
///
/// Base class method implementation
///
/// @param self QAbstractItemModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
///
bool q_abstractitemmodel_super_set_data(void* self, const void* index, const void* value, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
///
/// @param self const QAbstractItemModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
///
QVariant* q_abstractitemmodel_header_data(const void* self, int section, int32_t orientation, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
///
/// Allows for overriding the related default method
///
/// @param self const QAbstractItemModel*
/// @param callback QVariant* func(const QAbstractItemModel* self, int section, enum Qt__Orientation orientation, int role)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_abstractitemmodel_on_header_data(const void* self, QVariant* (*callback)(const void*, int, int32_t, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
///
/// Base class method implementation
///
/// @param self const QAbstractItemModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
///
QVariant* q_abstractitemmodel_super_header_data(const void* self, int section, int32_t orientation, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// @param self QAbstractItemModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
///
bool q_abstractitemmodel_set_header_data(void* self, int section, int32_t orientation, const void* value, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback bool func(QAbstractItemModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role)
///
void q_abstractitemmodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, const void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Base class method implementation
///
/// @param self QAbstractItemModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
///
bool q_abstractitemmodel_super_set_header_data(void* self, int section, int32_t orientation, const void* value, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map of int to QVariant*
/// for (size_t i = 0; i < map.len; ++i) {
///     free(((QVariant*)map.values)[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// @param self const QAbstractItemModel*
/// @param index QModelIndex*
///
/// @return libqt_map of int to QVariant*
///
libqt_map q_abstractitemmodel_item_data(const void* self, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// Allows for overriding the related default method
///
/// @param self const QAbstractItemModel*
/// @param callback libqt_map of int to QVariant* func(const QAbstractItemModel* self, QModelIndex* index)
///
void q_abstractitemmodel_on_item_data(const void* self, libqt_map (*callback)(const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// Base class method implementation
///
/// @param self const QAbstractItemModel*
/// @param index QModelIndex*
///
/// @return libqt_map of int to QVariant*
///
libqt_map q_abstractitemmodel_super_item_data(const void* self, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// @param self QAbstractItemModel*
/// @param index QModelIndex*
/// @param roles libqt_map of int to QVariant*
///
bool q_abstractitemmodel_set_item_data(void* self, const void* index, libqt_map roles);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback bool func(QAbstractItemModel* self, QModelIndex* index, libqt_map of int to QVariant* roles)
///
void q_abstractitemmodel_on_set_item_data(void* self, bool (*callback)(void*, const void*, libqt_map));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Base class method implementation
///
/// @param self QAbstractItemModel*
/// @param index QModelIndex*
/// @param roles libqt_map of int to QVariant*
///
bool q_abstractitemmodel_super_set_item_data(void* self, const void* index, libqt_map roles);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// @param self QAbstractItemModel*
/// @param index QModelIndex*
///
bool q_abstractitemmodel_clear_item_data(void* self, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback bool func(QAbstractItemModel* self, QModelIndex* index)
///
void q_abstractitemmodel_on_clear_item_data(void* self, bool (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Base class method implementation
///
/// @param self QAbstractItemModel*
/// @param index QModelIndex*
///
bool q_abstractitemmodel_super_clear_item_data(void* self, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QAbstractItemModel*
///
const char** q_abstractitemmodel_mime_types(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// Allows for overriding the related default method
///
/// @param self const QAbstractItemModel*
/// @param callback const char** func(const QAbstractItemModel* self)
///
void q_abstractitemmodel_on_mime_types(const void* self, const char** (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// Base class method implementation
///
/// @param self const QAbstractItemModel*
///
const char** q_abstractitemmodel_super_mime_types(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// @param self const QAbstractItemModel*
/// @param indexes libqt_list of QModelIndex*
///
QMimeData* q_abstractitemmodel_mime_data(const void* self, libqt_list indexes);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// Allows for overriding the related default method
///
/// @param self const QAbstractItemModel*
/// @param callback QMimeData* func(const QAbstractItemModel* self, libqt_list of QModelIndex* indexes)
///
void q_abstractitemmodel_on_mime_data(const void* self, QMimeData* (*callback)(const void*, libqt_list));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// Base class method implementation
///
/// @param self const QAbstractItemModel*
/// @param indexes libqt_list of QModelIndex*
///
QMimeData* q_abstractitemmodel_super_mime_data(const void* self, libqt_list indexes);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// @param self const QAbstractItemModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_abstractitemmodel_can_drop_mime_data(const void* self, const void* data, int32_t action, int row, int column, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Allows for overriding the related default method
///
/// @param self const QAbstractItemModel*
/// @param callback bool func(const QAbstractItemModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
///
void q_abstractitemmodel_on_can_drop_mime_data(const void* self, bool (*callback)(const void*, const void*, int32_t, int, int, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Base class method implementation
///
/// @param self const QAbstractItemModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_abstractitemmodel_super_can_drop_mime_data(const void* self, const void* data, int32_t action, int row, int column, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dropMimeData)
///
/// @param self QAbstractItemModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_abstractitemmodel_drop_mime_data(void* self, const void* data, int32_t action, int row, int column, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dropMimeData)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback bool func(QAbstractItemModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
///
void q_abstractitemmodel_on_drop_mime_data(void* self, bool (*callback)(void*, const void*, int32_t, int, int, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dropMimeData)
///
/// Base class method implementation
///
/// @param self QAbstractItemModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_abstractitemmodel_super_drop_mime_data(void* self, const void* data, int32_t action, int row, int column, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// @param self const QAbstractItemModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_abstractitemmodel_supported_drop_actions(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Allows for overriding the related default method
///
/// @param self const QAbstractItemModel*
/// @param callback int32_t func(const QAbstractItemModel* self)
///
void q_abstractitemmodel_on_supported_drop_actions(const void* self, int32_t (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Base class method implementation
///
/// @param self const QAbstractItemModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_abstractitemmodel_super_supported_drop_actions(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// @param self const QAbstractItemModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_abstractitemmodel_supported_drag_actions(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Allows for overriding the related default method
///
/// @param self const QAbstractItemModel*
/// @param callback int32_t func(const QAbstractItemModel* self)
///
void q_abstractitemmodel_on_supported_drag_actions(const void* self, int32_t (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Base class method implementation
///
/// @param self const QAbstractItemModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_abstractitemmodel_super_supported_drag_actions(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// @param self QAbstractItemModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool q_abstractitemmodel_insert_rows(void* self, int row, int count, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback bool func(QAbstractItemModel* self, int row, int count, QModelIndex* parent)
///
void q_abstractitemmodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Base class method implementation
///
/// @param self QAbstractItemModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool q_abstractitemmodel_super_insert_rows(void* self, int row, int count, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// @param self QAbstractItemModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool q_abstractitemmodel_insert_columns(void* self, int column, int count, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback bool func(QAbstractItemModel* self, int column, int count, QModelIndex* parent)
///
void q_abstractitemmodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Base class method implementation
///
/// @param self QAbstractItemModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool q_abstractitemmodel_super_insert_columns(void* self, int column, int count, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// @param self QAbstractItemModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool q_abstractitemmodel_remove_rows(void* self, int row, int count, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback bool func(QAbstractItemModel* self, int row, int count, QModelIndex* parent)
///
void q_abstractitemmodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Base class method implementation
///
/// @param self QAbstractItemModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool q_abstractitemmodel_super_remove_rows(void* self, int row, int count, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// @param self QAbstractItemModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool q_abstractitemmodel_remove_columns(void* self, int column, int count, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback bool func(QAbstractItemModel* self, int column, int count, QModelIndex* parent)
///
void q_abstractitemmodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Base class method implementation
///
/// @param self QAbstractItemModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool q_abstractitemmodel_super_remove_columns(void* self, int column, int count, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// @param self QAbstractItemModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_abstractitemmodel_move_rows(void* self, const void* sourceParent, int sourceRow, int count, const void* destinationParent, int destinationChild);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback bool func(QAbstractItemModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild)
///
void q_abstractitemmodel_on_move_rows(void* self, bool (*callback)(void*, const void*, int, int, const void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Base class method implementation
///
/// @param self QAbstractItemModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_abstractitemmodel_super_move_rows(void* self, const void* sourceParent, int sourceRow, int count, const void* destinationParent, int destinationChild);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// @param self QAbstractItemModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_abstractitemmodel_move_columns(void* self, const void* sourceParent, int sourceColumn, int count, const void* destinationParent, int destinationChild);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback bool func(QAbstractItemModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild)
///
void q_abstractitemmodel_on_move_columns(void* self, bool (*callback)(void*, const void*, int, int, const void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Base class method implementation
///
/// @param self QAbstractItemModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_abstractitemmodel_super_move_columns(void* self, const void* sourceParent, int sourceColumn, int count, const void* destinationParent, int destinationChild);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self QAbstractItemModel*
/// @param row int
///
bool q_abstractitemmodel_insert_row(void* self, int row);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self QAbstractItemModel*
/// @param column int
///
bool q_abstractitemmodel_insert_column(void* self, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self QAbstractItemModel*
/// @param row int
///
bool q_abstractitemmodel_remove_row(void* self, int row);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self QAbstractItemModel*
/// @param column int
///
bool q_abstractitemmodel_remove_column(void* self, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
///
/// @param self QAbstractItemModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_abstractitemmodel_move_row(void* self, const void* sourceParent, int sourceRow, const void* destinationParent, int destinationChild);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
///
/// @param self QAbstractItemModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_abstractitemmodel_move_column(void* self, const void* sourceParent, int sourceColumn, const void* destinationParent, int destinationChild);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// @param self QAbstractItemModel*
/// @param parent QModelIndex*
///
void q_abstractitemmodel_fetch_more(void* self, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback void func(QAbstractItemModel* self, QModelIndex* parent)
///
void q_abstractitemmodel_on_fetch_more(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Base class method implementation
///
/// @param self QAbstractItemModel*
/// @param parent QModelIndex*
///
void q_abstractitemmodel_super_fetch_more(void* self, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// @param self const QAbstractItemModel*
/// @param parent QModelIndex*
///
bool q_abstractitemmodel_can_fetch_more(const void* self, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Allows for overriding the related default method
///
/// @param self const QAbstractItemModel*
/// @param callback bool func(const QAbstractItemModel* self, QModelIndex* parent)
///
void q_abstractitemmodel_on_can_fetch_more(const void* self, bool (*callback)(const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Base class method implementation
///
/// @param self const QAbstractItemModel*
/// @param parent QModelIndex*
///
bool q_abstractitemmodel_super_can_fetch_more(const void* self, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#flags)
///
/// @param self const QAbstractItemModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
///
int32_t q_abstractitemmodel_flags(const void* self, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#flags)
///
/// Allows for overriding the related default method
///
/// @param self const QAbstractItemModel*
/// @param callback int32_t func(const QAbstractItemModel* self, QModelIndex* index)
///
void q_abstractitemmodel_on_flags(const void* self, int32_t (*callback)(const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#flags)
///
/// Base class method implementation
///
/// @param self const QAbstractItemModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
///
int32_t q_abstractitemmodel_super_flags(const void* self, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
///
/// @param self QAbstractItemModel*
/// @param column int
/// @param order enum Qt__SortOrder
///
void q_abstractitemmodel_sort(void* self, int column, int32_t order);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback void func(QAbstractItemModel* self, int column, enum Qt__SortOrder order)
///
void q_abstractitemmodel_on_sort(void* self, void (*callback)(void*, int, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
///
/// Base class method implementation
///
/// @param self QAbstractItemModel*
/// @param column int
/// @param order enum Qt__SortOrder
///
void q_abstractitemmodel_super_sort(void* self, int column, int32_t order);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// @param self const QAbstractItemModel*
/// @param index QModelIndex*
///
QModelIndex* q_abstractitemmodel_buddy(const void* self, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Allows for overriding the related default method
///
/// @param self const QAbstractItemModel*
/// @param callback QModelIndex* func(const QAbstractItemModel* self, QModelIndex* index)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_abstractitemmodel_on_buddy(const void* self, QModelIndex* (*callback)(const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Base class method implementation
///
/// @param self const QAbstractItemModel*
/// @param index QModelIndex*
///
QModelIndex* q_abstractitemmodel_super_buddy(const void* self, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// @param self const QAbstractItemModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
///
/// @return libqt_list of QModelIndex*
///
libqt_list q_abstractitemmodel_match(const void* self, const void* start, int role, const void* value, int hits, int32_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Allows for overriding the related default method
///
/// @param self const QAbstractItemModel*
/// @param callback libqt_list of QModelIndex* func(const QAbstractItemModel* self, QModelIndex* start, int role, QVariant* value, int hits, flag of enum Qt__MatchFlag flags)
///
void q_abstractitemmodel_on_match(const void* self, libqt_list (*callback)(const void*, const void*, int, const void*, int, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Base class method implementation
///
/// @param self const QAbstractItemModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
///
/// @return libqt_list of QModelIndex*
///
libqt_list q_abstractitemmodel_super_match(const void* self, const void* start, int role, const void* value, int hits, int32_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// @param self const QAbstractItemModel*
/// @param index QModelIndex*
///
QSize* q_abstractitemmodel_span(const void* self, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Allows for overriding the related default method
///
/// @param self const QAbstractItemModel*
/// @param callback QSize* func(const QAbstractItemModel* self, QModelIndex* index)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_abstractitemmodel_on_span(const void* self, QSize* (*callback)(const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Base class method implementation
///
/// @param self const QAbstractItemModel*
/// @param index QModelIndex*
///
QSize* q_abstractitemmodel_super_span(const void* self, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#roleNames)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map of int to char*
/// for (size_t i = 0; i < map.len; ++i) {
///     libqt_free(map.values[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// @param self const QAbstractItemModel*
///
/// @return libqt_map of int to char*
///
libqt_map q_abstractitemmodel_role_names(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#roleNames)
///
/// Allows for overriding the related default method
///
/// @param self const QAbstractItemModel*
/// @param callback libqt_map of int to char* func(const QAbstractItemModel* self)
///
void q_abstractitemmodel_on_role_names(const void* self, libqt_map (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#roleNames)
///
/// Base class method implementation
///
/// @param self const QAbstractItemModel*
///
/// @return libqt_map of int to char*
///
libqt_map q_abstractitemmodel_super_role_names(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self const QAbstractItemModel*
/// @param index QModelIndex*
///
bool q_abstractitemmodel_check_index(const void* self, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// @param self const QAbstractItemModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
///
void q_abstractitemmodel_multi_data(const void* self, const void* index, void* roleDataSpan);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Allows for overriding the related default method
///
/// @param self const QAbstractItemModel*
/// @param callback void func(const QAbstractItemModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan)
///
void q_abstractitemmodel_on_multi_data(const void* self, void (*callback)(const void*, const void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Base class method implementation
///
/// @param self const QAbstractItemModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
///
void q_abstractitemmodel_super_multi_data(const void* self, const void* index, void* roleDataSpan);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QAbstractItemModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
///
void q_abstractitemmodel_data_changed(void* self, const void* topLeft, const void* bottomRight);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QAbstractItemModel*
/// @param callback void func(QAbstractItemModel* self, QModelIndex* topLeft, QModelIndex* bottomRight)
///
void q_abstractitemmodel_on_data_changed(void* self, void (*callback)(void*, const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self QAbstractItemModel*
/// @param orientation enum Qt__Orientation
/// @param first int
/// @param last int
///
void q_abstractitemmodel_header_data_changed(void* self, int32_t orientation, int first, int last);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self QAbstractItemModel*
/// @param callback void func(QAbstractItemModel* self, enum Qt__Orientation orientation, int first, int last)
///
void q_abstractitemmodel_on_header_data_changed(void* self, void (*callback)(void*, int32_t, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QAbstractItemModel*
///
void q_abstractitemmodel_layout_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QAbstractItemModel*
/// @param callback void func(QAbstractItemModel* self)
///
void q_abstractitemmodel_on_layout_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QAbstractItemModel*
///
void q_abstractitemmodel_layout_about_to_be_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QAbstractItemModel*
/// @param callback void func(QAbstractItemModel* self)
///
void q_abstractitemmodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// @param self QAbstractItemModel*
///
bool q_abstractitemmodel_submit(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback bool func(QAbstractItemModel* self)
///
void q_abstractitemmodel_on_submit(void* self, bool (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Base class method implementation
///
/// @param self QAbstractItemModel*
///
bool q_abstractitemmodel_super_submit(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// @param self QAbstractItemModel*
///
void q_abstractitemmodel_revert(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback void func(QAbstractItemModel* self)
///
void q_abstractitemmodel_on_revert(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Base class method implementation
///
/// @param self QAbstractItemModel*
///
void q_abstractitemmodel_super_revert(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// @param self QAbstractItemModel*
///
void q_abstractitemmodel_reset_internal_data(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback void func(QAbstractItemModel* self)
///
void q_abstractitemmodel_on_reset_internal_data(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Base class method implementation
///
/// @param self QAbstractItemModel*
///
void q_abstractitemmodel_super_reset_internal_data(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// @param self const QAbstractItemModel*
/// @param row int
/// @param column int
///
QModelIndex* q_abstractitemmodel_create_index(const void* self, int row, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// @param self const QAbstractItemModel*
/// @param row int
/// @param column int
/// @param id uintptr_t
///
QModelIndex* q_abstractitemmodel_create_index2(const void* self, int row, int column, uintptr_t id);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// @param self const QAbstractItemModel*
/// @param indexes libqt_list of QModelIndex*
/// @param stream QDataStream*
///
void q_abstractitemmodel_encode_data(const void* self, libqt_list indexes, void* stream);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// @param self QAbstractItemModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
/// @param stream QDataStream*
///
bool q_abstractitemmodel_decode_data(void* self, int row, int column, const void* parent, void* stream);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// @param self QAbstractItemModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_abstractitemmodel_begin_insert_rows(void* self, const void* parent, int first, int last);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// @param self QAbstractItemModel*
///
void q_abstractitemmodel_end_insert_rows(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// @param self QAbstractItemModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_abstractitemmodel_begin_remove_rows(void* self, const void* parent, int first, int last);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// @param self QAbstractItemModel*
///
void q_abstractitemmodel_end_remove_rows(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// @param self QAbstractItemModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationRow int
///
bool q_abstractitemmodel_begin_move_rows(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationRow);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// @param self QAbstractItemModel*
///
void q_abstractitemmodel_end_move_rows(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// @param self QAbstractItemModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_abstractitemmodel_begin_insert_columns(void* self, const void* parent, int first, int last);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// @param self QAbstractItemModel*
///
void q_abstractitemmodel_end_insert_columns(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// @param self QAbstractItemModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_abstractitemmodel_begin_remove_columns(void* self, const void* parent, int first, int last);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// @param self QAbstractItemModel*
///
void q_abstractitemmodel_end_remove_columns(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// @param self QAbstractItemModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationColumn int
///
bool q_abstractitemmodel_begin_move_columns(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationColumn);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// @param self QAbstractItemModel*
///
void q_abstractitemmodel_end_move_columns(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// @param self QAbstractItemModel*
///
void q_abstractitemmodel_begin_reset_model(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// @param self QAbstractItemModel*
///
void q_abstractitemmodel_end_reset_model(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// @param self QAbstractItemModel*
/// @param from QModelIndex*
/// @param to QModelIndex*
///
void q_abstractitemmodel_change_persistent_index(void* self, const void* from, const void* to);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// @param self QAbstractItemModel*
/// @param from libqt_list of QModelIndex*
/// @param to libqt_list of QModelIndex*
///
void q_abstractitemmodel_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// @param self const QAbstractItemModel*
///
/// @return libqt_list of QModelIndex*
///
libqt_list q_abstractitemmodel_persistent_index_list(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_abstractitemmodel_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_abstractitemmodel_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self const QAbstractItemModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_abstractitemmodel_has_index3(const void* self, int row, int column, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self QAbstractItemModel*
/// @param row int
/// @param parent QModelIndex*
///
bool q_abstractitemmodel_insert_row2(void* self, int row, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self QAbstractItemModel*
/// @param column int
/// @param parent QModelIndex*
///
bool q_abstractitemmodel_insert_column2(void* self, int column, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self QAbstractItemModel*
/// @param row int
/// @param parent QModelIndex*
///
bool q_abstractitemmodel_remove_row2(void* self, int row, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self QAbstractItemModel*
/// @param column int
/// @param parent QModelIndex*
///
bool q_abstractitemmodel_remove_column2(void* self, int column, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self const QAbstractItemModel*
/// @param index QModelIndex*
/// @param options flag of enum QAbstractItemModel__CheckIndexOption
///
bool q_abstractitemmodel_check_index2(const void* self, const void* index, int32_t options);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QAbstractItemModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
/// @param roles libqt_list of int
///
void q_abstractitemmodel_data_changed3(void* self, const void* topLeft, const void* bottomRight, libqt_list roles);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QAbstractItemModel*
/// @param callback void func(QAbstractItemModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, libqt_list of int roles)
///
void q_abstractitemmodel_on_data_changed3(void* self, void (*callback)(void*, const void*, const void*, libqt_list));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QAbstractItemModel*
/// @param parents libqt_list of QPersistentModelIndex*
///
void q_abstractitemmodel_layout_changed1(void* self, libqt_list parents);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QAbstractItemModel*
/// @param callback void func(QAbstractItemModel* self, libqt_list of QPersistentModelIndex* parents)
///
void q_abstractitemmodel_on_layout_changed1(void* self, void (*callback)(void*, libqt_list));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QAbstractItemModel*
/// @param parents libqt_list of QPersistentModelIndex*
/// @param hint enum QAbstractItemModel__LayoutChangeHint
///
void q_abstractitemmodel_layout_changed2(void* self, libqt_list parents, int32_t hint);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QAbstractItemModel*
/// @param callback void func(QAbstractItemModel* self, libqt_list of QPersistentModelIndex* parents, enum QAbstractItemModel__LayoutChangeHint hint)
///
void q_abstractitemmodel_on_layout_changed2(void* self, void (*callback)(void*, libqt_list, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QAbstractItemModel*
/// @param parents libqt_list of QPersistentModelIndex*
///
void q_abstractitemmodel_layout_about_to_be_changed1(void* self, libqt_list parents);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QAbstractItemModel*
/// @param callback void func(QAbstractItemModel* self, libqt_list of QPersistentModelIndex* parents)
///
void q_abstractitemmodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, libqt_list));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QAbstractItemModel*
/// @param parents libqt_list of QPersistentModelIndex*
/// @param hint enum QAbstractItemModel__LayoutChangeHint
///
void q_abstractitemmodel_layout_about_to_be_changed2(void* self, libqt_list parents, int32_t hint);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QAbstractItemModel*
/// @param callback void func(QAbstractItemModel* self, libqt_list of QPersistentModelIndex* parents, enum QAbstractItemModel__LayoutChangeHint hint)
///
void q_abstractitemmodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, libqt_list, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// @param self const QAbstractItemModel*
/// @param row int
/// @param column int
/// @param data void*
///
QModelIndex* q_abstractitemmodel_create_index3(const void* self, int row, int column, void* data);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QAbstractItemModel*
///
const char* q_abstractitemmodel_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QAbstractItemModel*
/// @param name const char*
///
void q_abstractitemmodel_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QAbstractItemModel*
///
bool q_abstractitemmodel_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QAbstractItemModel*
///
bool q_abstractitemmodel_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QAbstractItemModel*
///
bool q_abstractitemmodel_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QAbstractItemModel*
///
bool q_abstractitemmodel_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QAbstractItemModel*
/// @param b bool
///
bool q_abstractitemmodel_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QAbstractItemModel*
///
QThread* q_abstractitemmodel_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QAbstractItemModel*
/// @param thread QThread*
///
bool q_abstractitemmodel_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstractItemModel*
/// @param interval int
///
int32_t q_abstractitemmodel_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstractItemModel*
/// @param time int64_t of nanoseconds
///
int32_t q_abstractitemmodel_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAbstractItemModel*
/// @param id int
///
void q_abstractitemmodel_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAbstractItemModel*
/// @param id enum Qt__TimerId
///
void q_abstractitemmodel_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QAbstractItemModel*
///
/// @return libqt_list of QObject*
///
libqt_list q_abstractitemmodel_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QAbstractItemModel*
/// @param parent QObject*
///
void q_abstractitemmodel_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QAbstractItemModel*
/// @param filterObj QObject*
///
void q_abstractitemmodel_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QAbstractItemModel*
/// @param obj QObject*
///
void q_abstractitemmodel_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_abstractitemmodel_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_abstractitemmodel_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QAbstractItemModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_abstractitemmodel_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_abstractitemmodel_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_abstractitemmodel_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstractItemModel*
///
bool q_abstractitemmodel_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstractItemModel*
/// @param receiver QObject*
///
bool q_abstractitemmodel_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_abstractitemmodel_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QAbstractItemModel*
///
void q_abstractitemmodel_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QAbstractItemModel*
///
void q_abstractitemmodel_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QAbstractItemModel*
/// @param name const char*
/// @param value QVariant*
///
bool q_abstractitemmodel_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QAbstractItemModel*
/// @param name const char*
///
QVariant* q_abstractitemmodel_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QAbstractItemModel*
///
const char** q_abstractitemmodel_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QAbstractItemModel*
///
QBindingStorage* q_abstractitemmodel_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QAbstractItemModel*
///
const QBindingStorage* q_abstractitemmodel_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractItemModel*
///
void q_abstractitemmodel_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractItemModel*
/// @param callback void func(QAbstractItemModel* self)
///
void q_abstractitemmodel_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QAbstractItemModel*
/// @param classname const char*
///
bool q_abstractitemmodel_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QAbstractItemModel*
///
void q_abstractitemmodel_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstractItemModel*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_abstractitemmodel_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstractItemModel*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_abstractitemmodel_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
/// @param param5 enum Qt__ConnectionType
///
QMetaObject__Connection* q_abstractitemmodel_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_abstractitemmodel_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QAbstractItemModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_abstractitemmodel_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstractItemModel*
/// @param signal const char*
///
bool q_abstractitemmodel_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstractItemModel*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_abstractitemmodel_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstractItemModel*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_abstractitemmodel_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstractItemModel*
/// @param receiver QObject*
/// @param member const char*
///
bool q_abstractitemmodel_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractItemModel*
/// @param param1 QObject*
///
void q_abstractitemmodel_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractItemModel*
/// @param callback void func(QAbstractItemModel* self, QObject* param1)
///
void q_abstractitemmodel_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemModel*
/// @param event QEvent*
///
bool q_abstractitemmodel_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemModel*
/// @param event QEvent*
///
bool q_abstractitemmodel_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemModel*
/// @param callback bool func(QAbstractItemModel* self, QEvent* event)
///
void q_abstractitemmodel_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemModel*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_abstractitemmodel_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemModel*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_abstractitemmodel_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemModel*
/// @param callback bool func(QAbstractItemModel* self, QObject* watched, QEvent* event)
///
void q_abstractitemmodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemModel*
/// @param event QTimerEvent*
///
void q_abstractitemmodel_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemModel*
/// @param event QTimerEvent*
///
void q_abstractitemmodel_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemModel*
/// @param callback void func(QAbstractItemModel* self, QTimerEvent* event)
///
void q_abstractitemmodel_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemModel*
/// @param event QChildEvent*
///
void q_abstractitemmodel_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemModel*
/// @param event QChildEvent*
///
void q_abstractitemmodel_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemModel*
/// @param callback void func(QAbstractItemModel* self, QChildEvent* event)
///
void q_abstractitemmodel_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemModel*
/// @param event QEvent*
///
void q_abstractitemmodel_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemModel*
/// @param event QEvent*
///
void q_abstractitemmodel_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemModel*
/// @param callback void func(QAbstractItemModel* self, QEvent* event)
///
void q_abstractitemmodel_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemModel*
/// @param signal QMetaMethod*
///
void q_abstractitemmodel_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemModel*
/// @param signal QMetaMethod*
///
void q_abstractitemmodel_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemModel*
/// @param callback void func(QAbstractItemModel* self, QMetaMethod* signal)
///
void q_abstractitemmodel_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemModel*
/// @param signal QMetaMethod*
///
void q_abstractitemmodel_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemModel*
/// @param signal QMetaMethod*
///
void q_abstractitemmodel_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemModel*
/// @param callback void func(QAbstractItemModel* self, QMetaMethod* signal)
///
void q_abstractitemmodel_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAbstractItemModel*
///
QObject* q_abstractitemmodel_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAbstractItemModel*
///
QObject* q_abstractitemmodel_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAbstractItemModel*
/// @param callback QObject* func(QAbstractItemModel* self)
///
void q_abstractitemmodel_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAbstractItemModel*
///
int32_t q_abstractitemmodel_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAbstractItemModel*
///
int32_t q_abstractitemmodel_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAbstractItemModel*
/// @param callback int32_t func(QAbstractItemModel* self)
///
void q_abstractitemmodel_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAbstractItemModel*
/// @param signal const char*
///
int32_t q_abstractitemmodel_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAbstractItemModel*
/// @param signal const char*
///
int32_t q_abstractitemmodel_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAbstractItemModel*
/// @param callback int32_t func(QAbstractItemModel* self, const char* signal)
///
void q_abstractitemmodel_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAbstractItemModel*
/// @param signal QMetaMethod*
///
bool q_abstractitemmodel_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAbstractItemModel*
/// @param signal QMetaMethod*
///
bool q_abstractitemmodel_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAbstractItemModel*
/// @param callback bool func(QAbstractItemModel* self, QMetaMethod* signal)
///
void q_abstractitemmodel_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractItemModel*
/// @param callback void func(QAbstractItemModel* self, QModelIndex* parent, int first, int last)
///
void q_abstractitemmodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, const void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractItemModel*
/// @param callback void func(QAbstractItemModel* self, QModelIndex* parent, int first, int last)
///
void q_abstractitemmodel_on_rows_inserted(void* self, void (*callback)(void*, const void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractItemModel*
/// @param callback void func(QAbstractItemModel* self, QModelIndex* parent, int first, int last)
///
void q_abstractitemmodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, const void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractItemModel*
/// @param callback void func(QAbstractItemModel* self, QModelIndex* parent, int first, int last)
///
void q_abstractitemmodel_on_rows_removed(void* self, void (*callback)(void*, const void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractItemModel*
/// @param callback void func(QAbstractItemModel* self, QModelIndex* parent, int first, int last)
///
void q_abstractitemmodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, const void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractItemModel*
/// @param callback void func(QAbstractItemModel* self, QModelIndex* parent, int first, int last)
///
void q_abstractitemmodel_on_columns_inserted(void* self, void (*callback)(void*, const void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractItemModel*
/// @param callback void func(QAbstractItemModel* self, QModelIndex* parent, int first, int last)
///
void q_abstractitemmodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, const void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractItemModel*
/// @param callback void func(QAbstractItemModel* self, QModelIndex* parent, int first, int last)
///
void q_abstractitemmodel_on_columns_removed(void* self, void (*callback)(void*, const void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelAboutToBeReset)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractItemModel*
/// @param callback void func(QAbstractItemModel* self)
///
void q_abstractitemmodel_on_model_about_to_be_reset(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelReset)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractItemModel*
/// @param callback void func(QAbstractItemModel* self)
///
void q_abstractitemmodel_on_model_reset(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractItemModel*
/// @param callback void func(QAbstractItemModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
///
void q_abstractitemmodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractItemModel*
/// @param callback void func(QAbstractItemModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
///
void q_abstractitemmodel_on_rows_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractItemModel*
/// @param callback void func(QAbstractItemModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
///
void q_abstractitemmodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractItemModel*
/// @param callback void func(QAbstractItemModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
///
void q_abstractitemmodel_on_columns_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractItemModel*
/// @param callback void func(QAbstractItemModel* self, const char* objectName)
///
void q_abstractitemmodel_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dtor.QAbstractItemModel)
///
/// Delete this object from C++ memory.
///
/// @param self QAbstractItemModel*
///
void q_abstractitemmodel_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html)

/// q_abstracttablemodel_new constructs a new QAbstractTableModel object.
///
QAbstractTableModel* q_abstracttablemodel_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html)

/// q_abstracttablemodel_new2 constructs a new QAbstractTableModel object.
///
/// @param parent QObject*
///
QAbstractTableModel* q_abstracttablemodel_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QAbstractTableModel*
///
const QMetaObject* q_abstracttablemodel_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const QAbstractTableModel*
/// @param callback const QMetaObject* func(const QAbstractTableModel* self)
///
void q_abstracttablemodel_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QAbstractTableModel*
///
const QMetaObject* q_abstracttablemodel_super_meta_object(const void* self);

/// @param self QAbstractTableModel*
/// @param param1 const char*
///
void* q_abstracttablemodel_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QAbstractTableModel*
/// @param callback void* func(QAbstractTableModel* self, const char* param1)
///
void q_abstracttablemodel_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QAbstractTableModel*
/// @param param1 const char*
///
void* q_abstracttablemodel_super_metacast(void* self, const char* param1);

/// @param self QAbstractTableModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_abstracttablemodel_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QAbstractTableModel*
/// @param callback int32_t func(QAbstractTableModel* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_abstracttablemodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QAbstractTableModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_abstracttablemodel_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_abstracttablemodel_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#index)
///
/// @param self const QAbstractTableModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
QModelIndex* q_abstracttablemodel_index(const void* self, int row, int column, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#index)
///
/// Allows for overriding the related default method
///
/// @param self const QAbstractTableModel*
/// @param callback QModelIndex* func(const QAbstractTableModel* self, int row, int column, QModelIndex* parent)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_abstracttablemodel_on_index(const void* self, QModelIndex* (*callback)(const void*, int, int, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#index)
///
/// Base class method implementation
///
/// @param self const QAbstractTableModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
QModelIndex* q_abstracttablemodel_super_index(const void* self, int row, int column, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#sibling)
///
/// @param self const QAbstractTableModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
///
QModelIndex* q_abstracttablemodel_sibling(const void* self, int row, int column, const void* idx);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#sibling)
///
/// Allows for overriding the related default method
///
/// @param self const QAbstractTableModel*
/// @param callback QModelIndex* func(const QAbstractTableModel* self, int row, int column, QModelIndex* idx)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_abstracttablemodel_on_sibling(const void* self, QModelIndex* (*callback)(const void*, int, int, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#sibling)
///
/// Base class method implementation
///
/// @param self const QAbstractTableModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
///
QModelIndex* q_abstracttablemodel_super_sibling(const void* self, int row, int column, const void* idx);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#dropMimeData)
///
/// @param self QAbstractTableModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_abstracttablemodel_drop_mime_data(void* self, const void* data, int32_t action, int row, int column, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#dropMimeData)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractTableModel*
/// @param callback bool func(QAbstractTableModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
///
void q_abstracttablemodel_on_drop_mime_data(void* self, bool (*callback)(void*, const void*, int32_t, int, int, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#dropMimeData)
///
/// Base class method implementation
///
/// @param self QAbstractTableModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_abstracttablemodel_super_drop_mime_data(void* self, const void* data, int32_t action, int row, int column, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#flags)
///
/// @param self const QAbstractTableModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
///
int32_t q_abstracttablemodel_flags(const void* self, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#flags)
///
/// Allows for overriding the related default method
///
/// @param self const QAbstractTableModel*
/// @param callback int32_t func(const QAbstractTableModel* self, QModelIndex* index)
///
void q_abstracttablemodel_on_flags(const void* self, int32_t (*callback)(const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#flags)
///
/// Base class method implementation
///
/// @param self const QAbstractTableModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
///
int32_t q_abstracttablemodel_super_flags(const void* self, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_abstracttablemodel_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_abstracttablemodel_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self const QAbstractTableModel*
/// @param row int
/// @param column int
///
bool q_abstracttablemodel_has_index(const void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
///
/// @warning This method must be implemented with `q_abstracttablemodel_on_parent` before it can be called.
///
/// @param self const QAbstractTableModel*
/// @param child QModelIndex*
///
QModelIndex* q_abstracttablemodel_parent(const void* self, const void* child);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
///
/// Allows for overriding the related default method
///
/// @param self const QAbstractTableModel*
/// @param callback QModelIndex* func(const QAbstractTableModel* self, QModelIndex* child)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_abstracttablemodel_on_parent(const void* self, QModelIndex* (*callback)(const void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// @param self const QAbstractTableModel*
/// @param parent QModelIndex*
///
bool q_abstracttablemodel_has_children(const void* self, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// Allows for overriding the related default method
///
/// @param self const QAbstractTableModel*
/// @param callback bool func(const QAbstractTableModel* self, QModelIndex* parent)
///
void q_abstracttablemodel_on_has_children(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// Base class method implementation
///
/// @param self const QAbstractTableModel*
/// @param parent QModelIndex*
///
bool q_abstracttablemodel_super_has_children(const void* self, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self QAbstractTableModel*
/// @param row int
///
bool q_abstracttablemodel_insert_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self QAbstractTableModel*
/// @param column int
///
bool q_abstracttablemodel_insert_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self QAbstractTableModel*
/// @param row int
///
bool q_abstracttablemodel_remove_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self QAbstractTableModel*
/// @param column int
///
bool q_abstracttablemodel_remove_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
///
/// @param self QAbstractTableModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_abstracttablemodel_move_row(void* self, const void* sourceParent, int sourceRow, const void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
///
/// @param self QAbstractTableModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_abstracttablemodel_move_column(void* self, const void* sourceParent, int sourceColumn, const void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self const QAbstractTableModel*
/// @param index QModelIndex*
///
bool q_abstracttablemodel_check_index(const void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QAbstractTableModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
///
void q_abstracttablemodel_data_changed(void* self, const void* topLeft, const void* bottomRight);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self, QModelIndex* topLeft, QModelIndex* bottomRight)
///
void q_abstracttablemodel_on_data_changed(void* self, void (*callback)(void*, const void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self QAbstractTableModel*
/// @param orientation enum Qt__Orientation
/// @param first int
/// @param last int
///
void q_abstracttablemodel_header_data_changed(void* self, int32_t orientation, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self, enum Qt__Orientation orientation, int first, int last)
///
void q_abstracttablemodel_on_header_data_changed(void* self, void (*callback)(void*, int32_t, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QAbstractTableModel*
///
void q_abstracttablemodel_layout_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self)
///
void q_abstracttablemodel_on_layout_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QAbstractTableModel*
///
void q_abstracttablemodel_layout_about_to_be_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self)
///
void q_abstracttablemodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self const QAbstractTableModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_abstracttablemodel_has_index3(const void* self, int row, int column, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self QAbstractTableModel*
/// @param row int
/// @param parent QModelIndex*
///
bool q_abstracttablemodel_insert_row2(void* self, int row, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self QAbstractTableModel*
/// @param column int
/// @param parent QModelIndex*
///
bool q_abstracttablemodel_insert_column2(void* self, int column, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self QAbstractTableModel*
/// @param row int
/// @param parent QModelIndex*
///
bool q_abstracttablemodel_remove_row2(void* self, int row, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self QAbstractTableModel*
/// @param column int
/// @param parent QModelIndex*
///
bool q_abstracttablemodel_remove_column2(void* self, int column, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self const QAbstractTableModel*
/// @param index QModelIndex*
/// @param options flag of enum QAbstractItemModel__CheckIndexOption
///
bool q_abstracttablemodel_check_index2(const void* self, const void* index, int32_t options);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QAbstractTableModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
/// @param roles libqt_list of int
///
void q_abstracttablemodel_data_changed3(void* self, const void* topLeft, const void* bottomRight, libqt_list roles);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, libqt_list of int roles)
///
void q_abstracttablemodel_on_data_changed3(void* self, void (*callback)(void*, const void*, const void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QAbstractTableModel*
/// @param parents libqt_list of QPersistentModelIndex*
///
void q_abstracttablemodel_layout_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self, libqt_list of QPersistentModelIndex* parents)
///
void q_abstracttablemodel_on_layout_changed1(void* self, void (*callback)(void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QAbstractTableModel*
/// @param parents libqt_list of QPersistentModelIndex*
/// @param hint enum QAbstractItemModel__LayoutChangeHint
///
void q_abstracttablemodel_layout_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self, libqt_list of QPersistentModelIndex* parents, enum QAbstractItemModel__LayoutChangeHint hint)
///
void q_abstracttablemodel_on_layout_changed2(void* self, void (*callback)(void*, libqt_list, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QAbstractTableModel*
/// @param parents libqt_list of QPersistentModelIndex*
///
void q_abstracttablemodel_layout_about_to_be_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self, libqt_list of QPersistentModelIndex* parents)
///
void q_abstracttablemodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QAbstractTableModel*
/// @param parents libqt_list of QPersistentModelIndex*
/// @param hint enum QAbstractItemModel__LayoutChangeHint
///
void q_abstracttablemodel_layout_about_to_be_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self, libqt_list of QPersistentModelIndex* parents, enum QAbstractItemModel__LayoutChangeHint hint)
///
void q_abstracttablemodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, libqt_list, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QAbstractTableModel*
///
const char* q_abstracttablemodel_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QAbstractTableModel*
/// @param name const char*
///
void q_abstracttablemodel_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QAbstractTableModel*
///
bool q_abstracttablemodel_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QAbstractTableModel*
///
bool q_abstracttablemodel_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QAbstractTableModel*
///
bool q_abstracttablemodel_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QAbstractTableModel*
///
bool q_abstracttablemodel_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QAbstractTableModel*
/// @param b bool
///
bool q_abstracttablemodel_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QAbstractTableModel*
///
QThread* q_abstracttablemodel_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QAbstractTableModel*
/// @param thread QThread*
///
bool q_abstracttablemodel_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstractTableModel*
/// @param interval int
///
int32_t q_abstracttablemodel_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstractTableModel*
/// @param time int64_t of nanoseconds
///
int32_t q_abstracttablemodel_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAbstractTableModel*
/// @param id int
///
void q_abstracttablemodel_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAbstractTableModel*
/// @param id enum Qt__TimerId
///
void q_abstracttablemodel_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QAbstractTableModel*
///
/// @return libqt_list of QObject*
///
libqt_list q_abstracttablemodel_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QAbstractTableModel*
/// @param parent QObject*
///
void q_abstracttablemodel_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QAbstractTableModel*
/// @param filterObj QObject*
///
void q_abstracttablemodel_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QAbstractTableModel*
/// @param obj QObject*
///
void q_abstracttablemodel_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_abstracttablemodel_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_abstracttablemodel_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QAbstractTableModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_abstracttablemodel_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_abstracttablemodel_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_abstracttablemodel_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstractTableModel*
///
bool q_abstracttablemodel_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstractTableModel*
/// @param receiver QObject*
///
bool q_abstracttablemodel_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_abstracttablemodel_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QAbstractTableModel*
///
void q_abstracttablemodel_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QAbstractTableModel*
///
void q_abstracttablemodel_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QAbstractTableModel*
/// @param name const char*
/// @param value QVariant*
///
bool q_abstracttablemodel_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QAbstractTableModel*
/// @param name const char*
///
QVariant* q_abstracttablemodel_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QAbstractTableModel*
///
const char** q_abstracttablemodel_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QAbstractTableModel*
///
QBindingStorage* q_abstracttablemodel_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QAbstractTableModel*
///
const QBindingStorage* q_abstracttablemodel_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractTableModel*
///
void q_abstracttablemodel_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self)
///
void q_abstracttablemodel_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QAbstractTableModel*
/// @param classname const char*
///
bool q_abstracttablemodel_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QAbstractTableModel*
///
void q_abstracttablemodel_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstractTableModel*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_abstracttablemodel_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstractTableModel*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_abstracttablemodel_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
/// @param param5 enum Qt__ConnectionType
///
QMetaObject__Connection* q_abstracttablemodel_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_abstracttablemodel_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QAbstractTableModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_abstracttablemodel_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstractTableModel*
/// @param signal const char*
///
bool q_abstracttablemodel_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstractTableModel*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_abstracttablemodel_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstractTableModel*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_abstracttablemodel_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstractTableModel*
/// @param receiver QObject*
/// @param member const char*
///
bool q_abstracttablemodel_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractTableModel*
/// @param param1 QObject*
///
void q_abstracttablemodel_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self, QObject* param1)
///
void q_abstracttablemodel_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowCount)
///
/// Wrapper to allow calling virtual or protected method
///

/// @warning This method must be implemented with `q_abstracttablemodel_on_row_count` before it can be called.
////// @param self const QAbstractTableModel*
/// @param parent QModelIndex*
///
int32_t q_abstracttablemodel_row_count(const void* self, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowCount)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAbstractTableModel*
/// @param callback int32_t func(QAbstractTableModel* self, QModelIndex* parent)
///
void q_abstracttablemodel_on_row_count(const void* self, int32_t (*callback)(const void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnCount)
///
/// Wrapper to allow calling virtual or protected method
///

/// @warning This method must be implemented with `q_abstracttablemodel_on_column_count` before it can be called.
////// @param self const QAbstractTableModel*
/// @param parent QModelIndex*
///
int32_t q_abstracttablemodel_column_count(const void* self, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnCount)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAbstractTableModel*
/// @param callback int32_t func(QAbstractTableModel* self, QModelIndex* parent)
///
void q_abstracttablemodel_on_column_count(const void* self, int32_t (*callback)(const void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#data)
///
/// Wrapper to allow calling virtual or protected method
///

/// @warning This method must be implemented with `q_abstracttablemodel_on_data` before it can be called.
////// @param self const QAbstractTableModel*
/// @param index QModelIndex*
/// @param role int
///
QVariant* q_abstracttablemodel_data(const void* self, const void* index, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#data)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAbstractTableModel*
/// @param callback QVariant* func(QAbstractTableModel* self, QModelIndex* index, int role)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_abstracttablemodel_on_data(const void* self, QVariant* (*callback)(const void*, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
///
bool q_abstracttablemodel_set_data(void* self, const void* index, const void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
///
bool q_abstracttablemodel_super_set_data(void* self, const void* index, const void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback bool func(QAbstractTableModel* self, QModelIndex* index, QVariant* value, int role)
///
void q_abstracttablemodel_on_set_data(void* self, bool (*callback)(void*, const void*, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAbstractTableModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
///
QVariant* q_abstracttablemodel_header_data(const void* self, int section, int32_t orientation, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAbstractTableModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
///
QVariant* q_abstracttablemodel_super_header_data(const void* self, int section, int32_t orientation, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAbstractTableModel*
/// @param callback QVariant* func(QAbstractTableModel* self, int section, enum Qt__Orientation orientation, int role)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_abstracttablemodel_on_header_data(const void* self, QVariant* (*callback)(const void*, int, int32_t, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
///
bool q_abstracttablemodel_set_header_data(void* self, int section, int32_t orientation, const void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
///
bool q_abstracttablemodel_super_set_header_data(void* self, int section, int32_t orientation, const void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback bool func(QAbstractTableModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role)
///
void q_abstracttablemodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map of int to QVariant*
/// for (size_t i = 0; i < map.len; ++i) {
///     free(((QVariant*)map.values)[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAbstractTableModel*
/// @param index QModelIndex*
///
/// @return libqt_map of int to QVariant*
///
libqt_map q_abstracttablemodel_item_data(const void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map of int to QVariant*
/// for (size_t i = 0; i < map.len; ++i) {
///     free(((QVariant*)map.values)[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAbstractTableModel*
/// @param index QModelIndex*
///
/// @return libqt_map of int to QVariant*
///
libqt_map q_abstracttablemodel_super_item_data(const void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAbstractTableModel*
/// @param callback libqt_map of int to QVariant* func(QAbstractTableModel* self, QModelIndex* index)
///
void q_abstracttablemodel_on_item_data(const void* self, libqt_map (*callback)(const void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param index QModelIndex*
/// @param roles libqt_map of int to QVariant*
///
bool q_abstracttablemodel_set_item_data(void* self, const void* index, libqt_map roles);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param index QModelIndex*
/// @param roles libqt_map of int to QVariant*
///
bool q_abstracttablemodel_super_set_item_data(void* self, const void* index, libqt_map roles);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback bool func(QAbstractTableModel* self, QModelIndex* index, libqt_map of int to QVariant* roles)
///
void q_abstracttablemodel_on_set_item_data(void* self, bool (*callback)(void*, const void*, libqt_map));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param index QModelIndex*
///
bool q_abstracttablemodel_clear_item_data(void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param index QModelIndex*
///
bool q_abstracttablemodel_super_clear_item_data(void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback bool func(QAbstractTableModel* self, QModelIndex* index)
///
void q_abstracttablemodel_on_clear_item_data(void* self, bool (*callback)(void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAbstractTableModel*
///
const char** q_abstracttablemodel_mime_types(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAbstractTableModel*
///
const char** q_abstracttablemodel_super_mime_types(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAbstractTableModel*
/// @param callback const char** func(QAbstractTableModel* self)
///
void q_abstracttablemodel_on_mime_types(const void* self, const char** (*callback)(const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAbstractTableModel*
/// @param indexes libqt_list of QModelIndex*
///
QMimeData* q_abstracttablemodel_mime_data(const void* self, libqt_list indexes);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAbstractTableModel*
/// @param indexes libqt_list of QModelIndex*
///
QMimeData* q_abstracttablemodel_super_mime_data(const void* self, libqt_list indexes);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAbstractTableModel*
/// @param callback QMimeData* func(QAbstractTableModel* self, libqt_list of QModelIndex* indexes)
///
void q_abstracttablemodel_on_mime_data(const void* self, QMimeData* (*callback)(const void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAbstractTableModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_abstracttablemodel_can_drop_mime_data(const void* self, const void* data, int32_t action, int row, int column, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAbstractTableModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_abstracttablemodel_super_can_drop_mime_data(const void* self, const void* data, int32_t action, int row, int column, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAbstractTableModel*
/// @param callback bool func(QAbstractTableModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
///
void q_abstracttablemodel_on_can_drop_mime_data(const void* self, bool (*callback)(const void*, const void*, int32_t, int, int, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAbstractTableModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_abstracttablemodel_supported_drop_actions(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAbstractTableModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_abstracttablemodel_super_supported_drop_actions(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAbstractTableModel*
/// @param callback int32_t func(QAbstractTableModel* self)
///
void q_abstracttablemodel_on_supported_drop_actions(const void* self, int32_t (*callback)(const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAbstractTableModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_abstracttablemodel_supported_drag_actions(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAbstractTableModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_abstracttablemodel_super_supported_drag_actions(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAbstractTableModel*
/// @param callback int32_t func(QAbstractTableModel* self)
///
void q_abstracttablemodel_on_supported_drag_actions(const void* self, int32_t (*callback)(const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool q_abstracttablemodel_insert_rows(void* self, int row, int count, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool q_abstracttablemodel_super_insert_rows(void* self, int row, int count, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback bool func(QAbstractTableModel* self, int row, int count, QModelIndex* parent)
///
void q_abstracttablemodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool q_abstracttablemodel_insert_columns(void* self, int column, int count, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool q_abstracttablemodel_super_insert_columns(void* self, int column, int count, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback bool func(QAbstractTableModel* self, int column, int count, QModelIndex* parent)
///
void q_abstracttablemodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool q_abstracttablemodel_remove_rows(void* self, int row, int count, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool q_abstracttablemodel_super_remove_rows(void* self, int row, int count, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback bool func(QAbstractTableModel* self, int row, int count, QModelIndex* parent)
///
void q_abstracttablemodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool q_abstracttablemodel_remove_columns(void* self, int column, int count, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool q_abstracttablemodel_super_remove_columns(void* self, int column, int count, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback bool func(QAbstractTableModel* self, int column, int count, QModelIndex* parent)
///
void q_abstracttablemodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_abstracttablemodel_move_rows(void* self, const void* sourceParent, int sourceRow, int count, const void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_abstracttablemodel_super_move_rows(void* self, const void* sourceParent, int sourceRow, int count, const void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback bool func(QAbstractTableModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild)
///
void q_abstracttablemodel_on_move_rows(void* self, bool (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_abstracttablemodel_move_columns(void* self, const void* sourceParent, int sourceColumn, int count, const void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_abstracttablemodel_super_move_columns(void* self, const void* sourceParent, int sourceColumn, int count, const void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback bool func(QAbstractTableModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild)
///
void q_abstracttablemodel_on_move_columns(void* self, bool (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param parent QModelIndex*
///
void q_abstracttablemodel_fetch_more(void* self, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param parent QModelIndex*
///
void q_abstracttablemodel_super_fetch_more(void* self, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self, QModelIndex* parent)
///
void q_abstracttablemodel_on_fetch_more(void* self, void (*callback)(void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAbstractTableModel*
/// @param parent QModelIndex*
///
bool q_abstracttablemodel_can_fetch_more(const void* self, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAbstractTableModel*
/// @param parent QModelIndex*
///
bool q_abstracttablemodel_super_can_fetch_more(const void* self, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAbstractTableModel*
/// @param callback bool func(QAbstractTableModel* self, QModelIndex* parent)
///
void q_abstracttablemodel_on_can_fetch_more(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param column int
/// @param order enum Qt__SortOrder
///
void q_abstracttablemodel_sort(void* self, int column, int32_t order);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param column int
/// @param order enum Qt__SortOrder
///
void q_abstracttablemodel_super_sort(void* self, int column, int32_t order);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self, int column, enum Qt__SortOrder order)
///
void q_abstracttablemodel_on_sort(void* self, void (*callback)(void*, int, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAbstractTableModel*
/// @param index QModelIndex*
///
QModelIndex* q_abstracttablemodel_buddy(const void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAbstractTableModel*
/// @param index QModelIndex*
///
QModelIndex* q_abstracttablemodel_super_buddy(const void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAbstractTableModel*
/// @param callback QModelIndex* func(QAbstractTableModel* self, QModelIndex* index)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_abstracttablemodel_on_buddy(const void* self, QModelIndex* (*callback)(const void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAbstractTableModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
///
/// @return libqt_list of QModelIndex*
///
libqt_list q_abstracttablemodel_match(const void* self, const void* start, int role, const void* value, int hits, int32_t flags);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAbstractTableModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
///
/// @return libqt_list of QModelIndex*
///
libqt_list q_abstracttablemodel_super_match(const void* self, const void* start, int role, const void* value, int hits, int32_t flags);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAbstractTableModel*
/// @param callback libqt_list of QModelIndex* func(QAbstractTableModel* self, QModelIndex* start, int role, QVariant* value, int hits, flag of enum Qt__MatchFlag flags)
///
void q_abstracttablemodel_on_match(const void* self, libqt_list (*callback)(const void*, const void*, int, const void*, int, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAbstractTableModel*
/// @param index QModelIndex*
///
QSize* q_abstracttablemodel_span(const void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAbstractTableModel*
/// @param index QModelIndex*
///
QSize* q_abstracttablemodel_super_span(const void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAbstractTableModel*
/// @param callback QSize* func(QAbstractTableModel* self, QModelIndex* index)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_abstracttablemodel_on_span(const void* self, QSize* (*callback)(const void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#roleNames)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map of int to char*
/// for (size_t i = 0; i < map.len; ++i) {
///     libqt_free(map.values[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAbstractTableModel*
///
/// @return libqt_map of int to char*
///
libqt_map q_abstracttablemodel_role_names(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#roleNames)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map of int to char*
/// for (size_t i = 0; i < map.len; ++i) {
///     libqt_free(map.values[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAbstractTableModel*
///
/// @return libqt_map of int to char*
///
libqt_map q_abstracttablemodel_super_role_names(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#roleNames)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAbstractTableModel*
/// @param callback libqt_map of int to char* func(QAbstractTableModel* self)
///
void q_abstracttablemodel_on_role_names(const void* self, libqt_map (*callback)(const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAbstractTableModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
///
void q_abstracttablemodel_multi_data(const void* self, const void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAbstractTableModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
///
void q_abstracttablemodel_super_multi_data(const void* self, const void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan)
///
void q_abstracttablemodel_on_multi_data(const void* self, void (*callback)(const void*, const void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTableModel*
///
bool q_abstracttablemodel_submit(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTableModel*
///
bool q_abstracttablemodel_super_submit(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback bool func(QAbstractTableModel* self)
///
void q_abstracttablemodel_on_submit(void* self, bool (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTableModel*
///
void q_abstracttablemodel_revert(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTableModel*
///
void q_abstracttablemodel_super_revert(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self)
///
void q_abstracttablemodel_on_revert(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTableModel*
///
void q_abstracttablemodel_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTableModel*
///
void q_abstracttablemodel_super_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self)
///
void q_abstracttablemodel_on_reset_internal_data(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param event QEvent*
///
bool q_abstracttablemodel_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param event QEvent*
///
bool q_abstracttablemodel_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback bool func(QAbstractTableModel* self, QEvent* event)
///
void q_abstracttablemodel_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_abstracttablemodel_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_abstracttablemodel_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback bool func(QAbstractTableModel* self, QObject* watched, QEvent* event)
///
void q_abstracttablemodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param event QTimerEvent*
///
void q_abstracttablemodel_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param event QTimerEvent*
///
void q_abstracttablemodel_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self, QTimerEvent* event)
///
void q_abstracttablemodel_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param event QChildEvent*
///
void q_abstracttablemodel_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param event QChildEvent*
///
void q_abstracttablemodel_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self, QChildEvent* event)
///
void q_abstracttablemodel_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param event QEvent*
///
void q_abstracttablemodel_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param event QEvent*
///
void q_abstracttablemodel_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self, QEvent* event)
///
void q_abstracttablemodel_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param signal QMetaMethod*
///
void q_abstracttablemodel_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param signal QMetaMethod*
///
void q_abstracttablemodel_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self, QMetaMethod* signal)
///
void q_abstracttablemodel_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param signal QMetaMethod*
///
void q_abstracttablemodel_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param signal QMetaMethod*
///
void q_abstracttablemodel_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self, QMetaMethod* signal)
///
void q_abstracttablemodel_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAbstractTableModel*
/// @param row int
/// @param column int
///
QModelIndex* q_abstracttablemodel_create_index(const void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAbstractTableModel*
/// @param row int
/// @param column int
///
QModelIndex* q_abstracttablemodel_super_create_index(const void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAbstractTableModel*
/// @param callback QModelIndex* func(QAbstractTableModel* self, int row, int column)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_abstracttablemodel_on_create_index(const void* self, QModelIndex* (*callback)(const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAbstractTableModel*
/// @param indexes libqt_list of QModelIndex*
/// @param stream QDataStream*
///
void q_abstracttablemodel_encode_data(const void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAbstractTableModel*
/// @param indexes libqt_list of QModelIndex*
/// @param stream QDataStream*
///
void q_abstracttablemodel_super_encode_data(const void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self, libqt_list of QModelIndex* indexes, QDataStream* stream)
///
void q_abstracttablemodel_on_encode_data(const void* self, void (*callback)(const void*, libqt_list, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
/// @param stream QDataStream*
///
bool q_abstracttablemodel_decode_data(void* self, int row, int column, const void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
/// @param stream QDataStream*
///
bool q_abstracttablemodel_super_decode_data(void* self, int row, int column, const void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback bool func(QAbstractTableModel* self, int row, int column, QModelIndex* parent, QDataStream* stream)
///
void q_abstracttablemodel_on_decode_data(void* self, bool (*callback)(void*, int, int, const void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_abstracttablemodel_begin_insert_rows(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_abstracttablemodel_super_begin_insert_rows(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self, QModelIndex* parent, int first, int last)
///
void q_abstracttablemodel_on_begin_insert_rows(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTableModel*
///
void q_abstracttablemodel_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTableModel*
///
void q_abstracttablemodel_super_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self)
///
void q_abstracttablemodel_on_end_insert_rows(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_abstracttablemodel_begin_remove_rows(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_abstracttablemodel_super_begin_remove_rows(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self, QModelIndex* parent, int first, int last)
///
void q_abstracttablemodel_on_begin_remove_rows(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTableModel*
///
void q_abstracttablemodel_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTableModel*
///
void q_abstracttablemodel_super_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self)
///
void q_abstracttablemodel_on_end_remove_rows(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationRow int
///
bool q_abstracttablemodel_begin_move_rows(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationRow int
///
bool q_abstracttablemodel_super_begin_move_rows(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback bool func(QAbstractTableModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow)
///
void q_abstracttablemodel_on_begin_move_rows(void* self, bool (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTableModel*
///
void q_abstracttablemodel_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTableModel*
///
void q_abstracttablemodel_super_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self)
///
void q_abstracttablemodel_on_end_move_rows(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_abstracttablemodel_begin_insert_columns(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_abstracttablemodel_super_begin_insert_columns(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self, QModelIndex* parent, int first, int last)
///
void q_abstracttablemodel_on_begin_insert_columns(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTableModel*
///
void q_abstracttablemodel_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTableModel*
///
void q_abstracttablemodel_super_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self)
///
void q_abstracttablemodel_on_end_insert_columns(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_abstracttablemodel_begin_remove_columns(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_abstracttablemodel_super_begin_remove_columns(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self, QModelIndex* parent, int first, int last)
///
void q_abstracttablemodel_on_begin_remove_columns(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTableModel*
///
void q_abstracttablemodel_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTableModel*
///
void q_abstracttablemodel_super_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self)
///
void q_abstracttablemodel_on_end_remove_columns(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationColumn int
///
bool q_abstracttablemodel_begin_move_columns(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationColumn int
///
bool q_abstracttablemodel_super_begin_move_columns(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback bool func(QAbstractTableModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn)
///
void q_abstracttablemodel_on_begin_move_columns(void* self, bool (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTableModel*
///
void q_abstracttablemodel_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTableModel*
///
void q_abstracttablemodel_super_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self)
///
void q_abstracttablemodel_on_end_move_columns(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTableModel*
///
void q_abstracttablemodel_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTableModel*
///
void q_abstracttablemodel_super_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self)
///
void q_abstracttablemodel_on_begin_reset_model(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTableModel*
///
void q_abstracttablemodel_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTableModel*
///
void q_abstracttablemodel_super_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self)
///
void q_abstracttablemodel_on_end_reset_model(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param from QModelIndex*
/// @param to QModelIndex*
///
void q_abstracttablemodel_change_persistent_index(void* self, const void* from, const void* to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param from QModelIndex*
/// @param to QModelIndex*
///
void q_abstracttablemodel_super_change_persistent_index(void* self, const void* from, const void* to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self, QModelIndex* from, QModelIndex* to)
///
void q_abstracttablemodel_on_change_persistent_index(void* self, void (*callback)(void*, const void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param from libqt_list of QModelIndex*
/// @param to libqt_list of QModelIndex*
///
void q_abstracttablemodel_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param from libqt_list of QModelIndex*
/// @param to libqt_list of QModelIndex*
///
void q_abstracttablemodel_super_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self, libqt_list of QModelIndex* from, libqt_list of QModelIndex* to)
///
void q_abstracttablemodel_on_change_persistent_index_list(void* self, void (*callback)(void*, libqt_list, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAbstractTableModel*
///
/// @return libqt_list of QModelIndex*
///
libqt_list q_abstracttablemodel_persistent_index_list(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAbstractTableModel*
///
/// @return libqt_list of QModelIndex*
///
libqt_list q_abstracttablemodel_super_persistent_index_list(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAbstractTableModel*
/// @param callback libqt_list of QModelIndex* func(QAbstractTableModel* self)
///
void q_abstracttablemodel_on_persistent_index_list(const void* self, libqt_list (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAbstractTableModel*
///
QObject* q_abstracttablemodel_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAbstractTableModel*
///
QObject* q_abstracttablemodel_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAbstractTableModel*
/// @param callback QObject* func(QAbstractTableModel* self)
///
void q_abstracttablemodel_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAbstractTableModel*
///
int32_t q_abstracttablemodel_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAbstractTableModel*
///
int32_t q_abstracttablemodel_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAbstractTableModel*
/// @param callback int32_t func(QAbstractTableModel* self)
///
void q_abstracttablemodel_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAbstractTableModel*
/// @param signal const char*
///
int32_t q_abstracttablemodel_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAbstractTableModel*
/// @param signal const char*
///
int32_t q_abstracttablemodel_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAbstractTableModel*
/// @param callback int32_t func(QAbstractTableModel* self, const char* signal)
///
void q_abstracttablemodel_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAbstractTableModel*
/// @param signal QMetaMethod*
///
bool q_abstracttablemodel_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAbstractTableModel*
/// @param signal QMetaMethod*
///
bool q_abstracttablemodel_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAbstractTableModel*
/// @param callback bool func(QAbstractTableModel* self, QMetaMethod* signal)
///
void q_abstracttablemodel_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self, QModelIndex* parent, int first, int last)
///
void q_abstracttablemodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self, QModelIndex* parent, int first, int last)
///
void q_abstracttablemodel_on_rows_inserted(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self, QModelIndex* parent, int first, int last)
///
void q_abstracttablemodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self, QModelIndex* parent, int first, int last)
///
void q_abstracttablemodel_on_rows_removed(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self, QModelIndex* parent, int first, int last)
///
void q_abstracttablemodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self, QModelIndex* parent, int first, int last)
///
void q_abstracttablemodel_on_columns_inserted(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self, QModelIndex* parent, int first, int last)
///
void q_abstracttablemodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self, QModelIndex* parent, int first, int last)
///
void q_abstracttablemodel_on_columns_removed(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelAboutToBeReset)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self)
///
void q_abstracttablemodel_on_model_about_to_be_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelReset)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self)
///
void q_abstracttablemodel_on_model_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
///
void q_abstracttablemodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
///
void q_abstracttablemodel_on_rows_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
///
void q_abstracttablemodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
///
void q_abstracttablemodel_on_columns_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self, const char* objectName)
///
void q_abstracttablemodel_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#dtor.QAbstractTableModel)
///
/// Delete this object from C++ memory.
///
/// @param self QAbstractTableModel*
///
void q_abstracttablemodel_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html)

/// q_abstractlistmodel_new constructs a new QAbstractListModel object.
///
QAbstractListModel* q_abstractlistmodel_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html)

/// q_abstractlistmodel_new2 constructs a new QAbstractListModel object.
///
/// @param parent QObject*
///
QAbstractListModel* q_abstractlistmodel_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QAbstractListModel*
///
const QMetaObject* q_abstractlistmodel_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const QAbstractListModel*
/// @param callback const QMetaObject* func(const QAbstractListModel* self)
///
void q_abstractlistmodel_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QAbstractListModel*
///
const QMetaObject* q_abstractlistmodel_super_meta_object(const void* self);

/// @param self QAbstractListModel*
/// @param param1 const char*
///
void* q_abstractlistmodel_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QAbstractListModel*
/// @param callback void* func(QAbstractListModel* self, const char* param1)
///
void q_abstractlistmodel_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QAbstractListModel*
/// @param param1 const char*
///
void* q_abstractlistmodel_super_metacast(void* self, const char* param1);

/// @param self QAbstractListModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_abstractlistmodel_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QAbstractListModel*
/// @param callback int32_t func(QAbstractListModel* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_abstractlistmodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QAbstractListModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_abstractlistmodel_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_abstractlistmodel_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#index)
///
/// @param self const QAbstractListModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
QModelIndex* q_abstractlistmodel_index(const void* self, int row, int column, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#index)
///
/// Allows for overriding the related default method
///
/// @param self const QAbstractListModel*
/// @param callback QModelIndex* func(const QAbstractListModel* self, int row, int column, QModelIndex* parent)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_abstractlistmodel_on_index(const void* self, QModelIndex* (*callback)(const void*, int, int, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#index)
///
/// Base class method implementation
///
/// @param self const QAbstractListModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
QModelIndex* q_abstractlistmodel_super_index(const void* self, int row, int column, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#sibling)
///
/// @param self const QAbstractListModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
///
QModelIndex* q_abstractlistmodel_sibling(const void* self, int row, int column, const void* idx);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#sibling)
///
/// Allows for overriding the related default method
///
/// @param self const QAbstractListModel*
/// @param callback QModelIndex* func(const QAbstractListModel* self, int row, int column, QModelIndex* idx)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_abstractlistmodel_on_sibling(const void* self, QModelIndex* (*callback)(const void*, int, int, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#sibling)
///
/// Base class method implementation
///
/// @param self const QAbstractListModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
///
QModelIndex* q_abstractlistmodel_super_sibling(const void* self, int row, int column, const void* idx);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#dropMimeData)
///
/// @param self QAbstractListModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_abstractlistmodel_drop_mime_data(void* self, const void* data, int32_t action, int row, int column, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#dropMimeData)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractListModel*
/// @param callback bool func(QAbstractListModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
///
void q_abstractlistmodel_on_drop_mime_data(void* self, bool (*callback)(void*, const void*, int32_t, int, int, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#dropMimeData)
///
/// Base class method implementation
///
/// @param self QAbstractListModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_abstractlistmodel_super_drop_mime_data(void* self, const void* data, int32_t action, int row, int column, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#flags)
///
/// @param self const QAbstractListModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
///
int32_t q_abstractlistmodel_flags(const void* self, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#flags)
///
/// Allows for overriding the related default method
///
/// @param self const QAbstractListModel*
/// @param callback int32_t func(const QAbstractListModel* self, QModelIndex* index)
///
void q_abstractlistmodel_on_flags(const void* self, int32_t (*callback)(const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#flags)
///
/// Base class method implementation
///
/// @param self const QAbstractListModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
///
int32_t q_abstractlistmodel_super_flags(const void* self, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_abstractlistmodel_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_abstractlistmodel_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self const QAbstractListModel*
/// @param row int
/// @param column int
///
bool q_abstractlistmodel_has_index(const void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
///
/// @warning This method must be implemented with `q_abstractlistmodel_on_parent` before it can be called.
///
/// @param self const QAbstractListModel*
/// @param child QModelIndex*
///
QModelIndex* q_abstractlistmodel_parent(const void* self, const void* child);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
///
/// Allows for overriding the related default method
///
/// @param self const QAbstractListModel*
/// @param callback QModelIndex* func(const QAbstractListModel* self, QModelIndex* child)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_abstractlistmodel_on_parent(const void* self, QModelIndex* (*callback)(const void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnCount)
///
/// @warning This method must be implemented with `q_abstractlistmodel_on_column_count` before it can be called.
///
/// @param self const QAbstractListModel*
/// @param parent QModelIndex*
///
int32_t q_abstractlistmodel_column_count(const void* self, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnCount)
///
/// Allows for overriding the related default method
///
/// @param self const QAbstractListModel*
/// @param callback int32_t func(const QAbstractListModel* self, QModelIndex* parent)
///
void q_abstractlistmodel_on_column_count(const void* self, int32_t (*callback)(const void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// @param self const QAbstractListModel*
/// @param parent QModelIndex*
///
bool q_abstractlistmodel_has_children(const void* self, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// Allows for overriding the related default method
///
/// @param self const QAbstractListModel*
/// @param callback bool func(const QAbstractListModel* self, QModelIndex* parent)
///
void q_abstractlistmodel_on_has_children(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// Base class method implementation
///
/// @param self const QAbstractListModel*
/// @param parent QModelIndex*
///
bool q_abstractlistmodel_super_has_children(const void* self, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self QAbstractListModel*
/// @param row int
///
bool q_abstractlistmodel_insert_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self QAbstractListModel*
/// @param column int
///
bool q_abstractlistmodel_insert_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self QAbstractListModel*
/// @param row int
///
bool q_abstractlistmodel_remove_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self QAbstractListModel*
/// @param column int
///
bool q_abstractlistmodel_remove_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
///
/// @param self QAbstractListModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_abstractlistmodel_move_row(void* self, const void* sourceParent, int sourceRow, const void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
///
/// @param self QAbstractListModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_abstractlistmodel_move_column(void* self, const void* sourceParent, int sourceColumn, const void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self const QAbstractListModel*
/// @param index QModelIndex*
///
bool q_abstractlistmodel_check_index(const void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QAbstractListModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
///
void q_abstractlistmodel_data_changed(void* self, const void* topLeft, const void* bottomRight);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self, QModelIndex* topLeft, QModelIndex* bottomRight)
///
void q_abstractlistmodel_on_data_changed(void* self, void (*callback)(void*, const void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self QAbstractListModel*
/// @param orientation enum Qt__Orientation
/// @param first int
/// @param last int
///
void q_abstractlistmodel_header_data_changed(void* self, int32_t orientation, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self, enum Qt__Orientation orientation, int first, int last)
///
void q_abstractlistmodel_on_header_data_changed(void* self, void (*callback)(void*, int32_t, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QAbstractListModel*
///
void q_abstractlistmodel_layout_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self)
///
void q_abstractlistmodel_on_layout_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QAbstractListModel*
///
void q_abstractlistmodel_layout_about_to_be_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self)
///
void q_abstractlistmodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self const QAbstractListModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_abstractlistmodel_has_index3(const void* self, int row, int column, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self QAbstractListModel*
/// @param row int
/// @param parent QModelIndex*
///
bool q_abstractlistmodel_insert_row2(void* self, int row, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self QAbstractListModel*
/// @param column int
/// @param parent QModelIndex*
///
bool q_abstractlistmodel_insert_column2(void* self, int column, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self QAbstractListModel*
/// @param row int
/// @param parent QModelIndex*
///
bool q_abstractlistmodel_remove_row2(void* self, int row, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self QAbstractListModel*
/// @param column int
/// @param parent QModelIndex*
///
bool q_abstractlistmodel_remove_column2(void* self, int column, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self const QAbstractListModel*
/// @param index QModelIndex*
/// @param options flag of enum QAbstractItemModel__CheckIndexOption
///
bool q_abstractlistmodel_check_index2(const void* self, const void* index, int32_t options);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QAbstractListModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
/// @param roles libqt_list of int
///
void q_abstractlistmodel_data_changed3(void* self, const void* topLeft, const void* bottomRight, libqt_list roles);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, libqt_list of int roles)
///
void q_abstractlistmodel_on_data_changed3(void* self, void (*callback)(void*, const void*, const void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QAbstractListModel*
/// @param parents libqt_list of QPersistentModelIndex*
///
void q_abstractlistmodel_layout_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self, libqt_list of QPersistentModelIndex* parents)
///
void q_abstractlistmodel_on_layout_changed1(void* self, void (*callback)(void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QAbstractListModel*
/// @param parents libqt_list of QPersistentModelIndex*
/// @param hint enum QAbstractItemModel__LayoutChangeHint
///
void q_abstractlistmodel_layout_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self, libqt_list of QPersistentModelIndex* parents, enum QAbstractItemModel__LayoutChangeHint hint)
///
void q_abstractlistmodel_on_layout_changed2(void* self, void (*callback)(void*, libqt_list, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QAbstractListModel*
/// @param parents libqt_list of QPersistentModelIndex*
///
void q_abstractlistmodel_layout_about_to_be_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self, libqt_list of QPersistentModelIndex* parents)
///
void q_abstractlistmodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QAbstractListModel*
/// @param parents libqt_list of QPersistentModelIndex*
/// @param hint enum QAbstractItemModel__LayoutChangeHint
///
void q_abstractlistmodel_layout_about_to_be_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self, libqt_list of QPersistentModelIndex* parents, enum QAbstractItemModel__LayoutChangeHint hint)
///
void q_abstractlistmodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, libqt_list, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QAbstractListModel*
///
const char* q_abstractlistmodel_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QAbstractListModel*
/// @param name const char*
///
void q_abstractlistmodel_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QAbstractListModel*
///
bool q_abstractlistmodel_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QAbstractListModel*
///
bool q_abstractlistmodel_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QAbstractListModel*
///
bool q_abstractlistmodel_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QAbstractListModel*
///
bool q_abstractlistmodel_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QAbstractListModel*
/// @param b bool
///
bool q_abstractlistmodel_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QAbstractListModel*
///
QThread* q_abstractlistmodel_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QAbstractListModel*
/// @param thread QThread*
///
bool q_abstractlistmodel_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstractListModel*
/// @param interval int
///
int32_t q_abstractlistmodel_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstractListModel*
/// @param time int64_t of nanoseconds
///
int32_t q_abstractlistmodel_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAbstractListModel*
/// @param id int
///
void q_abstractlistmodel_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAbstractListModel*
/// @param id enum Qt__TimerId
///
void q_abstractlistmodel_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QAbstractListModel*
///
/// @return libqt_list of QObject*
///
libqt_list q_abstractlistmodel_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QAbstractListModel*
/// @param parent QObject*
///
void q_abstractlistmodel_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QAbstractListModel*
/// @param filterObj QObject*
///
void q_abstractlistmodel_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QAbstractListModel*
/// @param obj QObject*
///
void q_abstractlistmodel_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_abstractlistmodel_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_abstractlistmodel_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QAbstractListModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_abstractlistmodel_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_abstractlistmodel_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_abstractlistmodel_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstractListModel*
///
bool q_abstractlistmodel_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstractListModel*
/// @param receiver QObject*
///
bool q_abstractlistmodel_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_abstractlistmodel_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QAbstractListModel*
///
void q_abstractlistmodel_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QAbstractListModel*
///
void q_abstractlistmodel_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QAbstractListModel*
/// @param name const char*
/// @param value QVariant*
///
bool q_abstractlistmodel_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QAbstractListModel*
/// @param name const char*
///
QVariant* q_abstractlistmodel_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QAbstractListModel*
///
const char** q_abstractlistmodel_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QAbstractListModel*
///
QBindingStorage* q_abstractlistmodel_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QAbstractListModel*
///
const QBindingStorage* q_abstractlistmodel_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractListModel*
///
void q_abstractlistmodel_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self)
///
void q_abstractlistmodel_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QAbstractListModel*
/// @param classname const char*
///
bool q_abstractlistmodel_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QAbstractListModel*
///
void q_abstractlistmodel_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstractListModel*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_abstractlistmodel_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstractListModel*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_abstractlistmodel_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
/// @param param5 enum Qt__ConnectionType
///
QMetaObject__Connection* q_abstractlistmodel_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_abstractlistmodel_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QAbstractListModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_abstractlistmodel_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstractListModel*
/// @param signal const char*
///
bool q_abstractlistmodel_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstractListModel*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_abstractlistmodel_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstractListModel*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_abstractlistmodel_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstractListModel*
/// @param receiver QObject*
/// @param member const char*
///
bool q_abstractlistmodel_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractListModel*
/// @param param1 QObject*
///
void q_abstractlistmodel_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self, QObject* param1)
///
void q_abstractlistmodel_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowCount)
///
/// Wrapper to allow calling virtual or protected method
///

/// @warning This method must be implemented with `q_abstractlistmodel_on_row_count` before it can be called.
////// @param self const QAbstractListModel*
/// @param parent QModelIndex*
///
int32_t q_abstractlistmodel_row_count(const void* self, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowCount)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAbstractListModel*
/// @param callback int32_t func(QAbstractListModel* self, QModelIndex* parent)
///
void q_abstractlistmodel_on_row_count(const void* self, int32_t (*callback)(const void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#data)
///
/// Wrapper to allow calling virtual or protected method
///

/// @warning This method must be implemented with `q_abstractlistmodel_on_data` before it can be called.
////// @param self const QAbstractListModel*
/// @param index QModelIndex*
/// @param role int
///
QVariant* q_abstractlistmodel_data(const void* self, const void* index, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#data)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAbstractListModel*
/// @param callback QVariant* func(QAbstractListModel* self, QModelIndex* index, int role)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_abstractlistmodel_on_data(const void* self, QVariant* (*callback)(const void*, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractListModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
///
bool q_abstractlistmodel_set_data(void* self, const void* index, const void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
///
bool q_abstractlistmodel_super_set_data(void* self, const void* index, const void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback bool func(QAbstractListModel* self, QModelIndex* index, QVariant* value, int role)
///
void q_abstractlistmodel_on_set_data(void* self, bool (*callback)(void*, const void*, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAbstractListModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
///
QVariant* q_abstractlistmodel_header_data(const void* self, int section, int32_t orientation, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAbstractListModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
///
QVariant* q_abstractlistmodel_super_header_data(const void* self, int section, int32_t orientation, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAbstractListModel*
/// @param callback QVariant* func(QAbstractListModel* self, int section, enum Qt__Orientation orientation, int role)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_abstractlistmodel_on_header_data(const void* self, QVariant* (*callback)(const void*, int, int32_t, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractListModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
///
bool q_abstractlistmodel_set_header_data(void* self, int section, int32_t orientation, const void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
///
bool q_abstractlistmodel_super_set_header_data(void* self, int section, int32_t orientation, const void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback bool func(QAbstractListModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role)
///
void q_abstractlistmodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map of int to QVariant*
/// for (size_t i = 0; i < map.len; ++i) {
///     free(((QVariant*)map.values)[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAbstractListModel*
/// @param index QModelIndex*
///
/// @return libqt_map of int to QVariant*
///
libqt_map q_abstractlistmodel_item_data(const void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map of int to QVariant*
/// for (size_t i = 0; i < map.len; ++i) {
///     free(((QVariant*)map.values)[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAbstractListModel*
/// @param index QModelIndex*
///
/// @return libqt_map of int to QVariant*
///
libqt_map q_abstractlistmodel_super_item_data(const void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAbstractListModel*
/// @param callback libqt_map of int to QVariant* func(QAbstractListModel* self, QModelIndex* index)
///
void q_abstractlistmodel_on_item_data(const void* self, libqt_map (*callback)(const void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractListModel*
/// @param index QModelIndex*
/// @param roles libqt_map of int to QVariant*
///
bool q_abstractlistmodel_set_item_data(void* self, const void* index, libqt_map roles);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param index QModelIndex*
/// @param roles libqt_map of int to QVariant*
///
bool q_abstractlistmodel_super_set_item_data(void* self, const void* index, libqt_map roles);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback bool func(QAbstractListModel* self, QModelIndex* index, libqt_map of int to QVariant* roles)
///
void q_abstractlistmodel_on_set_item_data(void* self, bool (*callback)(void*, const void*, libqt_map));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractListModel*
/// @param index QModelIndex*
///
bool q_abstractlistmodel_clear_item_data(void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param index QModelIndex*
///
bool q_abstractlistmodel_super_clear_item_data(void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback bool func(QAbstractListModel* self, QModelIndex* index)
///
void q_abstractlistmodel_on_clear_item_data(void* self, bool (*callback)(void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAbstractListModel*
///
const char** q_abstractlistmodel_mime_types(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAbstractListModel*
///
const char** q_abstractlistmodel_super_mime_types(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAbstractListModel*
/// @param callback const char** func(QAbstractListModel* self)
///
void q_abstractlistmodel_on_mime_types(const void* self, const char** (*callback)(const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAbstractListModel*
/// @param indexes libqt_list of QModelIndex*
///
QMimeData* q_abstractlistmodel_mime_data(const void* self, libqt_list indexes);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAbstractListModel*
/// @param indexes libqt_list of QModelIndex*
///
QMimeData* q_abstractlistmodel_super_mime_data(const void* self, libqt_list indexes);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAbstractListModel*
/// @param callback QMimeData* func(QAbstractListModel* self, libqt_list of QModelIndex* indexes)
///
void q_abstractlistmodel_on_mime_data(const void* self, QMimeData* (*callback)(const void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAbstractListModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_abstractlistmodel_can_drop_mime_data(const void* self, const void* data, int32_t action, int row, int column, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAbstractListModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_abstractlistmodel_super_can_drop_mime_data(const void* self, const void* data, int32_t action, int row, int column, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAbstractListModel*
/// @param callback bool func(QAbstractListModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
///
void q_abstractlistmodel_on_can_drop_mime_data(const void* self, bool (*callback)(const void*, const void*, int32_t, int, int, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAbstractListModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_abstractlistmodel_supported_drop_actions(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAbstractListModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_abstractlistmodel_super_supported_drop_actions(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAbstractListModel*
/// @param callback int32_t func(QAbstractListModel* self)
///
void q_abstractlistmodel_on_supported_drop_actions(const void* self, int32_t (*callback)(const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAbstractListModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_abstractlistmodel_supported_drag_actions(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAbstractListModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_abstractlistmodel_super_supported_drag_actions(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAbstractListModel*
/// @param callback int32_t func(QAbstractListModel* self)
///
void q_abstractlistmodel_on_supported_drag_actions(const void* self, int32_t (*callback)(const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractListModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool q_abstractlistmodel_insert_rows(void* self, int row, int count, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool q_abstractlistmodel_super_insert_rows(void* self, int row, int count, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback bool func(QAbstractListModel* self, int row, int count, QModelIndex* parent)
///
void q_abstractlistmodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractListModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool q_abstractlistmodel_insert_columns(void* self, int column, int count, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool q_abstractlistmodel_super_insert_columns(void* self, int column, int count, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback bool func(QAbstractListModel* self, int column, int count, QModelIndex* parent)
///
void q_abstractlistmodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractListModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool q_abstractlistmodel_remove_rows(void* self, int row, int count, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool q_abstractlistmodel_super_remove_rows(void* self, int row, int count, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback bool func(QAbstractListModel* self, int row, int count, QModelIndex* parent)
///
void q_abstractlistmodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractListModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool q_abstractlistmodel_remove_columns(void* self, int column, int count, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool q_abstractlistmodel_super_remove_columns(void* self, int column, int count, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback bool func(QAbstractListModel* self, int column, int count, QModelIndex* parent)
///
void q_abstractlistmodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractListModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_abstractlistmodel_move_rows(void* self, const void* sourceParent, int sourceRow, int count, const void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_abstractlistmodel_super_move_rows(void* self, const void* sourceParent, int sourceRow, int count, const void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback bool func(QAbstractListModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild)
///
void q_abstractlistmodel_on_move_rows(void* self, bool (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractListModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_abstractlistmodel_move_columns(void* self, const void* sourceParent, int sourceColumn, int count, const void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_abstractlistmodel_super_move_columns(void* self, const void* sourceParent, int sourceColumn, int count, const void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback bool func(QAbstractListModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild)
///
void q_abstractlistmodel_on_move_columns(void* self, bool (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractListModel*
/// @param parent QModelIndex*
///
void q_abstractlistmodel_fetch_more(void* self, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param parent QModelIndex*
///
void q_abstractlistmodel_super_fetch_more(void* self, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self, QModelIndex* parent)
///
void q_abstractlistmodel_on_fetch_more(void* self, void (*callback)(void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAbstractListModel*
/// @param parent QModelIndex*
///
bool q_abstractlistmodel_can_fetch_more(const void* self, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAbstractListModel*
/// @param parent QModelIndex*
///
bool q_abstractlistmodel_super_can_fetch_more(const void* self, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAbstractListModel*
/// @param callback bool func(QAbstractListModel* self, QModelIndex* parent)
///
void q_abstractlistmodel_on_can_fetch_more(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractListModel*
/// @param column int
/// @param order enum Qt__SortOrder
///
void q_abstractlistmodel_sort(void* self, int column, int32_t order);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param column int
/// @param order enum Qt__SortOrder
///
void q_abstractlistmodel_super_sort(void* self, int column, int32_t order);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self, int column, enum Qt__SortOrder order)
///
void q_abstractlistmodel_on_sort(void* self, void (*callback)(void*, int, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAbstractListModel*
/// @param index QModelIndex*
///
QModelIndex* q_abstractlistmodel_buddy(const void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAbstractListModel*
/// @param index QModelIndex*
///
QModelIndex* q_abstractlistmodel_super_buddy(const void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAbstractListModel*
/// @param callback QModelIndex* func(QAbstractListModel* self, QModelIndex* index)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_abstractlistmodel_on_buddy(const void* self, QModelIndex* (*callback)(const void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAbstractListModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
///
/// @return libqt_list of QModelIndex*
///
libqt_list q_abstractlistmodel_match(const void* self, const void* start, int role, const void* value, int hits, int32_t flags);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAbstractListModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
///
/// @return libqt_list of QModelIndex*
///
libqt_list q_abstractlistmodel_super_match(const void* self, const void* start, int role, const void* value, int hits, int32_t flags);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAbstractListModel*
/// @param callback libqt_list of QModelIndex* func(QAbstractListModel* self, QModelIndex* start, int role, QVariant* value, int hits, flag of enum Qt__MatchFlag flags)
///
void q_abstractlistmodel_on_match(const void* self, libqt_list (*callback)(const void*, const void*, int, const void*, int, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAbstractListModel*
/// @param index QModelIndex*
///
QSize* q_abstractlistmodel_span(const void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAbstractListModel*
/// @param index QModelIndex*
///
QSize* q_abstractlistmodel_super_span(const void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAbstractListModel*
/// @param callback QSize* func(QAbstractListModel* self, QModelIndex* index)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_abstractlistmodel_on_span(const void* self, QSize* (*callback)(const void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#roleNames)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map of int to char*
/// for (size_t i = 0; i < map.len; ++i) {
///     libqt_free(map.values[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAbstractListModel*
///
/// @return libqt_map of int to char*
///
libqt_map q_abstractlistmodel_role_names(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#roleNames)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map of int to char*
/// for (size_t i = 0; i < map.len; ++i) {
///     libqt_free(map.values[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAbstractListModel*
///
/// @return libqt_map of int to char*
///
libqt_map q_abstractlistmodel_super_role_names(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#roleNames)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAbstractListModel*
/// @param callback libqt_map of int to char* func(QAbstractListModel* self)
///
void q_abstractlistmodel_on_role_names(const void* self, libqt_map (*callback)(const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAbstractListModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
///
void q_abstractlistmodel_multi_data(const void* self, const void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAbstractListModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
///
void q_abstractlistmodel_super_multi_data(const void* self, const void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAbstractListModel*
/// @param callback void func(QAbstractListModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan)
///
void q_abstractlistmodel_on_multi_data(const void* self, void (*callback)(const void*, const void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractListModel*
///
bool q_abstractlistmodel_submit(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractListModel*
///
bool q_abstractlistmodel_super_submit(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback bool func(QAbstractListModel* self)
///
void q_abstractlistmodel_on_submit(void* self, bool (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractListModel*
///
void q_abstractlistmodel_revert(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractListModel*
///
void q_abstractlistmodel_super_revert(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self)
///
void q_abstractlistmodel_on_revert(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractListModel*
///
void q_abstractlistmodel_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractListModel*
///
void q_abstractlistmodel_super_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self)
///
void q_abstractlistmodel_on_reset_internal_data(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractListModel*
/// @param event QEvent*
///
bool q_abstractlistmodel_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param event QEvent*
///
bool q_abstractlistmodel_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback bool func(QAbstractListModel* self, QEvent* event)
///
void q_abstractlistmodel_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractListModel*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_abstractlistmodel_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_abstractlistmodel_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback bool func(QAbstractListModel* self, QObject* watched, QEvent* event)
///
void q_abstractlistmodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractListModel*
/// @param event QTimerEvent*
///
void q_abstractlistmodel_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param event QTimerEvent*
///
void q_abstractlistmodel_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self, QTimerEvent* event)
///
void q_abstractlistmodel_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractListModel*
/// @param event QChildEvent*
///
void q_abstractlistmodel_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param event QChildEvent*
///
void q_abstractlistmodel_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self, QChildEvent* event)
///
void q_abstractlistmodel_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractListModel*
/// @param event QEvent*
///
void q_abstractlistmodel_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param event QEvent*
///
void q_abstractlistmodel_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self, QEvent* event)
///
void q_abstractlistmodel_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractListModel*
/// @param signal QMetaMethod*
///
void q_abstractlistmodel_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param signal QMetaMethod*
///
void q_abstractlistmodel_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self, QMetaMethod* signal)
///
void q_abstractlistmodel_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractListModel*
/// @param signal QMetaMethod*
///
void q_abstractlistmodel_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param signal QMetaMethod*
///
void q_abstractlistmodel_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self, QMetaMethod* signal)
///
void q_abstractlistmodel_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAbstractListModel*
/// @param row int
/// @param column int
///
QModelIndex* q_abstractlistmodel_create_index(const void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAbstractListModel*
/// @param row int
/// @param column int
///
QModelIndex* q_abstractlistmodel_super_create_index(const void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAbstractListModel*
/// @param callback QModelIndex* func(QAbstractListModel* self, int row, int column)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_abstractlistmodel_on_create_index(const void* self, QModelIndex* (*callback)(const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAbstractListModel*
/// @param indexes libqt_list of QModelIndex*
/// @param stream QDataStream*
///
void q_abstractlistmodel_encode_data(const void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAbstractListModel*
/// @param indexes libqt_list of QModelIndex*
/// @param stream QDataStream*
///
void q_abstractlistmodel_super_encode_data(const void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAbstractListModel*
/// @param callback void func(QAbstractListModel* self, libqt_list of QModelIndex* indexes, QDataStream* stream)
///
void q_abstractlistmodel_on_encode_data(const void* self, void (*callback)(const void*, libqt_list, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractListModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
/// @param stream QDataStream*
///
bool q_abstractlistmodel_decode_data(void* self, int row, int column, const void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
/// @param stream QDataStream*
///
bool q_abstractlistmodel_super_decode_data(void* self, int row, int column, const void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback bool func(QAbstractListModel* self, int row, int column, QModelIndex* parent, QDataStream* stream)
///
void q_abstractlistmodel_on_decode_data(void* self, bool (*callback)(void*, int, int, const void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractListModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_abstractlistmodel_begin_insert_rows(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_abstractlistmodel_super_begin_insert_rows(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self, QModelIndex* parent, int first, int last)
///
void q_abstractlistmodel_on_begin_insert_rows(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractListModel*
///
void q_abstractlistmodel_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractListModel*
///
void q_abstractlistmodel_super_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self)
///
void q_abstractlistmodel_on_end_insert_rows(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractListModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_abstractlistmodel_begin_remove_rows(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_abstractlistmodel_super_begin_remove_rows(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self, QModelIndex* parent, int first, int last)
///
void q_abstractlistmodel_on_begin_remove_rows(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractListModel*
///
void q_abstractlistmodel_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractListModel*
///
void q_abstractlistmodel_super_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self)
///
void q_abstractlistmodel_on_end_remove_rows(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractListModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationRow int
///
bool q_abstractlistmodel_begin_move_rows(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationRow int
///
bool q_abstractlistmodel_super_begin_move_rows(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback bool func(QAbstractListModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow)
///
void q_abstractlistmodel_on_begin_move_rows(void* self, bool (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractListModel*
///
void q_abstractlistmodel_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractListModel*
///
void q_abstractlistmodel_super_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self)
///
void q_abstractlistmodel_on_end_move_rows(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractListModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_abstractlistmodel_begin_insert_columns(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_abstractlistmodel_super_begin_insert_columns(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self, QModelIndex* parent, int first, int last)
///
void q_abstractlistmodel_on_begin_insert_columns(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractListModel*
///
void q_abstractlistmodel_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractListModel*
///
void q_abstractlistmodel_super_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self)
///
void q_abstractlistmodel_on_end_insert_columns(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractListModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_abstractlistmodel_begin_remove_columns(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_abstractlistmodel_super_begin_remove_columns(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self, QModelIndex* parent, int first, int last)
///
void q_abstractlistmodel_on_begin_remove_columns(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractListModel*
///
void q_abstractlistmodel_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractListModel*
///
void q_abstractlistmodel_super_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self)
///
void q_abstractlistmodel_on_end_remove_columns(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractListModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationColumn int
///
bool q_abstractlistmodel_begin_move_columns(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationColumn int
///
bool q_abstractlistmodel_super_begin_move_columns(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback bool func(QAbstractListModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn)
///
void q_abstractlistmodel_on_begin_move_columns(void* self, bool (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractListModel*
///
void q_abstractlistmodel_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractListModel*
///
void q_abstractlistmodel_super_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self)
///
void q_abstractlistmodel_on_end_move_columns(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractListModel*
///
void q_abstractlistmodel_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractListModel*
///
void q_abstractlistmodel_super_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self)
///
void q_abstractlistmodel_on_begin_reset_model(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractListModel*
///
void q_abstractlistmodel_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractListModel*
///
void q_abstractlistmodel_super_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self)
///
void q_abstractlistmodel_on_end_reset_model(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractListModel*
/// @param from QModelIndex*
/// @param to QModelIndex*
///
void q_abstractlistmodel_change_persistent_index(void* self, const void* from, const void* to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param from QModelIndex*
/// @param to QModelIndex*
///
void q_abstractlistmodel_super_change_persistent_index(void* self, const void* from, const void* to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self, QModelIndex* from, QModelIndex* to)
///
void q_abstractlistmodel_on_change_persistent_index(void* self, void (*callback)(void*, const void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractListModel*
/// @param from libqt_list of QModelIndex*
/// @param to libqt_list of QModelIndex*
///
void q_abstractlistmodel_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param from libqt_list of QModelIndex*
/// @param to libqt_list of QModelIndex*
///
void q_abstractlistmodel_super_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self, libqt_list of QModelIndex* from, libqt_list of QModelIndex* to)
///
void q_abstractlistmodel_on_change_persistent_index_list(void* self, void (*callback)(void*, libqt_list, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAbstractListModel*
///
/// @return libqt_list of QModelIndex*
///
libqt_list q_abstractlistmodel_persistent_index_list(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAbstractListModel*
///
/// @return libqt_list of QModelIndex*
///
libqt_list q_abstractlistmodel_super_persistent_index_list(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAbstractListModel*
/// @param callback libqt_list of QModelIndex* func(QAbstractListModel* self)
///
void q_abstractlistmodel_on_persistent_index_list(const void* self, libqt_list (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAbstractListModel*
///
QObject* q_abstractlistmodel_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAbstractListModel*
///
QObject* q_abstractlistmodel_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAbstractListModel*
/// @param callback QObject* func(QAbstractListModel* self)
///
void q_abstractlistmodel_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAbstractListModel*
///
int32_t q_abstractlistmodel_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAbstractListModel*
///
int32_t q_abstractlistmodel_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAbstractListModel*
/// @param callback int32_t func(QAbstractListModel* self)
///
void q_abstractlistmodel_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAbstractListModel*
/// @param signal const char*
///
int32_t q_abstractlistmodel_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAbstractListModel*
/// @param signal const char*
///
int32_t q_abstractlistmodel_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAbstractListModel*
/// @param callback int32_t func(QAbstractListModel* self, const char* signal)
///
void q_abstractlistmodel_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAbstractListModel*
/// @param signal QMetaMethod*
///
bool q_abstractlistmodel_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAbstractListModel*
/// @param signal QMetaMethod*
///
bool q_abstractlistmodel_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAbstractListModel*
/// @param callback bool func(QAbstractListModel* self, QMetaMethod* signal)
///
void q_abstractlistmodel_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self, QModelIndex* parent, int first, int last)
///
void q_abstractlistmodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self, QModelIndex* parent, int first, int last)
///
void q_abstractlistmodel_on_rows_inserted(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self, QModelIndex* parent, int first, int last)
///
void q_abstractlistmodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self, QModelIndex* parent, int first, int last)
///
void q_abstractlistmodel_on_rows_removed(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self, QModelIndex* parent, int first, int last)
///
void q_abstractlistmodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self, QModelIndex* parent, int first, int last)
///
void q_abstractlistmodel_on_columns_inserted(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self, QModelIndex* parent, int first, int last)
///
void q_abstractlistmodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self, QModelIndex* parent, int first, int last)
///
void q_abstractlistmodel_on_columns_removed(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelAboutToBeReset)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self)
///
void q_abstractlistmodel_on_model_about_to_be_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelReset)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self)
///
void q_abstractlistmodel_on_model_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
///
void q_abstractlistmodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
///
void q_abstractlistmodel_on_rows_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
///
void q_abstractlistmodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
///
void q_abstractlistmodel_on_columns_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self, const char* objectName)
///
void q_abstractlistmodel_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#dtor.QAbstractListModel)
///
/// Delete this object from C++ memory.
///
/// @param self QAbstractListModel*
///
void q_abstractlistmodel_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#public-types)

typedef enum {
    QABSTRACTITEMMODEL_LAYOUTCHANGEHINT_NOLAYOUTCHANGEHINT = 0,
    QABSTRACTITEMMODEL_LAYOUTCHANGEHINT_VERTICALSORTHINT = 1,
    QABSTRACTITEMMODEL_LAYOUTCHANGEHINT_HORIZONTALSORTHINT = 2
} QAbstractItemModel__LayoutChangeHint;

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#public-types)

typedef enum {
    QABSTRACTITEMMODEL_CHECKINDEXOPTION_NOOPTION = 0,
    QABSTRACTITEMMODEL_CHECKINDEXOPTION_INDEXISVALID = 1,
    QABSTRACTITEMMODEL_CHECKINDEXOPTION_DONOTUSEPARENT = 2,
    QABSTRACTITEMMODEL_CHECKINDEXOPTION_PARENTISINVALID = 4
} QAbstractItemModel__CheckIndexOption;

#endif
