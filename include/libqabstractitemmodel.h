#pragma once
#ifndef SRCQT6C_LIBQABSTRACTITEMMODEL_H
#define SRCQT6C_LIBQABSTRACTITEMMODEL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqevent.h"
#include "libqdatastream.h"
#include "libqmetaobject.h"
#include "libqmimedata.h"
#include "libqobject.h"
#include "libqsize.h"
#include <string.h>
#include "libqvariant.h"

/// https://doc.qt.io/qt-6/qmodelroledata.html

/// q_modelroledata_new constructs a new QModelRoleData object.
///
/// ``` int role ```
QModelRoleData* q_modelroledata_new(int role);

/// q_modelroledata_new2 constructs a new QModelRoleData object.
///
/// ``` QModelRoleData* param1 ```
QModelRoleData* q_modelroledata_new2(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmodelroledata.html#role)
///
/// ``` QModelRoleData* self ```
int32_t q_modelroledata_role(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmodelroledata.html#data)
///
/// ``` QModelRoleData* self ```
QVariant* q_modelroledata_data(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmodelroledata.html#data)
///
/// ``` QModelRoleData* self ```
const QVariant* q_modelroledata_data2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmodelroledata.html#clearData)
///
/// ``` QModelRoleData* self ```
void q_modelroledata_clear_data(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmodelroledata.html#operator=)
///
/// ``` QModelRoleData* self, QModelRoleData* param1 ```
void q_modelroledata_operator_assign(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmodelroledata.html#dtor.QModelRoleData)
///
/// Delete this object from C++ memory.
///
/// ``` QModelRoleData* self ```
void q_modelroledata_delete(void* self);

/// https://doc.qt.io/qt-6/qmodelroledataspan.html

/// q_modelroledataspan_new constructs a new QModelRoleDataSpan object.
///
/// ``` QModelRoleDataSpan* other ```
QModelRoleDataSpan* q_modelroledataspan_new(void* other);

/// q_modelroledataspan_new2 constructs a new QModelRoleDataSpan object and invalidates the source QModelRoleDataSpan object.
///
/// ``` QModelRoleDataSpan* other ```
QModelRoleDataSpan* q_modelroledataspan_new2(void* other);

/// q_modelroledataspan_new3 constructs a new QModelRoleDataSpan object.
///
///
QModelRoleDataSpan* q_modelroledataspan_new3();

/// q_modelroledataspan_new4 constructs a new QModelRoleDataSpan object.
///
/// ``` QModelRoleData* modelRoleData ```
QModelRoleDataSpan* q_modelroledataspan_new4(void* modelRoleData);

/// q_modelroledataspan_new5 constructs a new QModelRoleDataSpan object.
///
/// ``` QModelRoleData* modelRoleData, int64_t lenVal ```
QModelRoleDataSpan* q_modelroledataspan_new5(void* modelRoleData, int64_t lenVal);

/// q_modelroledataspan_new6 constructs a new QModelRoleDataSpan object.
///
/// ``` QModelRoleDataSpan* param1 ```
QModelRoleDataSpan* q_modelroledataspan_new6(void* param1);

/// q_modelroledataspan_copy_assign shallow copies `other` into `self`.
///
/// ``` QModelRoleDataSpan* self, QModelRoleDataSpan* other ```
void q_modelroledataspan_copy_assign(void* self, void* other);

/// q_modelroledataspan_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QModelRoleDataSpan* self, QModelRoleDataSpan* other ```
void q_modelroledataspan_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qmodelroledataspan.html#size)
///
/// ``` QModelRoleDataSpan* self ```
int64_t q_modelroledataspan_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmodelroledataspan.html#length)
///
/// ``` QModelRoleDataSpan* self ```
int64_t q_modelroledataspan_length(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmodelroledataspan.html#data)
///
/// ``` QModelRoleDataSpan* self ```
QModelRoleData* q_modelroledataspan_data(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmodelroledataspan.html#begin)
///
/// ``` QModelRoleDataSpan* self ```
QModelRoleData* q_modelroledataspan_begin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmodelroledataspan.html#end)
///
/// ``` QModelRoleDataSpan* self ```
QModelRoleData* q_modelroledataspan_end(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmodelroledataspan.html#operator[])
///
/// ``` QModelRoleDataSpan* self, int64_t index ```
QModelRoleData* q_modelroledataspan_operator_subscript(void* self, int64_t index);

/// [Qt documentation](https://doc.qt.io/qt-6/qmodelroledataspan.html#dataForRole)
///
/// ``` QModelRoleDataSpan* self, int role ```
QVariant* q_modelroledataspan_data_for_role(void* self, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qmodelroledataspan.html#dtor.QModelRoleDataSpan)
///
/// Delete this object from C++ memory.
///
/// ``` QModelRoleDataSpan* self ```
void q_modelroledataspan_delete(void* self);

/// https://doc.qt.io/qt-6/qmodelindex.html

/// q_modelindex_new constructs a new QModelIndex object.
///
/// ``` QModelIndex* other ```
QModelIndex* q_modelindex_new(void* other);

/// q_modelindex_new2 constructs a new QModelIndex object and invalidates the source QModelIndex object.
///
/// ``` QModelIndex* other ```
QModelIndex* q_modelindex_new2(void* other);

/// q_modelindex_new3 constructs a new QModelIndex object.
///
///
QModelIndex* q_modelindex_new3();

/// q_modelindex_new4 constructs a new QModelIndex object.
///
/// ``` QModelIndex* param1 ```
QModelIndex* q_modelindex_new4(void* param1);

/// q_modelindex_copy_assign shallow copies `other` into `self`.
///
/// ``` QModelIndex* self, QModelIndex* other ```
void q_modelindex_copy_assign(void* self, void* other);

/// q_modelindex_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QModelIndex* self, QModelIndex* other ```
void q_modelindex_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qmodelindex.html#row)
///
/// ``` QModelIndex* self ```
int32_t q_modelindex_row(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmodelindex.html#column)
///
/// ``` QModelIndex* self ```
int32_t q_modelindex_column(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmodelindex.html#internalId)
///
/// ``` QModelIndex* self ```
uintptr_t q_modelindex_internal_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmodelindex.html#internalPointer)
///
/// ``` QModelIndex* self ```
void* q_modelindex_internal_pointer(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmodelindex.html#constInternalPointer)
///
/// ``` QModelIndex* self ```
const void* q_modelindex_const_internal_pointer(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmodelindex.html#parent)
///
/// ``` QModelIndex* self ```
QModelIndex* q_modelindex_parent(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmodelindex.html#sibling)
///
/// ``` QModelIndex* self, int row, int column ```
QModelIndex* q_modelindex_sibling(void* self, int row, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qmodelindex.html#siblingAtColumn)
///
/// ``` QModelIndex* self, int column ```
QModelIndex* q_modelindex_sibling_at_column(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qmodelindex.html#siblingAtRow)
///
/// ``` QModelIndex* self, int row ```
QModelIndex* q_modelindex_sibling_at_row(void* self, int row);

/// [Qt documentation](https://doc.qt.io/qt-6/qmodelindex.html#data)
///
/// ``` QModelIndex* self ```
QVariant* q_modelindex_data(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmodelindex.html#multiData)
///
/// ``` QModelIndex* self, QModelRoleDataSpan* roleDataSpan ```
void q_modelindex_multi_data(void* self, void* roleDataSpan);

/// [Qt documentation](https://doc.qt.io/qt-6/qmodelindex.html#flags)
///
/// ``` QModelIndex* self ```
int64_t q_modelindex_flags(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmodelindex.html#model)
///
/// ``` QModelIndex* self ```
const QAbstractItemModel* q_modelindex_model(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmodelindex.html#isValid)
///
/// ``` QModelIndex* self ```
bool q_modelindex_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmodelindex.html#operator==)
///
/// ``` QModelIndex* self, QModelIndex* other ```
bool q_modelindex_operator_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qmodelindex.html#operator!=)
///
/// ``` QModelIndex* self, QModelIndex* other ```
bool q_modelindex_operator_not_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qmodelindex.html#operator<)
///
/// ``` QModelIndex* self, QModelIndex* other ```
bool q_modelindex_operator_lesser(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qmodelindex.html#data)
///
/// ``` QModelIndex* self, int role ```
QVariant* q_modelindex_data1(void* self, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qmodelindex.html#dtor.QModelIndex)
///
/// Delete this object from C++ memory.
///
/// ``` QModelIndex* self ```
void q_modelindex_delete(void* self);

/// https://doc.qt.io/qt-6/qpersistentmodelindex.html

/// q_persistentmodelindex_new constructs a new QPersistentModelIndex object.
///
///
QPersistentModelIndex* q_persistentmodelindex_new();

/// q_persistentmodelindex_new2 constructs a new QPersistentModelIndex object.
///
/// ``` QModelIndex* index ```
QPersistentModelIndex* q_persistentmodelindex_new2(void* index);

/// q_persistentmodelindex_new3 constructs a new QPersistentModelIndex object.
///
/// ``` QPersistentModelIndex* other ```
QPersistentModelIndex* q_persistentmodelindex_new3(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpersistentmodelindex.html#operator<)
///
/// ``` QPersistentModelIndex* self, QPersistentModelIndex* other ```
bool q_persistentmodelindex_operator_lesser(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpersistentmodelindex.html#operator==)
///
/// ``` QPersistentModelIndex* self, QPersistentModelIndex* other ```
bool q_persistentmodelindex_operator_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpersistentmodelindex.html#operator!=)
///
/// ``` QPersistentModelIndex* self, QPersistentModelIndex* other ```
bool q_persistentmodelindex_operator_not_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpersistentmodelindex.html#operator=)
///
/// ``` QPersistentModelIndex* self, QPersistentModelIndex* other ```
void q_persistentmodelindex_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpersistentmodelindex.html#swap)
///
/// ``` QPersistentModelIndex* self, QPersistentModelIndex* other ```
void q_persistentmodelindex_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpersistentmodelindex.html#operator==)
///
/// ``` QPersistentModelIndex* self, QModelIndex* other ```
bool q_persistentmodelindex_operator_equal_with_other(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpersistentmodelindex.html#operator!=)
///
/// ``` QPersistentModelIndex* self, QModelIndex* other ```
bool q_persistentmodelindex_operator_not_equal_with_other(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpersistentmodelindex.html#operator=)
///
/// ``` QPersistentModelIndex* self, QModelIndex* other ```
void q_persistentmodelindex_operator_assign_with_other(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpersistentmodelindex.html#operator QModelIndex)
///
/// ``` QPersistentModelIndex* self ```
QModelIndex* q_persistentmodelindex_to_q_model_index(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpersistentmodelindex.html#row)
///
/// ``` QPersistentModelIndex* self ```
int32_t q_persistentmodelindex_row(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpersistentmodelindex.html#column)
///
/// ``` QPersistentModelIndex* self ```
int32_t q_persistentmodelindex_column(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpersistentmodelindex.html#internalPointer)
///
/// ``` QPersistentModelIndex* self ```
void* q_persistentmodelindex_internal_pointer(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpersistentmodelindex.html#constInternalPointer)
///
/// ``` QPersistentModelIndex* self ```
const void* q_persistentmodelindex_const_internal_pointer(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpersistentmodelindex.html#internalId)
///
/// ``` QPersistentModelIndex* self ```
uintptr_t q_persistentmodelindex_internal_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpersistentmodelindex.html#parent)
///
/// ``` QPersistentModelIndex* self ```
QModelIndex* q_persistentmodelindex_parent(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpersistentmodelindex.html#sibling)
///
/// ``` QPersistentModelIndex* self, int row, int column ```
QModelIndex* q_persistentmodelindex_sibling(void* self, int row, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qpersistentmodelindex.html#data)
///
/// ``` QPersistentModelIndex* self ```
QVariant* q_persistentmodelindex_data(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpersistentmodelindex.html#multiData)
///
/// ``` QPersistentModelIndex* self, QModelRoleDataSpan* roleDataSpan ```
void q_persistentmodelindex_multi_data(void* self, void* roleDataSpan);

/// [Qt documentation](https://doc.qt.io/qt-6/qpersistentmodelindex.html#flags)
///
/// ``` QPersistentModelIndex* self ```
int64_t q_persistentmodelindex_flags(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpersistentmodelindex.html#model)
///
/// ``` QPersistentModelIndex* self ```
const QAbstractItemModel* q_persistentmodelindex_model(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpersistentmodelindex.html#isValid)
///
/// ``` QPersistentModelIndex* self ```
bool q_persistentmodelindex_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpersistentmodelindex.html#data)
///
/// ``` QPersistentModelIndex* self, int role ```
QVariant* q_persistentmodelindex_data1(void* self, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qpersistentmodelindex.html#dtor.QPersistentModelIndex)
///
/// Delete this object from C++ memory.
///
/// ``` QPersistentModelIndex* self ```
void q_persistentmodelindex_delete(void* self);

/// https://doc.qt.io/qt-6/qabstractitemmodel.html

/// q_abstractitemmodel_new constructs a new QAbstractItemModel object.
///
///
QAbstractItemModel* q_abstractitemmodel_new();

/// q_abstractitemmodel_new2 constructs a new QAbstractItemModel object.
///
/// ``` QObject* parent ```
QAbstractItemModel* q_abstractitemmodel_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QAbstractItemModel* self ```
const QMetaObject* q_abstractitemmodel_meta_object(void* self);

/// ``` QAbstractItemModel* self, const char* param1 ```
void* q_abstractitemmodel_metacast(void* self, const char* param1);

/// ``` QAbstractItemModel* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_abstractitemmodel_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, int32_t (*slot)(QAbstractItemModel*, enum QMetaObject__Call, int, void*) ```
void q_abstractitemmodel_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QAbstractItemModel* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_abstractitemmodel_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_abstractitemmodel_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// ``` QAbstractItemModel* self, int row, int column ```
bool q_abstractitemmodel_has_index(void* self, int row, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#index)
///
/// ``` QAbstractItemModel* self, int row, int column, QModelIndex* parent ```
QModelIndex* q_abstractitemmodel_index(void* self, int row, int column, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#index)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, QModelIndex* (*slot)(QAbstractItemModel*, int, int, QModelIndex*) ```
void q_abstractitemmodel_on_index(void* self, QModelIndex* (*slot)(void*, int, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#index)
///
/// Base class method implementation
///
/// ``` QAbstractItemModel* self, int row, int column, QModelIndex* parent ```
QModelIndex* q_abstractitemmodel_qbase_index(void* self, int row, int column, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
///
/// ``` QAbstractItemModel* self, QModelIndex* child ```
QModelIndex* q_abstractitemmodel_parent(void* self, void* child);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, QModelIndex* (*slot)(QAbstractItemModel*, QModelIndex*) ```
void q_abstractitemmodel_on_parent(void* self, QModelIndex* (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
///
/// Base class method implementation
///
/// ``` QAbstractItemModel* self, QModelIndex* child ```
QModelIndex* q_abstractitemmodel_qbase_parent(void* self, void* child);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#sibling)
///
/// ``` QAbstractItemModel* self, int row, int column, QModelIndex* idx ```
QModelIndex* q_abstractitemmodel_sibling(void* self, int row, int column, void* idx);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#sibling)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, QModelIndex* (*slot)(QAbstractItemModel*, int, int, QModelIndex*) ```
void q_abstractitemmodel_on_sibling(void* self, QModelIndex* (*slot)(void*, int, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#sibling)
///
/// Base class method implementation
///
/// ``` QAbstractItemModel* self, int row, int column, QModelIndex* idx ```
QModelIndex* q_abstractitemmodel_qbase_sibling(void* self, int row, int column, void* idx);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowCount)
///
/// ``` QAbstractItemModel* self, QModelIndex* parent ```
int32_t q_abstractitemmodel_row_count(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowCount)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, int32_t (*slot)(QAbstractItemModel*, QModelIndex*) ```
void q_abstractitemmodel_on_row_count(void* self, int32_t (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowCount)
///
/// Base class method implementation
///
/// ``` QAbstractItemModel* self, QModelIndex* parent ```
int32_t q_abstractitemmodel_qbase_row_count(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnCount)
///
/// ``` QAbstractItemModel* self, QModelIndex* parent ```
int32_t q_abstractitemmodel_column_count(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnCount)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, int32_t (*slot)(QAbstractItemModel*, QModelIndex*) ```
void q_abstractitemmodel_on_column_count(void* self, int32_t (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnCount)
///
/// Base class method implementation
///
/// ``` QAbstractItemModel* self, QModelIndex* parent ```
int32_t q_abstractitemmodel_qbase_column_count(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// ``` QAbstractItemModel* self, QModelIndex* parent ```
bool q_abstractitemmodel_has_children(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, bool (*slot)(QAbstractItemModel*, QModelIndex*) ```
void q_abstractitemmodel_on_has_children(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// Base class method implementation
///
/// ``` QAbstractItemModel* self, QModelIndex* parent ```
bool q_abstractitemmodel_qbase_has_children(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#data)
///
/// ``` QAbstractItemModel* self, QModelIndex* index, int role ```
QVariant* q_abstractitemmodel_data(void* self, void* index, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#data)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, QVariant* (*slot)(QAbstractItemModel*, QModelIndex*, int) ```
void q_abstractitemmodel_on_data(void* self, QVariant* (*slot)(void*, void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#data)
///
/// Base class method implementation
///
/// ``` QAbstractItemModel* self, QModelIndex* index, int role ```
QVariant* q_abstractitemmodel_qbase_data(void* self, void* index, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
///
/// ``` QAbstractItemModel* self, QModelIndex* index, QVariant* value, int role ```
bool q_abstractitemmodel_set_data(void* self, void* index, void* value, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, bool (*slot)(QAbstractItemModel*, QModelIndex*, QVariant*, int) ```
void q_abstractitemmodel_on_set_data(void* self, bool (*slot)(void*, void*, void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
///
/// Base class method implementation
///
/// ``` QAbstractItemModel* self, QModelIndex* index, QVariant* value, int role ```
bool q_abstractitemmodel_qbase_set_data(void* self, void* index, void* value, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
///
/// ``` QAbstractItemModel* self, int section, enum Qt__Orientation orientation, int role ```
QVariant* q_abstractitemmodel_header_data(void* self, int section, int64_t orientation, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, QVariant* (*slot)(QAbstractItemModel*, int, enum Qt__Orientation, int) ```
void q_abstractitemmodel_on_header_data(void* self, QVariant* (*slot)(void*, int, int64_t, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
///
/// Base class method implementation
///
/// ``` QAbstractItemModel* self, int section, enum Qt__Orientation orientation, int role ```
QVariant* q_abstractitemmodel_qbase_header_data(void* self, int section, int64_t orientation, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// ``` QAbstractItemModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role ```
bool q_abstractitemmodel_set_header_data(void* self, int section, int64_t orientation, void* value, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, bool (*slot)(QAbstractItemModel*, int, enum Qt__Orientation, QVariant*, int) ```
void q_abstractitemmodel_on_set_header_data(void* self, bool (*slot)(void*, int, int64_t, void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Base class method implementation
///
/// ``` QAbstractItemModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role ```
bool q_abstractitemmodel_qbase_set_header_data(void* self, int section, int64_t orientation, void* value, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// ``` QAbstractItemModel* self, QModelIndex* index ```
libqt_map /* of int to QVariant* */ q_abstractitemmodel_item_data(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, libqt_map /* of int to QVariant* */ (*slot)(QAbstractItemModel*, QModelIndex*) ```
void q_abstractitemmodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// Base class method implementation
///
/// ``` QAbstractItemModel* self, QModelIndex* index ```
libqt_map /* of int to QVariant* */ q_abstractitemmodel_qbase_item_data(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// ``` QAbstractItemModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ roles ```
bool q_abstractitemmodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, bool (*slot)(QAbstractItemModel*, QModelIndex*, libqt_map /* of int to QVariant* */) ```
void q_abstractitemmodel_on_set_item_data(void* self, bool (*slot)(void*, void*, libqt_map /* of int to QVariant* */));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Base class method implementation
///
/// ``` QAbstractItemModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ roles ```
bool q_abstractitemmodel_qbase_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// ``` QAbstractItemModel* self, QModelIndex* index ```
bool q_abstractitemmodel_clear_item_data(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, bool (*slot)(QAbstractItemModel*, QModelIndex*) ```
void q_abstractitemmodel_on_clear_item_data(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Base class method implementation
///
/// ``` QAbstractItemModel* self, QModelIndex* index ```
bool q_abstractitemmodel_qbase_clear_item_data(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// ``` QAbstractItemModel* self ```
const char** q_abstractitemmodel_mime_types(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, const char** (*slot)() ```
void q_abstractitemmodel_on_mime_types(void* self, const char** (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// Base class method implementation
///
/// ``` QAbstractItemModel* self ```
const char** q_abstractitemmodel_qbase_mime_types(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// ``` QAbstractItemModel* self, libqt_list /* of QModelIndex* */ indexes ```
QMimeData* q_abstractitemmodel_mime_data(void* self, libqt_list indexes);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, QMimeData* (*slot)(QAbstractItemModel*, libqt_list /* of QModelIndex* */ indexes ) ```
void q_abstractitemmodel_on_mime_data(void* self, QMimeData* (*slot)(void*, libqt_list));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// Base class method implementation
///
/// ``` QAbstractItemModel* self, libqt_list /* of QModelIndex* */ indexes ```
QMimeData* q_abstractitemmodel_qbase_mime_data(void* self, libqt_list indexes);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// ``` QAbstractItemModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_abstractitemmodel_can_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, bool (*slot)(QAbstractItemModel*, QMimeData*, enum Qt__DropAction, int, int, QModelIndex*) ```
void q_abstractitemmodel_on_can_drop_mime_data(void* self, bool (*slot)(void*, void*, int64_t, int, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Base class method implementation
///
/// ``` QAbstractItemModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_abstractitemmodel_qbase_can_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dropMimeData)
///
/// ``` QAbstractItemModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_abstractitemmodel_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dropMimeData)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, bool (*slot)(QAbstractItemModel*, QMimeData*, enum Qt__DropAction, int, int, QModelIndex*) ```
void q_abstractitemmodel_on_drop_mime_data(void* self, bool (*slot)(void*, void*, int64_t, int, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dropMimeData)
///
/// Base class method implementation
///
/// ``` QAbstractItemModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_abstractitemmodel_qbase_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// ``` QAbstractItemModel* self ```
int64_t q_abstractitemmodel_supported_drop_actions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, int64_t (*slot)() ```
void q_abstractitemmodel_on_supported_drop_actions(void* self, int64_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Base class method implementation
///
/// ``` QAbstractItemModel* self ```
int64_t q_abstractitemmodel_qbase_supported_drop_actions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// ``` QAbstractItemModel* self ```
int64_t q_abstractitemmodel_supported_drag_actions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, int64_t (*slot)() ```
void q_abstractitemmodel_on_supported_drag_actions(void* self, int64_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Base class method implementation
///
/// ``` QAbstractItemModel* self ```
int64_t q_abstractitemmodel_qbase_supported_drag_actions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// ``` QAbstractItemModel* self, int row, int count, QModelIndex* parent ```
bool q_abstractitemmodel_insert_rows(void* self, int row, int count, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, bool (*slot)(QAbstractItemModel*, int, int, QModelIndex*) ```
void q_abstractitemmodel_on_insert_rows(void* self, bool (*slot)(void*, int, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Base class method implementation
///
/// ``` QAbstractItemModel* self, int row, int count, QModelIndex* parent ```
bool q_abstractitemmodel_qbase_insert_rows(void* self, int row, int count, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// ``` QAbstractItemModel* self, int column, int count, QModelIndex* parent ```
bool q_abstractitemmodel_insert_columns(void* self, int column, int count, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, bool (*slot)(QAbstractItemModel*, int, int, QModelIndex*) ```
void q_abstractitemmodel_on_insert_columns(void* self, bool (*slot)(void*, int, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Base class method implementation
///
/// ``` QAbstractItemModel* self, int column, int count, QModelIndex* parent ```
bool q_abstractitemmodel_qbase_insert_columns(void* self, int column, int count, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// ``` QAbstractItemModel* self, int row, int count, QModelIndex* parent ```
bool q_abstractitemmodel_remove_rows(void* self, int row, int count, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, bool (*slot)(QAbstractItemModel*, int, int, QModelIndex*) ```
void q_abstractitemmodel_on_remove_rows(void* self, bool (*slot)(void*, int, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Base class method implementation
///
/// ``` QAbstractItemModel* self, int row, int count, QModelIndex* parent ```
bool q_abstractitemmodel_qbase_remove_rows(void* self, int row, int count, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// ``` QAbstractItemModel* self, int column, int count, QModelIndex* parent ```
bool q_abstractitemmodel_remove_columns(void* self, int column, int count, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, bool (*slot)(QAbstractItemModel*, int, int, QModelIndex*) ```
void q_abstractitemmodel_on_remove_columns(void* self, bool (*slot)(void*, int, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Base class method implementation
///
/// ``` QAbstractItemModel* self, int column, int count, QModelIndex* parent ```
bool q_abstractitemmodel_qbase_remove_columns(void* self, int column, int count, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// ``` QAbstractItemModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_abstractitemmodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, bool (*slot)(QAbstractItemModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_abstractitemmodel_on_move_rows(void* self, bool (*slot)(void*, void*, int, int, void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Base class method implementation
///
/// ``` QAbstractItemModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_abstractitemmodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// ``` QAbstractItemModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_abstractitemmodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, bool (*slot)(QAbstractItemModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_abstractitemmodel_on_move_columns(void* self, bool (*slot)(void*, void*, int, int, void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Base class method implementation
///
/// ``` QAbstractItemModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_abstractitemmodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// ``` QAbstractItemModel* self, int row ```
bool q_abstractitemmodel_insert_row(void* self, int row);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// ``` QAbstractItemModel* self, int column ```
bool q_abstractitemmodel_insert_column(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// ``` QAbstractItemModel* self, int row ```
bool q_abstractitemmodel_remove_row(void* self, int row);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// ``` QAbstractItemModel* self, int column ```
bool q_abstractitemmodel_remove_column(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
///
/// ``` QAbstractItemModel* self, QModelIndex* sourceParent, int sourceRow, QModelIndex* destinationParent, int destinationChild ```
bool q_abstractitemmodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
///
/// ``` QAbstractItemModel* self, QModelIndex* sourceParent, int sourceColumn, QModelIndex* destinationParent, int destinationChild ```
bool q_abstractitemmodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// ``` QAbstractItemModel* self, QModelIndex* parent ```
void q_abstractitemmodel_fetch_more(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*) ```
void q_abstractitemmodel_on_fetch_more(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Base class method implementation
///
/// ``` QAbstractItemModel* self, QModelIndex* parent ```
void q_abstractitemmodel_qbase_fetch_more(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// ``` QAbstractItemModel* self, QModelIndex* parent ```
bool q_abstractitemmodel_can_fetch_more(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, bool (*slot)(QAbstractItemModel*, QModelIndex*) ```
void q_abstractitemmodel_on_can_fetch_more(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Base class method implementation
///
/// ``` QAbstractItemModel* self, QModelIndex* parent ```
bool q_abstractitemmodel_qbase_can_fetch_more(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#flags)
///
/// ``` QAbstractItemModel* self, QModelIndex* index ```
int64_t q_abstractitemmodel_flags(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#flags)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, int64_t (*slot)(QAbstractItemModel*, QModelIndex*) ```
void q_abstractitemmodel_on_flags(void* self, int64_t (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#flags)
///
/// Base class method implementation
///
/// ``` QAbstractItemModel* self, QModelIndex* index ```
int64_t q_abstractitemmodel_qbase_flags(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
///
/// ``` QAbstractItemModel* self, int column, enum Qt__SortOrder order ```
void q_abstractitemmodel_sort(void* self, int column, int64_t order);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, void (*slot)(QAbstractItemModel*, int, enum Qt__SortOrder) ```
void q_abstractitemmodel_on_sort(void* self, void (*slot)(void*, int, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
///
/// Base class method implementation
///
/// ``` QAbstractItemModel* self, int column, enum Qt__SortOrder order ```
void q_abstractitemmodel_qbase_sort(void* self, int column, int64_t order);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// ``` QAbstractItemModel* self, QModelIndex* index ```
QModelIndex* q_abstractitemmodel_buddy(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, QModelIndex* (*slot)(QAbstractItemModel*, QModelIndex*) ```
void q_abstractitemmodel_on_buddy(void* self, QModelIndex* (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Base class method implementation
///
/// ``` QAbstractItemModel* self, QModelIndex* index ```
QModelIndex* q_abstractitemmodel_qbase_buddy(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// ``` QAbstractItemModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags ```
libqt_list /* of QModelIndex* */ q_abstractitemmodel_match(void* self, void* start, int role, void* value, int hits, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, libqt_list /* of QModelIndex* */ (*slot)(QAbstractItemModel*, QModelIndex*, int, QVariant*, int, int) ```
void q_abstractitemmodel_on_match(void* self, libqt_list /* of QModelIndex* */ (*slot)(void*, void*, int, void*, int, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Base class method implementation
///
/// ``` QAbstractItemModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags ```
libqt_list /* of QModelIndex* */ q_abstractitemmodel_qbase_match(void* self, void* start, int role, void* value, int hits, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// ``` QAbstractItemModel* self, QModelIndex* index ```
QSize* q_abstractitemmodel_span(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, QSize* (*slot)(QAbstractItemModel*, QModelIndex*) ```
void q_abstractitemmodel_on_span(void* self, QSize* (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Base class method implementation
///
/// ``` QAbstractItemModel* self, QModelIndex* index ```
QSize* q_abstractitemmodel_qbase_span(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#roleNames)
///
/// ``` QAbstractItemModel* self ```
libqt_map /* of int to char* */ q_abstractitemmodel_role_names(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#roleNames)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, libqt_map /* of int to char* */ (*slot)() ```
void q_abstractitemmodel_on_role_names(void* self, libqt_map /* of int to char* */ (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#roleNames)
///
/// Base class method implementation
///
/// ``` QAbstractItemModel* self ```
libqt_map /* of int to char* */ q_abstractitemmodel_qbase_role_names(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// ``` QAbstractItemModel* self, QModelIndex* index ```
bool q_abstractitemmodel_check_index(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// ``` QAbstractItemModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan ```
void q_abstractitemmodel_multi_data(void* self, void* index, void* roleDataSpan);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, QModelRoleDataSpan*) ```
void q_abstractitemmodel_on_multi_data(void* self, void (*slot)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Base class method implementation
///
/// ``` QAbstractItemModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan ```
void q_abstractitemmodel_qbase_multi_data(void* self, void* index, void* roleDataSpan);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// ``` QAbstractItemModel* self, QModelIndex* topLeft, QModelIndex* bottomRight ```
void q_abstractitemmodel_data_changed(void* self, void* topLeft, void* bottomRight);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// ``` QAbstractItemModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, QModelIndex*) ```
void q_abstractitemmodel_on_data_changed(void* self, void (*slot)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// ``` QAbstractItemModel* self, enum Qt__Orientation orientation, int first, int last ```
void q_abstractitemmodel_header_data_changed(void* self, int64_t orientation, int first, int last);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// ``` QAbstractItemModel* self, void (*slot)(QAbstractItemModel*, enum Qt__Orientation, int, int) ```
void q_abstractitemmodel_on_header_data_changed(void* self, void (*slot)(void*, int64_t, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QAbstractItemModel* self ```
void q_abstractitemmodel_layout_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QAbstractItemModel* self, void (*slot)(QAbstractItemModel*) ```
void q_abstractitemmodel_on_layout_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QAbstractItemModel* self ```
void q_abstractitemmodel_layout_about_to_be_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QAbstractItemModel* self, void (*slot)(QAbstractItemModel*) ```
void q_abstractitemmodel_on_layout_about_to_be_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// ``` QAbstractItemModel* self ```
bool q_abstractitemmodel_submit(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, bool (*slot)() ```
void q_abstractitemmodel_on_submit(void* self, bool (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Base class method implementation
///
/// ``` QAbstractItemModel* self ```
bool q_abstractitemmodel_qbase_submit(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// ``` QAbstractItemModel* self ```
void q_abstractitemmodel_revert(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, void (*slot)() ```
void q_abstractitemmodel_on_revert(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Base class method implementation
///
/// ``` QAbstractItemModel* self ```
void q_abstractitemmodel_qbase_revert(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// ``` QAbstractItemModel* self ```
void q_abstractitemmodel_reset_internal_data(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, void (*slot)() ```
void q_abstractitemmodel_on_reset_internal_data(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Base class method implementation
///
/// ``` QAbstractItemModel* self ```
void q_abstractitemmodel_qbase_reset_internal_data(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// ``` QAbstractItemModel* self, int row, int column ```
QModelIndex* q_abstractitemmodel_create_index(void* self, int row, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, QModelIndex* (*slot)(QAbstractItemModel*, int, int) ```
void q_abstractitemmodel_on_create_index(void* self, QModelIndex* (*slot)(void*, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Base class method implementation
///
/// ``` QAbstractItemModel* self, int row, int column ```
QModelIndex* q_abstractitemmodel_qbase_create_index(void* self, int row, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// ``` QAbstractItemModel* self, int row, int column, uintptr_t id ```
QModelIndex* q_abstractitemmodel_create_index2(void* self, int row, int column, uintptr_t id);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, QModelIndex* (*slot)(QAbstractItemModel*, int, int, uintptr_t) ```
void q_abstractitemmodel_on_create_index2(void* self, QModelIndex* (*slot)(void*, int, int, uintptr_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Base class method implementation
///
/// ``` QAbstractItemModel* self, int row, int column, uintptr_t id ```
QModelIndex* q_abstractitemmodel_qbase_create_index2(void* self, int row, int column, uintptr_t id);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// ``` QAbstractItemModel* self, libqt_list /* of QModelIndex* */ indexes, QDataStream* stream ```
void q_abstractitemmodel_encode_data(void* self, libqt_list indexes, void* stream);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, void (*slot)(QAbstractItemModel*, libqt_list /* of QModelIndex* */ indexes , QDataStream*) ```
void q_abstractitemmodel_on_encode_data(void* self, void (*slot)(void*, libqt_list, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Base class method implementation
///
/// ``` QAbstractItemModel* self, libqt_list /* of QModelIndex* */ indexes, QDataStream* stream ```
void q_abstractitemmodel_qbase_encode_data(void* self, libqt_list indexes, void* stream);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// ``` QAbstractItemModel* self, int row, int column, QModelIndex* parent, QDataStream* stream ```
bool q_abstractitemmodel_decode_data(void* self, int row, int column, void* parent, void* stream);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, bool (*slot)(QAbstractItemModel*, int, int, QModelIndex*, QDataStream*) ```
void q_abstractitemmodel_on_decode_data(void* self, bool (*slot)(void*, int, int, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Base class method implementation
///
/// ``` QAbstractItemModel* self, int row, int column, QModelIndex* parent, QDataStream* stream ```
bool q_abstractitemmodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// ``` QAbstractItemModel* self, QModelIndex* parent, int first, int last ```
void q_abstractitemmodel_begin_insert_rows(void* self, void* parent, int first, int last);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int) ```
void q_abstractitemmodel_on_begin_insert_rows(void* self, void (*slot)(void*, void*, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Base class method implementation
///
/// ``` QAbstractItemModel* self, QModelIndex* parent, int first, int last ```
void q_abstractitemmodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// ``` QAbstractItemModel* self ```
void q_abstractitemmodel_end_insert_rows(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, void (*slot)() ```
void q_abstractitemmodel_on_end_insert_rows(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Base class method implementation
///
/// ``` QAbstractItemModel* self ```
void q_abstractitemmodel_qbase_end_insert_rows(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// ``` QAbstractItemModel* self, QModelIndex* parent, int first, int last ```
void q_abstractitemmodel_begin_remove_rows(void* self, void* parent, int first, int last);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int) ```
void q_abstractitemmodel_on_begin_remove_rows(void* self, void (*slot)(void*, void*, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Base class method implementation
///
/// ``` QAbstractItemModel* self, QModelIndex* parent, int first, int last ```
void q_abstractitemmodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// ``` QAbstractItemModel* self ```
void q_abstractitemmodel_end_remove_rows(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, void (*slot)() ```
void q_abstractitemmodel_on_end_remove_rows(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Base class method implementation
///
/// ``` QAbstractItemModel* self ```
void q_abstractitemmodel_qbase_end_remove_rows(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// ``` QAbstractItemModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow ```
bool q_abstractitemmodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, bool (*slot)(QAbstractItemModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_abstractitemmodel_on_begin_move_rows(void* self, bool (*slot)(void*, void*, int, int, void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Base class method implementation
///
/// ``` QAbstractItemModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow ```
bool q_abstractitemmodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// ``` QAbstractItemModel* self ```
void q_abstractitemmodel_end_move_rows(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, void (*slot)() ```
void q_abstractitemmodel_on_end_move_rows(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Base class method implementation
///
/// ``` QAbstractItemModel* self ```
void q_abstractitemmodel_qbase_end_move_rows(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// ``` QAbstractItemModel* self, QModelIndex* parent, int first, int last ```
void q_abstractitemmodel_begin_insert_columns(void* self, void* parent, int first, int last);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int) ```
void q_abstractitemmodel_on_begin_insert_columns(void* self, void (*slot)(void*, void*, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Base class method implementation
///
/// ``` QAbstractItemModel* self, QModelIndex* parent, int first, int last ```
void q_abstractitemmodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// ``` QAbstractItemModel* self ```
void q_abstractitemmodel_end_insert_columns(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, void (*slot)() ```
void q_abstractitemmodel_on_end_insert_columns(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Base class method implementation
///
/// ``` QAbstractItemModel* self ```
void q_abstractitemmodel_qbase_end_insert_columns(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// ``` QAbstractItemModel* self, QModelIndex* parent, int first, int last ```
void q_abstractitemmodel_begin_remove_columns(void* self, void* parent, int first, int last);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int) ```
void q_abstractitemmodel_on_begin_remove_columns(void* self, void (*slot)(void*, void*, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Base class method implementation
///
/// ``` QAbstractItemModel* self, QModelIndex* parent, int first, int last ```
void q_abstractitemmodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// ``` QAbstractItemModel* self ```
void q_abstractitemmodel_end_remove_columns(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, void (*slot)() ```
void q_abstractitemmodel_on_end_remove_columns(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Base class method implementation
///
/// ``` QAbstractItemModel* self ```
void q_abstractitemmodel_qbase_end_remove_columns(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// ``` QAbstractItemModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn ```
bool q_abstractitemmodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, bool (*slot)(QAbstractItemModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_abstractitemmodel_on_begin_move_columns(void* self, bool (*slot)(void*, void*, int, int, void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Base class method implementation
///
/// ``` QAbstractItemModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn ```
bool q_abstractitemmodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// ``` QAbstractItemModel* self ```
void q_abstractitemmodel_end_move_columns(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, void (*slot)() ```
void q_abstractitemmodel_on_end_move_columns(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Base class method implementation
///
/// ``` QAbstractItemModel* self ```
void q_abstractitemmodel_qbase_end_move_columns(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// ``` QAbstractItemModel* self ```
void q_abstractitemmodel_begin_reset_model(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, void (*slot)() ```
void q_abstractitemmodel_on_begin_reset_model(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Base class method implementation
///
/// ``` QAbstractItemModel* self ```
void q_abstractitemmodel_qbase_begin_reset_model(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// ``` QAbstractItemModel* self ```
void q_abstractitemmodel_end_reset_model(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, void (*slot)() ```
void q_abstractitemmodel_on_end_reset_model(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Base class method implementation
///
/// ``` QAbstractItemModel* self ```
void q_abstractitemmodel_qbase_end_reset_model(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// ``` QAbstractItemModel* self, QModelIndex* from, QModelIndex* to ```
void q_abstractitemmodel_change_persistent_index(void* self, void* from, void* to);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, QModelIndex*) ```
void q_abstractitemmodel_on_change_persistent_index(void* self, void (*slot)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Base class method implementation
///
/// ``` QAbstractItemModel* self, QModelIndex* from, QModelIndex* to ```
void q_abstractitemmodel_qbase_change_persistent_index(void* self, void* from, void* to);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// ``` QAbstractItemModel* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to ```
void q_abstractitemmodel_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, void (*slot)(QAbstractItemModel*, libqt_list /* of QModelIndex* */ from , libqt_list /* of QModelIndex* */ to ) ```
void q_abstractitemmodel_on_change_persistent_index_list(void* self, void (*slot)(void*, libqt_list, libqt_list));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Base class method implementation
///
/// ``` QAbstractItemModel* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to ```
void q_abstractitemmodel_qbase_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// ``` QAbstractItemModel* self ```
libqt_list /* of QModelIndex* */ q_abstractitemmodel_persistent_index_list(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, libqt_list /* of QModelIndex* */ (*slot)() ```
void q_abstractitemmodel_on_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Base class method implementation
///
/// ``` QAbstractItemModel* self ```
libqt_list /* of QModelIndex* */ q_abstractitemmodel_qbase_persistent_index_list(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_abstractitemmodel_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_abstractitemmodel_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// ``` QAbstractItemModel* self, int row, int column, QModelIndex* parent ```
bool q_abstractitemmodel_has_index3(void* self, int row, int column, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// ``` QAbstractItemModel* self, int row, QModelIndex* parent ```
bool q_abstractitemmodel_insert_row2(void* self, int row, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// ``` QAbstractItemModel* self, int column, QModelIndex* parent ```
bool q_abstractitemmodel_insert_column2(void* self, int column, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// ``` QAbstractItemModel* self, int row, QModelIndex* parent ```
bool q_abstractitemmodel_remove_row2(void* self, int row, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// ``` QAbstractItemModel* self, int column, QModelIndex* parent ```
bool q_abstractitemmodel_remove_column2(void* self, int column, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// ``` QAbstractItemModel* self, QModelIndex* index, int options ```
bool q_abstractitemmodel_check_index2(void* self, void* index, int64_t options);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// ``` QAbstractItemModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, libqt_list /* of int */ roles ```
void q_abstractitemmodel_data_changed3(void* self, void* topLeft, void* bottomRight, libqt_list roles);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// ``` QAbstractItemModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, QModelIndex*, libqt_list /* of int */ roles ) ```
void q_abstractitemmodel_on_data_changed3(void* self, void (*slot)(void*, void*, void*, libqt_list));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QAbstractItemModel* self, libqt_list /* of QPersistentModelIndex* */ parents ```
void q_abstractitemmodel_layout_changed1(void* self, libqt_list parents);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QAbstractItemModel* self, void (*slot)(QAbstractItemModel*, libqt_list /* of QPersistentModelIndex* */ parents ) ```
void q_abstractitemmodel_on_layout_changed1(void* self, void (*slot)(void*, libqt_list));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QAbstractItemModel* self, libqt_list /* of QPersistentModelIndex* */ parents, enum QAbstractItemModel__LayoutChangeHint hint ```
void q_abstractitemmodel_layout_changed2(void* self, libqt_list parents, int64_t hint);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QAbstractItemModel* self, void (*slot)(QAbstractItemModel*, libqt_list /* of QPersistentModelIndex* */ parents , enum QAbstractItemModel__LayoutChangeHint) ```
void q_abstractitemmodel_on_layout_changed2(void* self, void (*slot)(void*, libqt_list, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QAbstractItemModel* self, libqt_list /* of QPersistentModelIndex* */ parents ```
void q_abstractitemmodel_layout_about_to_be_changed1(void* self, libqt_list parents);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QAbstractItemModel* self, void (*slot)(QAbstractItemModel*, libqt_list /* of QPersistentModelIndex* */ parents ) ```
void q_abstractitemmodel_on_layout_about_to_be_changed1(void* self, void (*slot)(void*, libqt_list));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QAbstractItemModel* self, libqt_list /* of QPersistentModelIndex* */ parents, enum QAbstractItemModel__LayoutChangeHint hint ```
void q_abstractitemmodel_layout_about_to_be_changed2(void* self, libqt_list parents, int64_t hint);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QAbstractItemModel* self, void (*slot)(QAbstractItemModel*, libqt_list /* of QPersistentModelIndex* */ parents , enum QAbstractItemModel__LayoutChangeHint) ```
void q_abstractitemmodel_on_layout_about_to_be_changed2(void* self, void (*slot)(void*, libqt_list, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// ``` QAbstractItemModel* self, int row, int column, void* data ```
QModelIndex* q_abstractitemmodel_create_index3(void* self, int row, int column, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, QModelIndex* (*slot)(QAbstractItemModel*, int, int, void*) ```
void q_abstractitemmodel_on_create_index3(void* self, QModelIndex* (*slot)(void*, int, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Base class method implementation
///
/// ``` QAbstractItemModel* self, int row, int column, void* data ```
QModelIndex* q_abstractitemmodel_qbase_create_index3(void* self, int row, int column, void* data);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QAbstractItemModel* self ```
const char* q_abstractitemmodel_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QAbstractItemModel* self, char* name ```
void q_abstractitemmodel_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QAbstractItemModel* self ```
bool q_abstractitemmodel_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QAbstractItemModel* self ```
bool q_abstractitemmodel_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QAbstractItemModel* self ```
bool q_abstractitemmodel_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QAbstractItemModel* self ```
bool q_abstractitemmodel_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QAbstractItemModel* self, bool b ```
bool q_abstractitemmodel_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QAbstractItemModel* self ```
QThread* q_abstractitemmodel_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAbstractItemModel* self, QThread* thread ```
void q_abstractitemmodel_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAbstractItemModel* self, int interval ```
int32_t q_abstractitemmodel_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAbstractItemModel* self, int id ```
void q_abstractitemmodel_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QAbstractItemModel* self ```
const libqt_list /* of QObject* */ q_abstractitemmodel_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QAbstractItemModel* self, QObject* parent ```
void q_abstractitemmodel_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QAbstractItemModel* self, QObject* filterObj ```
void q_abstractitemmodel_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QAbstractItemModel* self, QObject* obj ```
void q_abstractitemmodel_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_abstractitemmodel_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAbstractItemModel* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_abstractitemmodel_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_abstractitemmodel_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_abstractitemmodel_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QAbstractItemModel* self ```
void q_abstractitemmodel_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QAbstractItemModel* self ```
void q_abstractitemmodel_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QAbstractItemModel* self, const char* name, QVariant* value ```
bool q_abstractitemmodel_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QAbstractItemModel* self, const char* name ```
QVariant* q_abstractitemmodel_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QAbstractItemModel* self ```
const char** q_abstractitemmodel_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAbstractItemModel* self ```
QBindingStorage* q_abstractitemmodel_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAbstractItemModel* self ```
const QBindingStorage* q_abstractitemmodel_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractItemModel* self ```
void q_abstractitemmodel_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractItemModel* self, void (*slot)(QObject*) ```
void q_abstractitemmodel_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QAbstractItemModel* self, const char* classname ```
bool q_abstractitemmodel_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QAbstractItemModel* self ```
void q_abstractitemmodel_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAbstractItemModel* self, int interval, enum Qt__TimerType timerType ```
int32_t q_abstractitemmodel_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_abstractitemmodel_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAbstractItemModel* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_abstractitemmodel_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractItemModel* self, QObject* param1 ```
void q_abstractitemmodel_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractItemModel* self, void (*slot)(QObject*, QObject*) ```
void q_abstractitemmodel_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemModel* self, QEvent* event ```
bool q_abstractitemmodel_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemModel* self, QEvent* event ```
bool q_abstractitemmodel_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemModel* self, bool (*slot)(QAbstractItemModel*, QEvent*) ```
void q_abstractitemmodel_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemModel* self, QObject* watched, QEvent* event ```
bool q_abstractitemmodel_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemModel* self, QObject* watched, QEvent* event ```
bool q_abstractitemmodel_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemModel* self, bool (*slot)(QAbstractItemModel*, QObject*, QEvent*) ```
void q_abstractitemmodel_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemModel* self, QTimerEvent* event ```
void q_abstractitemmodel_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemModel* self, QTimerEvent* event ```
void q_abstractitemmodel_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemModel* self, void (*slot)(QAbstractItemModel*, QTimerEvent*) ```
void q_abstractitemmodel_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemModel* self, QChildEvent* event ```
void q_abstractitemmodel_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemModel* self, QChildEvent* event ```
void q_abstractitemmodel_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemModel* self, void (*slot)(QAbstractItemModel*, QChildEvent*) ```
void q_abstractitemmodel_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemModel* self, QEvent* event ```
void q_abstractitemmodel_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemModel* self, QEvent* event ```
void q_abstractitemmodel_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemModel* self, void (*slot)(QAbstractItemModel*, QEvent*) ```
void q_abstractitemmodel_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemModel* self, QMetaMethod* signal ```
void q_abstractitemmodel_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemModel* self, QMetaMethod* signal ```
void q_abstractitemmodel_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemModel* self, void (*slot)(QAbstractItemModel*, QMetaMethod*) ```
void q_abstractitemmodel_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemModel* self, QMetaMethod* signal ```
void q_abstractitemmodel_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemModel* self, QMetaMethod* signal ```
void q_abstractitemmodel_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemModel* self, void (*slot)(QAbstractItemModel*, QMetaMethod*) ```
void q_abstractitemmodel_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemModel* self ```
QObject* q_abstractitemmodel_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemModel* self ```
QObject* q_abstractitemmodel_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemModel* self, QObject* (*slot)() ```
void q_abstractitemmodel_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemModel* self ```
int32_t q_abstractitemmodel_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemModel* self ```
int32_t q_abstractitemmodel_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemModel* self, int32_t (*slot)() ```
void q_abstractitemmodel_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemModel* self, const char* signal ```
int32_t q_abstractitemmodel_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemModel* self, const char* signal ```
int32_t q_abstractitemmodel_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemModel* self, int32_t (*slot)(QAbstractItemModel*, const char*) ```
void q_abstractitemmodel_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemModel* self, QMetaMethod* signal ```
bool q_abstractitemmodel_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemModel* self, QMetaMethod* signal ```
bool q_abstractitemmodel_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemModel* self, bool (*slot)(QAbstractItemModel*, QMetaMethod*) ```
void q_abstractitemmodel_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// ``` QAbstractItemModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int) ```
void q_abstractitemmodel_on_rows_about_to_be_inserted(void* self, void (*slot)(void*, void*, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsInserted)
///
/// Wrapper to allow calling private signal
///
/// ``` QAbstractItemModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int) ```
void q_abstractitemmodel_on_rows_inserted(void* self, void (*slot)(void*, void*, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// ``` QAbstractItemModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int) ```
void q_abstractitemmodel_on_rows_about_to_be_removed(void* self, void (*slot)(void*, void*, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsRemoved)
///
/// Wrapper to allow calling private signal
///
/// ``` QAbstractItemModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int) ```
void q_abstractitemmodel_on_rows_removed(void* self, void (*slot)(void*, void*, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// ``` QAbstractItemModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int) ```
void q_abstractitemmodel_on_columns_about_to_be_inserted(void* self, void (*slot)(void*, void*, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsInserted)
///
/// Wrapper to allow calling private signal
///
/// ``` QAbstractItemModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int) ```
void q_abstractitemmodel_on_columns_inserted(void* self, void (*slot)(void*, void*, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// ``` QAbstractItemModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int) ```
void q_abstractitemmodel_on_columns_about_to_be_removed(void* self, void (*slot)(void*, void*, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsRemoved)
///
/// Wrapper to allow calling private signal
///
/// ``` QAbstractItemModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int) ```
void q_abstractitemmodel_on_columns_removed(void* self, void (*slot)(void*, void*, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelAboutToBeReset)
///
/// Wrapper to allow calling private signal
///
/// ``` QAbstractItemModel* self, void (*slot)(QAbstractItemModel*) ```
void q_abstractitemmodel_on_model_about_to_be_reset(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelReset)
///
/// Wrapper to allow calling private signal
///
/// ``` QAbstractItemModel* self, void (*slot)(QAbstractItemModel*) ```
void q_abstractitemmodel_on_model_reset(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// ``` QAbstractItemModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_abstractitemmodel_on_rows_about_to_be_moved(void* self, void (*slot)(void*, void*, int, int, void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsMoved)
///
/// Wrapper to allow calling private signal
///
/// ``` QAbstractItemModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_abstractitemmodel_on_rows_moved(void* self, void (*slot)(void*, void*, int, int, void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// ``` QAbstractItemModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_abstractitemmodel_on_columns_about_to_be_moved(void* self, void (*slot)(void*, void*, int, int, void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsMoved)
///
/// Wrapper to allow calling private signal
///
/// ``` QAbstractItemModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_abstractitemmodel_on_columns_moved(void* self, void (*slot)(void*, void*, int, int, void*, int));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QAbstractItemModel* self, void (*slot)(QObject*, const char*) ```
void q_abstractitemmodel_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dtor.QAbstractItemModel)
///
/// Delete this object from C++ memory.
///
/// ``` QAbstractItemModel* self ```
void q_abstractitemmodel_delete(void* self);

/// https://doc.qt.io/qt-6/qabstracttablemodel.html

/// q_abstracttablemodel_new constructs a new QAbstractTableModel object.
///
///
QAbstractTableModel* q_abstracttablemodel_new();

/// q_abstracttablemodel_new2 constructs a new QAbstractTableModel object.
///
/// ``` QObject* parent ```
QAbstractTableModel* q_abstracttablemodel_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QAbstractTableModel* self ```
const QMetaObject* q_abstracttablemodel_meta_object(void* self);

/// ``` QAbstractTableModel* self, const char* param1 ```
void* q_abstracttablemodel_metacast(void* self, const char* param1);

/// ``` QAbstractTableModel* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_abstracttablemodel_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QAbstractTableModel* self, int32_t (*slot)(QAbstractTableModel*, enum QMetaObject__Call, int, void*) ```
void q_abstracttablemodel_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QAbstractTableModel* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_abstracttablemodel_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_abstracttablemodel_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttablemodel.html#index)
///
/// ``` QAbstractTableModel* self, int row, int column, QModelIndex* parent ```
QModelIndex* q_abstracttablemodel_index(void* self, int row, int column, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttablemodel.html#index)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractTableModel* self, QModelIndex* (*slot)(QAbstractTableModel*, int, int, QModelIndex*) ```
void q_abstracttablemodel_on_index(void* self, QModelIndex* (*slot)(void*, int, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttablemodel.html#index)
///
/// Base class method implementation
///
/// ``` QAbstractTableModel* self, int row, int column, QModelIndex* parent ```
QModelIndex* q_abstracttablemodel_qbase_index(void* self, int row, int column, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttablemodel.html#sibling)
///
/// ``` QAbstractTableModel* self, int row, int column, QModelIndex* idx ```
QModelIndex* q_abstracttablemodel_sibling(void* self, int row, int column, void* idx);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttablemodel.html#sibling)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractTableModel* self, QModelIndex* (*slot)(QAbstractTableModel*, int, int, QModelIndex*) ```
void q_abstracttablemodel_on_sibling(void* self, QModelIndex* (*slot)(void*, int, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttablemodel.html#sibling)
///
/// Base class method implementation
///
/// ``` QAbstractTableModel* self, int row, int column, QModelIndex* idx ```
QModelIndex* q_abstracttablemodel_qbase_sibling(void* self, int row, int column, void* idx);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttablemodel.html#dropMimeData)
///
/// ``` QAbstractTableModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_abstracttablemodel_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttablemodel.html#dropMimeData)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractTableModel* self, bool (*slot)(QAbstractTableModel*, QMimeData*, enum Qt__DropAction, int, int, QModelIndex*) ```
void q_abstracttablemodel_on_drop_mime_data(void* self, bool (*slot)(void*, void*, int64_t, int, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttablemodel.html#dropMimeData)
///
/// Base class method implementation
///
/// ``` QAbstractTableModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_abstracttablemodel_qbase_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttablemodel.html#flags)
///
/// ``` QAbstractTableModel* self, QModelIndex* index ```
int64_t q_abstracttablemodel_flags(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttablemodel.html#flags)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractTableModel* self, int64_t (*slot)(QAbstractTableModel*, QModelIndex*) ```
void q_abstracttablemodel_on_flags(void* self, int64_t (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttablemodel.html#flags)
///
/// Base class method implementation
///
/// ``` QAbstractTableModel* self, QModelIndex* index ```
int64_t q_abstracttablemodel_qbase_flags(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_abstracttablemodel_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_abstracttablemodel_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// ``` QAbstractTableModel* self, int row, int column ```
bool q_abstracttablemodel_has_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
///
/// ``` QAbstractTableModel* self, QModelIndex* child ```
QModelIndex* q_abstracttablemodel_parent(void* self, void* child);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, QModelIndex* (*slot)(QAbstractItemModel*, QModelIndex*) ```
void q_abstracttablemodel_on_parent(void* self, QModelIndex* (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
///
/// Base class method implementation
///
/// ``` QAbstractTableModel* self, QModelIndex* child ```
QModelIndex* q_abstracttablemodel_qbase_parent(void* self, void* child);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// ``` QAbstractTableModel* self, QModelIndex* parent ```
bool q_abstracttablemodel_has_children(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, bool (*slot)(QAbstractItemModel*, QModelIndex*) ```
void q_abstracttablemodel_on_has_children(void* self, bool (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// Base class method implementation
///
/// ``` QAbstractTableModel* self, QModelIndex* parent ```
bool q_abstracttablemodel_qbase_has_children(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// ``` QAbstractTableModel* self, int row ```
bool q_abstracttablemodel_insert_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// ``` QAbstractTableModel* self, int column ```
bool q_abstracttablemodel_insert_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// ``` QAbstractTableModel* self, int row ```
bool q_abstracttablemodel_remove_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// ``` QAbstractTableModel* self, int column ```
bool q_abstracttablemodel_remove_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
///
/// ``` QAbstractTableModel* self, QModelIndex* sourceParent, int sourceRow, QModelIndex* destinationParent, int destinationChild ```
bool q_abstracttablemodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
///
/// ``` QAbstractTableModel* self, QModelIndex* sourceParent, int sourceColumn, QModelIndex* destinationParent, int destinationChild ```
bool q_abstracttablemodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// ``` QAbstractTableModel* self, QModelIndex* index ```
bool q_abstracttablemodel_check_index(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// ``` QAbstractTableModel* self, QModelIndex* topLeft, QModelIndex* bottomRight ```
void q_abstracttablemodel_data_changed(void* self, void* topLeft, void* bottomRight);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// ``` QAbstractTableModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, QModelIndex*) ```
void q_abstracttablemodel_on_data_changed(void* self, void (*slot)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// ``` QAbstractTableModel* self, enum Qt__Orientation orientation, int first, int last ```
void q_abstracttablemodel_header_data_changed(void* self, int64_t orientation, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// ``` QAbstractTableModel* self, void (*slot)(QAbstractItemModel*, enum Qt__Orientation, int, int) ```
void q_abstracttablemodel_on_header_data_changed(void* self, void (*slot)(void*, int64_t, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QAbstractTableModel* self ```
void q_abstracttablemodel_layout_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QAbstractTableModel* self, void (*slot)(QAbstractItemModel*) ```
void q_abstracttablemodel_on_layout_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QAbstractTableModel* self ```
void q_abstracttablemodel_layout_about_to_be_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QAbstractTableModel* self, void (*slot)(QAbstractItemModel*) ```
void q_abstracttablemodel_on_layout_about_to_be_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// ``` QAbstractTableModel* self, int row, int column, QModelIndex* parent ```
bool q_abstracttablemodel_has_index3(void* self, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// ``` QAbstractTableModel* self, int row, QModelIndex* parent ```
bool q_abstracttablemodel_insert_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// ``` QAbstractTableModel* self, int column, QModelIndex* parent ```
bool q_abstracttablemodel_insert_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// ``` QAbstractTableModel* self, int row, QModelIndex* parent ```
bool q_abstracttablemodel_remove_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// ``` QAbstractTableModel* self, int column, QModelIndex* parent ```
bool q_abstracttablemodel_remove_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// ``` QAbstractTableModel* self, QModelIndex* index, int options ```
bool q_abstracttablemodel_check_index2(void* self, void* index, int64_t options);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// ``` QAbstractTableModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, libqt_list /* of int */ roles ```
void q_abstracttablemodel_data_changed3(void* self, void* topLeft, void* bottomRight, libqt_list roles);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// ``` QAbstractTableModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, QModelIndex*, libqt_list /* of int */ roles ) ```
void q_abstracttablemodel_on_data_changed3(void* self, void (*slot)(void*, void*, void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QAbstractTableModel* self, libqt_list /* of QPersistentModelIndex* */ parents ```
void q_abstracttablemodel_layout_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QAbstractTableModel* self, void (*slot)(QAbstractItemModel*, libqt_list /* of QPersistentModelIndex* */ parents ) ```
void q_abstracttablemodel_on_layout_changed1(void* self, void (*slot)(void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QAbstractTableModel* self, libqt_list /* of QPersistentModelIndex* */ parents, enum QAbstractItemModel__LayoutChangeHint hint ```
void q_abstracttablemodel_layout_changed2(void* self, libqt_list parents, int64_t hint);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QAbstractTableModel* self, void (*slot)(QAbstractItemModel*, libqt_list /* of QPersistentModelIndex* */ parents , enum QAbstractItemModel__LayoutChangeHint) ```
void q_abstracttablemodel_on_layout_changed2(void* self, void (*slot)(void*, libqt_list, int64_t));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QAbstractTableModel* self, libqt_list /* of QPersistentModelIndex* */ parents ```
void q_abstracttablemodel_layout_about_to_be_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QAbstractTableModel* self, void (*slot)(QAbstractItemModel*, libqt_list /* of QPersistentModelIndex* */ parents ) ```
void q_abstracttablemodel_on_layout_about_to_be_changed1(void* self, void (*slot)(void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QAbstractTableModel* self, libqt_list /* of QPersistentModelIndex* */ parents, enum QAbstractItemModel__LayoutChangeHint hint ```
void q_abstracttablemodel_layout_about_to_be_changed2(void* self, libqt_list parents, int64_t hint);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QAbstractTableModel* self, void (*slot)(QAbstractItemModel*, libqt_list /* of QPersistentModelIndex* */ parents , enum QAbstractItemModel__LayoutChangeHint) ```
void q_abstracttablemodel_on_layout_about_to_be_changed2(void* self, void (*slot)(void*, libqt_list, int64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QAbstractTableModel* self ```
const char* q_abstracttablemodel_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QAbstractTableModel* self, char* name ```
void q_abstracttablemodel_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QAbstractTableModel* self ```
bool q_abstracttablemodel_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QAbstractTableModel* self ```
bool q_abstracttablemodel_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QAbstractTableModel* self ```
bool q_abstracttablemodel_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QAbstractTableModel* self ```
bool q_abstracttablemodel_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QAbstractTableModel* self, bool b ```
bool q_abstracttablemodel_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QAbstractTableModel* self ```
QThread* q_abstracttablemodel_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAbstractTableModel* self, QThread* thread ```
void q_abstracttablemodel_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAbstractTableModel* self, int interval ```
int32_t q_abstracttablemodel_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAbstractTableModel* self, int id ```
void q_abstracttablemodel_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QAbstractTableModel* self ```
const libqt_list /* of QObject* */ q_abstracttablemodel_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QAbstractTableModel* self, QObject* parent ```
void q_abstracttablemodel_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QAbstractTableModel* self, QObject* filterObj ```
void q_abstracttablemodel_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QAbstractTableModel* self, QObject* obj ```
void q_abstracttablemodel_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_abstracttablemodel_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAbstractTableModel* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_abstracttablemodel_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_abstracttablemodel_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_abstracttablemodel_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QAbstractTableModel* self ```
void q_abstracttablemodel_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QAbstractTableModel* self ```
void q_abstracttablemodel_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QAbstractTableModel* self, const char* name, QVariant* value ```
bool q_abstracttablemodel_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QAbstractTableModel* self, const char* name ```
QVariant* q_abstracttablemodel_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QAbstractTableModel* self ```
const char** q_abstracttablemodel_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAbstractTableModel* self ```
QBindingStorage* q_abstracttablemodel_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAbstractTableModel* self ```
const QBindingStorage* q_abstracttablemodel_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractTableModel* self ```
void q_abstracttablemodel_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractTableModel* self, void (*slot)(QObject*) ```
void q_abstracttablemodel_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QAbstractTableModel* self, const char* classname ```
bool q_abstracttablemodel_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QAbstractTableModel* self ```
void q_abstracttablemodel_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAbstractTableModel* self, int interval, enum Qt__TimerType timerType ```
int32_t q_abstracttablemodel_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_abstracttablemodel_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAbstractTableModel* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_abstracttablemodel_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractTableModel* self, QObject* param1 ```
void q_abstracttablemodel_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractTableModel* self, void (*slot)(QObject*, QObject*) ```
void q_abstracttablemodel_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowCount)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* parent ```
int32_t q_abstracttablemodel_row_count(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowCount)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* parent ```
int32_t q_abstracttablemodel_qbase_row_count(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowCount)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, int32_t (*slot)(QAbstractTableModel*, QModelIndex*) ```
void q_abstracttablemodel_on_row_count(void* self, int32_t (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnCount)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* parent ```
int32_t q_abstracttablemodel_column_count(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnCount)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* parent ```
int32_t q_abstracttablemodel_qbase_column_count(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnCount)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, int32_t (*slot)(QAbstractTableModel*, QModelIndex*) ```
void q_abstracttablemodel_on_column_count(void* self, int32_t (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#data)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* index, int role ```
QVariant* q_abstracttablemodel_data(void* self, void* index, int role);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#data)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* index, int role ```
QVariant* q_abstracttablemodel_qbase_data(void* self, void* index, int role);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#data)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QVariant* (*slot)(QAbstractTableModel*, QModelIndex*, int) ```
void q_abstracttablemodel_on_data(void* self, QVariant* (*slot)(void*, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* index, QVariant* value, int role ```
bool q_abstracttablemodel_set_data(void* self, void* index, void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* index, QVariant* value, int role ```
bool q_abstracttablemodel_qbase_set_data(void* self, void* index, void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, bool (*slot)(QAbstractTableModel*, QModelIndex*, QVariant*, int) ```
void q_abstracttablemodel_on_set_data(void* self, bool (*slot)(void*, void*, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, int section, enum Qt__Orientation orientation, int role ```
QVariant* q_abstracttablemodel_header_data(void* self, int section, int64_t orientation, int role);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, int section, enum Qt__Orientation orientation, int role ```
QVariant* q_abstracttablemodel_qbase_header_data(void* self, int section, int64_t orientation, int role);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QVariant* (*slot)(QAbstractTableModel*, int, enum Qt__Orientation, int) ```
void q_abstracttablemodel_on_header_data(void* self, QVariant* (*slot)(void*, int, int64_t, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role ```
bool q_abstracttablemodel_set_header_data(void* self, int section, int64_t orientation, void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role ```
bool q_abstracttablemodel_qbase_set_header_data(void* self, int section, int64_t orientation, void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, bool (*slot)(QAbstractTableModel*, int, enum Qt__Orientation, QVariant*, int) ```
void q_abstracttablemodel_on_set_header_data(void* self, bool (*slot)(void*, int, int64_t, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* index ```
libqt_map /* of int to QVariant* */ q_abstracttablemodel_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* index ```
libqt_map /* of int to QVariant* */ q_abstracttablemodel_qbase_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, libqt_map /* of int to QVariant* */ (*slot)(QAbstractTableModel*, QModelIndex*) ```
void q_abstracttablemodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ roles ```
bool q_abstracttablemodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ roles ```
bool q_abstracttablemodel_qbase_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, bool (*slot)(QAbstractTableModel*, QModelIndex*, libqt_map /* of int to QVariant* */) ```
void q_abstracttablemodel_on_set_item_data(void* self, bool (*slot)(void*, void*, libqt_map /* of int to QVariant* */));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* index ```
bool q_abstracttablemodel_clear_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* index ```
bool q_abstracttablemodel_qbase_clear_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, bool (*slot)(QAbstractTableModel*, QModelIndex*) ```
void q_abstracttablemodel_on_clear_item_data(void* self, bool (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self ```
const char** q_abstracttablemodel_mime_types(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self ```
const char** q_abstracttablemodel_qbase_mime_types(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, const char** (*slot)() ```
void q_abstracttablemodel_on_mime_types(void* self, const char** (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, libqt_list /* of QModelIndex* */ indexes ```
QMimeData* q_abstracttablemodel_mime_data(void* self, libqt_list indexes);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, libqt_list /* of QModelIndex* */ indexes ```
QMimeData* q_abstracttablemodel_qbase_mime_data(void* self, libqt_list indexes);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QMimeData* (*slot)(QAbstractTableModel*, libqt_list /* of QModelIndex* */ indexes ) ```
void q_abstracttablemodel_on_mime_data(void* self, QMimeData* (*slot)(void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_abstracttablemodel_can_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_abstracttablemodel_qbase_can_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, bool (*slot)(QAbstractTableModel*, QMimeData*, enum Qt__DropAction, int, int, QModelIndex*) ```
void q_abstracttablemodel_on_can_drop_mime_data(void* self, bool (*slot)(void*, void*, int64_t, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self ```
int64_t q_abstracttablemodel_supported_drop_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self ```
int64_t q_abstracttablemodel_qbase_supported_drop_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, int64_t (*slot)() ```
void q_abstracttablemodel_on_supported_drop_actions(void* self, int64_t (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self ```
int64_t q_abstracttablemodel_supported_drag_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self ```
int64_t q_abstracttablemodel_qbase_supported_drag_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, int64_t (*slot)() ```
void q_abstracttablemodel_on_supported_drag_actions(void* self, int64_t (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, int row, int count, QModelIndex* parent ```
bool q_abstracttablemodel_insert_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, int row, int count, QModelIndex* parent ```
bool q_abstracttablemodel_qbase_insert_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, bool (*slot)(QAbstractTableModel*, int, int, QModelIndex*) ```
void q_abstracttablemodel_on_insert_rows(void* self, bool (*slot)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, int column, int count, QModelIndex* parent ```
bool q_abstracttablemodel_insert_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, int column, int count, QModelIndex* parent ```
bool q_abstracttablemodel_qbase_insert_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, bool (*slot)(QAbstractTableModel*, int, int, QModelIndex*) ```
void q_abstracttablemodel_on_insert_columns(void* self, bool (*slot)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, int row, int count, QModelIndex* parent ```
bool q_abstracttablemodel_remove_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, int row, int count, QModelIndex* parent ```
bool q_abstracttablemodel_qbase_remove_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, bool (*slot)(QAbstractTableModel*, int, int, QModelIndex*) ```
void q_abstracttablemodel_on_remove_rows(void* self, bool (*slot)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, int column, int count, QModelIndex* parent ```
bool q_abstracttablemodel_remove_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, int column, int count, QModelIndex* parent ```
bool q_abstracttablemodel_qbase_remove_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, bool (*slot)(QAbstractTableModel*, int, int, QModelIndex*) ```
void q_abstracttablemodel_on_remove_columns(void* self, bool (*slot)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_abstracttablemodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_abstracttablemodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, bool (*slot)(QAbstractTableModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_abstracttablemodel_on_move_rows(void* self, bool (*slot)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_abstracttablemodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_abstracttablemodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, bool (*slot)(QAbstractTableModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_abstracttablemodel_on_move_columns(void* self, bool (*slot)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* parent ```
void q_abstracttablemodel_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* parent ```
void q_abstracttablemodel_qbase_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, void (*slot)(QAbstractTableModel*, QModelIndex*) ```
void q_abstracttablemodel_on_fetch_more(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* parent ```
bool q_abstracttablemodel_can_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* parent ```
bool q_abstracttablemodel_qbase_can_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, bool (*slot)(QAbstractTableModel*, QModelIndex*) ```
void q_abstracttablemodel_on_can_fetch_more(void* self, bool (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, int column, enum Qt__SortOrder order ```
void q_abstracttablemodel_sort(void* self, int column, int64_t order);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, int column, enum Qt__SortOrder order ```
void q_abstracttablemodel_qbase_sort(void* self, int column, int64_t order);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, void (*slot)(QAbstractTableModel*, int, enum Qt__SortOrder) ```
void q_abstracttablemodel_on_sort(void* self, void (*slot)(void*, int, int64_t));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* index ```
QModelIndex* q_abstracttablemodel_buddy(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* index ```
QModelIndex* q_abstracttablemodel_qbase_buddy(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* (*slot)(QAbstractTableModel*, QModelIndex*) ```
void q_abstracttablemodel_on_buddy(void* self, QModelIndex* (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags ```
libqt_list /* of QModelIndex* */ q_abstracttablemodel_match(void* self, void* start, int role, void* value, int hits, int64_t flags);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags ```
libqt_list /* of QModelIndex* */ q_abstracttablemodel_qbase_match(void* self, void* start, int role, void* value, int hits, int64_t flags);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, libqt_list /* of QModelIndex* */ (*slot)(QAbstractTableModel*, QModelIndex*, int, QVariant*, int, int) ```
void q_abstracttablemodel_on_match(void* self, libqt_list /* of QModelIndex* */ (*slot)(void*, void*, int, void*, int, int64_t));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* index ```
QSize* q_abstracttablemodel_span(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* index ```
QSize* q_abstracttablemodel_qbase_span(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QSize* (*slot)(QAbstractTableModel*, QModelIndex*) ```
void q_abstracttablemodel_on_span(void* self, QSize* (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#roleNames)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self ```
libqt_map /* of int to char* */ q_abstracttablemodel_role_names(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#roleNames)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self ```
libqt_map /* of int to char* */ q_abstracttablemodel_qbase_role_names(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#roleNames)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, libqt_map /* of int to char* */ (*slot)() ```
void q_abstracttablemodel_on_role_names(void* self, libqt_map /* of int to char* */ (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan ```
void q_abstracttablemodel_multi_data(void* self, void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan ```
void q_abstracttablemodel_qbase_multi_data(void* self, void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, void (*slot)(QAbstractTableModel*, QModelIndex*, QModelRoleDataSpan*) ```
void q_abstracttablemodel_on_multi_data(void* self, void (*slot)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self ```
bool q_abstracttablemodel_submit(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self ```
bool q_abstracttablemodel_qbase_submit(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, bool (*slot)() ```
void q_abstracttablemodel_on_submit(void* self, bool (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self ```
void q_abstracttablemodel_revert(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self ```
void q_abstracttablemodel_qbase_revert(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, void (*slot)() ```
void q_abstracttablemodel_on_revert(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self ```
void q_abstracttablemodel_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self ```
void q_abstracttablemodel_qbase_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, void (*slot)() ```
void q_abstracttablemodel_on_reset_internal_data(void* self, void (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, QEvent* event ```
bool q_abstracttablemodel_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QEvent* event ```
bool q_abstracttablemodel_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, bool (*slot)(QAbstractTableModel*, QEvent*) ```
void q_abstracttablemodel_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, QObject* watched, QEvent* event ```
bool q_abstracttablemodel_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QObject* watched, QEvent* event ```
bool q_abstracttablemodel_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, bool (*slot)(QAbstractTableModel*, QObject*, QEvent*) ```
void q_abstracttablemodel_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, QTimerEvent* event ```
void q_abstracttablemodel_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QTimerEvent* event ```
void q_abstracttablemodel_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, void (*slot)(QAbstractTableModel*, QTimerEvent*) ```
void q_abstracttablemodel_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, QChildEvent* event ```
void q_abstracttablemodel_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QChildEvent* event ```
void q_abstracttablemodel_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, void (*slot)(QAbstractTableModel*, QChildEvent*) ```
void q_abstracttablemodel_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, QEvent* event ```
void q_abstracttablemodel_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QEvent* event ```
void q_abstracttablemodel_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, void (*slot)(QAbstractTableModel*, QEvent*) ```
void q_abstracttablemodel_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, QMetaMethod* signal ```
void q_abstracttablemodel_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QMetaMethod* signal ```
void q_abstracttablemodel_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, void (*slot)(QAbstractTableModel*, QMetaMethod*) ```
void q_abstracttablemodel_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, QMetaMethod* signal ```
void q_abstracttablemodel_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QMetaMethod* signal ```
void q_abstracttablemodel_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, void (*slot)(QAbstractTableModel*, QMetaMethod*) ```
void q_abstracttablemodel_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, int row, int column ```
QModelIndex* q_abstracttablemodel_create_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, int row, int column ```
QModelIndex* q_abstracttablemodel_qbase_create_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* (*slot)(QAbstractTableModel*, int, int) ```
void q_abstracttablemodel_on_create_index(void* self, QModelIndex* (*slot)(void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, libqt_list /* of QModelIndex* */ indexes, QDataStream* stream ```
void q_abstracttablemodel_encode_data(void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, libqt_list /* of QModelIndex* */ indexes, QDataStream* stream ```
void q_abstracttablemodel_qbase_encode_data(void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, void (*slot)(QAbstractTableModel*, libqt_list /* of QModelIndex* */ indexes , QDataStream*) ```
void q_abstracttablemodel_on_encode_data(void* self, void (*slot)(void*, libqt_list, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, int row, int column, QModelIndex* parent, QDataStream* stream ```
bool q_abstracttablemodel_decode_data(void* self, int row, int column, void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, int row, int column, QModelIndex* parent, QDataStream* stream ```
bool q_abstracttablemodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, bool (*slot)(QAbstractTableModel*, int, int, QModelIndex*, QDataStream*) ```
void q_abstracttablemodel_on_decode_data(void* self, bool (*slot)(void*, int, int, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* parent, int first, int last ```
void q_abstracttablemodel_begin_insert_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* parent, int first, int last ```
void q_abstracttablemodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, void (*slot)(QAbstractTableModel*, QModelIndex*, int, int) ```
void q_abstracttablemodel_on_begin_insert_rows(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self ```
void q_abstracttablemodel_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self ```
void q_abstracttablemodel_qbase_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, void (*slot)() ```
void q_abstracttablemodel_on_end_insert_rows(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* parent, int first, int last ```
void q_abstracttablemodel_begin_remove_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* parent, int first, int last ```
void q_abstracttablemodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, void (*slot)(QAbstractTableModel*, QModelIndex*, int, int) ```
void q_abstracttablemodel_on_begin_remove_rows(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self ```
void q_abstracttablemodel_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self ```
void q_abstracttablemodel_qbase_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, void (*slot)() ```
void q_abstracttablemodel_on_end_remove_rows(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow ```
bool q_abstracttablemodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow ```
bool q_abstracttablemodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, bool (*slot)(QAbstractTableModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_abstracttablemodel_on_begin_move_rows(void* self, bool (*slot)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self ```
void q_abstracttablemodel_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self ```
void q_abstracttablemodel_qbase_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, void (*slot)() ```
void q_abstracttablemodel_on_end_move_rows(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* parent, int first, int last ```
void q_abstracttablemodel_begin_insert_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* parent, int first, int last ```
void q_abstracttablemodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, void (*slot)(QAbstractTableModel*, QModelIndex*, int, int) ```
void q_abstracttablemodel_on_begin_insert_columns(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self ```
void q_abstracttablemodel_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self ```
void q_abstracttablemodel_qbase_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, void (*slot)() ```
void q_abstracttablemodel_on_end_insert_columns(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* parent, int first, int last ```
void q_abstracttablemodel_begin_remove_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* parent, int first, int last ```
void q_abstracttablemodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, void (*slot)(QAbstractTableModel*, QModelIndex*, int, int) ```
void q_abstracttablemodel_on_begin_remove_columns(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self ```
void q_abstracttablemodel_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self ```
void q_abstracttablemodel_qbase_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, void (*slot)() ```
void q_abstracttablemodel_on_end_remove_columns(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn ```
bool q_abstracttablemodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn ```
bool q_abstracttablemodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, bool (*slot)(QAbstractTableModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_abstracttablemodel_on_begin_move_columns(void* self, bool (*slot)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self ```
void q_abstracttablemodel_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self ```
void q_abstracttablemodel_qbase_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, void (*slot)() ```
void q_abstracttablemodel_on_end_move_columns(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self ```
void q_abstracttablemodel_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self ```
void q_abstracttablemodel_qbase_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, void (*slot)() ```
void q_abstracttablemodel_on_begin_reset_model(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self ```
void q_abstracttablemodel_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self ```
void q_abstracttablemodel_qbase_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, void (*slot)() ```
void q_abstracttablemodel_on_end_reset_model(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* from, QModelIndex* to ```
void q_abstracttablemodel_change_persistent_index(void* self, void* from, void* to);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* from, QModelIndex* to ```
void q_abstracttablemodel_qbase_change_persistent_index(void* self, void* from, void* to);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, void (*slot)(QAbstractTableModel*, QModelIndex*, QModelIndex*) ```
void q_abstracttablemodel_on_change_persistent_index(void* self, void (*slot)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to ```
void q_abstracttablemodel_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to ```
void q_abstracttablemodel_qbase_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, void (*slot)(QAbstractTableModel*, libqt_list /* of QModelIndex* */ from , libqt_list /* of QModelIndex* */ to ) ```
void q_abstracttablemodel_on_change_persistent_index_list(void* self, void (*slot)(void*, libqt_list, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self ```
libqt_list /* of QModelIndex* */ q_abstracttablemodel_persistent_index_list(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self ```
libqt_list /* of QModelIndex* */ q_abstracttablemodel_qbase_persistent_index_list(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, libqt_list /* of QModelIndex* */ (*slot)() ```
void q_abstracttablemodel_on_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self ```
QObject* q_abstracttablemodel_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self ```
QObject* q_abstracttablemodel_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QObject* (*slot)() ```
void q_abstracttablemodel_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self ```
int32_t q_abstracttablemodel_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self ```
int32_t q_abstracttablemodel_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, int32_t (*slot)() ```
void q_abstracttablemodel_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, const char* signal ```
int32_t q_abstracttablemodel_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, const char* signal ```
int32_t q_abstracttablemodel_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, int32_t (*slot)(QAbstractTableModel*, const char*) ```
void q_abstracttablemodel_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, QMetaMethod* signal ```
bool q_abstracttablemodel_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QMetaMethod* signal ```
bool q_abstracttablemodel_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, bool (*slot)(QAbstractTableModel*, QMetaMethod*) ```
void q_abstracttablemodel_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// ``` QAbstractTableModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int) ```
void q_abstracttablemodel_on_rows_about_to_be_inserted(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsInserted)
///
/// Wrapper to allow calling private signal
///
/// ``` QAbstractTableModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int) ```
void q_abstracttablemodel_on_rows_inserted(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// ``` QAbstractTableModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int) ```
void q_abstracttablemodel_on_rows_about_to_be_removed(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsRemoved)
///
/// Wrapper to allow calling private signal
///
/// ``` QAbstractTableModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int) ```
void q_abstracttablemodel_on_rows_removed(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// ``` QAbstractTableModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int) ```
void q_abstracttablemodel_on_columns_about_to_be_inserted(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsInserted)
///
/// Wrapper to allow calling private signal
///
/// ``` QAbstractTableModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int) ```
void q_abstracttablemodel_on_columns_inserted(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// ``` QAbstractTableModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int) ```
void q_abstracttablemodel_on_columns_about_to_be_removed(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsRemoved)
///
/// Wrapper to allow calling private signal
///
/// ``` QAbstractTableModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int) ```
void q_abstracttablemodel_on_columns_removed(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelAboutToBeReset)
///
/// Wrapper to allow calling private signal
///
/// ``` QAbstractTableModel* self, void (*slot)(QAbstractItemModel*) ```
void q_abstracttablemodel_on_model_about_to_be_reset(void* self, void (*slot)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelReset)
///
/// Wrapper to allow calling private signal
///
/// ``` QAbstractTableModel* self, void (*slot)(QAbstractItemModel*) ```
void q_abstracttablemodel_on_model_reset(void* self, void (*slot)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// ``` QAbstractTableModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_abstracttablemodel_on_rows_about_to_be_moved(void* self, void (*slot)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsMoved)
///
/// Wrapper to allow calling private signal
///
/// ``` QAbstractTableModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_abstracttablemodel_on_rows_moved(void* self, void (*slot)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// ``` QAbstractTableModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_abstracttablemodel_on_columns_about_to_be_moved(void* self, void (*slot)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsMoved)
///
/// Wrapper to allow calling private signal
///
/// ``` QAbstractTableModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_abstracttablemodel_on_columns_moved(void* self, void (*slot)(void*, void*, int, int, void*, int));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QAbstractTableModel* self, void (*slot)(QObject*, const char*) ```
void q_abstracttablemodel_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttablemodel.html#dtor.QAbstractTableModel)
///
/// Delete this object from C++ memory.
///
/// ``` QAbstractTableModel* self ```
void q_abstracttablemodel_delete(void* self);

/// https://doc.qt.io/qt-6/qabstractlistmodel.html

/// q_abstractlistmodel_new constructs a new QAbstractListModel object.
///
///
QAbstractListModel* q_abstractlistmodel_new();

/// q_abstractlistmodel_new2 constructs a new QAbstractListModel object.
///
/// ``` QObject* parent ```
QAbstractListModel* q_abstractlistmodel_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QAbstractListModel* self ```
const QMetaObject* q_abstractlistmodel_meta_object(void* self);

/// ``` QAbstractListModel* self, const char* param1 ```
void* q_abstractlistmodel_metacast(void* self, const char* param1);

/// ``` QAbstractListModel* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_abstractlistmodel_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QAbstractListModel* self, int32_t (*slot)(QAbstractListModel*, enum QMetaObject__Call, int, void*) ```
void q_abstractlistmodel_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QAbstractListModel* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_abstractlistmodel_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_abstractlistmodel_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractlistmodel.html#index)
///
/// ``` QAbstractListModel* self, int row, int column, QModelIndex* parent ```
QModelIndex* q_abstractlistmodel_index(void* self, int row, int column, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractlistmodel.html#index)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractListModel* self, QModelIndex* (*slot)(QAbstractListModel*, int, int, QModelIndex*) ```
void q_abstractlistmodel_on_index(void* self, QModelIndex* (*slot)(void*, int, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractlistmodel.html#index)
///
/// Base class method implementation
///
/// ``` QAbstractListModel* self, int row, int column, QModelIndex* parent ```
QModelIndex* q_abstractlistmodel_qbase_index(void* self, int row, int column, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractlistmodel.html#sibling)
///
/// ``` QAbstractListModel* self, int row, int column, QModelIndex* idx ```
QModelIndex* q_abstractlistmodel_sibling(void* self, int row, int column, void* idx);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractlistmodel.html#sibling)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractListModel* self, QModelIndex* (*slot)(QAbstractListModel*, int, int, QModelIndex*) ```
void q_abstractlistmodel_on_sibling(void* self, QModelIndex* (*slot)(void*, int, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractlistmodel.html#sibling)
///
/// Base class method implementation
///
/// ``` QAbstractListModel* self, int row, int column, QModelIndex* idx ```
QModelIndex* q_abstractlistmodel_qbase_sibling(void* self, int row, int column, void* idx);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractlistmodel.html#dropMimeData)
///
/// ``` QAbstractListModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_abstractlistmodel_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractlistmodel.html#dropMimeData)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractListModel* self, bool (*slot)(QAbstractListModel*, QMimeData*, enum Qt__DropAction, int, int, QModelIndex*) ```
void q_abstractlistmodel_on_drop_mime_data(void* self, bool (*slot)(void*, void*, int64_t, int, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractlistmodel.html#dropMimeData)
///
/// Base class method implementation
///
/// ``` QAbstractListModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_abstractlistmodel_qbase_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractlistmodel.html#flags)
///
/// ``` QAbstractListModel* self, QModelIndex* index ```
int64_t q_abstractlistmodel_flags(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractlistmodel.html#flags)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractListModel* self, int64_t (*slot)(QAbstractListModel*, QModelIndex*) ```
void q_abstractlistmodel_on_flags(void* self, int64_t (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractlistmodel.html#flags)
///
/// Base class method implementation
///
/// ``` QAbstractListModel* self, QModelIndex* index ```
int64_t q_abstractlistmodel_qbase_flags(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_abstractlistmodel_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_abstractlistmodel_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// ``` QAbstractListModel* self, int row, int column ```
bool q_abstractlistmodel_has_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
///
/// ``` QAbstractListModel* self, QModelIndex* child ```
QModelIndex* q_abstractlistmodel_parent(void* self, void* child);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, QModelIndex* (*slot)(QAbstractItemModel*, QModelIndex*) ```
void q_abstractlistmodel_on_parent(void* self, QModelIndex* (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
///
/// Base class method implementation
///
/// ``` QAbstractListModel* self, QModelIndex* child ```
QModelIndex* q_abstractlistmodel_qbase_parent(void* self, void* child);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnCount)
///
/// ``` QAbstractListModel* self, QModelIndex* parent ```
int32_t q_abstractlistmodel_column_count(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnCount)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, int32_t (*slot)(QAbstractItemModel*, QModelIndex*) ```
void q_abstractlistmodel_on_column_count(void* self, int32_t (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnCount)
///
/// Base class method implementation
///
/// ``` QAbstractListModel* self, QModelIndex* parent ```
int32_t q_abstractlistmodel_qbase_column_count(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// ``` QAbstractListModel* self, QModelIndex* parent ```
bool q_abstractlistmodel_has_children(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, bool (*slot)(QAbstractItemModel*, QModelIndex*) ```
void q_abstractlistmodel_on_has_children(void* self, bool (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// Base class method implementation
///
/// ``` QAbstractListModel* self, QModelIndex* parent ```
bool q_abstractlistmodel_qbase_has_children(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// ``` QAbstractListModel* self, int row ```
bool q_abstractlistmodel_insert_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// ``` QAbstractListModel* self, int column ```
bool q_abstractlistmodel_insert_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// ``` QAbstractListModel* self, int row ```
bool q_abstractlistmodel_remove_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// ``` QAbstractListModel* self, int column ```
bool q_abstractlistmodel_remove_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
///
/// ``` QAbstractListModel* self, QModelIndex* sourceParent, int sourceRow, QModelIndex* destinationParent, int destinationChild ```
bool q_abstractlistmodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
///
/// ``` QAbstractListModel* self, QModelIndex* sourceParent, int sourceColumn, QModelIndex* destinationParent, int destinationChild ```
bool q_abstractlistmodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// ``` QAbstractListModel* self, QModelIndex* index ```
bool q_abstractlistmodel_check_index(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// ``` QAbstractListModel* self, QModelIndex* topLeft, QModelIndex* bottomRight ```
void q_abstractlistmodel_data_changed(void* self, void* topLeft, void* bottomRight);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// ``` QAbstractListModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, QModelIndex*) ```
void q_abstractlistmodel_on_data_changed(void* self, void (*slot)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// ``` QAbstractListModel* self, enum Qt__Orientation orientation, int first, int last ```
void q_abstractlistmodel_header_data_changed(void* self, int64_t orientation, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// ``` QAbstractListModel* self, void (*slot)(QAbstractItemModel*, enum Qt__Orientation, int, int) ```
void q_abstractlistmodel_on_header_data_changed(void* self, void (*slot)(void*, int64_t, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QAbstractListModel* self ```
void q_abstractlistmodel_layout_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QAbstractListModel* self, void (*slot)(QAbstractItemModel*) ```
void q_abstractlistmodel_on_layout_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QAbstractListModel* self ```
void q_abstractlistmodel_layout_about_to_be_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QAbstractListModel* self, void (*slot)(QAbstractItemModel*) ```
void q_abstractlistmodel_on_layout_about_to_be_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// ``` QAbstractListModel* self, int row, int column, QModelIndex* parent ```
bool q_abstractlistmodel_has_index3(void* self, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// ``` QAbstractListModel* self, int row, QModelIndex* parent ```
bool q_abstractlistmodel_insert_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// ``` QAbstractListModel* self, int column, QModelIndex* parent ```
bool q_abstractlistmodel_insert_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// ``` QAbstractListModel* self, int row, QModelIndex* parent ```
bool q_abstractlistmodel_remove_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// ``` QAbstractListModel* self, int column, QModelIndex* parent ```
bool q_abstractlistmodel_remove_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// ``` QAbstractListModel* self, QModelIndex* index, int options ```
bool q_abstractlistmodel_check_index2(void* self, void* index, int64_t options);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// ``` QAbstractListModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, libqt_list /* of int */ roles ```
void q_abstractlistmodel_data_changed3(void* self, void* topLeft, void* bottomRight, libqt_list roles);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// ``` QAbstractListModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, QModelIndex*, libqt_list /* of int */ roles ) ```
void q_abstractlistmodel_on_data_changed3(void* self, void (*slot)(void*, void*, void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QAbstractListModel* self, libqt_list /* of QPersistentModelIndex* */ parents ```
void q_abstractlistmodel_layout_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QAbstractListModel* self, void (*slot)(QAbstractItemModel*, libqt_list /* of QPersistentModelIndex* */ parents ) ```
void q_abstractlistmodel_on_layout_changed1(void* self, void (*slot)(void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QAbstractListModel* self, libqt_list /* of QPersistentModelIndex* */ parents, enum QAbstractItemModel__LayoutChangeHint hint ```
void q_abstractlistmodel_layout_changed2(void* self, libqt_list parents, int64_t hint);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QAbstractListModel* self, void (*slot)(QAbstractItemModel*, libqt_list /* of QPersistentModelIndex* */ parents , enum QAbstractItemModel__LayoutChangeHint) ```
void q_abstractlistmodel_on_layout_changed2(void* self, void (*slot)(void*, libqt_list, int64_t));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QAbstractListModel* self, libqt_list /* of QPersistentModelIndex* */ parents ```
void q_abstractlistmodel_layout_about_to_be_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QAbstractListModel* self, void (*slot)(QAbstractItemModel*, libqt_list /* of QPersistentModelIndex* */ parents ) ```
void q_abstractlistmodel_on_layout_about_to_be_changed1(void* self, void (*slot)(void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QAbstractListModel* self, libqt_list /* of QPersistentModelIndex* */ parents, enum QAbstractItemModel__LayoutChangeHint hint ```
void q_abstractlistmodel_layout_about_to_be_changed2(void* self, libqt_list parents, int64_t hint);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QAbstractListModel* self, void (*slot)(QAbstractItemModel*, libqt_list /* of QPersistentModelIndex* */ parents , enum QAbstractItemModel__LayoutChangeHint) ```
void q_abstractlistmodel_on_layout_about_to_be_changed2(void* self, void (*slot)(void*, libqt_list, int64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QAbstractListModel* self ```
const char* q_abstractlistmodel_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QAbstractListModel* self, char* name ```
void q_abstractlistmodel_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QAbstractListModel* self ```
bool q_abstractlistmodel_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QAbstractListModel* self ```
bool q_abstractlistmodel_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QAbstractListModel* self ```
bool q_abstractlistmodel_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QAbstractListModel* self ```
bool q_abstractlistmodel_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QAbstractListModel* self, bool b ```
bool q_abstractlistmodel_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QAbstractListModel* self ```
QThread* q_abstractlistmodel_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAbstractListModel* self, QThread* thread ```
void q_abstractlistmodel_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAbstractListModel* self, int interval ```
int32_t q_abstractlistmodel_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAbstractListModel* self, int id ```
void q_abstractlistmodel_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QAbstractListModel* self ```
const libqt_list /* of QObject* */ q_abstractlistmodel_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QAbstractListModel* self, QObject* parent ```
void q_abstractlistmodel_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QAbstractListModel* self, QObject* filterObj ```
void q_abstractlistmodel_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QAbstractListModel* self, QObject* obj ```
void q_abstractlistmodel_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_abstractlistmodel_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAbstractListModel* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_abstractlistmodel_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_abstractlistmodel_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_abstractlistmodel_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QAbstractListModel* self ```
void q_abstractlistmodel_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QAbstractListModel* self ```
void q_abstractlistmodel_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QAbstractListModel* self, const char* name, QVariant* value ```
bool q_abstractlistmodel_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QAbstractListModel* self, const char* name ```
QVariant* q_abstractlistmodel_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QAbstractListModel* self ```
const char** q_abstractlistmodel_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAbstractListModel* self ```
QBindingStorage* q_abstractlistmodel_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAbstractListModel* self ```
const QBindingStorage* q_abstractlistmodel_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractListModel* self ```
void q_abstractlistmodel_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractListModel* self, void (*slot)(QObject*) ```
void q_abstractlistmodel_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QAbstractListModel* self, const char* classname ```
bool q_abstractlistmodel_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QAbstractListModel* self ```
void q_abstractlistmodel_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAbstractListModel* self, int interval, enum Qt__TimerType timerType ```
int32_t q_abstractlistmodel_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_abstractlistmodel_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAbstractListModel* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_abstractlistmodel_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractListModel* self, QObject* param1 ```
void q_abstractlistmodel_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractListModel* self, void (*slot)(QObject*, QObject*) ```
void q_abstractlistmodel_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowCount)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* parent ```
int32_t q_abstractlistmodel_row_count(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowCount)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* parent ```
int32_t q_abstractlistmodel_qbase_row_count(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowCount)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, int32_t (*slot)(QAbstractListModel*, QModelIndex*) ```
void q_abstractlistmodel_on_row_count(void* self, int32_t (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#data)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* index, int role ```
QVariant* q_abstractlistmodel_data(void* self, void* index, int role);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#data)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* index, int role ```
QVariant* q_abstractlistmodel_qbase_data(void* self, void* index, int role);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#data)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, QVariant* (*slot)(QAbstractListModel*, QModelIndex*, int) ```
void q_abstractlistmodel_on_data(void* self, QVariant* (*slot)(void*, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* index, QVariant* value, int role ```
bool q_abstractlistmodel_set_data(void* self, void* index, void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* index, QVariant* value, int role ```
bool q_abstractlistmodel_qbase_set_data(void* self, void* index, void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, bool (*slot)(QAbstractListModel*, QModelIndex*, QVariant*, int) ```
void q_abstractlistmodel_on_set_data(void* self, bool (*slot)(void*, void*, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, int section, enum Qt__Orientation orientation, int role ```
QVariant* q_abstractlistmodel_header_data(void* self, int section, int64_t orientation, int role);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, int section, enum Qt__Orientation orientation, int role ```
QVariant* q_abstractlistmodel_qbase_header_data(void* self, int section, int64_t orientation, int role);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, QVariant* (*slot)(QAbstractListModel*, int, enum Qt__Orientation, int) ```
void q_abstractlistmodel_on_header_data(void* self, QVariant* (*slot)(void*, int, int64_t, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role ```
bool q_abstractlistmodel_set_header_data(void* self, int section, int64_t orientation, void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role ```
bool q_abstractlistmodel_qbase_set_header_data(void* self, int section, int64_t orientation, void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, bool (*slot)(QAbstractListModel*, int, enum Qt__Orientation, QVariant*, int) ```
void q_abstractlistmodel_on_set_header_data(void* self, bool (*slot)(void*, int, int64_t, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* index ```
libqt_map /* of int to QVariant* */ q_abstractlistmodel_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* index ```
libqt_map /* of int to QVariant* */ q_abstractlistmodel_qbase_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, libqt_map /* of int to QVariant* */ (*slot)(QAbstractListModel*, QModelIndex*) ```
void q_abstractlistmodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ roles ```
bool q_abstractlistmodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ roles ```
bool q_abstractlistmodel_qbase_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, bool (*slot)(QAbstractListModel*, QModelIndex*, libqt_map /* of int to QVariant* */) ```
void q_abstractlistmodel_on_set_item_data(void* self, bool (*slot)(void*, void*, libqt_map /* of int to QVariant* */));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* index ```
bool q_abstractlistmodel_clear_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* index ```
bool q_abstractlistmodel_qbase_clear_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, bool (*slot)(QAbstractListModel*, QModelIndex*) ```
void q_abstractlistmodel_on_clear_item_data(void* self, bool (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self ```
const char** q_abstractlistmodel_mime_types(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self ```
const char** q_abstractlistmodel_qbase_mime_types(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, const char** (*slot)() ```
void q_abstractlistmodel_on_mime_types(void* self, const char** (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, libqt_list /* of QModelIndex* */ indexes ```
QMimeData* q_abstractlistmodel_mime_data(void* self, libqt_list indexes);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, libqt_list /* of QModelIndex* */ indexes ```
QMimeData* q_abstractlistmodel_qbase_mime_data(void* self, libqt_list indexes);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, QMimeData* (*slot)(QAbstractListModel*, libqt_list /* of QModelIndex* */ indexes ) ```
void q_abstractlistmodel_on_mime_data(void* self, QMimeData* (*slot)(void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_abstractlistmodel_can_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_abstractlistmodel_qbase_can_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, bool (*slot)(QAbstractListModel*, QMimeData*, enum Qt__DropAction, int, int, QModelIndex*) ```
void q_abstractlistmodel_on_can_drop_mime_data(void* self, bool (*slot)(void*, void*, int64_t, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self ```
int64_t q_abstractlistmodel_supported_drop_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self ```
int64_t q_abstractlistmodel_qbase_supported_drop_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, int64_t (*slot)() ```
void q_abstractlistmodel_on_supported_drop_actions(void* self, int64_t (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self ```
int64_t q_abstractlistmodel_supported_drag_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self ```
int64_t q_abstractlistmodel_qbase_supported_drag_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, int64_t (*slot)() ```
void q_abstractlistmodel_on_supported_drag_actions(void* self, int64_t (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, int row, int count, QModelIndex* parent ```
bool q_abstractlistmodel_insert_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, int row, int count, QModelIndex* parent ```
bool q_abstractlistmodel_qbase_insert_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, bool (*slot)(QAbstractListModel*, int, int, QModelIndex*) ```
void q_abstractlistmodel_on_insert_rows(void* self, bool (*slot)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, int column, int count, QModelIndex* parent ```
bool q_abstractlistmodel_insert_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, int column, int count, QModelIndex* parent ```
bool q_abstractlistmodel_qbase_insert_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, bool (*slot)(QAbstractListModel*, int, int, QModelIndex*) ```
void q_abstractlistmodel_on_insert_columns(void* self, bool (*slot)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, int row, int count, QModelIndex* parent ```
bool q_abstractlistmodel_remove_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, int row, int count, QModelIndex* parent ```
bool q_abstractlistmodel_qbase_remove_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, bool (*slot)(QAbstractListModel*, int, int, QModelIndex*) ```
void q_abstractlistmodel_on_remove_rows(void* self, bool (*slot)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, int column, int count, QModelIndex* parent ```
bool q_abstractlistmodel_remove_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, int column, int count, QModelIndex* parent ```
bool q_abstractlistmodel_qbase_remove_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, bool (*slot)(QAbstractListModel*, int, int, QModelIndex*) ```
void q_abstractlistmodel_on_remove_columns(void* self, bool (*slot)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_abstractlistmodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_abstractlistmodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, bool (*slot)(QAbstractListModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_abstractlistmodel_on_move_rows(void* self, bool (*slot)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_abstractlistmodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_abstractlistmodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, bool (*slot)(QAbstractListModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_abstractlistmodel_on_move_columns(void* self, bool (*slot)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* parent ```
void q_abstractlistmodel_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* parent ```
void q_abstractlistmodel_qbase_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, void (*slot)(QAbstractListModel*, QModelIndex*) ```
void q_abstractlistmodel_on_fetch_more(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* parent ```
bool q_abstractlistmodel_can_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* parent ```
bool q_abstractlistmodel_qbase_can_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, bool (*slot)(QAbstractListModel*, QModelIndex*) ```
void q_abstractlistmodel_on_can_fetch_more(void* self, bool (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, int column, enum Qt__SortOrder order ```
void q_abstractlistmodel_sort(void* self, int column, int64_t order);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, int column, enum Qt__SortOrder order ```
void q_abstractlistmodel_qbase_sort(void* self, int column, int64_t order);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, void (*slot)(QAbstractListModel*, int, enum Qt__SortOrder) ```
void q_abstractlistmodel_on_sort(void* self, void (*slot)(void*, int, int64_t));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* index ```
QModelIndex* q_abstractlistmodel_buddy(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* index ```
QModelIndex* q_abstractlistmodel_qbase_buddy(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* (*slot)(QAbstractListModel*, QModelIndex*) ```
void q_abstractlistmodel_on_buddy(void* self, QModelIndex* (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags ```
libqt_list /* of QModelIndex* */ q_abstractlistmodel_match(void* self, void* start, int role, void* value, int hits, int64_t flags);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags ```
libqt_list /* of QModelIndex* */ q_abstractlistmodel_qbase_match(void* self, void* start, int role, void* value, int hits, int64_t flags);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, libqt_list /* of QModelIndex* */ (*slot)(QAbstractListModel*, QModelIndex*, int, QVariant*, int, int) ```
void q_abstractlistmodel_on_match(void* self, libqt_list /* of QModelIndex* */ (*slot)(void*, void*, int, void*, int, int64_t));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* index ```
QSize* q_abstractlistmodel_span(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* index ```
QSize* q_abstractlistmodel_qbase_span(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, QSize* (*slot)(QAbstractListModel*, QModelIndex*) ```
void q_abstractlistmodel_on_span(void* self, QSize* (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#roleNames)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self ```
libqt_map /* of int to char* */ q_abstractlistmodel_role_names(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#roleNames)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self ```
libqt_map /* of int to char* */ q_abstractlistmodel_qbase_role_names(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#roleNames)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, libqt_map /* of int to char* */ (*slot)() ```
void q_abstractlistmodel_on_role_names(void* self, libqt_map /* of int to char* */ (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan ```
void q_abstractlistmodel_multi_data(void* self, void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan ```
void q_abstractlistmodel_qbase_multi_data(void* self, void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, void (*slot)(QAbstractListModel*, QModelIndex*, QModelRoleDataSpan*) ```
void q_abstractlistmodel_on_multi_data(void* self, void (*slot)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self ```
bool q_abstractlistmodel_submit(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self ```
bool q_abstractlistmodel_qbase_submit(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, bool (*slot)() ```
void q_abstractlistmodel_on_submit(void* self, bool (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self ```
void q_abstractlistmodel_revert(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self ```
void q_abstractlistmodel_qbase_revert(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, void (*slot)() ```
void q_abstractlistmodel_on_revert(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self ```
void q_abstractlistmodel_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self ```
void q_abstractlistmodel_qbase_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, void (*slot)() ```
void q_abstractlistmodel_on_reset_internal_data(void* self, void (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, QEvent* event ```
bool q_abstractlistmodel_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, QEvent* event ```
bool q_abstractlistmodel_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, bool (*slot)(QAbstractListModel*, QEvent*) ```
void q_abstractlistmodel_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, QObject* watched, QEvent* event ```
bool q_abstractlistmodel_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, QObject* watched, QEvent* event ```
bool q_abstractlistmodel_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, bool (*slot)(QAbstractListModel*, QObject*, QEvent*) ```
void q_abstractlistmodel_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, QTimerEvent* event ```
void q_abstractlistmodel_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, QTimerEvent* event ```
void q_abstractlistmodel_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, void (*slot)(QAbstractListModel*, QTimerEvent*) ```
void q_abstractlistmodel_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, QChildEvent* event ```
void q_abstractlistmodel_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, QChildEvent* event ```
void q_abstractlistmodel_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, void (*slot)(QAbstractListModel*, QChildEvent*) ```
void q_abstractlistmodel_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, QEvent* event ```
void q_abstractlistmodel_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, QEvent* event ```
void q_abstractlistmodel_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, void (*slot)(QAbstractListModel*, QEvent*) ```
void q_abstractlistmodel_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, QMetaMethod* signal ```
void q_abstractlistmodel_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, QMetaMethod* signal ```
void q_abstractlistmodel_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, void (*slot)(QAbstractListModel*, QMetaMethod*) ```
void q_abstractlistmodel_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, QMetaMethod* signal ```
void q_abstractlistmodel_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, QMetaMethod* signal ```
void q_abstractlistmodel_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, void (*slot)(QAbstractListModel*, QMetaMethod*) ```
void q_abstractlistmodel_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, int row, int column ```
QModelIndex* q_abstractlistmodel_create_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, int row, int column ```
QModelIndex* q_abstractlistmodel_qbase_create_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* (*slot)(QAbstractListModel*, int, int) ```
void q_abstractlistmodel_on_create_index(void* self, QModelIndex* (*slot)(void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, libqt_list /* of QModelIndex* */ indexes, QDataStream* stream ```
void q_abstractlistmodel_encode_data(void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, libqt_list /* of QModelIndex* */ indexes, QDataStream* stream ```
void q_abstractlistmodel_qbase_encode_data(void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, void (*slot)(QAbstractListModel*, libqt_list /* of QModelIndex* */ indexes , QDataStream*) ```
void q_abstractlistmodel_on_encode_data(void* self, void (*slot)(void*, libqt_list, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, int row, int column, QModelIndex* parent, QDataStream* stream ```
bool q_abstractlistmodel_decode_data(void* self, int row, int column, void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, int row, int column, QModelIndex* parent, QDataStream* stream ```
bool q_abstractlistmodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, bool (*slot)(QAbstractListModel*, int, int, QModelIndex*, QDataStream*) ```
void q_abstractlistmodel_on_decode_data(void* self, bool (*slot)(void*, int, int, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* parent, int first, int last ```
void q_abstractlistmodel_begin_insert_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* parent, int first, int last ```
void q_abstractlistmodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, void (*slot)(QAbstractListModel*, QModelIndex*, int, int) ```
void q_abstractlistmodel_on_begin_insert_rows(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self ```
void q_abstractlistmodel_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self ```
void q_abstractlistmodel_qbase_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, void (*slot)() ```
void q_abstractlistmodel_on_end_insert_rows(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* parent, int first, int last ```
void q_abstractlistmodel_begin_remove_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* parent, int first, int last ```
void q_abstractlistmodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, void (*slot)(QAbstractListModel*, QModelIndex*, int, int) ```
void q_abstractlistmodel_on_begin_remove_rows(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self ```
void q_abstractlistmodel_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self ```
void q_abstractlistmodel_qbase_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, void (*slot)() ```
void q_abstractlistmodel_on_end_remove_rows(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow ```
bool q_abstractlistmodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow ```
bool q_abstractlistmodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, bool (*slot)(QAbstractListModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_abstractlistmodel_on_begin_move_rows(void* self, bool (*slot)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self ```
void q_abstractlistmodel_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self ```
void q_abstractlistmodel_qbase_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, void (*slot)() ```
void q_abstractlistmodel_on_end_move_rows(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* parent, int first, int last ```
void q_abstractlistmodel_begin_insert_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* parent, int first, int last ```
void q_abstractlistmodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, void (*slot)(QAbstractListModel*, QModelIndex*, int, int) ```
void q_abstractlistmodel_on_begin_insert_columns(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self ```
void q_abstractlistmodel_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self ```
void q_abstractlistmodel_qbase_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, void (*slot)() ```
void q_abstractlistmodel_on_end_insert_columns(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* parent, int first, int last ```
void q_abstractlistmodel_begin_remove_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* parent, int first, int last ```
void q_abstractlistmodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, void (*slot)(QAbstractListModel*, QModelIndex*, int, int) ```
void q_abstractlistmodel_on_begin_remove_columns(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self ```
void q_abstractlistmodel_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self ```
void q_abstractlistmodel_qbase_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, void (*slot)() ```
void q_abstractlistmodel_on_end_remove_columns(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn ```
bool q_abstractlistmodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn ```
bool q_abstractlistmodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, bool (*slot)(QAbstractListModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_abstractlistmodel_on_begin_move_columns(void* self, bool (*slot)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self ```
void q_abstractlistmodel_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self ```
void q_abstractlistmodel_qbase_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, void (*slot)() ```
void q_abstractlistmodel_on_end_move_columns(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self ```
void q_abstractlistmodel_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self ```
void q_abstractlistmodel_qbase_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, void (*slot)() ```
void q_abstractlistmodel_on_begin_reset_model(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self ```
void q_abstractlistmodel_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self ```
void q_abstractlistmodel_qbase_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, void (*slot)() ```
void q_abstractlistmodel_on_end_reset_model(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* from, QModelIndex* to ```
void q_abstractlistmodel_change_persistent_index(void* self, void* from, void* to);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* from, QModelIndex* to ```
void q_abstractlistmodel_qbase_change_persistent_index(void* self, void* from, void* to);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, void (*slot)(QAbstractListModel*, QModelIndex*, QModelIndex*) ```
void q_abstractlistmodel_on_change_persistent_index(void* self, void (*slot)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to ```
void q_abstractlistmodel_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to ```
void q_abstractlistmodel_qbase_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, void (*slot)(QAbstractListModel*, libqt_list /* of QModelIndex* */ from , libqt_list /* of QModelIndex* */ to ) ```
void q_abstractlistmodel_on_change_persistent_index_list(void* self, void (*slot)(void*, libqt_list, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self ```
libqt_list /* of QModelIndex* */ q_abstractlistmodel_persistent_index_list(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self ```
libqt_list /* of QModelIndex* */ q_abstractlistmodel_qbase_persistent_index_list(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, libqt_list /* of QModelIndex* */ (*slot)() ```
void q_abstractlistmodel_on_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self ```
QObject* q_abstractlistmodel_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self ```
QObject* q_abstractlistmodel_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, QObject* (*slot)() ```
void q_abstractlistmodel_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self ```
int32_t q_abstractlistmodel_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self ```
int32_t q_abstractlistmodel_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, int32_t (*slot)() ```
void q_abstractlistmodel_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, const char* signal ```
int32_t q_abstractlistmodel_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, const char* signal ```
int32_t q_abstractlistmodel_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, int32_t (*slot)(QAbstractListModel*, const char*) ```
void q_abstractlistmodel_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, QMetaMethod* signal ```
bool q_abstractlistmodel_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, QMetaMethod* signal ```
bool q_abstractlistmodel_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, bool (*slot)(QAbstractListModel*, QMetaMethod*) ```
void q_abstractlistmodel_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// ``` QAbstractListModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int) ```
void q_abstractlistmodel_on_rows_about_to_be_inserted(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsInserted)
///
/// Wrapper to allow calling private signal
///
/// ``` QAbstractListModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int) ```
void q_abstractlistmodel_on_rows_inserted(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// ``` QAbstractListModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int) ```
void q_abstractlistmodel_on_rows_about_to_be_removed(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsRemoved)
///
/// Wrapper to allow calling private signal
///
/// ``` QAbstractListModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int) ```
void q_abstractlistmodel_on_rows_removed(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// ``` QAbstractListModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int) ```
void q_abstractlistmodel_on_columns_about_to_be_inserted(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsInserted)
///
/// Wrapper to allow calling private signal
///
/// ``` QAbstractListModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int) ```
void q_abstractlistmodel_on_columns_inserted(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// ``` QAbstractListModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int) ```
void q_abstractlistmodel_on_columns_about_to_be_removed(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsRemoved)
///
/// Wrapper to allow calling private signal
///
/// ``` QAbstractListModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int) ```
void q_abstractlistmodel_on_columns_removed(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelAboutToBeReset)
///
/// Wrapper to allow calling private signal
///
/// ``` QAbstractListModel* self, void (*slot)(QAbstractItemModel*) ```
void q_abstractlistmodel_on_model_about_to_be_reset(void* self, void (*slot)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelReset)
///
/// Wrapper to allow calling private signal
///
/// ``` QAbstractListModel* self, void (*slot)(QAbstractItemModel*) ```
void q_abstractlistmodel_on_model_reset(void* self, void (*slot)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// ``` QAbstractListModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_abstractlistmodel_on_rows_about_to_be_moved(void* self, void (*slot)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsMoved)
///
/// Wrapper to allow calling private signal
///
/// ``` QAbstractListModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_abstractlistmodel_on_rows_moved(void* self, void (*slot)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// ``` QAbstractListModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_abstractlistmodel_on_columns_about_to_be_moved(void* self, void (*slot)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsMoved)
///
/// Wrapper to allow calling private signal
///
/// ``` QAbstractListModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_abstractlistmodel_on_columns_moved(void* self, void (*slot)(void*, void*, int, int, void*, int));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QAbstractListModel* self, void (*slot)(QObject*, const char*) ```
void q_abstractlistmodel_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractlistmodel.html#dtor.QAbstractListModel)
///
/// Delete this object from C++ memory.
///
/// ``` QAbstractListModel* self ```
void q_abstractlistmodel_delete(void* self);

/// https://doc.qt.io/qt-6/qabstractitemmodel.html#types

typedef enum {
    QABSTRACTITEMMODEL_LAYOUTCHANGEHINT_NOLAYOUTCHANGEHINT = 0,
    QABSTRACTITEMMODEL_LAYOUTCHANGEHINT_VERTICALSORTHINT = 1,
    QABSTRACTITEMMODEL_LAYOUTCHANGEHINT_HORIZONTALSORTHINT = 2
} QAbstractItemModel__LayoutChangeHint;

typedef enum {
    QABSTRACTITEMMODEL_CHECKINDEXOPTION_NOOPTION = 0,
    QABSTRACTITEMMODEL_CHECKINDEXOPTION_INDEXISVALID = 1,
    QABSTRACTITEMMODEL_CHECKINDEXOPTION_DONOTUSEPARENT = 2,
    QABSTRACTITEMMODEL_CHECKINDEXOPTION_PARENTISINVALID = 4
} QAbstractItemModel__CheckIndexOption;

#endif
