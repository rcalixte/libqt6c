#pragma once
#ifndef SRC_QT6C_LIBQABSTRACTITEMMODEL_H
#define SRC_QT6C_LIBQABSTRACTITEMMODEL_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
QModelRoleData* q_modelroledata_new2(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmodelroledata.html#role)
///
/// @param self QModelRoleData*
///
int32_t q_modelroledata_role(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmodelroledata.html#data)
///
/// @param self QModelRoleData*
///
QVariant* q_modelroledata_data(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmodelroledata.html#data)
///
/// @param self QModelRoleData*
///
const QVariant* q_modelroledata_data2(void* self);

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
void q_modelroledata_operator_assign(void* self, void* param1);

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
QModelRoleDataSpan* q_modelroledataspan_new(void* other);

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
/// @param lenVal int64_t
///
QModelRoleDataSpan* q_modelroledataspan_new5(void* modelRoleData, int64_t lenVal);

/// [Upstream resources](https://doc.qt.io/qt-6/qmodelroledataspan.html)

/// q_modelroledataspan_new6 constructs a new QModelRoleDataSpan object.
///
/// @param param1 QModelRoleDataSpan*
///
QModelRoleDataSpan* q_modelroledataspan_new6(void* param1);

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
/// @param self QModelRoleDataSpan*
///
int64_t q_modelroledataspan_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmodelroledataspan.html#length)
///
/// @param self QModelRoleDataSpan*
///
int64_t q_modelroledataspan_length(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmodelroledataspan.html#data)
///
/// @param self QModelRoleDataSpan*
///
QModelRoleData* q_modelroledataspan_data(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmodelroledataspan.html#begin)
///
/// @param self QModelRoleDataSpan*
///
QModelRoleData* q_modelroledataspan_begin(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmodelroledataspan.html#end)
///
/// @param self QModelRoleDataSpan*
///
QModelRoleData* q_modelroledataspan_end(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmodelroledataspan.html#operator-5b-5d)
///
/// @param self QModelRoleDataSpan*
/// @param index int64_t
///
QModelRoleData* q_modelroledataspan_operator_subscript(void* self, int64_t index);

/// [Upstream resources](https://doc.qt.io/qt-6/qmodelroledataspan.html#dataForRole)
///
/// @param self QModelRoleDataSpan*
/// @param role int
///
QVariant* q_modelroledataspan_data_for_role(void* self, int role);

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
QModelIndex* q_modelindex_new(void* other);

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
QModelIndex* q_modelindex_new4(void* param1);

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
/// @param self QModelIndex*
///
int32_t q_modelindex_row(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmodelindex.html#column)
///
/// @param self QModelIndex*
///
int32_t q_modelindex_column(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmodelindex.html#internalId)
///
/// @param self QModelIndex*
///
uintptr_t q_modelindex_internal_id(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmodelindex.html#internalPointer)
///
/// @param self QModelIndex*
///
void* q_modelindex_internal_pointer(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmodelindex.html#constInternalPointer)
///
/// @param self QModelIndex*
///
const void* q_modelindex_const_internal_pointer(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmodelindex.html#parent)
///
/// @param self QModelIndex*
///
QModelIndex* q_modelindex_parent(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmodelindex.html#sibling)
///
/// @param self QModelIndex*
/// @param row int
/// @param column int
///
QModelIndex* q_modelindex_sibling(void* self, int row, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qmodelindex.html#siblingAtColumn)
///
/// @param self QModelIndex*
/// @param column int
///
QModelIndex* q_modelindex_sibling_at_column(void* self, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qmodelindex.html#siblingAtRow)
///
/// @param self QModelIndex*
/// @param row int
///
QModelIndex* q_modelindex_sibling_at_row(void* self, int row);

/// [Upstream resources](https://doc.qt.io/qt-6/qmodelindex.html#data)
///
/// @param self QModelIndex*
///
QVariant* q_modelindex_data(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmodelindex.html#multiData)
///
/// @param self QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
///
void q_modelindex_multi_data(void* self, void* roleDataSpan);

/// [Upstream resources](https://doc.qt.io/qt-6/qmodelindex.html#flags)
///
/// @param self QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
///
int32_t q_modelindex_flags(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmodelindex.html#model)
///
/// @param self QModelIndex*
///
const QAbstractItemModel* q_modelindex_model(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmodelindex.html#isValid)
///
/// @param self QModelIndex*
///
bool q_modelindex_is_valid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmodelindex.html#data)
///
/// @param self QModelIndex*
/// @param role int
///
QVariant* q_modelindex_data1(void* self, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qmodelindex.html#dtor.QModelIndex)
///
/// Delete this object from C++ memory.
///
/// @param self QModelIndex*
///
void q_modelindex_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpersistentmodelindex.html)

/// q_persistentmodelindex_new constructs a new QPersistentModelIndex object.
///
QPersistentModelIndex* q_persistentmodelindex_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qpersistentmodelindex.html)

/// q_persistentmodelindex_new2 constructs a new QPersistentModelIndex object.
///
/// @param index QModelIndex*
///
QPersistentModelIndex* q_persistentmodelindex_new2(void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qpersistentmodelindex.html)

/// q_persistentmodelindex_new3 constructs a new QPersistentModelIndex object.
///
/// @param other QPersistentModelIndex*
///
QPersistentModelIndex* q_persistentmodelindex_new3(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qpersistentmodelindex.html#operator-eq)
///
/// @param self QPersistentModelIndex*
/// @param other QPersistentModelIndex*
///
void q_persistentmodelindex_operator_assign(void* self, void* other);

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
void q_persistentmodelindex_operator_assign2(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qpersistentmodelindex.html#operator)
///
/// @param self QPersistentModelIndex*
///
QModelIndex* q_persistentmodelindex_to_q_model_index(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpersistentmodelindex.html#row)
///
/// @param self QPersistentModelIndex*
///
int32_t q_persistentmodelindex_row(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpersistentmodelindex.html#column)
///
/// @param self QPersistentModelIndex*
///
int32_t q_persistentmodelindex_column(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpersistentmodelindex.html#internalPointer)
///
/// @param self QPersistentModelIndex*
///
void* q_persistentmodelindex_internal_pointer(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpersistentmodelindex.html#constInternalPointer)
///
/// @param self QPersistentModelIndex*
///
const void* q_persistentmodelindex_const_internal_pointer(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpersistentmodelindex.html#internalId)
///
/// @param self QPersistentModelIndex*
///
uintptr_t q_persistentmodelindex_internal_id(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpersistentmodelindex.html#parent)
///
/// @param self QPersistentModelIndex*
///
QModelIndex* q_persistentmodelindex_parent(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpersistentmodelindex.html#sibling)
///
/// @param self QPersistentModelIndex*
/// @param row int
/// @param column int
///
QModelIndex* q_persistentmodelindex_sibling(void* self, int row, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qpersistentmodelindex.html#data)
///
/// @param self QPersistentModelIndex*
///
QVariant* q_persistentmodelindex_data(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpersistentmodelindex.html#multiData)
///
/// @param self QPersistentModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
///
void q_persistentmodelindex_multi_data(void* self, void* roleDataSpan);

/// [Upstream resources](https://doc.qt.io/qt-6/qpersistentmodelindex.html#flags)
///
/// @param self QPersistentModelIndex*
///
/// @return flag of enum Qt__ItemFlag
///
int32_t q_persistentmodelindex_flags(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpersistentmodelindex.html#model)
///
/// @param self QPersistentModelIndex*
///
const QAbstractItemModel* q_persistentmodelindex_model(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpersistentmodelindex.html#isValid)
///
/// @param self QPersistentModelIndex*
///
bool q_persistentmodelindex_is_valid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpersistentmodelindex.html#data)
///
/// @param self QPersistentModelIndex*
/// @param role int
///
QVariant* q_persistentmodelindex_data1(void* self, int role);

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
/// @param self QAbstractItemModel*
///
const QMetaObject* q_abstractitemmodel_meta_object(void* self);

/// @param self QAbstractItemModel*
/// @param param1 const char*
///
void* q_abstractitemmodel_metacast(void* self, const char* param1);

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
int32_t q_abstractitemmodel_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_abstractitemmodel_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self QAbstractItemModel*
/// @param row int
/// @param column int
///
bool q_abstractitemmodel_has_index(void* self, int row, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#index)
///
/// @param self QAbstractItemModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
QModelIndex* q_abstractitemmodel_index(void* self, int row, int column, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#index)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback QModelIndex* func(QAbstractItemModel* self, int row, int column, QModelIndex* parent)
///
void q_abstractitemmodel_on_index(void* self, QModelIndex* (*callback)(void*, int, int, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#index)
///
/// Base class method implementation
///
/// @param self QAbstractItemModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
QModelIndex* q_abstractitemmodel_qbase_index(void* self, int row, int column, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
///
/// @param self QAbstractItemModel*
/// @param child QModelIndex*
///
QModelIndex* q_abstractitemmodel_parent(void* self, void* child);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback QModelIndex* func(QAbstractItemModel* self, QModelIndex* child)
///
void q_abstractitemmodel_on_parent(void* self, QModelIndex* (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
///
/// Base class method implementation
///
/// @param self QAbstractItemModel*
/// @param child QModelIndex*
///
QModelIndex* q_abstractitemmodel_qbase_parent(void* self, void* child);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sibling)
///
/// @param self QAbstractItemModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
///
QModelIndex* q_abstractitemmodel_sibling(void* self, int row, int column, void* idx);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sibling)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback QModelIndex* func(QAbstractItemModel* self, int row, int column, QModelIndex* idx)
///
void q_abstractitemmodel_on_sibling(void* self, QModelIndex* (*callback)(void*, int, int, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sibling)
///
/// Base class method implementation
///
/// @param self QAbstractItemModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
///
QModelIndex* q_abstractitemmodel_qbase_sibling(void* self, int row, int column, void* idx);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowCount)
///
/// @param self QAbstractItemModel*
/// @param parent QModelIndex*
///
int32_t q_abstractitemmodel_row_count(void* self, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowCount)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback int32_t func(QAbstractItemModel* self, QModelIndex* parent)
///
void q_abstractitemmodel_on_row_count(void* self, int32_t (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowCount)
///
/// Base class method implementation
///
/// @param self QAbstractItemModel*
/// @param parent QModelIndex*
///
int32_t q_abstractitemmodel_qbase_row_count(void* self, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnCount)
///
/// @param self QAbstractItemModel*
/// @param parent QModelIndex*
///
int32_t q_abstractitemmodel_column_count(void* self, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnCount)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback int32_t func(QAbstractItemModel* self, QModelIndex* parent)
///
void q_abstractitemmodel_on_column_count(void* self, int32_t (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnCount)
///
/// Base class method implementation
///
/// @param self QAbstractItemModel*
/// @param parent QModelIndex*
///
int32_t q_abstractitemmodel_qbase_column_count(void* self, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// @param self QAbstractItemModel*
/// @param parent QModelIndex*
///
bool q_abstractitemmodel_has_children(void* self, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback bool func(QAbstractItemModel* self, QModelIndex* parent)
///
void q_abstractitemmodel_on_has_children(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// Base class method implementation
///
/// @param self QAbstractItemModel*
/// @param parent QModelIndex*
///
bool q_abstractitemmodel_qbase_has_children(void* self, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#data)
///
/// @param self QAbstractItemModel*
/// @param index QModelIndex*
/// @param role int
///
QVariant* q_abstractitemmodel_data(void* self, void* index, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#data)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback QVariant* func(QAbstractItemModel* self, QModelIndex* index, int role)
///
void q_abstractitemmodel_on_data(void* self, QVariant* (*callback)(void*, void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#data)
///
/// Base class method implementation
///
/// @param self QAbstractItemModel*
/// @param index QModelIndex*
/// @param role int
///
QVariant* q_abstractitemmodel_qbase_data(void* self, void* index, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
///
/// @param self QAbstractItemModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
///
bool q_abstractitemmodel_set_data(void* self, void* index, void* value, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback bool func(QAbstractItemModel* self, QModelIndex* index, QVariant* value, int role)
///
void q_abstractitemmodel_on_set_data(void* self, bool (*callback)(void*, void*, void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
///
/// Base class method implementation
///
/// @param self QAbstractItemModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
///
bool q_abstractitemmodel_qbase_set_data(void* self, void* index, void* value, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
///
/// @param self QAbstractItemModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
///
QVariant* q_abstractitemmodel_header_data(void* self, int section, int32_t orientation, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback QVariant* func(QAbstractItemModel* self, int section, enum Qt__Orientation orientation, int role)
///
void q_abstractitemmodel_on_header_data(void* self, QVariant* (*callback)(void*, int, int32_t, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
///
/// Base class method implementation
///
/// @param self QAbstractItemModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
///
QVariant* q_abstractitemmodel_qbase_header_data(void* self, int section, int32_t orientation, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// @param self QAbstractItemModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
///
bool q_abstractitemmodel_set_header_data(void* self, int section, int32_t orientation, void* value, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback bool func(QAbstractItemModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role)
///
void q_abstractitemmodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, void*, int));

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
bool q_abstractitemmodel_qbase_set_header_data(void* self, int section, int32_t orientation, void* value, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map
/// for (size_t i = 0; i < map.len; ++i) {
///     free(((QVariant*)map.values)[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// @param self QAbstractItemModel*
/// @param index QModelIndex*
///
libqt_map /* of int to QVariant* */ q_abstractitemmodel_item_data(void* self, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback libqt_map /* of int to QVariant* */ func(QAbstractItemModel* self, QModelIndex* index)
///
void q_abstractitemmodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// Base class method implementation
///
/// @param self QAbstractItemModel*
/// @param index QModelIndex*
///
libqt_map /* of int to QVariant* */ q_abstractitemmodel_qbase_item_data(void* self, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// @param self QAbstractItemModel*
/// @param index QModelIndex*
/// @param roles libqt_map /* of int to QVariant* */
///
bool q_abstractitemmodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback bool func(QAbstractItemModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ /* of int to QVariant* */)
///
void q_abstractitemmodel_on_set_item_data(void* self, bool (*callback)(void*, void*, libqt_map /* of int to QVariant* */));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Base class method implementation
///
/// @param self QAbstractItemModel*
/// @param index QModelIndex*
/// @param roles libqt_map /* of int to QVariant* */
///
bool q_abstractitemmodel_qbase_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// @param self QAbstractItemModel*
/// @param index QModelIndex*
///
bool q_abstractitemmodel_clear_item_data(void* self, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback bool func(QAbstractItemModel* self, QModelIndex* index)
///
void q_abstractitemmodel_on_clear_item_data(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Base class method implementation
///
/// @param self QAbstractItemModel*
/// @param index QModelIndex*
///
bool q_abstractitemmodel_qbase_clear_item_data(void* self, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QAbstractItemModel*
///
const char** q_abstractitemmodel_mime_types(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback const char** func()
///
void q_abstractitemmodel_on_mime_types(void* self, const char** (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// Base class method implementation
///
/// @param self QAbstractItemModel*
///
const char** q_abstractitemmodel_qbase_mime_types(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// @param self QAbstractItemModel*
/// @param indexes libqt_list /* of QModelIndex* */
///
QMimeData* q_abstractitemmodel_mime_data(void* self, libqt_list indexes);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback QMimeData* func(QAbstractItemModel* self, QModelIndex** indexes)
///
void q_abstractitemmodel_on_mime_data(void* self, QMimeData* (*callback)(void*, QModelIndex**));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// Base class method implementation
///
/// @param self QAbstractItemModel*
/// @param indexes libqt_list /* of QModelIndex* */
///
QMimeData* q_abstractitemmodel_qbase_mime_data(void* self, libqt_list indexes);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// @param self QAbstractItemModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_abstractitemmodel_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback bool func(QAbstractItemModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
///
void q_abstractitemmodel_on_can_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
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
bool q_abstractitemmodel_qbase_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dropMimeData)
///
/// @param self QAbstractItemModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_abstractitemmodel_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dropMimeData)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback bool func(QAbstractItemModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
///
void q_abstractitemmodel_on_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*));

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
bool q_abstractitemmodel_qbase_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// @param self QAbstractItemModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_abstractitemmodel_supported_drop_actions(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback int32_t func()
///
void q_abstractitemmodel_on_supported_drop_actions(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Base class method implementation
///
/// @param self QAbstractItemModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_abstractitemmodel_qbase_supported_drop_actions(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// @param self QAbstractItemModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_abstractitemmodel_supported_drag_actions(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback int32_t func()
///
void q_abstractitemmodel_on_supported_drag_actions(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Base class method implementation
///
/// @param self QAbstractItemModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_abstractitemmodel_qbase_supported_drag_actions(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// @param self QAbstractItemModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool q_abstractitemmodel_insert_rows(void* self, int row, int count, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback bool func(QAbstractItemModel* self, int row, int count, QModelIndex* parent)
///
void q_abstractitemmodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Base class method implementation
///
/// @param self QAbstractItemModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool q_abstractitemmodel_qbase_insert_rows(void* self, int row, int count, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// @param self QAbstractItemModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool q_abstractitemmodel_insert_columns(void* self, int column, int count, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback bool func(QAbstractItemModel* self, int column, int count, QModelIndex* parent)
///
void q_abstractitemmodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Base class method implementation
///
/// @param self QAbstractItemModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool q_abstractitemmodel_qbase_insert_columns(void* self, int column, int count, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// @param self QAbstractItemModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool q_abstractitemmodel_remove_rows(void* self, int row, int count, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback bool func(QAbstractItemModel* self, int row, int count, QModelIndex* parent)
///
void q_abstractitemmodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Base class method implementation
///
/// @param self QAbstractItemModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool q_abstractitemmodel_qbase_remove_rows(void* self, int row, int count, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// @param self QAbstractItemModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool q_abstractitemmodel_remove_columns(void* self, int column, int count, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback bool func(QAbstractItemModel* self, int column, int count, QModelIndex* parent)
///
void q_abstractitemmodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Base class method implementation
///
/// @param self QAbstractItemModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool q_abstractitemmodel_qbase_remove_columns(void* self, int column, int count, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// @param self QAbstractItemModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_abstractitemmodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback bool func(QAbstractItemModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild)
///
void q_abstractitemmodel_on_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int));

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
bool q_abstractitemmodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// @param self QAbstractItemModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_abstractitemmodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback bool func(QAbstractItemModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild)
///
void q_abstractitemmodel_on_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int));

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
bool q_abstractitemmodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

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
bool q_abstractitemmodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
///
/// @param self QAbstractItemModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_abstractitemmodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// @param self QAbstractItemModel*
/// @param parent QModelIndex*
///
void q_abstractitemmodel_fetch_more(void* self, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback void func(QAbstractItemModel* self, QModelIndex* parent)
///
void q_abstractitemmodel_on_fetch_more(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Base class method implementation
///
/// @param self QAbstractItemModel*
/// @param parent QModelIndex*
///
void q_abstractitemmodel_qbase_fetch_more(void* self, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// @param self QAbstractItemModel*
/// @param parent QModelIndex*
///
bool q_abstractitemmodel_can_fetch_more(void* self, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback bool func(QAbstractItemModel* self, QModelIndex* parent)
///
void q_abstractitemmodel_on_can_fetch_more(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Base class method implementation
///
/// @param self QAbstractItemModel*
/// @param parent QModelIndex*
///
bool q_abstractitemmodel_qbase_can_fetch_more(void* self, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#flags)
///
/// @param self QAbstractItemModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
///
int32_t q_abstractitemmodel_flags(void* self, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#flags)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback int32_t func(QAbstractItemModel* self, QModelIndex* index)
///
void q_abstractitemmodel_on_flags(void* self, int32_t (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#flags)
///
/// Base class method implementation
///
/// @param self QAbstractItemModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
///
int32_t q_abstractitemmodel_qbase_flags(void* self, void* index);

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
void q_abstractitemmodel_qbase_sort(void* self, int column, int32_t order);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// @param self QAbstractItemModel*
/// @param index QModelIndex*
///
QModelIndex* q_abstractitemmodel_buddy(void* self, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback QModelIndex* func(QAbstractItemModel* self, QModelIndex* index)
///
void q_abstractitemmodel_on_buddy(void* self, QModelIndex* (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Base class method implementation
///
/// @param self QAbstractItemModel*
/// @param index QModelIndex*
///
QModelIndex* q_abstractitemmodel_qbase_buddy(void* self, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// @param self QAbstractItemModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
///
libqt_list /* of QModelIndex* */ q_abstractitemmodel_match(void* self, void* start, int role, void* value, int hits, int32_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback QModelIndex** func(QAbstractItemModel* self, QModelIndex* start, int role, QVariant* value, int hits, flag of enum Qt__MatchFlag flags)
///
void q_abstractitemmodel_on_match(void* self, QModelIndex** (*callback)(void*, void*, int, void*, int, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Base class method implementation
///
/// @param self QAbstractItemModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
///
libqt_list /* of QModelIndex* */ q_abstractitemmodel_qbase_match(void* self, void* start, int role, void* value, int hits, int32_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// @param self QAbstractItemModel*
/// @param index QModelIndex*
///
QSize* q_abstractitemmodel_span(void* self, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback QSize* func(QAbstractItemModel* self, QModelIndex* index)
///
void q_abstractitemmodel_on_span(void* self, QSize* (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Base class method implementation
///
/// @param self QAbstractItemModel*
/// @param index QModelIndex*
///
QSize* q_abstractitemmodel_qbase_span(void* self, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#roleNames)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map
/// for (size_t i = 0; i < map.len; ++i) {
///     libqt_free(map.values[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// @param self QAbstractItemModel*
///
libqt_map /* of int to char* */ q_abstractitemmodel_role_names(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#roleNames)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback libqt_map /* of int to char* */ func()
///
void q_abstractitemmodel_on_role_names(void* self, libqt_map /* of int to char* */ (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#roleNames)
///
/// Base class method implementation
///
/// @param self QAbstractItemModel*
///
libqt_map /* of int to char* */ q_abstractitemmodel_qbase_role_names(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self QAbstractItemModel*
/// @param index QModelIndex*
///
bool q_abstractitemmodel_check_index(void* self, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// @param self QAbstractItemModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
///
void q_abstractitemmodel_multi_data(void* self, void* index, void* roleDataSpan);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback void func(QAbstractItemModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan)
///
void q_abstractitemmodel_on_multi_data(void* self, void (*callback)(void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Base class method implementation
///
/// @param self QAbstractItemModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
///
void q_abstractitemmodel_qbase_multi_data(void* self, void* index, void* roleDataSpan);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QAbstractItemModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
///
void q_abstractitemmodel_data_changed(void* self, void* topLeft, void* bottomRight);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QAbstractItemModel*
/// @param callback void func(QAbstractItemModel* self, QModelIndex* topLeft, QModelIndex* bottomRight)
///
void q_abstractitemmodel_on_data_changed(void* self, void (*callback)(void*, void*, void*));

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
/// @param callback bool func()
///
void q_abstractitemmodel_on_submit(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Base class method implementation
///
/// @param self QAbstractItemModel*
///
bool q_abstractitemmodel_qbase_submit(void* self);

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
/// @param callback void func()
///
void q_abstractitemmodel_on_revert(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Base class method implementation
///
/// @param self QAbstractItemModel*
///
void q_abstractitemmodel_qbase_revert(void* self);

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
/// @param callback void func()
///
void q_abstractitemmodel_on_reset_internal_data(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Base class method implementation
///
/// @param self QAbstractItemModel*
///
void q_abstractitemmodel_qbase_reset_internal_data(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// @param self QAbstractItemModel*
/// @param row int
/// @param column int
///
QModelIndex* q_abstractitemmodel_create_index(void* self, int row, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback QModelIndex* func(QAbstractItemModel* self, int row, int column)
///
void q_abstractitemmodel_on_create_index(void* self, QModelIndex* (*callback)(void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Base class method implementation
///
/// @param self QAbstractItemModel*
/// @param row int
/// @param column int
///
QModelIndex* q_abstractitemmodel_qbase_create_index(void* self, int row, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// @param self QAbstractItemModel*
/// @param row int
/// @param column int
/// @param id uintptr_t
///
QModelIndex* q_abstractitemmodel_create_index2(void* self, int row, int column, uintptr_t id);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback QModelIndex* func(QAbstractItemModel* self, int row, int column, uintptr_t id)
///
void q_abstractitemmodel_on_create_index2(void* self, QModelIndex* (*callback)(void*, int, int, uintptr_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Base class method implementation
///
/// @param self QAbstractItemModel*
/// @param row int
/// @param column int
/// @param id uintptr_t
///
QModelIndex* q_abstractitemmodel_qbase_create_index2(void* self, int row, int column, uintptr_t id);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// @param self QAbstractItemModel*
/// @param indexes libqt_list /* of QModelIndex* */
/// @param stream QDataStream*
///
void q_abstractitemmodel_encode_data(void* self, libqt_list indexes, void* stream);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback void func(QAbstractItemModel* self, QModelIndex** indexes, QDataStream* stream)
///
void q_abstractitemmodel_on_encode_data(void* self, void (*callback)(void*, QModelIndex**, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Base class method implementation
///
/// @param self QAbstractItemModel*
/// @param indexes libqt_list /* of QModelIndex* */
/// @param stream QDataStream*
///
void q_abstractitemmodel_qbase_encode_data(void* self, libqt_list indexes, void* stream);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// @param self QAbstractItemModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
/// @param stream QDataStream*
///
bool q_abstractitemmodel_decode_data(void* self, int row, int column, void* parent, void* stream);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback bool func(QAbstractItemModel* self, int row, int column, QModelIndex* parent, QDataStream* stream)
///
void q_abstractitemmodel_on_decode_data(void* self, bool (*callback)(void*, int, int, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Base class method implementation
///
/// @param self QAbstractItemModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
/// @param stream QDataStream*
///
bool q_abstractitemmodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// @param self QAbstractItemModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_abstractitemmodel_begin_insert_rows(void* self, void* parent, int first, int last);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback void func(QAbstractItemModel* self, QModelIndex* parent, int first, int last)
///
void q_abstractitemmodel_on_begin_insert_rows(void* self, void (*callback)(void*, void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Base class method implementation
///
/// @param self QAbstractItemModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_abstractitemmodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// @param self QAbstractItemModel*
///
void q_abstractitemmodel_end_insert_rows(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback void func()
///
void q_abstractitemmodel_on_end_insert_rows(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Base class method implementation
///
/// @param self QAbstractItemModel*
///
void q_abstractitemmodel_qbase_end_insert_rows(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// @param self QAbstractItemModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_abstractitemmodel_begin_remove_rows(void* self, void* parent, int first, int last);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback void func(QAbstractItemModel* self, QModelIndex* parent, int first, int last)
///
void q_abstractitemmodel_on_begin_remove_rows(void* self, void (*callback)(void*, void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Base class method implementation
///
/// @param self QAbstractItemModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_abstractitemmodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// @param self QAbstractItemModel*
///
void q_abstractitemmodel_end_remove_rows(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback void func()
///
void q_abstractitemmodel_on_end_remove_rows(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Base class method implementation
///
/// @param self QAbstractItemModel*
///
void q_abstractitemmodel_qbase_end_remove_rows(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// @param self QAbstractItemModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationRow int
///
bool q_abstractitemmodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback bool func(QAbstractItemModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow)
///
void q_abstractitemmodel_on_begin_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Base class method implementation
///
/// @param self QAbstractItemModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationRow int
///
bool q_abstractitemmodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// @param self QAbstractItemModel*
///
void q_abstractitemmodel_end_move_rows(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback void func()
///
void q_abstractitemmodel_on_end_move_rows(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Base class method implementation
///
/// @param self QAbstractItemModel*
///
void q_abstractitemmodel_qbase_end_move_rows(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// @param self QAbstractItemModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_abstractitemmodel_begin_insert_columns(void* self, void* parent, int first, int last);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback void func(QAbstractItemModel* self, QModelIndex* parent, int first, int last)
///
void q_abstractitemmodel_on_begin_insert_columns(void* self, void (*callback)(void*, void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Base class method implementation
///
/// @param self QAbstractItemModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_abstractitemmodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// @param self QAbstractItemModel*
///
void q_abstractitemmodel_end_insert_columns(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback void func()
///
void q_abstractitemmodel_on_end_insert_columns(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Base class method implementation
///
/// @param self QAbstractItemModel*
///
void q_abstractitemmodel_qbase_end_insert_columns(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// @param self QAbstractItemModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_abstractitemmodel_begin_remove_columns(void* self, void* parent, int first, int last);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback void func(QAbstractItemModel* self, QModelIndex* parent, int first, int last)
///
void q_abstractitemmodel_on_begin_remove_columns(void* self, void (*callback)(void*, void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Base class method implementation
///
/// @param self QAbstractItemModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_abstractitemmodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// @param self QAbstractItemModel*
///
void q_abstractitemmodel_end_remove_columns(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback void func()
///
void q_abstractitemmodel_on_end_remove_columns(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Base class method implementation
///
/// @param self QAbstractItemModel*
///
void q_abstractitemmodel_qbase_end_remove_columns(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// @param self QAbstractItemModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationColumn int
///
bool q_abstractitemmodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback bool func(QAbstractItemModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn)
///
void q_abstractitemmodel_on_begin_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Base class method implementation
///
/// @param self QAbstractItemModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationColumn int
///
bool q_abstractitemmodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// @param self QAbstractItemModel*
///
void q_abstractitemmodel_end_move_columns(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback void func()
///
void q_abstractitemmodel_on_end_move_columns(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Base class method implementation
///
/// @param self QAbstractItemModel*
///
void q_abstractitemmodel_qbase_end_move_columns(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// @param self QAbstractItemModel*
///
void q_abstractitemmodel_begin_reset_model(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback void func()
///
void q_abstractitemmodel_on_begin_reset_model(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Base class method implementation
///
/// @param self QAbstractItemModel*
///
void q_abstractitemmodel_qbase_begin_reset_model(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// @param self QAbstractItemModel*
///
void q_abstractitemmodel_end_reset_model(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback void func()
///
void q_abstractitemmodel_on_end_reset_model(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Base class method implementation
///
/// @param self QAbstractItemModel*
///
void q_abstractitemmodel_qbase_end_reset_model(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// @param self QAbstractItemModel*
/// @param from QModelIndex*
/// @param to QModelIndex*
///
void q_abstractitemmodel_change_persistent_index(void* self, void* from, void* to);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback void func(QAbstractItemModel* self, QModelIndex* from, QModelIndex* to)
///
void q_abstractitemmodel_on_change_persistent_index(void* self, void (*callback)(void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Base class method implementation
///
/// @param self QAbstractItemModel*
/// @param from QModelIndex*
/// @param to QModelIndex*
///
void q_abstractitemmodel_qbase_change_persistent_index(void* self, void* from, void* to);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// @param self QAbstractItemModel*
/// @param from libqt_list /* of QModelIndex* */
/// @param to libqt_list /* of QModelIndex* */
///
void q_abstractitemmodel_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback void func(QAbstractItemModel* self, QModelIndex** from, QModelIndex** to)
///
void q_abstractitemmodel_on_change_persistent_index_list(void* self, void (*callback)(void*, QModelIndex**, QModelIndex**));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Base class method implementation
///
/// @param self QAbstractItemModel*
/// @param from libqt_list /* of QModelIndex* */
/// @param to libqt_list /* of QModelIndex* */
///
void q_abstractitemmodel_qbase_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// @param self QAbstractItemModel*
///
libqt_list /* of QModelIndex* */ q_abstractitemmodel_persistent_index_list(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback QModelIndex** func()
///
void q_abstractitemmodel_on_persistent_index_list(void* self, QModelIndex** (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Base class method implementation
///
/// @param self QAbstractItemModel*
///
libqt_list /* of QModelIndex* */ q_abstractitemmodel_qbase_persistent_index_list(void* self);

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
/// @param self QAbstractItemModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_abstractitemmodel_has_index3(void* self, int row, int column, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self QAbstractItemModel*
/// @param row int
/// @param parent QModelIndex*
///
bool q_abstractitemmodel_insert_row2(void* self, int row, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self QAbstractItemModel*
/// @param column int
/// @param parent QModelIndex*
///
bool q_abstractitemmodel_insert_column2(void* self, int column, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self QAbstractItemModel*
/// @param row int
/// @param parent QModelIndex*
///
bool q_abstractitemmodel_remove_row2(void* self, int row, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self QAbstractItemModel*
/// @param column int
/// @param parent QModelIndex*
///
bool q_abstractitemmodel_remove_column2(void* self, int column, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self QAbstractItemModel*
/// @param index QModelIndex*
/// @param options flag of enum QAbstractItemModel__CheckIndexOption
///
bool q_abstractitemmodel_check_index2(void* self, void* index, int32_t options);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QAbstractItemModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
/// @param roles libqt_list /* of int */
///
void q_abstractitemmodel_data_changed3(void* self, void* topLeft, void* bottomRight, libqt_list roles);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QAbstractItemModel*
/// @param callback void func(QAbstractItemModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, int* /* of int */)
///
void q_abstractitemmodel_on_data_changed3(void* self, void (*callback)(void*, void*, void*, int*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QAbstractItemModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
///
void q_abstractitemmodel_layout_changed1(void* self, libqt_list parents);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QAbstractItemModel*
/// @param callback void func(QAbstractItemModel* self, QPersistentModelIndex** parents)
///
void q_abstractitemmodel_on_layout_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QAbstractItemModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
/// @param hint enum QAbstractItemModel__LayoutChangeHint
///
void q_abstractitemmodel_layout_changed2(void* self, libqt_list parents, int32_t hint);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QAbstractItemModel*
/// @param callback void func(QAbstractItemModel* self, QPersistentModelIndex** parents, enum QAbstractItemModel__LayoutChangeHint hint)
///
void q_abstractitemmodel_on_layout_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QAbstractItemModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
///
void q_abstractitemmodel_layout_about_to_be_changed1(void* self, libqt_list parents);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QAbstractItemModel*
/// @param callback void func(QAbstractItemModel* self, QPersistentModelIndex** parents)
///
void q_abstractitemmodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QAbstractItemModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
/// @param hint enum QAbstractItemModel__LayoutChangeHint
///
void q_abstractitemmodel_layout_about_to_be_changed2(void* self, libqt_list parents, int32_t hint);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QAbstractItemModel*
/// @param callback void func(QAbstractItemModel* self, QPersistentModelIndex** parents, enum QAbstractItemModel__LayoutChangeHint hint)
///
void q_abstractitemmodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// @param self QAbstractItemModel*
/// @param row int
/// @param column int
/// @param data void*
///
QModelIndex* q_abstractitemmodel_create_index3(void* self, int row, int column, void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemModel*
/// @param callback QModelIndex* func(QAbstractItemModel* self, int row, int column, void* data)
///
void q_abstractitemmodel_on_create_index3(void* self, QModelIndex* (*callback)(void*, int, int, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Base class method implementation
///
/// @param self QAbstractItemModel*
/// @param row int
/// @param column int
/// @param data void*
///
QModelIndex* q_abstractitemmodel_qbase_create_index3(void* self, int row, int column, void* data);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QAbstractItemModel*
///
const char* q_abstractitemmodel_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QAbstractItemModel*
/// @param name char*
///
void q_abstractitemmodel_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QAbstractItemModel*
///
bool q_abstractitemmodel_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QAbstractItemModel*
///
bool q_abstractitemmodel_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QAbstractItemModel*
///
bool q_abstractitemmodel_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QAbstractItemModel*
///
bool q_abstractitemmodel_signals_blocked(void* self);

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
/// @param self QAbstractItemModel*
///
QThread* q_abstractitemmodel_thread(void* self);

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
/// @param self QAbstractItemModel*
///
libqt_list /* of QObject* */ q_abstractitemmodel_children(void* self);

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
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_abstractitemmodel_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QAbstractItemModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_abstractitemmodel_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_abstractitemmodel_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_abstractitemmodel_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QAbstractItemModel*
///
void q_abstractitemmodel_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QAbstractItemModel*
///
void q_abstractitemmodel_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QAbstractItemModel*
/// @param name const char*
/// @param value QVariant*
///
bool q_abstractitemmodel_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QAbstractItemModel*
/// @param name const char*
///
QVariant* q_abstractitemmodel_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QAbstractItemModel*
///
const char** q_abstractitemmodel_dynamic_property_names(void* self);

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
/// @param self QAbstractItemModel*
///
const QBindingStorage* q_abstractitemmodel_binding_storage2(void* self);

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
/// @param self QAbstractItemModel*
/// @param classname const char*
///
bool q_abstractitemmodel_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QAbstractItemModel*
///
void q_abstractitemmodel_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QAbstractItemModel*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_abstractitemmodel_move_to_thread2(void* self, void* thread, void* param2);

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
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_abstractitemmodel_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QAbstractItemModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_abstractitemmodel_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

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
bool q_abstractitemmodel_qbase_event(void* self, void* event);

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
bool q_abstractitemmodel_qbase_event_filter(void* self, void* watched, void* event);

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
void q_abstractitemmodel_qbase_timer_event(void* self, void* event);

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
void q_abstractitemmodel_qbase_child_event(void* self, void* event);

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
void q_abstractitemmodel_qbase_custom_event(void* self, void* event);

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
void q_abstractitemmodel_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemModel*
/// @param signal QMetaMethod*
///
void q_abstractitemmodel_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemModel*
/// @param callback void func(QAbstractItemModel* self, QMetaMethod* signal)
///
void q_abstractitemmodel_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemModel*
/// @param signal QMetaMethod*
///
void q_abstractitemmodel_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemModel*
/// @param signal QMetaMethod*
///
void q_abstractitemmodel_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemModel*
/// @param callback void func(QAbstractItemModel* self, QMetaMethod* signal)
///
void q_abstractitemmodel_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemModel*
///
QObject* q_abstractitemmodel_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemModel*
///
QObject* q_abstractitemmodel_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemModel*
/// @param callback QObject* func()
///
void q_abstractitemmodel_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemModel*
///
int32_t q_abstractitemmodel_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemModel*
///
int32_t q_abstractitemmodel_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemModel*
/// @param callback int32_t func()
///
void q_abstractitemmodel_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemModel*
/// @param signal const char*
///
int32_t q_abstractitemmodel_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemModel*
/// @param signal const char*
///
int32_t q_abstractitemmodel_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemModel*
/// @param callback int32_t func(QAbstractItemModel* self, const char* signal)
///
void q_abstractitemmodel_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemModel*
/// @param signal QMetaMethod*
///
bool q_abstractitemmodel_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemModel*
/// @param signal QMetaMethod*
///
bool q_abstractitemmodel_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemModel*
/// @param callback bool func(QAbstractItemModel* self, QMetaMethod* signal)
///
void q_abstractitemmodel_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractItemModel*
/// @param callback void func(QAbstractItemModel* self, QModelIndex* parent, int first, int last)
///
void q_abstractitemmodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractItemModel*
/// @param callback void func(QAbstractItemModel* self, QModelIndex* parent, int first, int last)
///
void q_abstractitemmodel_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractItemModel*
/// @param callback void func(QAbstractItemModel* self, QModelIndex* parent, int first, int last)
///
void q_abstractitemmodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractItemModel*
/// @param callback void func(QAbstractItemModel* self, QModelIndex* parent, int first, int last)
///
void q_abstractitemmodel_on_rows_removed(void* self, void (*callback)(void*, void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractItemModel*
/// @param callback void func(QAbstractItemModel* self, QModelIndex* parent, int first, int last)
///
void q_abstractitemmodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractItemModel*
/// @param callback void func(QAbstractItemModel* self, QModelIndex* parent, int first, int last)
///
void q_abstractitemmodel_on_columns_inserted(void* self, void (*callback)(void*, void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractItemModel*
/// @param callback void func(QAbstractItemModel* self, QModelIndex* parent, int first, int last)
///
void q_abstractitemmodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractItemModel*
/// @param callback void func(QAbstractItemModel* self, QModelIndex* parent, int first, int last)
///
void q_abstractitemmodel_on_columns_removed(void* self, void (*callback)(void*, void*, int, int));

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
void q_abstractitemmodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractItemModel*
/// @param callback void func(QAbstractItemModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
///
void q_abstractitemmodel_on_rows_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractItemModel*
/// @param callback void func(QAbstractItemModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
///
void q_abstractitemmodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractItemModel*
/// @param callback void func(QAbstractItemModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
///
void q_abstractitemmodel_on_columns_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

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
/// @param self QAbstractTableModel*
///
const QMetaObject* q_abstracttablemodel_meta_object(void* self);

/// @param self QAbstractTableModel*
/// @param param1 const char*
///
void* q_abstracttablemodel_metacast(void* self, const char* param1);

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
int32_t q_abstracttablemodel_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_abstracttablemodel_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#index)
///
/// @param self QAbstractTableModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
QModelIndex* q_abstracttablemodel_index(void* self, int row, int column, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#index)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractTableModel*
/// @param callback QModelIndex* func(QAbstractTableModel* self, int row, int column, QModelIndex* parent)
///
void q_abstracttablemodel_on_index(void* self, QModelIndex* (*callback)(void*, int, int, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#index)
///
/// Base class method implementation
///
/// @param self QAbstractTableModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
QModelIndex* q_abstracttablemodel_qbase_index(void* self, int row, int column, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#sibling)
///
/// @param self QAbstractTableModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
///
QModelIndex* q_abstracttablemodel_sibling(void* self, int row, int column, void* idx);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#sibling)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractTableModel*
/// @param callback QModelIndex* func(QAbstractTableModel* self, int row, int column, QModelIndex* idx)
///
void q_abstracttablemodel_on_sibling(void* self, QModelIndex* (*callback)(void*, int, int, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#sibling)
///
/// Base class method implementation
///
/// @param self QAbstractTableModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
///
QModelIndex* q_abstracttablemodel_qbase_sibling(void* self, int row, int column, void* idx);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#dropMimeData)
///
/// @param self QAbstractTableModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_abstracttablemodel_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#dropMimeData)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractTableModel*
/// @param callback bool func(QAbstractTableModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
///
void q_abstracttablemodel_on_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*));

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
bool q_abstracttablemodel_qbase_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#flags)
///
/// @param self QAbstractTableModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
///
int32_t q_abstracttablemodel_flags(void* self, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#flags)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractTableModel*
/// @param callback int32_t func(QAbstractTableModel* self, QModelIndex* index)
///
void q_abstracttablemodel_on_flags(void* self, int32_t (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#flags)
///
/// Base class method implementation
///
/// @param self QAbstractTableModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
///
int32_t q_abstracttablemodel_qbase_flags(void* self, void* index);

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
/// @param self QAbstractTableModel*
/// @param row int
/// @param column int
///
bool q_abstracttablemodel_has_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
///
/// @param self QAbstractTableModel*
/// @param child QModelIndex*
///
QModelIndex* q_abstracttablemodel_parent(void* self, void* child);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractTableModel*
/// @param callback QModelIndex* func(QAbstractTableModel* self, QModelIndex* child)
///
void q_abstracttablemodel_on_parent(void* self, QModelIndex* (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
///
/// Base class method implementation
///
/// @param self QAbstractTableModel*
/// @param child QModelIndex*
///
QModelIndex* q_abstracttablemodel_qbase_parent(void* self, void* child);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// @param self QAbstractTableModel*
/// @param parent QModelIndex*
///
bool q_abstracttablemodel_has_children(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractTableModel*
/// @param callback bool func(QAbstractTableModel* self, QModelIndex* parent)
///
void q_abstracttablemodel_on_has_children(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// Base class method implementation
///
/// @param self QAbstractTableModel*
/// @param parent QModelIndex*
///
bool q_abstracttablemodel_qbase_has_children(void* self, void* parent);

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
bool q_abstracttablemodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild);

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
bool q_abstracttablemodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self QAbstractTableModel*
/// @param index QModelIndex*
///
bool q_abstracttablemodel_check_index(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QAbstractTableModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
///
void q_abstracttablemodel_data_changed(void* self, void* topLeft, void* bottomRight);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self, QModelIndex* topLeft, QModelIndex* bottomRight)
///
void q_abstracttablemodel_on_data_changed(void* self, void (*callback)(void*, void*, void*));

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
/// @param self QAbstractTableModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_abstracttablemodel_has_index3(void* self, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self QAbstractTableModel*
/// @param row int
/// @param parent QModelIndex*
///
bool q_abstracttablemodel_insert_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self QAbstractTableModel*
/// @param column int
/// @param parent QModelIndex*
///
bool q_abstracttablemodel_insert_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self QAbstractTableModel*
/// @param row int
/// @param parent QModelIndex*
///
bool q_abstracttablemodel_remove_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self QAbstractTableModel*
/// @param column int
/// @param parent QModelIndex*
///
bool q_abstracttablemodel_remove_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self QAbstractTableModel*
/// @param index QModelIndex*
/// @param options flag of enum QAbstractItemModel__CheckIndexOption
///
bool q_abstracttablemodel_check_index2(void* self, void* index, int32_t options);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QAbstractTableModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
/// @param roles libqt_list /* of int */
///
void q_abstracttablemodel_data_changed3(void* self, void* topLeft, void* bottomRight, libqt_list roles);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, int* /* of int */)
///
void q_abstracttablemodel_on_data_changed3(void* self, void (*callback)(void*, void*, void*, int*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QAbstractTableModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
///
void q_abstracttablemodel_layout_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self, QPersistentModelIndex** parents)
///
void q_abstracttablemodel_on_layout_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QAbstractTableModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
/// @param hint enum QAbstractItemModel__LayoutChangeHint
///
void q_abstracttablemodel_layout_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self, QPersistentModelIndex** parents, enum QAbstractItemModel__LayoutChangeHint hint)
///
void q_abstracttablemodel_on_layout_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QAbstractTableModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
///
void q_abstracttablemodel_layout_about_to_be_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self, QPersistentModelIndex** parents)
///
void q_abstracttablemodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QAbstractTableModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
/// @param hint enum QAbstractItemModel__LayoutChangeHint
///
void q_abstracttablemodel_layout_about_to_be_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self, QPersistentModelIndex** parents, enum QAbstractItemModel__LayoutChangeHint hint)
///
void q_abstracttablemodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QAbstractTableModel*
///
const char* q_abstracttablemodel_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QAbstractTableModel*
/// @param name char*
///
void q_abstracttablemodel_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QAbstractTableModel*
///
bool q_abstracttablemodel_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QAbstractTableModel*
///
bool q_abstracttablemodel_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QAbstractTableModel*
///
bool q_abstracttablemodel_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QAbstractTableModel*
///
bool q_abstracttablemodel_signals_blocked(void* self);

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
/// @param self QAbstractTableModel*
///
QThread* q_abstracttablemodel_thread(void* self);

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
/// @param self QAbstractTableModel*
///
libqt_list /* of QObject* */ q_abstracttablemodel_children(void* self);

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
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_abstracttablemodel_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QAbstractTableModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_abstracttablemodel_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_abstracttablemodel_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_abstracttablemodel_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QAbstractTableModel*
///
void q_abstracttablemodel_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QAbstractTableModel*
///
void q_abstracttablemodel_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QAbstractTableModel*
/// @param name const char*
/// @param value QVariant*
///
bool q_abstracttablemodel_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QAbstractTableModel*
/// @param name const char*
///
QVariant* q_abstracttablemodel_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QAbstractTableModel*
///
const char** q_abstracttablemodel_dynamic_property_names(void* self);

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
/// @param self QAbstractTableModel*
///
const QBindingStorage* q_abstracttablemodel_binding_storage2(void* self);

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
/// @param self QAbstractTableModel*
/// @param classname const char*
///
bool q_abstracttablemodel_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QAbstractTableModel*
///
void q_abstracttablemodel_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QAbstractTableModel*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_abstracttablemodel_move_to_thread2(void* self, void* thread, void* param2);

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
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_abstracttablemodel_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QAbstractTableModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_abstracttablemodel_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

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
/// @param self QAbstractTableModel*
/// @param parent QModelIndex*
///
int32_t q_abstracttablemodel_row_count(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowCount)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param parent QModelIndex*
///
int32_t q_abstracttablemodel_qbase_row_count(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowCount)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback int32_t func(QAbstractTableModel* self, QModelIndex* parent)
///
void q_abstracttablemodel_on_row_count(void* self, int32_t (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnCount)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param parent QModelIndex*
///
int32_t q_abstracttablemodel_column_count(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnCount)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param parent QModelIndex*
///
int32_t q_abstracttablemodel_qbase_column_count(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnCount)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback int32_t func(QAbstractTableModel* self, QModelIndex* parent)
///
void q_abstracttablemodel_on_column_count(void* self, int32_t (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#data)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param index QModelIndex*
/// @param role int
///
QVariant* q_abstracttablemodel_data(void* self, void* index, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#data)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param index QModelIndex*
/// @param role int
///
QVariant* q_abstracttablemodel_qbase_data(void* self, void* index, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#data)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback QVariant* func(QAbstractTableModel* self, QModelIndex* index, int role)
///
void q_abstracttablemodel_on_data(void* self, QVariant* (*callback)(void*, void*, int));

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
bool q_abstracttablemodel_set_data(void* self, void* index, void* value, int role);

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
bool q_abstracttablemodel_qbase_set_data(void* self, void* index, void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback bool func(QAbstractTableModel* self, QModelIndex* index, QVariant* value, int role)
///
void q_abstracttablemodel_on_set_data(void* self, bool (*callback)(void*, void*, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
///
QVariant* q_abstracttablemodel_header_data(void* self, int section, int32_t orientation, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
///
QVariant* q_abstracttablemodel_qbase_header_data(void* self, int section, int32_t orientation, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback QVariant* func(QAbstractTableModel* self, int section, enum Qt__Orientation orientation, int role)
///
void q_abstracttablemodel_on_header_data(void* self, QVariant* (*callback)(void*, int, int32_t, int));

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
bool q_abstracttablemodel_set_header_data(void* self, int section, int32_t orientation, void* value, int role);

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
bool q_abstracttablemodel_qbase_set_header_data(void* self, int section, int32_t orientation, void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback bool func(QAbstractTableModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role)
///
void q_abstracttablemodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map
/// for (size_t i = 0; i < map.len; ++i) {
///     free(((QVariant*)map.values)[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param index QModelIndex*
///
libqt_map /* of int to QVariant* */ q_abstracttablemodel_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map
/// for (size_t i = 0; i < map.len; ++i) {
///     free(((QVariant*)map.values)[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param index QModelIndex*
///
libqt_map /* of int to QVariant* */ q_abstracttablemodel_qbase_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback libqt_map /* of int to QVariant* */ func(QAbstractTableModel* self, QModelIndex* index)
///
void q_abstracttablemodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param index QModelIndex*
/// @param roles libqt_map /* of int to QVariant* */
///
bool q_abstracttablemodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param index QModelIndex*
/// @param roles libqt_map /* of int to QVariant* */
///
bool q_abstracttablemodel_qbase_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback bool func(QAbstractTableModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ /* of int to QVariant* */)
///
void q_abstracttablemodel_on_set_item_data(void* self, bool (*callback)(void*, void*, libqt_map /* of int to QVariant* */));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param index QModelIndex*
///
bool q_abstracttablemodel_clear_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param index QModelIndex*
///
bool q_abstracttablemodel_qbase_clear_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback bool func(QAbstractTableModel* self, QModelIndex* index)
///
void q_abstracttablemodel_on_clear_item_data(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTableModel*
///
const char** q_abstracttablemodel_mime_types(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTableModel*
///
const char** q_abstracttablemodel_qbase_mime_types(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback const char** func()
///
void q_abstracttablemodel_on_mime_types(void* self, const char** (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param indexes libqt_list /* of QModelIndex* */
///
QMimeData* q_abstracttablemodel_mime_data(void* self, libqt_list indexes);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param indexes libqt_list /* of QModelIndex* */
///
QMimeData* q_abstracttablemodel_qbase_mime_data(void* self, libqt_list indexes);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback QMimeData* func(QAbstractTableModel* self, QModelIndex** indexes)
///
void q_abstracttablemodel_on_mime_data(void* self, QMimeData* (*callback)(void*, QModelIndex**));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_abstracttablemodel_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_abstracttablemodel_qbase_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback bool func(QAbstractTableModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
///
void q_abstracttablemodel_on_can_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTableModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_abstracttablemodel_supported_drop_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTableModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_abstracttablemodel_qbase_supported_drop_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback int32_t func()
///
void q_abstracttablemodel_on_supported_drop_actions(void* self, int32_t (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTableModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_abstracttablemodel_supported_drag_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTableModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_abstracttablemodel_qbase_supported_drag_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback int32_t func()
///
void q_abstracttablemodel_on_supported_drag_actions(void* self, int32_t (*callback)());

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
bool q_abstracttablemodel_insert_rows(void* self, int row, int count, void* parent);

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
bool q_abstracttablemodel_qbase_insert_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback bool func(QAbstractTableModel* self, int row, int count, QModelIndex* parent)
///
void q_abstracttablemodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, void*));

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
bool q_abstracttablemodel_insert_columns(void* self, int column, int count, void* parent);

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
bool q_abstracttablemodel_qbase_insert_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback bool func(QAbstractTableModel* self, int column, int count, QModelIndex* parent)
///
void q_abstracttablemodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, void*));

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
bool q_abstracttablemodel_remove_rows(void* self, int row, int count, void* parent);

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
bool q_abstracttablemodel_qbase_remove_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback bool func(QAbstractTableModel* self, int row, int count, QModelIndex* parent)
///
void q_abstracttablemodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, void*));

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
bool q_abstracttablemodel_remove_columns(void* self, int column, int count, void* parent);

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
bool q_abstracttablemodel_qbase_remove_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback bool func(QAbstractTableModel* self, int column, int count, QModelIndex* parent)
///
void q_abstracttablemodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, void*));

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
bool q_abstracttablemodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

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
bool q_abstracttablemodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback bool func(QAbstractTableModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild)
///
void q_abstracttablemodel_on_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int));

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
bool q_abstracttablemodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

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
bool q_abstracttablemodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback bool func(QAbstractTableModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild)
///
void q_abstracttablemodel_on_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param parent QModelIndex*
///
void q_abstracttablemodel_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param parent QModelIndex*
///
void q_abstracttablemodel_qbase_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self, QModelIndex* parent)
///
void q_abstracttablemodel_on_fetch_more(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param parent QModelIndex*
///
bool q_abstracttablemodel_can_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param parent QModelIndex*
///
bool q_abstracttablemodel_qbase_can_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback bool func(QAbstractTableModel* self, QModelIndex* parent)
///
void q_abstracttablemodel_on_can_fetch_more(void* self, bool (*callback)(void*, void*));

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
void q_abstracttablemodel_qbase_sort(void* self, int column, int32_t order);

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
/// @param self QAbstractTableModel*
/// @param index QModelIndex*
///
QModelIndex* q_abstracttablemodel_buddy(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param index QModelIndex*
///
QModelIndex* q_abstracttablemodel_qbase_buddy(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback QModelIndex* func(QAbstractTableModel* self, QModelIndex* index)
///
void q_abstracttablemodel_on_buddy(void* self, QModelIndex* (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
///
libqt_list /* of QModelIndex* */ q_abstracttablemodel_match(void* self, void* start, int role, void* value, int hits, int32_t flags);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
///
libqt_list /* of QModelIndex* */ q_abstracttablemodel_qbase_match(void* self, void* start, int role, void* value, int hits, int32_t flags);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback QModelIndex** func(QAbstractTableModel* self, QModelIndex* start, int role, QVariant* value, int hits, flag of enum Qt__MatchFlag flags)
///
void q_abstracttablemodel_on_match(void* self, QModelIndex** (*callback)(void*, void*, int, void*, int, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param index QModelIndex*
///
QSize* q_abstracttablemodel_span(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param index QModelIndex*
///
QSize* q_abstracttablemodel_qbase_span(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback QSize* func(QAbstractTableModel* self, QModelIndex* index)
///
void q_abstracttablemodel_on_span(void* self, QSize* (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#roleNames)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map
/// for (size_t i = 0; i < map.len; ++i) {
///     libqt_free(map.values[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTableModel*
///
libqt_map /* of int to char* */ q_abstracttablemodel_role_names(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#roleNames)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map
/// for (size_t i = 0; i < map.len; ++i) {
///     libqt_free(map.values[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTableModel*
///
libqt_map /* of int to char* */ q_abstracttablemodel_qbase_role_names(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#roleNames)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback libqt_map /* of int to char* */ func()
///
void q_abstracttablemodel_on_role_names(void* self, libqt_map /* of int to char* */ (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
///
void q_abstracttablemodel_multi_data(void* self, void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
///
void q_abstracttablemodel_qbase_multi_data(void* self, void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan)
///
void q_abstracttablemodel_on_multi_data(void* self, void (*callback)(void*, void*, void*));

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
bool q_abstracttablemodel_qbase_submit(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback bool func()
///
void q_abstracttablemodel_on_submit(void* self, bool (*callback)());

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
void q_abstracttablemodel_qbase_revert(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback void func()
///
void q_abstracttablemodel_on_revert(void* self, void (*callback)());

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
void q_abstracttablemodel_qbase_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback void func()
///
void q_abstracttablemodel_on_reset_internal_data(void* self, void (*callback)());

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
bool q_abstracttablemodel_qbase_event(void* self, void* event);

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
bool q_abstracttablemodel_qbase_event_filter(void* self, void* watched, void* event);

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
void q_abstracttablemodel_qbase_timer_event(void* self, void* event);

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
void q_abstracttablemodel_qbase_child_event(void* self, void* event);

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
void q_abstracttablemodel_qbase_custom_event(void* self, void* event);

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
void q_abstracttablemodel_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param signal QMetaMethod*
///
void q_abstracttablemodel_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self, QMetaMethod* signal)
///
void q_abstracttablemodel_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param signal QMetaMethod*
///
void q_abstracttablemodel_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param signal QMetaMethod*
///
void q_abstracttablemodel_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self, QMetaMethod* signal)
///
void q_abstracttablemodel_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param row int
/// @param column int
///
QModelIndex* q_abstracttablemodel_create_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param row int
/// @param column int
///
QModelIndex* q_abstracttablemodel_qbase_create_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback QModelIndex* func(QAbstractTableModel* self, int row, int column)
///
void q_abstracttablemodel_on_create_index(void* self, QModelIndex* (*callback)(void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param indexes libqt_list /* of QModelIndex* */
/// @param stream QDataStream*
///
void q_abstracttablemodel_encode_data(void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param indexes libqt_list /* of QModelIndex* */
/// @param stream QDataStream*
///
void q_abstracttablemodel_qbase_encode_data(void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self, QModelIndex** indexes, QDataStream* stream)
///
void q_abstracttablemodel_on_encode_data(void* self, void (*callback)(void*, QModelIndex**, void*));

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
bool q_abstracttablemodel_decode_data(void* self, int row, int column, void* parent, void* stream);

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
bool q_abstracttablemodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback bool func(QAbstractTableModel* self, int row, int column, QModelIndex* parent, QDataStream* stream)
///
void q_abstracttablemodel_on_decode_data(void* self, bool (*callback)(void*, int, int, void*, void*));

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
void q_abstracttablemodel_begin_insert_rows(void* self, void* parent, int first, int last);

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
void q_abstracttablemodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self, QModelIndex* parent, int first, int last)
///
void q_abstracttablemodel_on_begin_insert_rows(void* self, void (*callback)(void*, void*, int, int));

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
void q_abstracttablemodel_qbase_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback void func()
///
void q_abstracttablemodel_on_end_insert_rows(void* self, void (*callback)());

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
void q_abstracttablemodel_begin_remove_rows(void* self, void* parent, int first, int last);

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
void q_abstracttablemodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self, QModelIndex* parent, int first, int last)
///
void q_abstracttablemodel_on_begin_remove_rows(void* self, void (*callback)(void*, void*, int, int));

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
void q_abstracttablemodel_qbase_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback void func()
///
void q_abstracttablemodel_on_end_remove_rows(void* self, void (*callback)());

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
bool q_abstracttablemodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

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
bool q_abstracttablemodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback bool func(QAbstractTableModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow)
///
void q_abstracttablemodel_on_begin_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int));

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
void q_abstracttablemodel_qbase_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback void func()
///
void q_abstracttablemodel_on_end_move_rows(void* self, void (*callback)());

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
void q_abstracttablemodel_begin_insert_columns(void* self, void* parent, int first, int last);

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
void q_abstracttablemodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self, QModelIndex* parent, int first, int last)
///
void q_abstracttablemodel_on_begin_insert_columns(void* self, void (*callback)(void*, void*, int, int));

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
void q_abstracttablemodel_qbase_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback void func()
///
void q_abstracttablemodel_on_end_insert_columns(void* self, void (*callback)());

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
void q_abstracttablemodel_begin_remove_columns(void* self, void* parent, int first, int last);

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
void q_abstracttablemodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self, QModelIndex* parent, int first, int last)
///
void q_abstracttablemodel_on_begin_remove_columns(void* self, void (*callback)(void*, void*, int, int));

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
void q_abstracttablemodel_qbase_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback void func()
///
void q_abstracttablemodel_on_end_remove_columns(void* self, void (*callback)());

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
bool q_abstracttablemodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

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
bool q_abstracttablemodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback bool func(QAbstractTableModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn)
///
void q_abstracttablemodel_on_begin_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int));

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
void q_abstracttablemodel_qbase_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback void func()
///
void q_abstracttablemodel_on_end_move_columns(void* self, void (*callback)());

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
void q_abstracttablemodel_qbase_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback void func()
///
void q_abstracttablemodel_on_begin_reset_model(void* self, void (*callback)());

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
void q_abstracttablemodel_qbase_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback void func()
///
void q_abstracttablemodel_on_end_reset_model(void* self, void (*callback)());

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
void q_abstracttablemodel_change_persistent_index(void* self, void* from, void* to);

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
void q_abstracttablemodel_qbase_change_persistent_index(void* self, void* from, void* to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self, QModelIndex* from, QModelIndex* to)
///
void q_abstracttablemodel_on_change_persistent_index(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param from libqt_list /* of QModelIndex* */
/// @param to libqt_list /* of QModelIndex* */
///
void q_abstracttablemodel_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param from libqt_list /* of QModelIndex* */
/// @param to libqt_list /* of QModelIndex* */
///
void q_abstracttablemodel_qbase_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self, QModelIndex** from, QModelIndex** to)
///
void q_abstracttablemodel_on_change_persistent_index_list(void* self, void (*callback)(void*, QModelIndex**, QModelIndex**));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTableModel*
///
libqt_list /* of QModelIndex* */ q_abstracttablemodel_persistent_index_list(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTableModel*
///
libqt_list /* of QModelIndex* */ q_abstracttablemodel_qbase_persistent_index_list(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback QModelIndex** func()
///
void q_abstracttablemodel_on_persistent_index_list(void* self, QModelIndex** (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTableModel*
///
QObject* q_abstracttablemodel_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTableModel*
///
QObject* q_abstracttablemodel_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback QObject* func()
///
void q_abstracttablemodel_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTableModel*
///
int32_t q_abstracttablemodel_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTableModel*
///
int32_t q_abstracttablemodel_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback int32_t func()
///
void q_abstracttablemodel_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param signal const char*
///
int32_t q_abstracttablemodel_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param signal const char*
///
int32_t q_abstracttablemodel_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback int32_t func(QAbstractTableModel* self, const char* signal)
///
void q_abstracttablemodel_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param signal QMetaMethod*
///
bool q_abstracttablemodel_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param signal QMetaMethod*
///
bool q_abstracttablemodel_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTableModel*
/// @param callback bool func(QAbstractTableModel* self, QMetaMethod* signal)
///
void q_abstracttablemodel_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self, QModelIndex* parent, int first, int last)
///
void q_abstracttablemodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self, QModelIndex* parent, int first, int last)
///
void q_abstracttablemodel_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self, QModelIndex* parent, int first, int last)
///
void q_abstracttablemodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self, QModelIndex* parent, int first, int last)
///
void q_abstracttablemodel_on_rows_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self, QModelIndex* parent, int first, int last)
///
void q_abstracttablemodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self, QModelIndex* parent, int first, int last)
///
void q_abstracttablemodel_on_columns_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self, QModelIndex* parent, int first, int last)
///
void q_abstracttablemodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self, QModelIndex* parent, int first, int last)
///
void q_abstracttablemodel_on_columns_removed(void* self, void (*callback)(void*, void*, int, int));

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
void q_abstracttablemodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
///
void q_abstracttablemodel_on_rows_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
///
void q_abstracttablemodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractTableModel*
/// @param callback void func(QAbstractTableModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
///
void q_abstracttablemodel_on_columns_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

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
/// @param self QAbstractListModel*
///
const QMetaObject* q_abstractlistmodel_meta_object(void* self);

/// @param self QAbstractListModel*
/// @param param1 const char*
///
void* q_abstractlistmodel_metacast(void* self, const char* param1);

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
int32_t q_abstractlistmodel_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_abstractlistmodel_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#index)
///
/// @param self QAbstractListModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
QModelIndex* q_abstractlistmodel_index(void* self, int row, int column, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#index)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractListModel*
/// @param callback QModelIndex* func(QAbstractListModel* self, int row, int column, QModelIndex* parent)
///
void q_abstractlistmodel_on_index(void* self, QModelIndex* (*callback)(void*, int, int, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#index)
///
/// Base class method implementation
///
/// @param self QAbstractListModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
QModelIndex* q_abstractlistmodel_qbase_index(void* self, int row, int column, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#sibling)
///
/// @param self QAbstractListModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
///
QModelIndex* q_abstractlistmodel_sibling(void* self, int row, int column, void* idx);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#sibling)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractListModel*
/// @param callback QModelIndex* func(QAbstractListModel* self, int row, int column, QModelIndex* idx)
///
void q_abstractlistmodel_on_sibling(void* self, QModelIndex* (*callback)(void*, int, int, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#sibling)
///
/// Base class method implementation
///
/// @param self QAbstractListModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
///
QModelIndex* q_abstractlistmodel_qbase_sibling(void* self, int row, int column, void* idx);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#dropMimeData)
///
/// @param self QAbstractListModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_abstractlistmodel_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#dropMimeData)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractListModel*
/// @param callback bool func(QAbstractListModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
///
void q_abstractlistmodel_on_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*));

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
bool q_abstractlistmodel_qbase_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#flags)
///
/// @param self QAbstractListModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
///
int32_t q_abstractlistmodel_flags(void* self, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#flags)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractListModel*
/// @param callback int32_t func(QAbstractListModel* self, QModelIndex* index)
///
void q_abstractlistmodel_on_flags(void* self, int32_t (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#flags)
///
/// Base class method implementation
///
/// @param self QAbstractListModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
///
int32_t q_abstractlistmodel_qbase_flags(void* self, void* index);

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
/// @param self QAbstractListModel*
/// @param row int
/// @param column int
///
bool q_abstractlistmodel_has_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
///
/// @param self QAbstractListModel*
/// @param child QModelIndex*
///
QModelIndex* q_abstractlistmodel_parent(void* self, void* child);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractListModel*
/// @param callback QModelIndex* func(QAbstractListModel* self, QModelIndex* child)
///
void q_abstractlistmodel_on_parent(void* self, QModelIndex* (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
///
/// Base class method implementation
///
/// @param self QAbstractListModel*
/// @param child QModelIndex*
///
QModelIndex* q_abstractlistmodel_qbase_parent(void* self, void* child);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnCount)
///
/// @param self QAbstractListModel*
/// @param parent QModelIndex*
///
int32_t q_abstractlistmodel_column_count(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnCount)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractListModel*
/// @param callback int32_t func(QAbstractListModel* self, QModelIndex* parent)
///
void q_abstractlistmodel_on_column_count(void* self, int32_t (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnCount)
///
/// Base class method implementation
///
/// @param self QAbstractListModel*
/// @param parent QModelIndex*
///
int32_t q_abstractlistmodel_qbase_column_count(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// @param self QAbstractListModel*
/// @param parent QModelIndex*
///
bool q_abstractlistmodel_has_children(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractListModel*
/// @param callback bool func(QAbstractListModel* self, QModelIndex* parent)
///
void q_abstractlistmodel_on_has_children(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// Base class method implementation
///
/// @param self QAbstractListModel*
/// @param parent QModelIndex*
///
bool q_abstractlistmodel_qbase_has_children(void* self, void* parent);

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
bool q_abstractlistmodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild);

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
bool q_abstractlistmodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self QAbstractListModel*
/// @param index QModelIndex*
///
bool q_abstractlistmodel_check_index(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QAbstractListModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
///
void q_abstractlistmodel_data_changed(void* self, void* topLeft, void* bottomRight);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self, QModelIndex* topLeft, QModelIndex* bottomRight)
///
void q_abstractlistmodel_on_data_changed(void* self, void (*callback)(void*, void*, void*));

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
/// @param self QAbstractListModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_abstractlistmodel_has_index3(void* self, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self QAbstractListModel*
/// @param row int
/// @param parent QModelIndex*
///
bool q_abstractlistmodel_insert_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self QAbstractListModel*
/// @param column int
/// @param parent QModelIndex*
///
bool q_abstractlistmodel_insert_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self QAbstractListModel*
/// @param row int
/// @param parent QModelIndex*
///
bool q_abstractlistmodel_remove_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self QAbstractListModel*
/// @param column int
/// @param parent QModelIndex*
///
bool q_abstractlistmodel_remove_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self QAbstractListModel*
/// @param index QModelIndex*
/// @param options flag of enum QAbstractItemModel__CheckIndexOption
///
bool q_abstractlistmodel_check_index2(void* self, void* index, int32_t options);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QAbstractListModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
/// @param roles libqt_list /* of int */
///
void q_abstractlistmodel_data_changed3(void* self, void* topLeft, void* bottomRight, libqt_list roles);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, int* /* of int */)
///
void q_abstractlistmodel_on_data_changed3(void* self, void (*callback)(void*, void*, void*, int*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QAbstractListModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
///
void q_abstractlistmodel_layout_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self, QPersistentModelIndex** parents)
///
void q_abstractlistmodel_on_layout_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QAbstractListModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
/// @param hint enum QAbstractItemModel__LayoutChangeHint
///
void q_abstractlistmodel_layout_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self, QPersistentModelIndex** parents, enum QAbstractItemModel__LayoutChangeHint hint)
///
void q_abstractlistmodel_on_layout_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QAbstractListModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
///
void q_abstractlistmodel_layout_about_to_be_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self, QPersistentModelIndex** parents)
///
void q_abstractlistmodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QAbstractListModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
/// @param hint enum QAbstractItemModel__LayoutChangeHint
///
void q_abstractlistmodel_layout_about_to_be_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self, QPersistentModelIndex** parents, enum QAbstractItemModel__LayoutChangeHint hint)
///
void q_abstractlistmodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QAbstractListModel*
///
const char* q_abstractlistmodel_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QAbstractListModel*
/// @param name char*
///
void q_abstractlistmodel_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QAbstractListModel*
///
bool q_abstractlistmodel_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QAbstractListModel*
///
bool q_abstractlistmodel_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QAbstractListModel*
///
bool q_abstractlistmodel_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QAbstractListModel*
///
bool q_abstractlistmodel_signals_blocked(void* self);

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
/// @param self QAbstractListModel*
///
QThread* q_abstractlistmodel_thread(void* self);

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
/// @param self QAbstractListModel*
///
libqt_list /* of QObject* */ q_abstractlistmodel_children(void* self);

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
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_abstractlistmodel_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QAbstractListModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_abstractlistmodel_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_abstractlistmodel_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_abstractlistmodel_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QAbstractListModel*
///
void q_abstractlistmodel_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QAbstractListModel*
///
void q_abstractlistmodel_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QAbstractListModel*
/// @param name const char*
/// @param value QVariant*
///
bool q_abstractlistmodel_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QAbstractListModel*
/// @param name const char*
///
QVariant* q_abstractlistmodel_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QAbstractListModel*
///
const char** q_abstractlistmodel_dynamic_property_names(void* self);

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
/// @param self QAbstractListModel*
///
const QBindingStorage* q_abstractlistmodel_binding_storage2(void* self);

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
/// @param self QAbstractListModel*
/// @param classname const char*
///
bool q_abstractlistmodel_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QAbstractListModel*
///
void q_abstractlistmodel_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QAbstractListModel*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_abstractlistmodel_move_to_thread2(void* self, void* thread, void* param2);

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
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_abstractlistmodel_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QAbstractListModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_abstractlistmodel_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

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
/// @param self QAbstractListModel*
/// @param parent QModelIndex*
///
int32_t q_abstractlistmodel_row_count(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowCount)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param parent QModelIndex*
///
int32_t q_abstractlistmodel_qbase_row_count(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowCount)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback int32_t func(QAbstractListModel* self, QModelIndex* parent)
///
void q_abstractlistmodel_on_row_count(void* self, int32_t (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#data)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractListModel*
/// @param index QModelIndex*
/// @param role int
///
QVariant* q_abstractlistmodel_data(void* self, void* index, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#data)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param index QModelIndex*
/// @param role int
///
QVariant* q_abstractlistmodel_qbase_data(void* self, void* index, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#data)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback QVariant* func(QAbstractListModel* self, QModelIndex* index, int role)
///
void q_abstractlistmodel_on_data(void* self, QVariant* (*callback)(void*, void*, int));

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
bool q_abstractlistmodel_set_data(void* self, void* index, void* value, int role);

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
bool q_abstractlistmodel_qbase_set_data(void* self, void* index, void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback bool func(QAbstractListModel* self, QModelIndex* index, QVariant* value, int role)
///
void q_abstractlistmodel_on_set_data(void* self, bool (*callback)(void*, void*, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractListModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
///
QVariant* q_abstractlistmodel_header_data(void* self, int section, int32_t orientation, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
///
QVariant* q_abstractlistmodel_qbase_header_data(void* self, int section, int32_t orientation, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback QVariant* func(QAbstractListModel* self, int section, enum Qt__Orientation orientation, int role)
///
void q_abstractlistmodel_on_header_data(void* self, QVariant* (*callback)(void*, int, int32_t, int));

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
bool q_abstractlistmodel_set_header_data(void* self, int section, int32_t orientation, void* value, int role);

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
bool q_abstractlistmodel_qbase_set_header_data(void* self, int section, int32_t orientation, void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback bool func(QAbstractListModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role)
///
void q_abstractlistmodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map
/// for (size_t i = 0; i < map.len; ++i) {
///     free(((QVariant*)map.values)[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractListModel*
/// @param index QModelIndex*
///
libqt_map /* of int to QVariant* */ q_abstractlistmodel_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map
/// for (size_t i = 0; i < map.len; ++i) {
///     free(((QVariant*)map.values)[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param index QModelIndex*
///
libqt_map /* of int to QVariant* */ q_abstractlistmodel_qbase_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback libqt_map /* of int to QVariant* */ func(QAbstractListModel* self, QModelIndex* index)
///
void q_abstractlistmodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractListModel*
/// @param index QModelIndex*
/// @param roles libqt_map /* of int to QVariant* */
///
bool q_abstractlistmodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param index QModelIndex*
/// @param roles libqt_map /* of int to QVariant* */
///
bool q_abstractlistmodel_qbase_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback bool func(QAbstractListModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ /* of int to QVariant* */)
///
void q_abstractlistmodel_on_set_item_data(void* self, bool (*callback)(void*, void*, libqt_map /* of int to QVariant* */));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractListModel*
/// @param index QModelIndex*
///
bool q_abstractlistmodel_clear_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param index QModelIndex*
///
bool q_abstractlistmodel_qbase_clear_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback bool func(QAbstractListModel* self, QModelIndex* index)
///
void q_abstractlistmodel_on_clear_item_data(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractListModel*
///
const char** q_abstractlistmodel_mime_types(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractListModel*
///
const char** q_abstractlistmodel_qbase_mime_types(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback const char** func()
///
void q_abstractlistmodel_on_mime_types(void* self, const char** (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractListModel*
/// @param indexes libqt_list /* of QModelIndex* */
///
QMimeData* q_abstractlistmodel_mime_data(void* self, libqt_list indexes);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param indexes libqt_list /* of QModelIndex* */
///
QMimeData* q_abstractlistmodel_qbase_mime_data(void* self, libqt_list indexes);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback QMimeData* func(QAbstractListModel* self, QModelIndex** indexes)
///
void q_abstractlistmodel_on_mime_data(void* self, QMimeData* (*callback)(void*, QModelIndex**));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractListModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_abstractlistmodel_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_abstractlistmodel_qbase_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback bool func(QAbstractListModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
///
void q_abstractlistmodel_on_can_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractListModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_abstractlistmodel_supported_drop_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractListModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_abstractlistmodel_qbase_supported_drop_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback int32_t func()
///
void q_abstractlistmodel_on_supported_drop_actions(void* self, int32_t (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractListModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_abstractlistmodel_supported_drag_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractListModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_abstractlistmodel_qbase_supported_drag_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback int32_t func()
///
void q_abstractlistmodel_on_supported_drag_actions(void* self, int32_t (*callback)());

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
bool q_abstractlistmodel_insert_rows(void* self, int row, int count, void* parent);

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
bool q_abstractlistmodel_qbase_insert_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback bool func(QAbstractListModel* self, int row, int count, QModelIndex* parent)
///
void q_abstractlistmodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, void*));

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
bool q_abstractlistmodel_insert_columns(void* self, int column, int count, void* parent);

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
bool q_abstractlistmodel_qbase_insert_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback bool func(QAbstractListModel* self, int column, int count, QModelIndex* parent)
///
void q_abstractlistmodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, void*));

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
bool q_abstractlistmodel_remove_rows(void* self, int row, int count, void* parent);

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
bool q_abstractlistmodel_qbase_remove_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback bool func(QAbstractListModel* self, int row, int count, QModelIndex* parent)
///
void q_abstractlistmodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, void*));

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
bool q_abstractlistmodel_remove_columns(void* self, int column, int count, void* parent);

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
bool q_abstractlistmodel_qbase_remove_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback bool func(QAbstractListModel* self, int column, int count, QModelIndex* parent)
///
void q_abstractlistmodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, void*));

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
bool q_abstractlistmodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

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
bool q_abstractlistmodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback bool func(QAbstractListModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild)
///
void q_abstractlistmodel_on_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int));

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
bool q_abstractlistmodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

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
bool q_abstractlistmodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback bool func(QAbstractListModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild)
///
void q_abstractlistmodel_on_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractListModel*
/// @param parent QModelIndex*
///
void q_abstractlistmodel_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param parent QModelIndex*
///
void q_abstractlistmodel_qbase_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self, QModelIndex* parent)
///
void q_abstractlistmodel_on_fetch_more(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractListModel*
/// @param parent QModelIndex*
///
bool q_abstractlistmodel_can_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param parent QModelIndex*
///
bool q_abstractlistmodel_qbase_can_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback bool func(QAbstractListModel* self, QModelIndex* parent)
///
void q_abstractlistmodel_on_can_fetch_more(void* self, bool (*callback)(void*, void*));

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
void q_abstractlistmodel_qbase_sort(void* self, int column, int32_t order);

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
/// @param self QAbstractListModel*
/// @param index QModelIndex*
///
QModelIndex* q_abstractlistmodel_buddy(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param index QModelIndex*
///
QModelIndex* q_abstractlistmodel_qbase_buddy(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback QModelIndex* func(QAbstractListModel* self, QModelIndex* index)
///
void q_abstractlistmodel_on_buddy(void* self, QModelIndex* (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractListModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
///
libqt_list /* of QModelIndex* */ q_abstractlistmodel_match(void* self, void* start, int role, void* value, int hits, int32_t flags);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
///
libqt_list /* of QModelIndex* */ q_abstractlistmodel_qbase_match(void* self, void* start, int role, void* value, int hits, int32_t flags);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback QModelIndex** func(QAbstractListModel* self, QModelIndex* start, int role, QVariant* value, int hits, flag of enum Qt__MatchFlag flags)
///
void q_abstractlistmodel_on_match(void* self, QModelIndex** (*callback)(void*, void*, int, void*, int, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractListModel*
/// @param index QModelIndex*
///
QSize* q_abstractlistmodel_span(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param index QModelIndex*
///
QSize* q_abstractlistmodel_qbase_span(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback QSize* func(QAbstractListModel* self, QModelIndex* index)
///
void q_abstractlistmodel_on_span(void* self, QSize* (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#roleNames)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map
/// for (size_t i = 0; i < map.len; ++i) {
///     libqt_free(map.values[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractListModel*
///
libqt_map /* of int to char* */ q_abstractlistmodel_role_names(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#roleNames)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map
/// for (size_t i = 0; i < map.len; ++i) {
///     libqt_free(map.values[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractListModel*
///
libqt_map /* of int to char* */ q_abstractlistmodel_qbase_role_names(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#roleNames)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback libqt_map /* of int to char* */ func()
///
void q_abstractlistmodel_on_role_names(void* self, libqt_map /* of int to char* */ (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractListModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
///
void q_abstractlistmodel_multi_data(void* self, void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
///
void q_abstractlistmodel_qbase_multi_data(void* self, void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan)
///
void q_abstractlistmodel_on_multi_data(void* self, void (*callback)(void*, void*, void*));

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
bool q_abstractlistmodel_qbase_submit(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback bool func()
///
void q_abstractlistmodel_on_submit(void* self, bool (*callback)());

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
void q_abstractlistmodel_qbase_revert(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback void func()
///
void q_abstractlistmodel_on_revert(void* self, void (*callback)());

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
void q_abstractlistmodel_qbase_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback void func()
///
void q_abstractlistmodel_on_reset_internal_data(void* self, void (*callback)());

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
bool q_abstractlistmodel_qbase_event(void* self, void* event);

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
bool q_abstractlistmodel_qbase_event_filter(void* self, void* watched, void* event);

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
void q_abstractlistmodel_qbase_timer_event(void* self, void* event);

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
void q_abstractlistmodel_qbase_child_event(void* self, void* event);

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
void q_abstractlistmodel_qbase_custom_event(void* self, void* event);

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
void q_abstractlistmodel_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param signal QMetaMethod*
///
void q_abstractlistmodel_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self, QMetaMethod* signal)
///
void q_abstractlistmodel_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractListModel*
/// @param signal QMetaMethod*
///
void q_abstractlistmodel_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param signal QMetaMethod*
///
void q_abstractlistmodel_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self, QMetaMethod* signal)
///
void q_abstractlistmodel_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractListModel*
/// @param row int
/// @param column int
///
QModelIndex* q_abstractlistmodel_create_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param row int
/// @param column int
///
QModelIndex* q_abstractlistmodel_qbase_create_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback QModelIndex* func(QAbstractListModel* self, int row, int column)
///
void q_abstractlistmodel_on_create_index(void* self, QModelIndex* (*callback)(void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractListModel*
/// @param indexes libqt_list /* of QModelIndex* */
/// @param stream QDataStream*
///
void q_abstractlistmodel_encode_data(void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param indexes libqt_list /* of QModelIndex* */
/// @param stream QDataStream*
///
void q_abstractlistmodel_qbase_encode_data(void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self, QModelIndex** indexes, QDataStream* stream)
///
void q_abstractlistmodel_on_encode_data(void* self, void (*callback)(void*, QModelIndex**, void*));

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
bool q_abstractlistmodel_decode_data(void* self, int row, int column, void* parent, void* stream);

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
bool q_abstractlistmodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback bool func(QAbstractListModel* self, int row, int column, QModelIndex* parent, QDataStream* stream)
///
void q_abstractlistmodel_on_decode_data(void* self, bool (*callback)(void*, int, int, void*, void*));

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
void q_abstractlistmodel_begin_insert_rows(void* self, void* parent, int first, int last);

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
void q_abstractlistmodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self, QModelIndex* parent, int first, int last)
///
void q_abstractlistmodel_on_begin_insert_rows(void* self, void (*callback)(void*, void*, int, int));

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
void q_abstractlistmodel_qbase_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback void func()
///
void q_abstractlistmodel_on_end_insert_rows(void* self, void (*callback)());

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
void q_abstractlistmodel_begin_remove_rows(void* self, void* parent, int first, int last);

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
void q_abstractlistmodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self, QModelIndex* parent, int first, int last)
///
void q_abstractlistmodel_on_begin_remove_rows(void* self, void (*callback)(void*, void*, int, int));

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
void q_abstractlistmodel_qbase_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback void func()
///
void q_abstractlistmodel_on_end_remove_rows(void* self, void (*callback)());

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
bool q_abstractlistmodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

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
bool q_abstractlistmodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback bool func(QAbstractListModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow)
///
void q_abstractlistmodel_on_begin_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int));

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
void q_abstractlistmodel_qbase_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback void func()
///
void q_abstractlistmodel_on_end_move_rows(void* self, void (*callback)());

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
void q_abstractlistmodel_begin_insert_columns(void* self, void* parent, int first, int last);

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
void q_abstractlistmodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self, QModelIndex* parent, int first, int last)
///
void q_abstractlistmodel_on_begin_insert_columns(void* self, void (*callback)(void*, void*, int, int));

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
void q_abstractlistmodel_qbase_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback void func()
///
void q_abstractlistmodel_on_end_insert_columns(void* self, void (*callback)());

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
void q_abstractlistmodel_begin_remove_columns(void* self, void* parent, int first, int last);

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
void q_abstractlistmodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self, QModelIndex* parent, int first, int last)
///
void q_abstractlistmodel_on_begin_remove_columns(void* self, void (*callback)(void*, void*, int, int));

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
void q_abstractlistmodel_qbase_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback void func()
///
void q_abstractlistmodel_on_end_remove_columns(void* self, void (*callback)());

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
bool q_abstractlistmodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

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
bool q_abstractlistmodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback bool func(QAbstractListModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn)
///
void q_abstractlistmodel_on_begin_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int));

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
void q_abstractlistmodel_qbase_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback void func()
///
void q_abstractlistmodel_on_end_move_columns(void* self, void (*callback)());

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
void q_abstractlistmodel_qbase_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback void func()
///
void q_abstractlistmodel_on_begin_reset_model(void* self, void (*callback)());

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
void q_abstractlistmodel_qbase_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback void func()
///
void q_abstractlistmodel_on_end_reset_model(void* self, void (*callback)());

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
void q_abstractlistmodel_change_persistent_index(void* self, void* from, void* to);

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
void q_abstractlistmodel_qbase_change_persistent_index(void* self, void* from, void* to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self, QModelIndex* from, QModelIndex* to)
///
void q_abstractlistmodel_on_change_persistent_index(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractListModel*
/// @param from libqt_list /* of QModelIndex* */
/// @param to libqt_list /* of QModelIndex* */
///
void q_abstractlistmodel_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param from libqt_list /* of QModelIndex* */
/// @param to libqt_list /* of QModelIndex* */
///
void q_abstractlistmodel_qbase_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self, QModelIndex** from, QModelIndex** to)
///
void q_abstractlistmodel_on_change_persistent_index_list(void* self, void (*callback)(void*, QModelIndex**, QModelIndex**));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractListModel*
///
libqt_list /* of QModelIndex* */ q_abstractlistmodel_persistent_index_list(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractListModel*
///
libqt_list /* of QModelIndex* */ q_abstractlistmodel_qbase_persistent_index_list(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback QModelIndex** func()
///
void q_abstractlistmodel_on_persistent_index_list(void* self, QModelIndex** (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractListModel*
///
QObject* q_abstractlistmodel_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractListModel*
///
QObject* q_abstractlistmodel_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback QObject* func()
///
void q_abstractlistmodel_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractListModel*
///
int32_t q_abstractlistmodel_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractListModel*
///
int32_t q_abstractlistmodel_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback int32_t func()
///
void q_abstractlistmodel_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractListModel*
/// @param signal const char*
///
int32_t q_abstractlistmodel_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param signal const char*
///
int32_t q_abstractlistmodel_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback int32_t func(QAbstractListModel* self, const char* signal)
///
void q_abstractlistmodel_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractListModel*
/// @param signal QMetaMethod*
///
bool q_abstractlistmodel_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param signal QMetaMethod*
///
bool q_abstractlistmodel_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractListModel*
/// @param callback bool func(QAbstractListModel* self, QMetaMethod* signal)
///
void q_abstractlistmodel_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self, QModelIndex* parent, int first, int last)
///
void q_abstractlistmodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self, QModelIndex* parent, int first, int last)
///
void q_abstractlistmodel_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self, QModelIndex* parent, int first, int last)
///
void q_abstractlistmodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self, QModelIndex* parent, int first, int last)
///
void q_abstractlistmodel_on_rows_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self, QModelIndex* parent, int first, int last)
///
void q_abstractlistmodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self, QModelIndex* parent, int first, int last)
///
void q_abstractlistmodel_on_columns_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self, QModelIndex* parent, int first, int last)
///
void q_abstractlistmodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self, QModelIndex* parent, int first, int last)
///
void q_abstractlistmodel_on_columns_removed(void* self, void (*callback)(void*, void*, int, int));

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
void q_abstractlistmodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
///
void q_abstractlistmodel_on_rows_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
///
void q_abstractlistmodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractListModel*
/// @param callback void func(QAbstractListModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
///
void q_abstractlistmodel_on_columns_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

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
