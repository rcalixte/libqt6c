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
#include "libqabstractitemmodel.hpp"
#include "libqabstractitemmodel.h"

/// https://doc.qt.io/qt-6/qmodelroledata.html

/// q_modelroledata_new constructs a new QModelRoleData object.
///
/// ``` int role ```
QModelRoleData* q_modelroledata_new(int role) {
    return QModelRoleData_new(role);
}

/// q_modelroledata_new2 constructs a new QModelRoleData object.
///
/// ``` QModelRoleData* param1 ```
QModelRoleData* q_modelroledata_new2(void* param1) {
    return QModelRoleData_new2((QModelRoleData*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmodelroledata.html#role)
///
/// ``` QModelRoleData* self ```
int32_t q_modelroledata_role(void* self) {
    return QModelRoleData_Role((QModelRoleData*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmodelroledata.html#data)
///
/// ``` QModelRoleData* self ```
QVariant* q_modelroledata_data(void* self) {
    return QModelRoleData_Data((QModelRoleData*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmodelroledata.html#data)
///
/// ``` QModelRoleData* self ```
QVariant* q_modelroledata_data2(void* self) {
    return QModelRoleData_Data2((QModelRoleData*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmodelroledata.html#clearData)
///
/// ``` QModelRoleData* self ```
void q_modelroledata_clear_data(void* self) {
    QModelRoleData_ClearData((QModelRoleData*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmodelroledata.html#operator=)
///
/// ``` QModelRoleData* self, QModelRoleData* param1 ```
void q_modelroledata_operator_assign(void* self, void* param1) {
    QModelRoleData_OperatorAssign((QModelRoleData*)self, (QModelRoleData*)param1);
}

/// Delete this object from C++ memory.
///
/// ``` QModelRoleData* self ```
void q_modelroledata_delete(void* self) {
    QModelRoleData_Delete((QModelRoleData*)(self));
}

/// https://doc.qt.io/qt-6/qmodelroledataspan.html

/// q_modelroledataspan_new constructs a new QModelRoleDataSpan object.
///
/// ``` QModelRoleDataSpan* other ```
QModelRoleDataSpan* q_modelroledataspan_new(void* other) {
    return QModelRoleDataSpan_new((QModelRoleDataSpan*)other);
}

/// q_modelroledataspan_new2 constructs a new QModelRoleDataSpan object and invalidates the source QModelRoleDataSpan object.
///
/// ``` QModelRoleDataSpan* other ```
QModelRoleDataSpan* q_modelroledataspan_new2(void* other) {
    return QModelRoleDataSpan_new2((QModelRoleDataSpan*)other);
}

/// q_modelroledataspan_new3 constructs a new QModelRoleDataSpan object.
///
///
QModelRoleDataSpan* q_modelroledataspan_new3() {
    return QModelRoleDataSpan_new3();
}

/// q_modelroledataspan_new4 constructs a new QModelRoleDataSpan object.
///
/// ``` QModelRoleData* modelRoleData ```
QModelRoleDataSpan* q_modelroledataspan_new4(void* modelRoleData) {
    return QModelRoleDataSpan_new4((QModelRoleData*)modelRoleData);
}

/// q_modelroledataspan_new5 constructs a new QModelRoleDataSpan object.
///
/// ``` QModelRoleData* modelRoleData, int64_t lenVal ```
QModelRoleDataSpan* q_modelroledataspan_new5(void* modelRoleData, int64_t lenVal) {
    return QModelRoleDataSpan_new5((QModelRoleData*)modelRoleData, lenVal);
}

/// q_modelroledataspan_new6 constructs a new QModelRoleDataSpan object.
///
/// ``` QModelRoleDataSpan* param1 ```
QModelRoleDataSpan* q_modelroledataspan_new6(void* param1) {
    return QModelRoleDataSpan_new6((QModelRoleDataSpan*)param1);
}

/// q_modelroledataspan_copy_assign shallow copies `other` into `self`.
///
/// ``` QModelRoleDataSpan* self, QModelRoleDataSpan* other ```
void q_modelroledataspan_copy_assign(void* self, void* other) {
    QModelRoleDataSpan_CopyAssign((QModelRoleDataSpan*)self, (QModelRoleDataSpan*)other);
}

/// q_modelroledataspan_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QModelRoleDataSpan* self, QModelRoleDataSpan* other ```
void q_modelroledataspan_move_assign(void* self, void* other) {
    QModelRoleDataSpan_MoveAssign((QModelRoleDataSpan*)self, (QModelRoleDataSpan*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmodelroledataspan.html#size)
///
/// ``` QModelRoleDataSpan* self ```
int64_t q_modelroledataspan_size(void* self) {
    return QModelRoleDataSpan_Size((QModelRoleDataSpan*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmodelroledataspan.html#length)
///
/// ``` QModelRoleDataSpan* self ```
int64_t q_modelroledataspan_length(void* self) {
    return QModelRoleDataSpan_Length((QModelRoleDataSpan*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmodelroledataspan.html#data)
///
/// ``` QModelRoleDataSpan* self ```
QModelRoleData* q_modelroledataspan_data(void* self) {
    return QModelRoleDataSpan_Data((QModelRoleDataSpan*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmodelroledataspan.html#begin)
///
/// ``` QModelRoleDataSpan* self ```
QModelRoleData* q_modelroledataspan_begin(void* self) {
    return QModelRoleDataSpan_Begin((QModelRoleDataSpan*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmodelroledataspan.html#end)
///
/// ``` QModelRoleDataSpan* self ```
QModelRoleData* q_modelroledataspan_end(void* self) {
    return QModelRoleDataSpan_End((QModelRoleDataSpan*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmodelroledataspan.html#operator[])
///
/// ``` QModelRoleDataSpan* self, int64_t index ```
QModelRoleData* q_modelroledataspan_operator_subscript(void* self, int64_t index) {
    return QModelRoleDataSpan_OperatorSubscript((QModelRoleDataSpan*)self, index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmodelroledataspan.html#dataForRole)
///
/// ``` QModelRoleDataSpan* self, int role ```
QVariant* q_modelroledataspan_data_for_role(void* self, int role) {
    return QModelRoleDataSpan_DataForRole((QModelRoleDataSpan*)self, role);
}

/// Delete this object from C++ memory.
///
/// ``` QModelRoleDataSpan* self ```
void q_modelroledataspan_delete(void* self) {
    QModelRoleDataSpan_Delete((QModelRoleDataSpan*)(self));
}

/// https://doc.qt.io/qt-6/qmodelindex.html

/// q_modelindex_new constructs a new QModelIndex object.
///
/// ``` QModelIndex* other ```
QModelIndex* q_modelindex_new(void* other) {
    return QModelIndex_new((QModelIndex*)other);
}

/// q_modelindex_new2 constructs a new QModelIndex object and invalidates the source QModelIndex object.
///
/// ``` QModelIndex* other ```
QModelIndex* q_modelindex_new2(void* other) {
    return QModelIndex_new2((QModelIndex*)other);
}

/// q_modelindex_new3 constructs a new QModelIndex object.
///
///
QModelIndex* q_modelindex_new3() {
    return QModelIndex_new3();
}

/// q_modelindex_new4 constructs a new QModelIndex object.
///
/// ``` QModelIndex* param1 ```
QModelIndex* q_modelindex_new4(void* param1) {
    return QModelIndex_new4((QModelIndex*)param1);
}

/// q_modelindex_copy_assign shallow copies `other` into `self`.
///
/// ``` QModelIndex* self, QModelIndex* other ```
void q_modelindex_copy_assign(void* self, void* other) {
    QModelIndex_CopyAssign((QModelIndex*)self, (QModelIndex*)other);
}

/// q_modelindex_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QModelIndex* self, QModelIndex* other ```
void q_modelindex_move_assign(void* self, void* other) {
    QModelIndex_MoveAssign((QModelIndex*)self, (QModelIndex*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmodelindex.html#row)
///
/// ``` QModelIndex* self ```
int32_t q_modelindex_row(void* self) {
    return QModelIndex_Row((QModelIndex*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmodelindex.html#column)
///
/// ``` QModelIndex* self ```
int32_t q_modelindex_column(void* self) {
    return QModelIndex_Column((QModelIndex*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmodelindex.html#internalId)
///
/// ``` QModelIndex* self ```
uintptr_t q_modelindex_internal_id(void* self) {
    return QModelIndex_InternalId((QModelIndex*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmodelindex.html#internalPointer)
///
/// ``` QModelIndex* self ```
void* q_modelindex_internal_pointer(void* self) {
    return QModelIndex_InternalPointer((QModelIndex*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmodelindex.html#constInternalPointer)
///
/// ``` QModelIndex* self ```
void* q_modelindex_const_internal_pointer(void* self) {
    return QModelIndex_ConstInternalPointer((QModelIndex*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmodelindex.html#parent)
///
/// ``` QModelIndex* self ```
QModelIndex* q_modelindex_parent(void* self) {
    return QModelIndex_Parent((QModelIndex*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmodelindex.html#sibling)
///
/// ``` QModelIndex* self, int row, int column ```
QModelIndex* q_modelindex_sibling(void* self, int row, int column) {
    return QModelIndex_Sibling((QModelIndex*)self, row, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmodelindex.html#siblingAtColumn)
///
/// ``` QModelIndex* self, int column ```
QModelIndex* q_modelindex_sibling_at_column(void* self, int column) {
    return QModelIndex_SiblingAtColumn((QModelIndex*)self, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmodelindex.html#siblingAtRow)
///
/// ``` QModelIndex* self, int row ```
QModelIndex* q_modelindex_sibling_at_row(void* self, int row) {
    return QModelIndex_SiblingAtRow((QModelIndex*)self, row);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmodelindex.html#data)
///
/// ``` QModelIndex* self ```
QVariant* q_modelindex_data(void* self) {
    return QModelIndex_Data((QModelIndex*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmodelindex.html#multiData)
///
/// ``` QModelIndex* self, QModelRoleDataSpan* roleDataSpan ```
void q_modelindex_multi_data(void* self, void* roleDataSpan) {
    QModelIndex_MultiData((QModelIndex*)self, (QModelRoleDataSpan*)roleDataSpan);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmodelindex.html#flags)
///
/// ``` QModelIndex* self ```
int64_t q_modelindex_flags(void* self) {
    return QModelIndex_Flags((QModelIndex*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmodelindex.html#model)
///
/// ``` QModelIndex* self ```
QAbstractItemModel* q_modelindex_model(void* self) {
    return QModelIndex_Model((QModelIndex*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmodelindex.html#isValid)
///
/// ``` QModelIndex* self ```
bool q_modelindex_is_valid(void* self) {
    return QModelIndex_IsValid((QModelIndex*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmodelindex.html#operator==)
///
/// ``` QModelIndex* self, QModelIndex* other ```
bool q_modelindex_operator_equal(void* self, void* other) {
    return QModelIndex_OperatorEqual((QModelIndex*)self, (QModelIndex*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmodelindex.html#operator!=)
///
/// ``` QModelIndex* self, QModelIndex* other ```
bool q_modelindex_operator_not_equal(void* self, void* other) {
    return QModelIndex_OperatorNotEqual((QModelIndex*)self, (QModelIndex*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmodelindex.html#operator<)
///
/// ``` QModelIndex* self, QModelIndex* other ```
bool q_modelindex_operator_lesser(void* self, void* other) {
    return QModelIndex_OperatorLesser((QModelIndex*)self, (QModelIndex*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmodelindex.html#data)
///
/// ``` QModelIndex* self, int role ```
QVariant* q_modelindex_data1(void* self, int role) {
    return QModelIndex_Data1((QModelIndex*)self, role);
}

/// Delete this object from C++ memory.
///
/// ``` QModelIndex* self ```
void q_modelindex_delete(void* self) {
    QModelIndex_Delete((QModelIndex*)(self));
}

/// https://doc.qt.io/qt-6/qpersistentmodelindex.html

/// q_persistentmodelindex_new constructs a new QPersistentModelIndex object.
///
///
QPersistentModelIndex* q_persistentmodelindex_new() {
    return QPersistentModelIndex_new();
}

/// q_persistentmodelindex_new2 constructs a new QPersistentModelIndex object.
///
/// ``` QModelIndex* index ```
QPersistentModelIndex* q_persistentmodelindex_new2(void* index) {
    return QPersistentModelIndex_new2((QModelIndex*)index);
}

/// q_persistentmodelindex_new3 constructs a new QPersistentModelIndex object.
///
/// ``` QPersistentModelIndex* other ```
QPersistentModelIndex* q_persistentmodelindex_new3(void* other) {
    return QPersistentModelIndex_new3((QPersistentModelIndex*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpersistentmodelindex.html#operator<)
///
/// ``` QPersistentModelIndex* self, QPersistentModelIndex* other ```
bool q_persistentmodelindex_operator_lesser(void* self, void* other) {
    return QPersistentModelIndex_OperatorLesser((QPersistentModelIndex*)self, (QPersistentModelIndex*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpersistentmodelindex.html#operator==)
///
/// ``` QPersistentModelIndex* self, QPersistentModelIndex* other ```
bool q_persistentmodelindex_operator_equal(void* self, void* other) {
    return QPersistentModelIndex_OperatorEqual((QPersistentModelIndex*)self, (QPersistentModelIndex*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpersistentmodelindex.html#operator!=)
///
/// ``` QPersistentModelIndex* self, QPersistentModelIndex* other ```
bool q_persistentmodelindex_operator_not_equal(void* self, void* other) {
    return QPersistentModelIndex_OperatorNotEqual((QPersistentModelIndex*)self, (QPersistentModelIndex*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpersistentmodelindex.html#operator=)
///
/// ``` QPersistentModelIndex* self, QPersistentModelIndex* other ```
void q_persistentmodelindex_operator_assign(void* self, void* other) {
    QPersistentModelIndex_OperatorAssign((QPersistentModelIndex*)self, (QPersistentModelIndex*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpersistentmodelindex.html#swap)
///
/// ``` QPersistentModelIndex* self, QPersistentModelIndex* other ```
void q_persistentmodelindex_swap(void* self, void* other) {
    QPersistentModelIndex_Swap((QPersistentModelIndex*)self, (QPersistentModelIndex*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpersistentmodelindex.html#operator==)
///
/// ``` QPersistentModelIndex* self, QModelIndex* other ```
bool q_persistentmodelindex_operator_equal_with_other(void* self, void* other) {
    return QPersistentModelIndex_OperatorEqualWithOther((QPersistentModelIndex*)self, (QModelIndex*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpersistentmodelindex.html#operator!=)
///
/// ``` QPersistentModelIndex* self, QModelIndex* other ```
bool q_persistentmodelindex_operator_not_equal_with_other(void* self, void* other) {
    return QPersistentModelIndex_OperatorNotEqualWithOther((QPersistentModelIndex*)self, (QModelIndex*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpersistentmodelindex.html#operator=)
///
/// ``` QPersistentModelIndex* self, QModelIndex* other ```
void q_persistentmodelindex_operator_assign_with_other(void* self, void* other) {
    QPersistentModelIndex_OperatorAssignWithOther((QPersistentModelIndex*)self, (QModelIndex*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpersistentmodelindex.html#operator QModelIndex)
///
/// ``` QPersistentModelIndex* self ```
QModelIndex* q_persistentmodelindex_to_q_model_index(void* self) {
    return QPersistentModelIndex_ToQModelIndex((QPersistentModelIndex*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpersistentmodelindex.html#row)
///
/// ``` QPersistentModelIndex* self ```
int32_t q_persistentmodelindex_row(void* self) {
    return QPersistentModelIndex_Row((QPersistentModelIndex*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpersistentmodelindex.html#column)
///
/// ``` QPersistentModelIndex* self ```
int32_t q_persistentmodelindex_column(void* self) {
    return QPersistentModelIndex_Column((QPersistentModelIndex*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpersistentmodelindex.html#internalPointer)
///
/// ``` QPersistentModelIndex* self ```
void* q_persistentmodelindex_internal_pointer(void* self) {
    return QPersistentModelIndex_InternalPointer((QPersistentModelIndex*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpersistentmodelindex.html#constInternalPointer)
///
/// ``` QPersistentModelIndex* self ```
void* q_persistentmodelindex_const_internal_pointer(void* self) {
    return QPersistentModelIndex_ConstInternalPointer((QPersistentModelIndex*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpersistentmodelindex.html#internalId)
///
/// ``` QPersistentModelIndex* self ```
uintptr_t q_persistentmodelindex_internal_id(void* self) {
    return QPersistentModelIndex_InternalId((QPersistentModelIndex*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpersistentmodelindex.html#parent)
///
/// ``` QPersistentModelIndex* self ```
QModelIndex* q_persistentmodelindex_parent(void* self) {
    return QPersistentModelIndex_Parent((QPersistentModelIndex*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpersistentmodelindex.html#sibling)
///
/// ``` QPersistentModelIndex* self, int row, int column ```
QModelIndex* q_persistentmodelindex_sibling(void* self, int row, int column) {
    return QPersistentModelIndex_Sibling((QPersistentModelIndex*)self, row, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpersistentmodelindex.html#data)
///
/// ``` QPersistentModelIndex* self ```
QVariant* q_persistentmodelindex_data(void* self) {
    return QPersistentModelIndex_Data((QPersistentModelIndex*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpersistentmodelindex.html#multiData)
///
/// ``` QPersistentModelIndex* self, QModelRoleDataSpan* roleDataSpan ```
void q_persistentmodelindex_multi_data(void* self, void* roleDataSpan) {
    QPersistentModelIndex_MultiData((QPersistentModelIndex*)self, (QModelRoleDataSpan*)roleDataSpan);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpersistentmodelindex.html#flags)
///
/// ``` QPersistentModelIndex* self ```
int64_t q_persistentmodelindex_flags(void* self) {
    return QPersistentModelIndex_Flags((QPersistentModelIndex*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpersistentmodelindex.html#model)
///
/// ``` QPersistentModelIndex* self ```
QAbstractItemModel* q_persistentmodelindex_model(void* self) {
    return QPersistentModelIndex_Model((QPersistentModelIndex*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpersistentmodelindex.html#isValid)
///
/// ``` QPersistentModelIndex* self ```
bool q_persistentmodelindex_is_valid(void* self) {
    return QPersistentModelIndex_IsValid((QPersistentModelIndex*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpersistentmodelindex.html#data)
///
/// ``` QPersistentModelIndex* self, int role ```
QVariant* q_persistentmodelindex_data1(void* self, int role) {
    return QPersistentModelIndex_Data1((QPersistentModelIndex*)self, role);
}

/// Delete this object from C++ memory.
///
/// ``` QPersistentModelIndex* self ```
void q_persistentmodelindex_delete(void* self) {
    QPersistentModelIndex_Delete((QPersistentModelIndex*)(self));
}

/// https://doc.qt.io/qt-6/qabstractitemmodel.html

/// q_abstractitemmodel_new constructs a new QAbstractItemModel object.
///
///
QAbstractItemModel* q_abstractitemmodel_new() {
    return QAbstractItemModel_new();
}

/// q_abstractitemmodel_new2 constructs a new QAbstractItemModel object.
///
/// ``` QObject* parent ```
QAbstractItemModel* q_abstractitemmodel_new2(void* parent) {
    return QAbstractItemModel_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QAbstractItemModel* self ```
QMetaObject* q_abstractitemmodel_meta_object(void* self) {
    return QAbstractItemModel_MetaObject((QAbstractItemModel*)self);
}

/// ``` QAbstractItemModel* self, const char* param1 ```
void* q_abstractitemmodel_metacast(void* self, const char* param1) {
    return QAbstractItemModel_Metacast((QAbstractItemModel*)self, param1);
}

/// ``` QAbstractItemModel* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_abstractitemmodel_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAbstractItemModel_Metacall((QAbstractItemModel*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, int32_t (*slot)(QAbstractItemModel*, enum QMetaObject__Call, int, void*) ```
void q_abstractitemmodel_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QAbstractItemModel_OnMetacall((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemModel* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_abstractitemmodel_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAbstractItemModel_QBaseMetacall((QAbstractItemModel*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_abstractitemmodel_tr(const char* s) {
    libqt_string _str = QAbstractItemModel_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// ``` QAbstractItemModel* self, int row, int column ```
bool q_abstractitemmodel_has_index(void* self, int row, int column) {
    return QAbstractItemModel_HasIndex((QAbstractItemModel*)self, row, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#index)
///
/// ``` QAbstractItemModel* self, int row, int column, QModelIndex* parent ```
QModelIndex* q_abstractitemmodel_index(void* self, int row, int column, void* parent) {
    return QAbstractItemModel_Index((QAbstractItemModel*)self, row, column, (QModelIndex*)parent);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, QModelIndex* (*slot)(QAbstractItemModel*, int, int, QModelIndex*) ```
void q_abstractitemmodel_on_index(void* self, QModelIndex* (*slot)(void*, int, int, void*)) {
    QAbstractItemModel_OnIndex((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemModel* self, int row, int column, QModelIndex* parent ```
QModelIndex* q_abstractitemmodel_qbase_index(void* self, int row, int column, void* parent) {
    return QAbstractItemModel_QBaseIndex((QAbstractItemModel*)self, row, column, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
///
/// ``` QAbstractItemModel* self, QModelIndex* child ```
QModelIndex* q_abstractitemmodel_parent(void* self, void* child) {
    return QAbstractItemModel_Parent((QAbstractItemModel*)self, (QModelIndex*)child);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, QModelIndex* (*slot)(QAbstractItemModel*, QModelIndex*) ```
void q_abstractitemmodel_on_parent(void* self, QModelIndex* (*slot)(void*, void*)) {
    QAbstractItemModel_OnParent((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemModel* self, QModelIndex* child ```
QModelIndex* q_abstractitemmodel_qbase_parent(void* self, void* child) {
    return QAbstractItemModel_QBaseParent((QAbstractItemModel*)self, (QModelIndex*)child);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#sibling)
///
/// ``` QAbstractItemModel* self, int row, int column, QModelIndex* idx ```
QModelIndex* q_abstractitemmodel_sibling(void* self, int row, int column, void* idx) {
    return QAbstractItemModel_Sibling((QAbstractItemModel*)self, row, column, (QModelIndex*)idx);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, QModelIndex* (*slot)(QAbstractItemModel*, int, int, QModelIndex*) ```
void q_abstractitemmodel_on_sibling(void* self, QModelIndex* (*slot)(void*, int, int, void*)) {
    QAbstractItemModel_OnSibling((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemModel* self, int row, int column, QModelIndex* idx ```
QModelIndex* q_abstractitemmodel_qbase_sibling(void* self, int row, int column, void* idx) {
    return QAbstractItemModel_QBaseSibling((QAbstractItemModel*)self, row, column, (QModelIndex*)idx);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowCount)
///
/// ``` QAbstractItemModel* self, QModelIndex* parent ```
int32_t q_abstractitemmodel_row_count(void* self, void* parent) {
    return QAbstractItemModel_RowCount((QAbstractItemModel*)self, (QModelIndex*)parent);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, int32_t (*slot)(QAbstractItemModel*, QModelIndex*) ```
void q_abstractitemmodel_on_row_count(void* self, int32_t (*slot)(void*, void*)) {
    QAbstractItemModel_OnRowCount((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemModel* self, QModelIndex* parent ```
int32_t q_abstractitemmodel_qbase_row_count(void* self, void* parent) {
    return QAbstractItemModel_QBaseRowCount((QAbstractItemModel*)self, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnCount)
///
/// ``` QAbstractItemModel* self, QModelIndex* parent ```
int32_t q_abstractitemmodel_column_count(void* self, void* parent) {
    return QAbstractItemModel_ColumnCount((QAbstractItemModel*)self, (QModelIndex*)parent);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, int32_t (*slot)(QAbstractItemModel*, QModelIndex*) ```
void q_abstractitemmodel_on_column_count(void* self, int32_t (*slot)(void*, void*)) {
    QAbstractItemModel_OnColumnCount((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemModel* self, QModelIndex* parent ```
int32_t q_abstractitemmodel_qbase_column_count(void* self, void* parent) {
    return QAbstractItemModel_QBaseColumnCount((QAbstractItemModel*)self, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// ``` QAbstractItemModel* self, QModelIndex* parent ```
bool q_abstractitemmodel_has_children(void* self, void* parent) {
    return QAbstractItemModel_HasChildren((QAbstractItemModel*)self, (QModelIndex*)parent);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, bool (*slot)(QAbstractItemModel*, QModelIndex*) ```
void q_abstractitemmodel_on_has_children(void* self, bool (*slot)(void*, void*)) {
    QAbstractItemModel_OnHasChildren((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemModel* self, QModelIndex* parent ```
bool q_abstractitemmodel_qbase_has_children(void* self, void* parent) {
    return QAbstractItemModel_QBaseHasChildren((QAbstractItemModel*)self, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#data)
///
/// ``` QAbstractItemModel* self, QModelIndex* index, int role ```
QVariant* q_abstractitemmodel_data(void* self, void* index, int role) {
    return QAbstractItemModel_Data((QAbstractItemModel*)self, (QModelIndex*)index, role);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, QVariant* (*slot)(QAbstractItemModel*, QModelIndex*, int) ```
void q_abstractitemmodel_on_data(void* self, QVariant* (*slot)(void*, void*, int)) {
    QAbstractItemModel_OnData((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemModel* self, QModelIndex* index, int role ```
QVariant* q_abstractitemmodel_qbase_data(void* self, void* index, int role) {
    return QAbstractItemModel_QBaseData((QAbstractItemModel*)self, (QModelIndex*)index, role);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
///
/// ``` QAbstractItemModel* self, QModelIndex* index, QVariant* value, int role ```
bool q_abstractitemmodel_set_data(void* self, void* index, void* value, int role) {
    return QAbstractItemModel_SetData((QAbstractItemModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, bool (*slot)(QAbstractItemModel*, QModelIndex*, QVariant*, int) ```
void q_abstractitemmodel_on_set_data(void* self, bool (*slot)(void*, void*, void*, int)) {
    QAbstractItemModel_OnSetData((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemModel* self, QModelIndex* index, QVariant* value, int role ```
bool q_abstractitemmodel_qbase_set_data(void* self, void* index, void* value, int role) {
    return QAbstractItemModel_QBaseSetData((QAbstractItemModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
///
/// ``` QAbstractItemModel* self, int section, enum Qt__Orientation orientation, int role ```
QVariant* q_abstractitemmodel_header_data(void* self, int section, int64_t orientation, int role) {
    return QAbstractItemModel_HeaderData((QAbstractItemModel*)self, section, orientation, role);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, QVariant* (*slot)(QAbstractItemModel*, int, enum Qt__Orientation, int) ```
void q_abstractitemmodel_on_header_data(void* self, QVariant* (*slot)(void*, int, int64_t, int)) {
    QAbstractItemModel_OnHeaderData((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemModel* self, int section, enum Qt__Orientation orientation, int role ```
QVariant* q_abstractitemmodel_qbase_header_data(void* self, int section, int64_t orientation, int role) {
    return QAbstractItemModel_QBaseHeaderData((QAbstractItemModel*)self, section, orientation, role);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// ``` QAbstractItemModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role ```
bool q_abstractitemmodel_set_header_data(void* self, int section, int64_t orientation, void* value, int role) {
    return QAbstractItemModel_SetHeaderData((QAbstractItemModel*)self, section, orientation, (QVariant*)value, role);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, bool (*slot)(QAbstractItemModel*, int, enum Qt__Orientation, QVariant*, int) ```
void q_abstractitemmodel_on_set_header_data(void* self, bool (*slot)(void*, int, int64_t, void*, int)) {
    QAbstractItemModel_OnSetHeaderData((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role ```
bool q_abstractitemmodel_qbase_set_header_data(void* self, int section, int64_t orientation, void* value, int role) {
    return QAbstractItemModel_QBaseSetHeaderData((QAbstractItemModel*)self, section, orientation, (QVariant*)value, role);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// ``` QAbstractItemModel* self, QModelIndex* index ```
libqt_map /* of int to QVariant* */ q_abstractitemmodel_item_data(void* self, void* index) {
    return QAbstractItemModel_ItemData((QAbstractItemModel*)self, (QModelIndex*)index);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, libqt_map /* of int to QVariant* */ (*slot)(QAbstractItemModel*, QModelIndex*) ```
void q_abstractitemmodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*slot)(void*, void*)) {
    QAbstractItemModel_OnItemData((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemModel* self, QModelIndex* index ```
libqt_map /* of int to QVariant* */ q_abstractitemmodel_qbase_item_data(void* self, void* index) {
    return QAbstractItemModel_QBaseItemData((QAbstractItemModel*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// ``` QAbstractItemModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ roles ```
bool q_abstractitemmodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    return QAbstractItemModel_SetItemData((QAbstractItemModel*)self, (QModelIndex*)index, roles);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, bool (*slot)(QAbstractItemModel*, QModelIndex*, libqt_map /* of int to QVariant* */) ```
void q_abstractitemmodel_on_set_item_data(void* self, bool (*slot)(void*, void*, libqt_map /* of int to QVariant* */)) {
    QAbstractItemModel_OnSetItemData((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ roles ```
bool q_abstractitemmodel_qbase_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    return QAbstractItemModel_QBaseSetItemData((QAbstractItemModel*)self, (QModelIndex*)index, roles);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// ``` QAbstractItemModel* self, QModelIndex* index ```
bool q_abstractitemmodel_clear_item_data(void* self, void* index) {
    return QAbstractItemModel_ClearItemData((QAbstractItemModel*)self, (QModelIndex*)index);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, bool (*slot)(QAbstractItemModel*, QModelIndex*) ```
void q_abstractitemmodel_on_clear_item_data(void* self, bool (*slot)(void*, void*)) {
    QAbstractItemModel_OnClearItemData((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemModel* self, QModelIndex* index ```
bool q_abstractitemmodel_qbase_clear_item_data(void* self, void* index) {
    return QAbstractItemModel_QBaseClearItemData((QAbstractItemModel*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// ``` QAbstractItemModel* self ```
const char** q_abstractitemmodel_mime_types(void* self) {
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

/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, const char** (*slot)() ```
void q_abstractitemmodel_on_mime_types(void* self, const char** (*slot)()) {
    QAbstractItemModel_OnMimeTypes((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemModel* self ```
const char** q_abstractitemmodel_qbase_mime_types(void* self) {
    libqt_list _arr = QAbstractItemModel_QBaseMimeTypes((QAbstractItemModel*)self);
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

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// ``` QAbstractItemModel* self, QModelIndex* indexes[] ```
QMimeData* q_abstractitemmodel_mime_data(void* self, void* indexes[]) {
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

/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, QMimeData* (*slot)(QAbstractItemModel*, QModelIndex*[]) ```
void q_abstractitemmodel_on_mime_data(void* self, QMimeData* (*slot)(void*, void*)) {
    QAbstractItemModel_OnMimeData((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemModel* self, QModelIndex* indexes[] ```
QMimeData* q_abstractitemmodel_qbase_mime_data(void* self, void* indexes[]) {
    QModelIndex** indexes_arr = (QModelIndex**)indexes;
    size_t indexes_len = 0;
    while (indexes_arr[indexes_len] != NULL) {
        indexes_len++;
    }
    libqt_list indexes_list = {
        .len = indexes_len,
        .data = {(QModelIndex*)indexes},
    };
    return QAbstractItemModel_QBaseMimeData((QAbstractItemModel*)self, indexes_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// ``` QAbstractItemModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_abstractitemmodel_can_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent) {
    return QAbstractItemModel_CanDropMimeData((QAbstractItemModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, bool (*slot)(QAbstractItemModel*, QMimeData*, enum Qt__DropAction, int, int, QModelIndex*) ```
void q_abstractitemmodel_on_can_drop_mime_data(void* self, bool (*slot)(void*, void*, int64_t, int, int, void*)) {
    QAbstractItemModel_OnCanDropMimeData((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_abstractitemmodel_qbase_can_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent) {
    return QAbstractItemModel_QBaseCanDropMimeData((QAbstractItemModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dropMimeData)
///
/// ``` QAbstractItemModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_abstractitemmodel_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent) {
    return QAbstractItemModel_DropMimeData((QAbstractItemModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, bool (*slot)(QAbstractItemModel*, QMimeData*, enum Qt__DropAction, int, int, QModelIndex*) ```
void q_abstractitemmodel_on_drop_mime_data(void* self, bool (*slot)(void*, void*, int64_t, int, int, void*)) {
    QAbstractItemModel_OnDropMimeData((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_abstractitemmodel_qbase_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent) {
    return QAbstractItemModel_QBaseDropMimeData((QAbstractItemModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// ``` QAbstractItemModel* self ```
int64_t q_abstractitemmodel_supported_drop_actions(void* self) {
    return QAbstractItemModel_SupportedDropActions((QAbstractItemModel*)self);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, int64_t (*slot)() ```
void q_abstractitemmodel_on_supported_drop_actions(void* self, int64_t (*slot)()) {
    QAbstractItemModel_OnSupportedDropActions((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemModel* self ```
int64_t q_abstractitemmodel_qbase_supported_drop_actions(void* self) {
    return QAbstractItemModel_QBaseSupportedDropActions((QAbstractItemModel*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// ``` QAbstractItemModel* self ```
int64_t q_abstractitemmodel_supported_drag_actions(void* self) {
    return QAbstractItemModel_SupportedDragActions((QAbstractItemModel*)self);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, int64_t (*slot)() ```
void q_abstractitemmodel_on_supported_drag_actions(void* self, int64_t (*slot)()) {
    QAbstractItemModel_OnSupportedDragActions((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemModel* self ```
int64_t q_abstractitemmodel_qbase_supported_drag_actions(void* self) {
    return QAbstractItemModel_QBaseSupportedDragActions((QAbstractItemModel*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// ``` QAbstractItemModel* self, int row, int count, QModelIndex* parent ```
bool q_abstractitemmodel_insert_rows(void* self, int row, int count, void* parent) {
    return QAbstractItemModel_InsertRows((QAbstractItemModel*)self, row, count, (QModelIndex*)parent);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, bool (*slot)(QAbstractItemModel*, int, int, QModelIndex*) ```
void q_abstractitemmodel_on_insert_rows(void* self, bool (*slot)(void*, int, int, void*)) {
    QAbstractItemModel_OnInsertRows((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemModel* self, int row, int count, QModelIndex* parent ```
bool q_abstractitemmodel_qbase_insert_rows(void* self, int row, int count, void* parent) {
    return QAbstractItemModel_QBaseInsertRows((QAbstractItemModel*)self, row, count, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// ``` QAbstractItemModel* self, int column, int count, QModelIndex* parent ```
bool q_abstractitemmodel_insert_columns(void* self, int column, int count, void* parent) {
    return QAbstractItemModel_InsertColumns((QAbstractItemModel*)self, column, count, (QModelIndex*)parent);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, bool (*slot)(QAbstractItemModel*, int, int, QModelIndex*) ```
void q_abstractitemmodel_on_insert_columns(void* self, bool (*slot)(void*, int, int, void*)) {
    QAbstractItemModel_OnInsertColumns((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemModel* self, int column, int count, QModelIndex* parent ```
bool q_abstractitemmodel_qbase_insert_columns(void* self, int column, int count, void* parent) {
    return QAbstractItemModel_QBaseInsertColumns((QAbstractItemModel*)self, column, count, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// ``` QAbstractItemModel* self, int row, int count, QModelIndex* parent ```
bool q_abstractitemmodel_remove_rows(void* self, int row, int count, void* parent) {
    return QAbstractItemModel_RemoveRows((QAbstractItemModel*)self, row, count, (QModelIndex*)parent);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, bool (*slot)(QAbstractItemModel*, int, int, QModelIndex*) ```
void q_abstractitemmodel_on_remove_rows(void* self, bool (*slot)(void*, int, int, void*)) {
    QAbstractItemModel_OnRemoveRows((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemModel* self, int row, int count, QModelIndex* parent ```
bool q_abstractitemmodel_qbase_remove_rows(void* self, int row, int count, void* parent) {
    return QAbstractItemModel_QBaseRemoveRows((QAbstractItemModel*)self, row, count, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// ``` QAbstractItemModel* self, int column, int count, QModelIndex* parent ```
bool q_abstractitemmodel_remove_columns(void* self, int column, int count, void* parent) {
    return QAbstractItemModel_RemoveColumns((QAbstractItemModel*)self, column, count, (QModelIndex*)parent);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, bool (*slot)(QAbstractItemModel*, int, int, QModelIndex*) ```
void q_abstractitemmodel_on_remove_columns(void* self, bool (*slot)(void*, int, int, void*)) {
    QAbstractItemModel_OnRemoveColumns((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemModel* self, int column, int count, QModelIndex* parent ```
bool q_abstractitemmodel_qbase_remove_columns(void* self, int column, int count, void* parent) {
    return QAbstractItemModel_QBaseRemoveColumns((QAbstractItemModel*)self, column, count, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// ``` QAbstractItemModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_abstractitemmodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveRows((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, bool (*slot)(QAbstractItemModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_abstractitemmodel_on_move_rows(void* self, bool (*slot)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_OnMoveRows((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_abstractitemmodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_QBaseMoveRows((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// ``` QAbstractItemModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_abstractitemmodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveColumns((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, bool (*slot)(QAbstractItemModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_abstractitemmodel_on_move_columns(void* self, bool (*slot)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_OnMoveColumns((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_abstractitemmodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_QBaseMoveColumns((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// ``` QAbstractItemModel* self, int row ```
bool q_abstractitemmodel_insert_row(void* self, int row) {
    return QAbstractItemModel_InsertRow((QAbstractItemModel*)self, row);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// ``` QAbstractItemModel* self, int column ```
bool q_abstractitemmodel_insert_column(void* self, int column) {
    return QAbstractItemModel_InsertColumn((QAbstractItemModel*)self, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// ``` QAbstractItemModel* self, int row ```
bool q_abstractitemmodel_remove_row(void* self, int row) {
    return QAbstractItemModel_RemoveRow((QAbstractItemModel*)self, row);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// ``` QAbstractItemModel* self, int column ```
bool q_abstractitemmodel_remove_column(void* self, int column) {
    return QAbstractItemModel_RemoveColumn((QAbstractItemModel*)self, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
///
/// ``` QAbstractItemModel* self, QModelIndex* sourceParent, int sourceRow, QModelIndex* destinationParent, int destinationChild ```
bool q_abstractitemmodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveRow((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceRow, (QModelIndex*)destinationParent, destinationChild);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
///
/// ``` QAbstractItemModel* self, QModelIndex* sourceParent, int sourceColumn, QModelIndex* destinationParent, int destinationChild ```
bool q_abstractitemmodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveColumn((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceColumn, (QModelIndex*)destinationParent, destinationChild);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// ``` QAbstractItemModel* self, QModelIndex* parent ```
void q_abstractitemmodel_fetch_more(void* self, void* parent) {
    QAbstractItemModel_FetchMore((QAbstractItemModel*)self, (QModelIndex*)parent);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*) ```
void q_abstractitemmodel_on_fetch_more(void* self, void (*slot)(void*, void*)) {
    QAbstractItemModel_OnFetchMore((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemModel* self, QModelIndex* parent ```
void q_abstractitemmodel_qbase_fetch_more(void* self, void* parent) {
    QAbstractItemModel_QBaseFetchMore((QAbstractItemModel*)self, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// ``` QAbstractItemModel* self, QModelIndex* parent ```
bool q_abstractitemmodel_can_fetch_more(void* self, void* parent) {
    return QAbstractItemModel_CanFetchMore((QAbstractItemModel*)self, (QModelIndex*)parent);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, bool (*slot)(QAbstractItemModel*, QModelIndex*) ```
void q_abstractitemmodel_on_can_fetch_more(void* self, bool (*slot)(void*, void*)) {
    QAbstractItemModel_OnCanFetchMore((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemModel* self, QModelIndex* parent ```
bool q_abstractitemmodel_qbase_can_fetch_more(void* self, void* parent) {
    return QAbstractItemModel_QBaseCanFetchMore((QAbstractItemModel*)self, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#flags)
///
/// ``` QAbstractItemModel* self, QModelIndex* index ```
int64_t q_abstractitemmodel_flags(void* self, void* index) {
    return QAbstractItemModel_Flags((QAbstractItemModel*)self, (QModelIndex*)index);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, int64_t (*slot)(QAbstractItemModel*, QModelIndex*) ```
void q_abstractitemmodel_on_flags(void* self, int64_t (*slot)(void*, void*)) {
    QAbstractItemModel_OnFlags((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemModel* self, QModelIndex* index ```
int64_t q_abstractitemmodel_qbase_flags(void* self, void* index) {
    return QAbstractItemModel_QBaseFlags((QAbstractItemModel*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
///
/// ``` QAbstractItemModel* self, int column, enum Qt__SortOrder order ```
void q_abstractitemmodel_sort(void* self, int column, int64_t order) {
    QAbstractItemModel_Sort((QAbstractItemModel*)self, column, order);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, void (*slot)(QAbstractItemModel*, int, enum Qt__SortOrder) ```
void q_abstractitemmodel_on_sort(void* self, void (*slot)(void*, int, int64_t)) {
    QAbstractItemModel_OnSort((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemModel* self, int column, enum Qt__SortOrder order ```
void q_abstractitemmodel_qbase_sort(void* self, int column, int64_t order) {
    QAbstractItemModel_QBaseSort((QAbstractItemModel*)self, column, order);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// ``` QAbstractItemModel* self, QModelIndex* index ```
QModelIndex* q_abstractitemmodel_buddy(void* self, void* index) {
    return QAbstractItemModel_Buddy((QAbstractItemModel*)self, (QModelIndex*)index);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, QModelIndex* (*slot)(QAbstractItemModel*, QModelIndex*) ```
void q_abstractitemmodel_on_buddy(void* self, QModelIndex* (*slot)(void*, void*)) {
    QAbstractItemModel_OnBuddy((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemModel* self, QModelIndex* index ```
QModelIndex* q_abstractitemmodel_qbase_buddy(void* self, void* index) {
    return QAbstractItemModel_QBaseBuddy((QAbstractItemModel*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// ``` QAbstractItemModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags ```
libqt_list /* of QModelIndex* */ q_abstractitemmodel_match(void* self, void* start, int role, void* value, int hits, int64_t flags) {
    libqt_list _arr = QAbstractItemModel_Match((QAbstractItemModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, libqt_list /* of QModelIndex* */ (*slot)(QAbstractItemModel*, QModelIndex*, int, QVariant*, int, int) ```
void q_abstractitemmodel_on_match(void* self, libqt_list /* of QModelIndex* */ (*slot)(void*, void*, int, void*, int, int64_t)) {
    QAbstractItemModel_OnMatch((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags ```
libqt_list /* of QModelIndex* */ q_abstractitemmodel_qbase_match(void* self, void* start, int role, void* value, int hits, int64_t flags) {
    libqt_list _arr = QAbstractItemModel_QBaseMatch((QAbstractItemModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// ``` QAbstractItemModel* self, QModelIndex* index ```
QSize* q_abstractitemmodel_span(void* self, void* index) {
    return QAbstractItemModel_Span((QAbstractItemModel*)self, (QModelIndex*)index);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, QSize* (*slot)(QAbstractItemModel*, QModelIndex*) ```
void q_abstractitemmodel_on_span(void* self, QSize* (*slot)(void*, void*)) {
    QAbstractItemModel_OnSpan((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemModel* self, QModelIndex* index ```
QSize* q_abstractitemmodel_qbase_span(void* self, void* index) {
    return QAbstractItemModel_QBaseSpan((QAbstractItemModel*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#roleNames)
///
/// ``` QAbstractItemModel* self ```
libqt_map /* of int to char* */ q_abstractitemmodel_role_names(void* self) {
    return QAbstractItemModel_RoleNames((QAbstractItemModel*)self);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, libqt_map /* of int to char* */ (*slot)() ```
void q_abstractitemmodel_on_role_names(void* self, libqt_map /* of int to char* */ (*slot)()) {
    QAbstractItemModel_OnRoleNames((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemModel* self ```
libqt_map /* of int to char* */ q_abstractitemmodel_qbase_role_names(void* self) {
    return QAbstractItemModel_QBaseRoleNames((QAbstractItemModel*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// ``` QAbstractItemModel* self, QModelIndex* index ```
bool q_abstractitemmodel_check_index(void* self, void* index) {
    return QAbstractItemModel_CheckIndex((QAbstractItemModel*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// ``` QAbstractItemModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan ```
void q_abstractitemmodel_multi_data(void* self, void* index, void* roleDataSpan) {
    QAbstractItemModel_MultiData((QAbstractItemModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, QModelRoleDataSpan*) ```
void q_abstractitemmodel_on_multi_data(void* self, void (*slot)(void*, void*, void*)) {
    QAbstractItemModel_OnMultiData((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan ```
void q_abstractitemmodel_qbase_multi_data(void* self, void* index, void* roleDataSpan) {
    QAbstractItemModel_QBaseMultiData((QAbstractItemModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// ``` QAbstractItemModel* self, QModelIndex* topLeft, QModelIndex* bottomRight ```
void q_abstractitemmodel_data_changed(void* self, void* topLeft, void* bottomRight) {
    QAbstractItemModel_DataChanged((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight);
}

/// ``` QAbstractItemModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, QModelIndex*) ```
void q_abstractitemmodel_on_data_changed(void* self, void (*slot)(void*, void*, void*)) {
    QAbstractItemModel_Connect_DataChanged((QAbstractItemModel*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// ``` QAbstractItemModel* self, enum Qt__Orientation orientation, int first, int last ```
void q_abstractitemmodel_header_data_changed(void* self, int64_t orientation, int first, int last) {
    QAbstractItemModel_HeaderDataChanged((QAbstractItemModel*)self, orientation, first, last);
}

/// ``` QAbstractItemModel* self, void (*slot)(QAbstractItemModel*, enum Qt__Orientation, int, int) ```
void q_abstractitemmodel_on_header_data_changed(void* self, void (*slot)(void*, int64_t, int, int)) {
    QAbstractItemModel_Connect_HeaderDataChanged((QAbstractItemModel*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QAbstractItemModel* self ```
void q_abstractitemmodel_layout_changed(void* self) {
    QAbstractItemModel_LayoutChanged((QAbstractItemModel*)self);
}

/// ``` QAbstractItemModel* self, void (*slot)(QAbstractItemModel*) ```
void q_abstractitemmodel_on_layout_changed(void* self, void (*slot)(void*)) {
    QAbstractItemModel_Connect_LayoutChanged((QAbstractItemModel*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QAbstractItemModel* self ```
void q_abstractitemmodel_layout_about_to_be_changed(void* self) {
    QAbstractItemModel_LayoutAboutToBeChanged((QAbstractItemModel*)self);
}

/// ``` QAbstractItemModel* self, void (*slot)(QAbstractItemModel*) ```
void q_abstractitemmodel_on_layout_about_to_be_changed(void* self, void (*slot)(void*)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged((QAbstractItemModel*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// ``` QAbstractItemModel* self ```
bool q_abstractitemmodel_submit(void* self) {
    return QAbstractItemModel_Submit((QAbstractItemModel*)self);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, bool (*slot)() ```
void q_abstractitemmodel_on_submit(void* self, bool (*slot)()) {
    QAbstractItemModel_OnSubmit((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemModel* self ```
bool q_abstractitemmodel_qbase_submit(void* self) {
    return QAbstractItemModel_QBaseSubmit((QAbstractItemModel*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// ``` QAbstractItemModel* self ```
void q_abstractitemmodel_revert(void* self) {
    QAbstractItemModel_Revert((QAbstractItemModel*)self);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, void (*slot)() ```
void q_abstractitemmodel_on_revert(void* self, void (*slot)()) {
    QAbstractItemModel_OnRevert((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemModel* self ```
void q_abstractitemmodel_qbase_revert(void* self) {
    QAbstractItemModel_QBaseRevert((QAbstractItemModel*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// ``` QAbstractItemModel* self ```
void q_abstractitemmodel_reset_internal_data(void* self) {
    QAbstractItemModel_ResetInternalData((QAbstractItemModel*)self);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, void (*slot)() ```
void q_abstractitemmodel_on_reset_internal_data(void* self, void (*slot)()) {
    QAbstractItemModel_OnResetInternalData((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemModel* self ```
void q_abstractitemmodel_qbase_reset_internal_data(void* self) {
    QAbstractItemModel_QBaseResetInternalData((QAbstractItemModel*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// ``` QAbstractItemModel* self, int row, int column ```
QModelIndex* q_abstractitemmodel_create_index(void* self, int row, int column) {
    return QAbstractItemModel_CreateIndex((QAbstractItemModel*)self, row, column);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, QModelIndex* (*slot)(QAbstractItemModel*, int, int) ```
void q_abstractitemmodel_on_create_index(void* self, QModelIndex* (*slot)(void*, int, int)) {
    QAbstractItemModel_OnCreateIndex((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemModel* self, int row, int column ```
QModelIndex* q_abstractitemmodel_qbase_create_index(void* self, int row, int column) {
    return QAbstractItemModel_QBaseCreateIndex((QAbstractItemModel*)self, row, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// ``` QAbstractItemModel* self, int row, int column, uintptr_t id ```
QModelIndex* q_abstractitemmodel_create_index2(void* self, int row, int column, uintptr_t id) {
    return QAbstractItemModel_CreateIndex2((QAbstractItemModel*)self, row, column, id);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, QModelIndex* (*slot)(QAbstractItemModel*, int, int, uintptr_t) ```
void q_abstractitemmodel_on_create_index2(void* self, QModelIndex* (*slot)(void*, int, int, uintptr_t)) {
    QAbstractItemModel_OnCreateIndex2((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemModel* self, int row, int column, uintptr_t id ```
QModelIndex* q_abstractitemmodel_qbase_create_index2(void* self, int row, int column, uintptr_t id) {
    return QAbstractItemModel_QBaseCreateIndex2((QAbstractItemModel*)self, row, column, id);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// ``` QAbstractItemModel* self, QModelIndex* indexes[], QDataStream* stream ```
void q_abstractitemmodel_encode_data(void* self, void* indexes[], void* stream) {
    QModelIndex** indexes_arr = (QModelIndex**)indexes;
    size_t indexes_len = 0;
    while (indexes_arr[indexes_len] != NULL) {
        indexes_len++;
    }
    libqt_list indexes_list = {
        .len = indexes_len,
        .data = {(QModelIndex*)indexes},
    };
    QAbstractItemModel_EncodeData((QAbstractItemModel*)self, indexes_list, (QDataStream*)stream);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*[], QDataStream*) ```
void q_abstractitemmodel_on_encode_data(void* self, void (*slot)(void*, void*, void*)) {
    QAbstractItemModel_OnEncodeData((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemModel* self, QModelIndex* indexes[], QDataStream* stream ```
void q_abstractitemmodel_qbase_encode_data(void* self, void* indexes[], void* stream) {
    QModelIndex** indexes_arr = (QModelIndex**)indexes;
    size_t indexes_len = 0;
    while (indexes_arr[indexes_len] != NULL) {
        indexes_len++;
    }
    libqt_list indexes_list = {
        .len = indexes_len,
        .data = {(QModelIndex*)indexes},
    };
    QAbstractItemModel_QBaseEncodeData((QAbstractItemModel*)self, indexes_list, (QDataStream*)stream);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// ``` QAbstractItemModel* self, int row, int column, QModelIndex* parent, QDataStream* stream ```
bool q_abstractitemmodel_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return QAbstractItemModel_DecodeData((QAbstractItemModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, bool (*slot)(QAbstractItemModel*, int, int, QModelIndex*, QDataStream*) ```
void q_abstractitemmodel_on_decode_data(void* self, bool (*slot)(void*, int, int, void*, void*)) {
    QAbstractItemModel_OnDecodeData((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemModel* self, int row, int column, QModelIndex* parent, QDataStream* stream ```
bool q_abstractitemmodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return QAbstractItemModel_QBaseDecodeData((QAbstractItemModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// ``` QAbstractItemModel* self, QModelIndex* parent, int first, int last ```
void q_abstractitemmodel_begin_insert_rows(void* self, void* parent, int first, int last) {
    QAbstractItemModel_BeginInsertRows((QAbstractItemModel*)self, (QModelIndex*)parent, first, last);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int) ```
void q_abstractitemmodel_on_begin_insert_rows(void* self, void (*slot)(void*, void*, int, int)) {
    QAbstractItemModel_OnBeginInsertRows((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemModel* self, QModelIndex* parent, int first, int last ```
void q_abstractitemmodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last) {
    QAbstractItemModel_QBaseBeginInsertRows((QAbstractItemModel*)self, (QModelIndex*)parent, first, last);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// ``` QAbstractItemModel* self ```
void q_abstractitemmodel_end_insert_rows(void* self) {
    QAbstractItemModel_EndInsertRows((QAbstractItemModel*)self);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, void (*slot)() ```
void q_abstractitemmodel_on_end_insert_rows(void* self, void (*slot)()) {
    QAbstractItemModel_OnEndInsertRows((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemModel* self ```
void q_abstractitemmodel_qbase_end_insert_rows(void* self) {
    QAbstractItemModel_QBaseEndInsertRows((QAbstractItemModel*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// ``` QAbstractItemModel* self, QModelIndex* parent, int first, int last ```
void q_abstractitemmodel_begin_remove_rows(void* self, void* parent, int first, int last) {
    QAbstractItemModel_BeginRemoveRows((QAbstractItemModel*)self, (QModelIndex*)parent, first, last);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int) ```
void q_abstractitemmodel_on_begin_remove_rows(void* self, void (*slot)(void*, void*, int, int)) {
    QAbstractItemModel_OnBeginRemoveRows((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemModel* self, QModelIndex* parent, int first, int last ```
void q_abstractitemmodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last) {
    QAbstractItemModel_QBaseBeginRemoveRows((QAbstractItemModel*)self, (QModelIndex*)parent, first, last);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// ``` QAbstractItemModel* self ```
void q_abstractitemmodel_end_remove_rows(void* self) {
    QAbstractItemModel_EndRemoveRows((QAbstractItemModel*)self);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, void (*slot)() ```
void q_abstractitemmodel_on_end_remove_rows(void* self, void (*slot)()) {
    QAbstractItemModel_OnEndRemoveRows((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemModel* self ```
void q_abstractitemmodel_qbase_end_remove_rows(void* self) {
    QAbstractItemModel_QBaseEndRemoveRows((QAbstractItemModel*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// ``` QAbstractItemModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow ```
bool q_abstractitemmodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return QAbstractItemModel_BeginMoveRows((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, bool (*slot)(QAbstractItemModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_abstractitemmodel_on_begin_move_rows(void* self, bool (*slot)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_OnBeginMoveRows((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow ```
bool q_abstractitemmodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return QAbstractItemModel_QBaseBeginMoveRows((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// ``` QAbstractItemModel* self ```
void q_abstractitemmodel_end_move_rows(void* self) {
    QAbstractItemModel_EndMoveRows((QAbstractItemModel*)self);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, void (*slot)() ```
void q_abstractitemmodel_on_end_move_rows(void* self, void (*slot)()) {
    QAbstractItemModel_OnEndMoveRows((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemModel* self ```
void q_abstractitemmodel_qbase_end_move_rows(void* self) {
    QAbstractItemModel_QBaseEndMoveRows((QAbstractItemModel*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// ``` QAbstractItemModel* self, QModelIndex* parent, int first, int last ```
void q_abstractitemmodel_begin_insert_columns(void* self, void* parent, int first, int last) {
    QAbstractItemModel_BeginInsertColumns((QAbstractItemModel*)self, (QModelIndex*)parent, first, last);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int) ```
void q_abstractitemmodel_on_begin_insert_columns(void* self, void (*slot)(void*, void*, int, int)) {
    QAbstractItemModel_OnBeginInsertColumns((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemModel* self, QModelIndex* parent, int first, int last ```
void q_abstractitemmodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last) {
    QAbstractItemModel_QBaseBeginInsertColumns((QAbstractItemModel*)self, (QModelIndex*)parent, first, last);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// ``` QAbstractItemModel* self ```
void q_abstractitemmodel_end_insert_columns(void* self) {
    QAbstractItemModel_EndInsertColumns((QAbstractItemModel*)self);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, void (*slot)() ```
void q_abstractitemmodel_on_end_insert_columns(void* self, void (*slot)()) {
    QAbstractItemModel_OnEndInsertColumns((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemModel* self ```
void q_abstractitemmodel_qbase_end_insert_columns(void* self) {
    QAbstractItemModel_QBaseEndInsertColumns((QAbstractItemModel*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// ``` QAbstractItemModel* self, QModelIndex* parent, int first, int last ```
void q_abstractitemmodel_begin_remove_columns(void* self, void* parent, int first, int last) {
    QAbstractItemModel_BeginRemoveColumns((QAbstractItemModel*)self, (QModelIndex*)parent, first, last);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, int, int) ```
void q_abstractitemmodel_on_begin_remove_columns(void* self, void (*slot)(void*, void*, int, int)) {
    QAbstractItemModel_OnBeginRemoveColumns((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemModel* self, QModelIndex* parent, int first, int last ```
void q_abstractitemmodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last) {
    QAbstractItemModel_QBaseBeginRemoveColumns((QAbstractItemModel*)self, (QModelIndex*)parent, first, last);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// ``` QAbstractItemModel* self ```
void q_abstractitemmodel_end_remove_columns(void* self) {
    QAbstractItemModel_EndRemoveColumns((QAbstractItemModel*)self);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, void (*slot)() ```
void q_abstractitemmodel_on_end_remove_columns(void* self, void (*slot)()) {
    QAbstractItemModel_OnEndRemoveColumns((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemModel* self ```
void q_abstractitemmodel_qbase_end_remove_columns(void* self) {
    QAbstractItemModel_QBaseEndRemoveColumns((QAbstractItemModel*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// ``` QAbstractItemModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn ```
bool q_abstractitemmodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return QAbstractItemModel_BeginMoveColumns((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, bool (*slot)(QAbstractItemModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_abstractitemmodel_on_begin_move_columns(void* self, bool (*slot)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_OnBeginMoveColumns((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn ```
bool q_abstractitemmodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return QAbstractItemModel_QBaseBeginMoveColumns((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// ``` QAbstractItemModel* self ```
void q_abstractitemmodel_end_move_columns(void* self) {
    QAbstractItemModel_EndMoveColumns((QAbstractItemModel*)self);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, void (*slot)() ```
void q_abstractitemmodel_on_end_move_columns(void* self, void (*slot)()) {
    QAbstractItemModel_OnEndMoveColumns((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemModel* self ```
void q_abstractitemmodel_qbase_end_move_columns(void* self) {
    QAbstractItemModel_QBaseEndMoveColumns((QAbstractItemModel*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// ``` QAbstractItemModel* self ```
void q_abstractitemmodel_begin_reset_model(void* self) {
    QAbstractItemModel_BeginResetModel((QAbstractItemModel*)self);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, void (*slot)() ```
void q_abstractitemmodel_on_begin_reset_model(void* self, void (*slot)()) {
    QAbstractItemModel_OnBeginResetModel((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemModel* self ```
void q_abstractitemmodel_qbase_begin_reset_model(void* self) {
    QAbstractItemModel_QBaseBeginResetModel((QAbstractItemModel*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// ``` QAbstractItemModel* self ```
void q_abstractitemmodel_end_reset_model(void* self) {
    QAbstractItemModel_EndResetModel((QAbstractItemModel*)self);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, void (*slot)() ```
void q_abstractitemmodel_on_end_reset_model(void* self, void (*slot)()) {
    QAbstractItemModel_OnEndResetModel((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemModel* self ```
void q_abstractitemmodel_qbase_end_reset_model(void* self) {
    QAbstractItemModel_QBaseEndResetModel((QAbstractItemModel*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// ``` QAbstractItemModel* self, QModelIndex* from, QModelIndex* to ```
void q_abstractitemmodel_change_persistent_index(void* self, void* from, void* to) {
    QAbstractItemModel_ChangePersistentIndex((QAbstractItemModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, QModelIndex*) ```
void q_abstractitemmodel_on_change_persistent_index(void* self, void (*slot)(void*, void*, void*)) {
    QAbstractItemModel_OnChangePersistentIndex((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemModel* self, QModelIndex* from, QModelIndex* to ```
void q_abstractitemmodel_qbase_change_persistent_index(void* self, void* from, void* to) {
    QAbstractItemModel_QBaseChangePersistentIndex((QAbstractItemModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// ``` QAbstractItemModel* self, QModelIndex* from[], QModelIndex* to[] ```
void q_abstractitemmodel_change_persistent_index_list(void* self, void* from[], void* to[]) {
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
    QAbstractItemModel_ChangePersistentIndexList((QAbstractItemModel*)self, from_list, to_list);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*[], QModelIndex*[]) ```
void q_abstractitemmodel_on_change_persistent_index_list(void* self, void (*slot)(void*, void*, void*)) {
    QAbstractItemModel_OnChangePersistentIndexList((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemModel* self, QModelIndex* from[], QModelIndex* to[] ```
void q_abstractitemmodel_qbase_change_persistent_index_list(void* self, void* from[], void* to[]) {
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
    QAbstractItemModel_QBaseChangePersistentIndexList((QAbstractItemModel*)self, from_list, to_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// ``` QAbstractItemModel* self ```
libqt_list /* of QModelIndex* */ q_abstractitemmodel_persistent_index_list(void* self) {
    libqt_list _arr = QAbstractItemModel_PersistentIndexList((QAbstractItemModel*)self);
    return _arr;
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, libqt_list /* of QModelIndex* */ (*slot)() ```
void q_abstractitemmodel_on_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ (*slot)()) {
    QAbstractItemModel_OnPersistentIndexList((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemModel* self ```
libqt_list /* of QModelIndex* */ q_abstractitemmodel_qbase_persistent_index_list(void* self) {
    libqt_list _arr = QAbstractItemModel_QBasePersistentIndexList((QAbstractItemModel*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_abstractitemmodel_tr2(const char* s, const char* c) {
    libqt_string _str = QAbstractItemModel_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_abstractitemmodel_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QAbstractItemModel_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// ``` QAbstractItemModel* self, int row, int column, QModelIndex* parent ```
bool q_abstractitemmodel_has_index3(void* self, int row, int column, void* parent) {
    return QAbstractItemModel_HasIndex3((QAbstractItemModel*)self, row, column, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// ``` QAbstractItemModel* self, int row, QModelIndex* parent ```
bool q_abstractitemmodel_insert_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_InsertRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// ``` QAbstractItemModel* self, int column, QModelIndex* parent ```
bool q_abstractitemmodel_insert_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_InsertColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// ``` QAbstractItemModel* self, int row, QModelIndex* parent ```
bool q_abstractitemmodel_remove_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_RemoveRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// ``` QAbstractItemModel* self, int column, QModelIndex* parent ```
bool q_abstractitemmodel_remove_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_RemoveColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// ``` QAbstractItemModel* self, QModelIndex* index, int options ```
bool q_abstractitemmodel_check_index2(void* self, void* index, int64_t options) {
    return QAbstractItemModel_CheckIndex2((QAbstractItemModel*)self, (QModelIndex*)index, options);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// ``` QAbstractItemModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, int* roles[] ```
void q_abstractitemmodel_data_changed3(void* self, void* topLeft, void* bottomRight, int* roles[]) {
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

/// ``` QAbstractItemModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, QModelIndex*, int*[]) ```
void q_abstractitemmodel_on_data_changed3(void* self, void (*slot)(void*, void*, void*, int*)) {
    QAbstractItemModel_Connect_DataChanged3((QAbstractItemModel*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QAbstractItemModel* self, QPersistentModelIndex* parents[] ```
void q_abstractitemmodel_layout_changed1(void* self, void* parents[]) {
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

/// ``` QAbstractItemModel* self, void (*slot)(QAbstractItemModel*, QPersistentModelIndex*[]) ```
void q_abstractitemmodel_on_layout_changed1(void* self, void (*slot)(void*, void*)) {
    QAbstractItemModel_Connect_LayoutChanged1((QAbstractItemModel*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QAbstractItemModel* self, QPersistentModelIndex* parents[], enum QAbstractItemModel__LayoutChangeHint hint ```
void q_abstractitemmodel_layout_changed2(void* self, void* parents[], int64_t hint) {
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

/// ``` QAbstractItemModel* self, void (*slot)(QAbstractItemModel*, QPersistentModelIndex*[], enum QAbstractItemModel__LayoutChangeHint) ```
void q_abstractitemmodel_on_layout_changed2(void* self, void (*slot)(void*, void*, int64_t)) {
    QAbstractItemModel_Connect_LayoutChanged2((QAbstractItemModel*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QAbstractItemModel* self, QPersistentModelIndex* parents[] ```
void q_abstractitemmodel_layout_about_to_be_changed1(void* self, void* parents[]) {
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

/// ``` QAbstractItemModel* self, void (*slot)(QAbstractItemModel*, QPersistentModelIndex*[]) ```
void q_abstractitemmodel_on_layout_about_to_be_changed1(void* self, void (*slot)(void*, void*)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged1((QAbstractItemModel*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QAbstractItemModel* self, QPersistentModelIndex* parents[], enum QAbstractItemModel__LayoutChangeHint hint ```
void q_abstractitemmodel_layout_about_to_be_changed2(void* self, void* parents[], int64_t hint) {
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

/// ``` QAbstractItemModel* self, void (*slot)(QAbstractItemModel*, QPersistentModelIndex*[], enum QAbstractItemModel__LayoutChangeHint) ```
void q_abstractitemmodel_on_layout_about_to_be_changed2(void* self, void (*slot)(void*, void*, int64_t)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged2((QAbstractItemModel*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// ``` QAbstractItemModel* self, int row, int column, void* data ```
QModelIndex* q_abstractitemmodel_create_index3(void* self, int row, int column, void* data) {
    return QAbstractItemModel_CreateIndex3((QAbstractItemModel*)self, row, column, data);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, QModelIndex* (*slot)(QAbstractItemModel*, int, int, void*) ```
void q_abstractitemmodel_on_create_index3(void* self, QModelIndex* (*slot)(void*, int, int, void*)) {
    QAbstractItemModel_OnCreateIndex3((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemModel* self, int row, int column, void* data ```
QModelIndex* q_abstractitemmodel_qbase_create_index3(void* self, int row, int column, void* data) {
    return QAbstractItemModel_QBaseCreateIndex3((QAbstractItemModel*)self, row, column, data);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QAbstractItemModel* self ```
const char* q_abstractitemmodel_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QAbstractItemModel* self, const char* name ```
void q_abstractitemmodel_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QAbstractItemModel* self ```
bool q_abstractitemmodel_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QAbstractItemModel* self ```
bool q_abstractitemmodel_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QAbstractItemModel* self ```
bool q_abstractitemmodel_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QAbstractItemModel* self ```
bool q_abstractitemmodel_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QAbstractItemModel* self, bool b ```
bool q_abstractitemmodel_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QAbstractItemModel* self ```
QThread* q_abstractitemmodel_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAbstractItemModel* self, QThread* thread ```
void q_abstractitemmodel_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAbstractItemModel* self, int interval ```
int32_t q_abstractitemmodel_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAbstractItemModel* self, int id ```
void q_abstractitemmodel_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QAbstractItemModel* self ```
libqt_list /* of QObject* */ q_abstractitemmodel_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QAbstractItemModel* self, QObject* parent ```
void q_abstractitemmodel_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QAbstractItemModel* self, QObject* filterObj ```
void q_abstractitemmodel_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QAbstractItemModel* self, QObject* obj ```
void q_abstractitemmodel_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_abstractitemmodel_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAbstractItemModel* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_abstractitemmodel_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_abstractitemmodel_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_abstractitemmodel_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QAbstractItemModel* self ```
void q_abstractitemmodel_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QAbstractItemModel* self ```
void q_abstractitemmodel_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QAbstractItemModel* self, const char* name, QVariant* value ```
bool q_abstractitemmodel_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QAbstractItemModel* self, const char* name ```
QVariant* q_abstractitemmodel_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QAbstractItemModel* self ```
const char** q_abstractitemmodel_dynamic_property_names(void* self) {
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
/// ``` QAbstractItemModel* self ```
QBindingStorage* q_abstractitemmodel_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAbstractItemModel* self ```
QBindingStorage* q_abstractitemmodel_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractItemModel* self ```
void q_abstractitemmodel_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QAbstractItemModel* self, void (*slot)(QObject*) ```
void q_abstractitemmodel_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QAbstractItemModel* self, const char* classname ```
bool q_abstractitemmodel_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QAbstractItemModel* self ```
void q_abstractitemmodel_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAbstractItemModel* self, int interval, enum Qt__TimerType timerType ```
int32_t q_abstractitemmodel_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_abstractitemmodel_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAbstractItemModel* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_abstractitemmodel_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractItemModel* self, QObject* param1 ```
void q_abstractitemmodel_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QAbstractItemModel* self, void (*slot)(QObject*, QObject*) ```
void q_abstractitemmodel_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemModel* self, QEvent* event ```
bool q_abstractitemmodel_event(void* self, void* event) {
    return QAbstractItemModel_Event((QAbstractItemModel*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemModel* self, QEvent* event ```
bool q_abstractitemmodel_qbase_event(void* self, void* event) {
    return QAbstractItemModel_QBaseEvent((QAbstractItemModel*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemModel* self, bool (*slot)(QAbstractItemModel*, QEvent*) ```
void q_abstractitemmodel_on_event(void* self, bool (*slot)(void*, void*)) {
    QAbstractItemModel_OnEvent((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemModel* self, QObject* watched, QEvent* event ```
bool q_abstractitemmodel_event_filter(void* self, void* watched, void* event) {
    return QAbstractItemModel_EventFilter((QAbstractItemModel*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemModel* self, QObject* watched, QEvent* event ```
bool q_abstractitemmodel_qbase_event_filter(void* self, void* watched, void* event) {
    return QAbstractItemModel_QBaseEventFilter((QAbstractItemModel*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemModel* self, bool (*slot)(QAbstractItemModel*, QObject*, QEvent*) ```
void q_abstractitemmodel_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QAbstractItemModel_OnEventFilter((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemModel* self, QTimerEvent* event ```
void q_abstractitemmodel_timer_event(void* self, void* event) {
    QAbstractItemModel_TimerEvent((QAbstractItemModel*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemModel* self, QTimerEvent* event ```
void q_abstractitemmodel_qbase_timer_event(void* self, void* event) {
    QAbstractItemModel_QBaseTimerEvent((QAbstractItemModel*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemModel* self, void (*slot)(QAbstractItemModel*, QTimerEvent*) ```
void q_abstractitemmodel_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QAbstractItemModel_OnTimerEvent((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemModel* self, QChildEvent* event ```
void q_abstractitemmodel_child_event(void* self, void* event) {
    QAbstractItemModel_ChildEvent((QAbstractItemModel*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemModel* self, QChildEvent* event ```
void q_abstractitemmodel_qbase_child_event(void* self, void* event) {
    QAbstractItemModel_QBaseChildEvent((QAbstractItemModel*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemModel* self, void (*slot)(QAbstractItemModel*, QChildEvent*) ```
void q_abstractitemmodel_on_child_event(void* self, void (*slot)(void*, void*)) {
    QAbstractItemModel_OnChildEvent((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemModel* self, QEvent* event ```
void q_abstractitemmodel_custom_event(void* self, void* event) {
    QAbstractItemModel_CustomEvent((QAbstractItemModel*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemModel* self, QEvent* event ```
void q_abstractitemmodel_qbase_custom_event(void* self, void* event) {
    QAbstractItemModel_QBaseCustomEvent((QAbstractItemModel*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemModel* self, void (*slot)(QAbstractItemModel*, QEvent*) ```
void q_abstractitemmodel_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QAbstractItemModel_OnCustomEvent((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemModel* self, QMetaMethod* signal ```
void q_abstractitemmodel_connect_notify(void* self, void* signal) {
    QAbstractItemModel_ConnectNotify((QAbstractItemModel*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemModel* self, QMetaMethod* signal ```
void q_abstractitemmodel_qbase_connect_notify(void* self, void* signal) {
    QAbstractItemModel_QBaseConnectNotify((QAbstractItemModel*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemModel* self, void (*slot)(QAbstractItemModel*, QMetaMethod*) ```
void q_abstractitemmodel_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QAbstractItemModel_OnConnectNotify((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemModel* self, QMetaMethod* signal ```
void q_abstractitemmodel_disconnect_notify(void* self, void* signal) {
    QAbstractItemModel_DisconnectNotify((QAbstractItemModel*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemModel* self, QMetaMethod* signal ```
void q_abstractitemmodel_qbase_disconnect_notify(void* self, void* signal) {
    QAbstractItemModel_QBaseDisconnectNotify((QAbstractItemModel*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemModel* self, void (*slot)(QAbstractItemModel*, QMetaMethod*) ```
void q_abstractitemmodel_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QAbstractItemModel_OnDisconnectNotify((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemModel* self ```
QObject* q_abstractitemmodel_sender(void* self) {
    return QAbstractItemModel_Sender((QAbstractItemModel*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemModel* self ```
QObject* q_abstractitemmodel_qbase_sender(void* self) {
    return QAbstractItemModel_QBaseSender((QAbstractItemModel*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemModel* self, QObject* (*slot)() ```
void q_abstractitemmodel_on_sender(void* self, QObject* (*slot)()) {
    QAbstractItemModel_OnSender((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemModel* self ```
int32_t q_abstractitemmodel_sender_signal_index(void* self) {
    return QAbstractItemModel_SenderSignalIndex((QAbstractItemModel*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemModel* self ```
int32_t q_abstractitemmodel_qbase_sender_signal_index(void* self) {
    return QAbstractItemModel_QBaseSenderSignalIndex((QAbstractItemModel*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemModel* self, int32_t (*slot)() ```
void q_abstractitemmodel_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QAbstractItemModel_OnSenderSignalIndex((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemModel* self, const char* signal ```
int32_t q_abstractitemmodel_receivers(void* self, const char* signal) {
    return QAbstractItemModel_Receivers((QAbstractItemModel*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemModel* self, const char* signal ```
int32_t q_abstractitemmodel_qbase_receivers(void* self, const char* signal) {
    return QAbstractItemModel_QBaseReceivers((QAbstractItemModel*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemModel* self, int32_t (*slot)(QAbstractItemModel*, const char*) ```
void q_abstractitemmodel_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QAbstractItemModel_OnReceivers((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemModel* self, QMetaMethod* signal ```
bool q_abstractitemmodel_is_signal_connected(void* self, void* signal) {
    return QAbstractItemModel_IsSignalConnected((QAbstractItemModel*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemModel* self, QMetaMethod* signal ```
bool q_abstractitemmodel_qbase_is_signal_connected(void* self, void* signal) {
    return QAbstractItemModel_QBaseIsSignalConnected((QAbstractItemModel*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemModel* self, bool (*slot)(QAbstractItemModel*, QMetaMethod*) ```
void q_abstractitemmodel_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QAbstractItemModel_OnIsSignalConnected((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QAbstractItemModel* self ```
void q_abstractitemmodel_delete(void* self) {
    QAbstractItemModel_Delete((QAbstractItemModel*)(self));
}

/// https://doc.qt.io/qt-6/qabstracttablemodel.html

/// q_abstracttablemodel_new constructs a new QAbstractTableModel object.
///
///
QAbstractTableModel* q_abstracttablemodel_new() {
    return QAbstractTableModel_new();
}

/// q_abstracttablemodel_new2 constructs a new QAbstractTableModel object.
///
/// ``` QObject* parent ```
QAbstractTableModel* q_abstracttablemodel_new2(void* parent) {
    return QAbstractTableModel_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QAbstractTableModel* self ```
QMetaObject* q_abstracttablemodel_meta_object(void* self) {
    return QAbstractTableModel_MetaObject((QAbstractTableModel*)self);
}

/// ``` QAbstractTableModel* self, const char* param1 ```
void* q_abstracttablemodel_metacast(void* self, const char* param1) {
    return QAbstractTableModel_Metacast((QAbstractTableModel*)self, param1);
}

/// ``` QAbstractTableModel* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_abstracttablemodel_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAbstractTableModel_Metacall((QAbstractTableModel*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractTableModel* self, int32_t (*slot)(QAbstractTableModel*, enum QMetaObject__Call, int, void*) ```
void q_abstracttablemodel_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QAbstractTableModel_OnMetacall((QAbstractTableModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractTableModel* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_abstracttablemodel_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAbstractTableModel_QBaseMetacall((QAbstractTableModel*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_abstracttablemodel_tr(const char* s) {
    libqt_string _str = QAbstractTableModel_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttablemodel.html#index)
///
/// ``` QAbstractTableModel* self, int row, int column, QModelIndex* parent ```
QModelIndex* q_abstracttablemodel_index(void* self, int row, int column, void* parent) {
    return QAbstractTableModel_Index((QAbstractTableModel*)self, row, column, (QModelIndex*)parent);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractTableModel* self, QModelIndex* (*slot)(QAbstractTableModel*, int, int, QModelIndex*) ```
void q_abstracttablemodel_on_index(void* self, QModelIndex* (*slot)(void*, int, int, void*)) {
    QAbstractTableModel_OnIndex((QAbstractTableModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractTableModel* self, int row, int column, QModelIndex* parent ```
QModelIndex* q_abstracttablemodel_qbase_index(void* self, int row, int column, void* parent) {
    return QAbstractTableModel_QBaseIndex((QAbstractTableModel*)self, row, column, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttablemodel.html#sibling)
///
/// ``` QAbstractTableModel* self, int row, int column, QModelIndex* idx ```
QModelIndex* q_abstracttablemodel_sibling(void* self, int row, int column, void* idx) {
    return QAbstractTableModel_Sibling((QAbstractTableModel*)self, row, column, (QModelIndex*)idx);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractTableModel* self, QModelIndex* (*slot)(QAbstractTableModel*, int, int, QModelIndex*) ```
void q_abstracttablemodel_on_sibling(void* self, QModelIndex* (*slot)(void*, int, int, void*)) {
    QAbstractTableModel_OnSibling((QAbstractTableModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractTableModel* self, int row, int column, QModelIndex* idx ```
QModelIndex* q_abstracttablemodel_qbase_sibling(void* self, int row, int column, void* idx) {
    return QAbstractTableModel_QBaseSibling((QAbstractTableModel*)self, row, column, (QModelIndex*)idx);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttablemodel.html#dropMimeData)
///
/// ``` QAbstractTableModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_abstracttablemodel_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent) {
    return QAbstractTableModel_DropMimeData((QAbstractTableModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractTableModel* self, bool (*slot)(QAbstractTableModel*, QMimeData*, enum Qt__DropAction, int, int, QModelIndex*) ```
void q_abstracttablemodel_on_drop_mime_data(void* self, bool (*slot)(void*, void*, int64_t, int, int, void*)) {
    QAbstractTableModel_OnDropMimeData((QAbstractTableModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractTableModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_abstracttablemodel_qbase_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent) {
    return QAbstractTableModel_QBaseDropMimeData((QAbstractTableModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttablemodel.html#flags)
///
/// ``` QAbstractTableModel* self, QModelIndex* index ```
int64_t q_abstracttablemodel_flags(void* self, void* index) {
    return QAbstractTableModel_Flags((QAbstractTableModel*)self, (QModelIndex*)index);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractTableModel* self, int64_t (*slot)(QAbstractTableModel*, QModelIndex*) ```
void q_abstracttablemodel_on_flags(void* self, int64_t (*slot)(void*, void*)) {
    QAbstractTableModel_OnFlags((QAbstractTableModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractTableModel* self, QModelIndex* index ```
int64_t q_abstracttablemodel_qbase_flags(void* self, void* index) {
    return QAbstractTableModel_QBaseFlags((QAbstractTableModel*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_abstracttablemodel_tr2(const char* s, const char* c) {
    libqt_string _str = QAbstractTableModel_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_abstracttablemodel_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QAbstractTableModel_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// ``` QAbstractTableModel* self, int row, int column ```
bool q_abstracttablemodel_has_index(void* self, int row, int column) {
    return QAbstractItemModel_HasIndex((QAbstractItemModel*)self, row, column);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
///
/// ``` QAbstractTableModel* self, QModelIndex* child ```
QModelIndex* q_abstracttablemodel_parent(void* self, void* child) {
    return QAbstractItemModel_Parent((QAbstractItemModel*)self, (QModelIndex*)child);
}

/// Inherited from QAbstractItemModel
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, QModelIndex* (*slot)(QAbstractItemModel*, QModelIndex*) ```
void q_abstracttablemodel_on_parent(void* self, QModelIndex* (*slot)(void*, void*)) {
    QAbstractItemModel_OnParent((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// Base class method implementation
///
/// ``` QAbstractTableModel* self, QModelIndex* child ```
QModelIndex* q_abstracttablemodel_qbase_parent(void* self, void* child) {
    return QAbstractItemModel_QBaseParent((QAbstractItemModel*)self, (QModelIndex*)child);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// ``` QAbstractTableModel* self, QModelIndex* parent ```
bool q_abstracttablemodel_has_children(void* self, void* parent) {
    return QAbstractItemModel_HasChildren((QAbstractItemModel*)self, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, bool (*slot)(QAbstractItemModel*, QModelIndex*) ```
void q_abstracttablemodel_on_has_children(void* self, bool (*slot)(void*, void*)) {
    QAbstractItemModel_OnHasChildren((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// Base class method implementation
///
/// ``` QAbstractTableModel* self, QModelIndex* parent ```
bool q_abstracttablemodel_qbase_has_children(void* self, void* parent) {
    return QAbstractItemModel_QBaseHasChildren((QAbstractItemModel*)self, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// ``` QAbstractTableModel* self, int row ```
bool q_abstracttablemodel_insert_row(void* self, int row) {
    return QAbstractItemModel_InsertRow((QAbstractItemModel*)self, row);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// ``` QAbstractTableModel* self, int column ```
bool q_abstracttablemodel_insert_column(void* self, int column) {
    return QAbstractItemModel_InsertColumn((QAbstractItemModel*)self, column);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// ``` QAbstractTableModel* self, int row ```
bool q_abstracttablemodel_remove_row(void* self, int row) {
    return QAbstractItemModel_RemoveRow((QAbstractItemModel*)self, row);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// ``` QAbstractTableModel* self, int column ```
bool q_abstracttablemodel_remove_column(void* self, int column) {
    return QAbstractItemModel_RemoveColumn((QAbstractItemModel*)self, column);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
///
/// ``` QAbstractTableModel* self, QModelIndex* sourceParent, int sourceRow, QModelIndex* destinationParent, int destinationChild ```
bool q_abstracttablemodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveRow((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceRow, (QModelIndex*)destinationParent, destinationChild);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
///
/// ``` QAbstractTableModel* self, QModelIndex* sourceParent, int sourceColumn, QModelIndex* destinationParent, int destinationChild ```
bool q_abstracttablemodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveColumn((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceColumn, (QModelIndex*)destinationParent, destinationChild);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// ``` QAbstractTableModel* self, QModelIndex* index ```
bool q_abstracttablemodel_check_index(void* self, void* index) {
    return QAbstractItemModel_CheckIndex((QAbstractItemModel*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// ``` QAbstractTableModel* self, QModelIndex* topLeft, QModelIndex* bottomRight ```
void q_abstracttablemodel_data_changed(void* self, void* topLeft, void* bottomRight) {
    QAbstractItemModel_DataChanged((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight);
}

/// Inherited from QAbstractItemModel
///
/// ``` QAbstractTableModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, QModelIndex*) ```
void q_abstracttablemodel_on_data_changed(void* self, void (*slot)(void*, void*, void*)) {
    QAbstractItemModel_Connect_DataChanged((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// ``` QAbstractTableModel* self, enum Qt__Orientation orientation, int first, int last ```
void q_abstracttablemodel_header_data_changed(void* self, int64_t orientation, int first, int last) {
    QAbstractItemModel_HeaderDataChanged((QAbstractItemModel*)self, orientation, first, last);
}

/// Inherited from QAbstractItemModel
///
/// ``` QAbstractTableModel* self, void (*slot)(QAbstractItemModel*, enum Qt__Orientation, int, int) ```
void q_abstracttablemodel_on_header_data_changed(void* self, void (*slot)(void*, int64_t, int, int)) {
    QAbstractItemModel_Connect_HeaderDataChanged((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QAbstractTableModel* self ```
void q_abstracttablemodel_layout_changed(void* self) {
    QAbstractItemModel_LayoutChanged((QAbstractItemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// ``` QAbstractTableModel* self, void (*slot)(QAbstractItemModel*) ```
void q_abstracttablemodel_on_layout_changed(void* self, void (*slot)(void*)) {
    QAbstractItemModel_Connect_LayoutChanged((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QAbstractTableModel* self ```
void q_abstracttablemodel_layout_about_to_be_changed(void* self) {
    QAbstractItemModel_LayoutAboutToBeChanged((QAbstractItemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// ``` QAbstractTableModel* self, void (*slot)(QAbstractItemModel*) ```
void q_abstracttablemodel_on_layout_about_to_be_changed(void* self, void (*slot)(void*)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// ``` QAbstractTableModel* self, int row, int column, QModelIndex* parent ```
bool q_abstracttablemodel_has_index3(void* self, int row, int column, void* parent) {
    return QAbstractItemModel_HasIndex3((QAbstractItemModel*)self, row, column, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// ``` QAbstractTableModel* self, int row, QModelIndex* parent ```
bool q_abstracttablemodel_insert_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_InsertRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// ``` QAbstractTableModel* self, int column, QModelIndex* parent ```
bool q_abstracttablemodel_insert_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_InsertColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// ``` QAbstractTableModel* self, int row, QModelIndex* parent ```
bool q_abstracttablemodel_remove_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_RemoveRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// ``` QAbstractTableModel* self, int column, QModelIndex* parent ```
bool q_abstracttablemodel_remove_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_RemoveColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// ``` QAbstractTableModel* self, QModelIndex* index, int options ```
bool q_abstracttablemodel_check_index2(void* self, void* index, int64_t options) {
    return QAbstractItemModel_CheckIndex2((QAbstractItemModel*)self, (QModelIndex*)index, options);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// ``` QAbstractTableModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, int* roles[] ```
void q_abstracttablemodel_data_changed3(void* self, void* topLeft, void* bottomRight, int* roles[]) {
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
/// ``` QAbstractTableModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, QModelIndex*, int*[]) ```
void q_abstracttablemodel_on_data_changed3(void* self, void (*slot)(void*, void*, void*, int*)) {
    QAbstractItemModel_Connect_DataChanged3((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QAbstractTableModel* self, QPersistentModelIndex* parents[] ```
void q_abstracttablemodel_layout_changed1(void* self, void* parents[]) {
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
/// ``` QAbstractTableModel* self, void (*slot)(QAbstractItemModel*, QPersistentModelIndex*[]) ```
void q_abstracttablemodel_on_layout_changed1(void* self, void (*slot)(void*, void*)) {
    QAbstractItemModel_Connect_LayoutChanged1((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QAbstractTableModel* self, QPersistentModelIndex* parents[], enum QAbstractItemModel__LayoutChangeHint hint ```
void q_abstracttablemodel_layout_changed2(void* self, void* parents[], int64_t hint) {
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
/// ``` QAbstractTableModel* self, void (*slot)(QAbstractItemModel*, QPersistentModelIndex*[], enum QAbstractItemModel__LayoutChangeHint) ```
void q_abstracttablemodel_on_layout_changed2(void* self, void (*slot)(void*, void*, int64_t)) {
    QAbstractItemModel_Connect_LayoutChanged2((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QAbstractTableModel* self, QPersistentModelIndex* parents[] ```
void q_abstracttablemodel_layout_about_to_be_changed1(void* self, void* parents[]) {
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
/// ``` QAbstractTableModel* self, void (*slot)(QAbstractItemModel*, QPersistentModelIndex*[]) ```
void q_abstracttablemodel_on_layout_about_to_be_changed1(void* self, void (*slot)(void*, void*)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged1((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QAbstractTableModel* self, QPersistentModelIndex* parents[], enum QAbstractItemModel__LayoutChangeHint hint ```
void q_abstracttablemodel_layout_about_to_be_changed2(void* self, void* parents[], int64_t hint) {
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
/// ``` QAbstractTableModel* self, void (*slot)(QAbstractItemModel*, QPersistentModelIndex*[], enum QAbstractItemModel__LayoutChangeHint) ```
void q_abstracttablemodel_on_layout_about_to_be_changed2(void* self, void (*slot)(void*, void*, int64_t)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged2((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QAbstractTableModel* self ```
const char* q_abstracttablemodel_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QAbstractTableModel* self, const char* name ```
void q_abstracttablemodel_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QAbstractTableModel* self ```
bool q_abstracttablemodel_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QAbstractTableModel* self ```
bool q_abstracttablemodel_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QAbstractTableModel* self ```
bool q_abstracttablemodel_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QAbstractTableModel* self ```
bool q_abstracttablemodel_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QAbstractTableModel* self, bool b ```
bool q_abstracttablemodel_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QAbstractTableModel* self ```
QThread* q_abstracttablemodel_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAbstractTableModel* self, QThread* thread ```
void q_abstracttablemodel_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAbstractTableModel* self, int interval ```
int32_t q_abstracttablemodel_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAbstractTableModel* self, int id ```
void q_abstracttablemodel_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QAbstractTableModel* self ```
libqt_list /* of QObject* */ q_abstracttablemodel_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QAbstractTableModel* self, QObject* parent ```
void q_abstracttablemodel_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QAbstractTableModel* self, QObject* filterObj ```
void q_abstracttablemodel_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QAbstractTableModel* self, QObject* obj ```
void q_abstracttablemodel_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_abstracttablemodel_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAbstractTableModel* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_abstracttablemodel_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_abstracttablemodel_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_abstracttablemodel_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QAbstractTableModel* self ```
void q_abstracttablemodel_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QAbstractTableModel* self ```
void q_abstracttablemodel_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QAbstractTableModel* self, const char* name, QVariant* value ```
bool q_abstracttablemodel_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QAbstractTableModel* self, const char* name ```
QVariant* q_abstracttablemodel_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QAbstractTableModel* self ```
const char** q_abstracttablemodel_dynamic_property_names(void* self) {
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
/// ``` QAbstractTableModel* self ```
QBindingStorage* q_abstracttablemodel_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAbstractTableModel* self ```
QBindingStorage* q_abstracttablemodel_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractTableModel* self ```
void q_abstracttablemodel_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QAbstractTableModel* self, void (*slot)(QObject*) ```
void q_abstracttablemodel_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QAbstractTableModel* self, const char* classname ```
bool q_abstracttablemodel_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QAbstractTableModel* self ```
void q_abstracttablemodel_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAbstractTableModel* self, int interval, enum Qt__TimerType timerType ```
int32_t q_abstracttablemodel_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_abstracttablemodel_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAbstractTableModel* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_abstracttablemodel_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractTableModel* self, QObject* param1 ```
void q_abstracttablemodel_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QAbstractTableModel* self, void (*slot)(QObject*, QObject*) ```
void q_abstracttablemodel_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowCount)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* parent ```
int32_t q_abstracttablemodel_row_count(void* self, void* parent) {
    return QAbstractTableModel_RowCount((QAbstractTableModel*)self, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* parent ```
int32_t q_abstracttablemodel_qbase_row_count(void* self, void* parent) {
    return QAbstractTableModel_QBaseRowCount((QAbstractTableModel*)self, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, int32_t (*slot)(QAbstractTableModel*, QModelIndex*) ```
void q_abstracttablemodel_on_row_count(void* self, int32_t (*slot)(void*, void*)) {
    QAbstractTableModel_OnRowCount((QAbstractTableModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnCount)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* parent ```
int32_t q_abstracttablemodel_column_count(void* self, void* parent) {
    return QAbstractTableModel_ColumnCount((QAbstractTableModel*)self, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* parent ```
int32_t q_abstracttablemodel_qbase_column_count(void* self, void* parent) {
    return QAbstractTableModel_QBaseColumnCount((QAbstractTableModel*)self, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, int32_t (*slot)(QAbstractTableModel*, QModelIndex*) ```
void q_abstracttablemodel_on_column_count(void* self, int32_t (*slot)(void*, void*)) {
    QAbstractTableModel_OnColumnCount((QAbstractTableModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#data)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* index, int role ```
QVariant* q_abstracttablemodel_data(void* self, void* index, int role) {
    return QAbstractTableModel_Data((QAbstractTableModel*)self, (QModelIndex*)index, role);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* index, int role ```
QVariant* q_abstracttablemodel_qbase_data(void* self, void* index, int role) {
    return QAbstractTableModel_QBaseData((QAbstractTableModel*)self, (QModelIndex*)index, role);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QVariant* (*slot)(QAbstractTableModel*, QModelIndex*, int) ```
void q_abstracttablemodel_on_data(void* self, QVariant* (*slot)(void*, void*, int)) {
    QAbstractTableModel_OnData((QAbstractTableModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* index, QVariant* value, int role ```
bool q_abstracttablemodel_set_data(void* self, void* index, void* value, int role) {
    return QAbstractTableModel_SetData((QAbstractTableModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* index, QVariant* value, int role ```
bool q_abstracttablemodel_qbase_set_data(void* self, void* index, void* value, int role) {
    return QAbstractTableModel_QBaseSetData((QAbstractTableModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, bool (*slot)(QAbstractTableModel*, QModelIndex*, QVariant*, int) ```
void q_abstracttablemodel_on_set_data(void* self, bool (*slot)(void*, void*, void*, int)) {
    QAbstractTableModel_OnSetData((QAbstractTableModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, int section, enum Qt__Orientation orientation, int role ```
QVariant* q_abstracttablemodel_header_data(void* self, int section, int64_t orientation, int role) {
    return QAbstractTableModel_HeaderData((QAbstractTableModel*)self, section, orientation, role);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, int section, enum Qt__Orientation orientation, int role ```
QVariant* q_abstracttablemodel_qbase_header_data(void* self, int section, int64_t orientation, int role) {
    return QAbstractTableModel_QBaseHeaderData((QAbstractTableModel*)self, section, orientation, role);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QVariant* (*slot)(QAbstractTableModel*, int, enum Qt__Orientation, int) ```
void q_abstracttablemodel_on_header_data(void* self, QVariant* (*slot)(void*, int, int64_t, int)) {
    QAbstractTableModel_OnHeaderData((QAbstractTableModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role ```
bool q_abstracttablemodel_set_header_data(void* self, int section, int64_t orientation, void* value, int role) {
    return QAbstractTableModel_SetHeaderData((QAbstractTableModel*)self, section, orientation, (QVariant*)value, role);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role ```
bool q_abstracttablemodel_qbase_set_header_data(void* self, int section, int64_t orientation, void* value, int role) {
    return QAbstractTableModel_QBaseSetHeaderData((QAbstractTableModel*)self, section, orientation, (QVariant*)value, role);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, bool (*slot)(QAbstractTableModel*, int, enum Qt__Orientation, QVariant*, int) ```
void q_abstracttablemodel_on_set_header_data(void* self, bool (*slot)(void*, int, int64_t, void*, int)) {
    QAbstractTableModel_OnSetHeaderData((QAbstractTableModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* index ```
libqt_map /* of int to QVariant* */ q_abstracttablemodel_item_data(void* self, void* index) {
    return QAbstractTableModel_ItemData((QAbstractTableModel*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* index ```
libqt_map /* of int to QVariant* */ q_abstracttablemodel_qbase_item_data(void* self, void* index) {
    return QAbstractTableModel_QBaseItemData((QAbstractTableModel*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, libqt_map /* of int to QVariant* */ (*slot)(QAbstractTableModel*, QModelIndex*) ```
void q_abstracttablemodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*slot)(void*, void*)) {
    QAbstractTableModel_OnItemData((QAbstractTableModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ roles ```
bool q_abstracttablemodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    return QAbstractTableModel_SetItemData((QAbstractTableModel*)self, (QModelIndex*)index, roles);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ roles ```
bool q_abstracttablemodel_qbase_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    return QAbstractTableModel_QBaseSetItemData((QAbstractTableModel*)self, (QModelIndex*)index, roles);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, bool (*slot)(QAbstractTableModel*, QModelIndex*, libqt_map /* of int to QVariant* */) ```
void q_abstracttablemodel_on_set_item_data(void* self, bool (*slot)(void*, void*, libqt_map /* of int to QVariant* */)) {
    QAbstractTableModel_OnSetItemData((QAbstractTableModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* index ```
bool q_abstracttablemodel_clear_item_data(void* self, void* index) {
    return QAbstractTableModel_ClearItemData((QAbstractTableModel*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* index ```
bool q_abstracttablemodel_qbase_clear_item_data(void* self, void* index) {
    return QAbstractTableModel_QBaseClearItemData((QAbstractTableModel*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, bool (*slot)(QAbstractTableModel*, QModelIndex*) ```
void q_abstracttablemodel_on_clear_item_data(void* self, bool (*slot)(void*, void*)) {
    QAbstractTableModel_OnClearItemData((QAbstractTableModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self ```
const char** q_abstracttablemodel_mime_types(void* self) {
    libqt_list _arr = QAbstractTableModel_MimeTypes((QAbstractTableModel*)self);
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
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self ```
const char** q_abstracttablemodel_qbase_mime_types(void* self) {
    libqt_list _arr = QAbstractTableModel_QBaseMimeTypes((QAbstractTableModel*)self);
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
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, const char** (*slot)() ```
void q_abstracttablemodel_on_mime_types(void* self, const char** (*slot)()) {
    QAbstractTableModel_OnMimeTypes((QAbstractTableModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* indexes[] ```
QMimeData* q_abstracttablemodel_mime_data(void* self, void* indexes[]) {
    QModelIndex** indexes_arr = (QModelIndex**)indexes;
    size_t indexes_len = 0;
    while (indexes_arr[indexes_len] != NULL) {
        indexes_len++;
    }
    libqt_list indexes_list = {
        .len = indexes_len,
        .data = {(QModelIndex*)indexes},
    };
    return QAbstractTableModel_MimeData((QAbstractTableModel*)self, indexes_list);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* indexes[] ```
QMimeData* q_abstracttablemodel_qbase_mime_data(void* self, void* indexes[]) {
    QModelIndex** indexes_arr = (QModelIndex**)indexes;
    size_t indexes_len = 0;
    while (indexes_arr[indexes_len] != NULL) {
        indexes_len++;
    }
    libqt_list indexes_list = {
        .len = indexes_len,
        .data = {(QModelIndex*)indexes},
    };
    return QAbstractTableModel_QBaseMimeData((QAbstractTableModel*)self, indexes_list);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QMimeData* (*slot)(QAbstractTableModel*, QModelIndex*[]) ```
void q_abstracttablemodel_on_mime_data(void* self, QMimeData* (*slot)(void*, void*)) {
    QAbstractTableModel_OnMimeData((QAbstractTableModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_abstracttablemodel_can_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent) {
    return QAbstractTableModel_CanDropMimeData((QAbstractTableModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_abstracttablemodel_qbase_can_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent) {
    return QAbstractTableModel_QBaseCanDropMimeData((QAbstractTableModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, bool (*slot)(QAbstractTableModel*, QMimeData*, enum Qt__DropAction, int, int, QModelIndex*) ```
void q_abstracttablemodel_on_can_drop_mime_data(void* self, bool (*slot)(void*, void*, int64_t, int, int, void*)) {
    QAbstractTableModel_OnCanDropMimeData((QAbstractTableModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self ```
int64_t q_abstracttablemodel_supported_drop_actions(void* self) {
    return QAbstractTableModel_SupportedDropActions((QAbstractTableModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self ```
int64_t q_abstracttablemodel_qbase_supported_drop_actions(void* self) {
    return QAbstractTableModel_QBaseSupportedDropActions((QAbstractTableModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, int64_t (*slot)() ```
void q_abstracttablemodel_on_supported_drop_actions(void* self, int64_t (*slot)()) {
    QAbstractTableModel_OnSupportedDropActions((QAbstractTableModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self ```
int64_t q_abstracttablemodel_supported_drag_actions(void* self) {
    return QAbstractTableModel_SupportedDragActions((QAbstractTableModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self ```
int64_t q_abstracttablemodel_qbase_supported_drag_actions(void* self) {
    return QAbstractTableModel_QBaseSupportedDragActions((QAbstractTableModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, int64_t (*slot)() ```
void q_abstracttablemodel_on_supported_drag_actions(void* self, int64_t (*slot)()) {
    QAbstractTableModel_OnSupportedDragActions((QAbstractTableModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, int row, int count, QModelIndex* parent ```
bool q_abstracttablemodel_insert_rows(void* self, int row, int count, void* parent) {
    return QAbstractTableModel_InsertRows((QAbstractTableModel*)self, row, count, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, int row, int count, QModelIndex* parent ```
bool q_abstracttablemodel_qbase_insert_rows(void* self, int row, int count, void* parent) {
    return QAbstractTableModel_QBaseInsertRows((QAbstractTableModel*)self, row, count, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, bool (*slot)(QAbstractTableModel*, int, int, QModelIndex*) ```
void q_abstracttablemodel_on_insert_rows(void* self, bool (*slot)(void*, int, int, void*)) {
    QAbstractTableModel_OnInsertRows((QAbstractTableModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, int column, int count, QModelIndex* parent ```
bool q_abstracttablemodel_insert_columns(void* self, int column, int count, void* parent) {
    return QAbstractTableModel_InsertColumns((QAbstractTableModel*)self, column, count, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, int column, int count, QModelIndex* parent ```
bool q_abstracttablemodel_qbase_insert_columns(void* self, int column, int count, void* parent) {
    return QAbstractTableModel_QBaseInsertColumns((QAbstractTableModel*)self, column, count, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, bool (*slot)(QAbstractTableModel*, int, int, QModelIndex*) ```
void q_abstracttablemodel_on_insert_columns(void* self, bool (*slot)(void*, int, int, void*)) {
    QAbstractTableModel_OnInsertColumns((QAbstractTableModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, int row, int count, QModelIndex* parent ```
bool q_abstracttablemodel_remove_rows(void* self, int row, int count, void* parent) {
    return QAbstractTableModel_RemoveRows((QAbstractTableModel*)self, row, count, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, int row, int count, QModelIndex* parent ```
bool q_abstracttablemodel_qbase_remove_rows(void* self, int row, int count, void* parent) {
    return QAbstractTableModel_QBaseRemoveRows((QAbstractTableModel*)self, row, count, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, bool (*slot)(QAbstractTableModel*, int, int, QModelIndex*) ```
void q_abstracttablemodel_on_remove_rows(void* self, bool (*slot)(void*, int, int, void*)) {
    QAbstractTableModel_OnRemoveRows((QAbstractTableModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, int column, int count, QModelIndex* parent ```
bool q_abstracttablemodel_remove_columns(void* self, int column, int count, void* parent) {
    return QAbstractTableModel_RemoveColumns((QAbstractTableModel*)self, column, count, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, int column, int count, QModelIndex* parent ```
bool q_abstracttablemodel_qbase_remove_columns(void* self, int column, int count, void* parent) {
    return QAbstractTableModel_QBaseRemoveColumns((QAbstractTableModel*)self, column, count, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, bool (*slot)(QAbstractTableModel*, int, int, QModelIndex*) ```
void q_abstracttablemodel_on_remove_columns(void* self, bool (*slot)(void*, int, int, void*)) {
    QAbstractTableModel_OnRemoveColumns((QAbstractTableModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_abstracttablemodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return QAbstractTableModel_MoveRows((QAbstractTableModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_abstracttablemodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return QAbstractTableModel_QBaseMoveRows((QAbstractTableModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, bool (*slot)(QAbstractTableModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_abstracttablemodel_on_move_rows(void* self, bool (*slot)(void*, void*, int, int, void*, int)) {
    QAbstractTableModel_OnMoveRows((QAbstractTableModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_abstracttablemodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return QAbstractTableModel_MoveColumns((QAbstractTableModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_abstracttablemodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return QAbstractTableModel_QBaseMoveColumns((QAbstractTableModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, bool (*slot)(QAbstractTableModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_abstracttablemodel_on_move_columns(void* self, bool (*slot)(void*, void*, int, int, void*, int)) {
    QAbstractTableModel_OnMoveColumns((QAbstractTableModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* parent ```
void q_abstracttablemodel_fetch_more(void* self, void* parent) {
    QAbstractTableModel_FetchMore((QAbstractTableModel*)self, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* parent ```
void q_abstracttablemodel_qbase_fetch_more(void* self, void* parent) {
    QAbstractTableModel_QBaseFetchMore((QAbstractTableModel*)self, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, void (*slot)(QAbstractTableModel*, QModelIndex*) ```
void q_abstracttablemodel_on_fetch_more(void* self, void (*slot)(void*, void*)) {
    QAbstractTableModel_OnFetchMore((QAbstractTableModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* parent ```
bool q_abstracttablemodel_can_fetch_more(void* self, void* parent) {
    return QAbstractTableModel_CanFetchMore((QAbstractTableModel*)self, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* parent ```
bool q_abstracttablemodel_qbase_can_fetch_more(void* self, void* parent) {
    return QAbstractTableModel_QBaseCanFetchMore((QAbstractTableModel*)self, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, bool (*slot)(QAbstractTableModel*, QModelIndex*) ```
void q_abstracttablemodel_on_can_fetch_more(void* self, bool (*slot)(void*, void*)) {
    QAbstractTableModel_OnCanFetchMore((QAbstractTableModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, int column, enum Qt__SortOrder order ```
void q_abstracttablemodel_sort(void* self, int column, int64_t order) {
    QAbstractTableModel_Sort((QAbstractTableModel*)self, column, order);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, int column, enum Qt__SortOrder order ```
void q_abstracttablemodel_qbase_sort(void* self, int column, int64_t order) {
    QAbstractTableModel_QBaseSort((QAbstractTableModel*)self, column, order);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, void (*slot)(QAbstractTableModel*, int, enum Qt__SortOrder) ```
void q_abstracttablemodel_on_sort(void* self, void (*slot)(void*, int, int64_t)) {
    QAbstractTableModel_OnSort((QAbstractTableModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* index ```
QModelIndex* q_abstracttablemodel_buddy(void* self, void* index) {
    return QAbstractTableModel_Buddy((QAbstractTableModel*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* index ```
QModelIndex* q_abstracttablemodel_qbase_buddy(void* self, void* index) {
    return QAbstractTableModel_QBaseBuddy((QAbstractTableModel*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* (*slot)(QAbstractTableModel*, QModelIndex*) ```
void q_abstracttablemodel_on_buddy(void* self, QModelIndex* (*slot)(void*, void*)) {
    QAbstractTableModel_OnBuddy((QAbstractTableModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags ```
libqt_list /* of QModelIndex* */ q_abstracttablemodel_match(void* self, void* start, int role, void* value, int hits, int64_t flags) {
    libqt_list _arr = QAbstractTableModel_Match((QAbstractTableModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags ```
libqt_list /* of QModelIndex* */ q_abstracttablemodel_qbase_match(void* self, void* start, int role, void* value, int hits, int64_t flags) {
    libqt_list _arr = QAbstractTableModel_QBaseMatch((QAbstractTableModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, libqt_list /* of QModelIndex* */ (*slot)(QAbstractTableModel*, QModelIndex*, int, QVariant*, int, int) ```
void q_abstracttablemodel_on_match(void* self, libqt_list /* of QModelIndex* */ (*slot)(void*, void*, int, void*, int, int64_t)) {
    QAbstractTableModel_OnMatch((QAbstractTableModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* index ```
QSize* q_abstracttablemodel_span(void* self, void* index) {
    return QAbstractTableModel_Span((QAbstractTableModel*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* index ```
QSize* q_abstracttablemodel_qbase_span(void* self, void* index) {
    return QAbstractTableModel_QBaseSpan((QAbstractTableModel*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QSize* (*slot)(QAbstractTableModel*, QModelIndex*) ```
void q_abstracttablemodel_on_span(void* self, QSize* (*slot)(void*, void*)) {
    QAbstractTableModel_OnSpan((QAbstractTableModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#roleNames)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self ```
libqt_map /* of int to char* */ q_abstracttablemodel_role_names(void* self) {
    return QAbstractTableModel_RoleNames((QAbstractTableModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self ```
libqt_map /* of int to char* */ q_abstracttablemodel_qbase_role_names(void* self) {
    return QAbstractTableModel_QBaseRoleNames((QAbstractTableModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, libqt_map /* of int to char* */ (*slot)() ```
void q_abstracttablemodel_on_role_names(void* self, libqt_map /* of int to char* */ (*slot)()) {
    QAbstractTableModel_OnRoleNames((QAbstractTableModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan ```
void q_abstracttablemodel_multi_data(void* self, void* index, void* roleDataSpan) {
    QAbstractTableModel_MultiData((QAbstractTableModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan ```
void q_abstracttablemodel_qbase_multi_data(void* self, void* index, void* roleDataSpan) {
    QAbstractTableModel_QBaseMultiData((QAbstractTableModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, void (*slot)(QAbstractTableModel*, QModelIndex*, QModelRoleDataSpan*) ```
void q_abstracttablemodel_on_multi_data(void* self, void (*slot)(void*, void*, void*)) {
    QAbstractTableModel_OnMultiData((QAbstractTableModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self ```
bool q_abstracttablemodel_submit(void* self) {
    return QAbstractTableModel_Submit((QAbstractTableModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self ```
bool q_abstracttablemodel_qbase_submit(void* self) {
    return QAbstractTableModel_QBaseSubmit((QAbstractTableModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, bool (*slot)() ```
void q_abstracttablemodel_on_submit(void* self, bool (*slot)()) {
    QAbstractTableModel_OnSubmit((QAbstractTableModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self ```
void q_abstracttablemodel_revert(void* self) {
    QAbstractTableModel_Revert((QAbstractTableModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self ```
void q_abstracttablemodel_qbase_revert(void* self) {
    QAbstractTableModel_QBaseRevert((QAbstractTableModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, void (*slot)() ```
void q_abstracttablemodel_on_revert(void* self, void (*slot)()) {
    QAbstractTableModel_OnRevert((QAbstractTableModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self ```
void q_abstracttablemodel_reset_internal_data(void* self) {
    QAbstractTableModel_ResetInternalData((QAbstractTableModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self ```
void q_abstracttablemodel_qbase_reset_internal_data(void* self) {
    QAbstractTableModel_QBaseResetInternalData((QAbstractTableModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, void (*slot)() ```
void q_abstracttablemodel_on_reset_internal_data(void* self, void (*slot)()) {
    QAbstractTableModel_OnResetInternalData((QAbstractTableModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, QEvent* event ```
bool q_abstracttablemodel_event(void* self, void* event) {
    return QAbstractTableModel_Event((QAbstractTableModel*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QEvent* event ```
bool q_abstracttablemodel_qbase_event(void* self, void* event) {
    return QAbstractTableModel_QBaseEvent((QAbstractTableModel*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, bool (*slot)(QAbstractTableModel*, QEvent*) ```
void q_abstracttablemodel_on_event(void* self, bool (*slot)(void*, void*)) {
    QAbstractTableModel_OnEvent((QAbstractTableModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, QObject* watched, QEvent* event ```
bool q_abstracttablemodel_event_filter(void* self, void* watched, void* event) {
    return QAbstractTableModel_EventFilter((QAbstractTableModel*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QObject* watched, QEvent* event ```
bool q_abstracttablemodel_qbase_event_filter(void* self, void* watched, void* event) {
    return QAbstractTableModel_QBaseEventFilter((QAbstractTableModel*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, bool (*slot)(QAbstractTableModel*, QObject*, QEvent*) ```
void q_abstracttablemodel_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QAbstractTableModel_OnEventFilter((QAbstractTableModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, QTimerEvent* event ```
void q_abstracttablemodel_timer_event(void* self, void* event) {
    QAbstractTableModel_TimerEvent((QAbstractTableModel*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QTimerEvent* event ```
void q_abstracttablemodel_qbase_timer_event(void* self, void* event) {
    QAbstractTableModel_QBaseTimerEvent((QAbstractTableModel*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, void (*slot)(QAbstractTableModel*, QTimerEvent*) ```
void q_abstracttablemodel_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QAbstractTableModel_OnTimerEvent((QAbstractTableModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, QChildEvent* event ```
void q_abstracttablemodel_child_event(void* self, void* event) {
    QAbstractTableModel_ChildEvent((QAbstractTableModel*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QChildEvent* event ```
void q_abstracttablemodel_qbase_child_event(void* self, void* event) {
    QAbstractTableModel_QBaseChildEvent((QAbstractTableModel*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, void (*slot)(QAbstractTableModel*, QChildEvent*) ```
void q_abstracttablemodel_on_child_event(void* self, void (*slot)(void*, void*)) {
    QAbstractTableModel_OnChildEvent((QAbstractTableModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, QEvent* event ```
void q_abstracttablemodel_custom_event(void* self, void* event) {
    QAbstractTableModel_CustomEvent((QAbstractTableModel*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QEvent* event ```
void q_abstracttablemodel_qbase_custom_event(void* self, void* event) {
    QAbstractTableModel_QBaseCustomEvent((QAbstractTableModel*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, void (*slot)(QAbstractTableModel*, QEvent*) ```
void q_abstracttablemodel_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QAbstractTableModel_OnCustomEvent((QAbstractTableModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, QMetaMethod* signal ```
void q_abstracttablemodel_connect_notify(void* self, void* signal) {
    QAbstractTableModel_ConnectNotify((QAbstractTableModel*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QMetaMethod* signal ```
void q_abstracttablemodel_qbase_connect_notify(void* self, void* signal) {
    QAbstractTableModel_QBaseConnectNotify((QAbstractTableModel*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, void (*slot)(QAbstractTableModel*, QMetaMethod*) ```
void q_abstracttablemodel_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QAbstractTableModel_OnConnectNotify((QAbstractTableModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, QMetaMethod* signal ```
void q_abstracttablemodel_disconnect_notify(void* self, void* signal) {
    QAbstractTableModel_DisconnectNotify((QAbstractTableModel*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QMetaMethod* signal ```
void q_abstracttablemodel_qbase_disconnect_notify(void* self, void* signal) {
    QAbstractTableModel_QBaseDisconnectNotify((QAbstractTableModel*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, void (*slot)(QAbstractTableModel*, QMetaMethod*) ```
void q_abstracttablemodel_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QAbstractTableModel_OnDisconnectNotify((QAbstractTableModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, int row, int column ```
QModelIndex* q_abstracttablemodel_create_index(void* self, int row, int column) {
    return QAbstractTableModel_CreateIndex((QAbstractTableModel*)self, row, column);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, int row, int column ```
QModelIndex* q_abstracttablemodel_qbase_create_index(void* self, int row, int column) {
    return QAbstractTableModel_QBaseCreateIndex((QAbstractTableModel*)self, row, column);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* (*slot)(QAbstractTableModel*, int, int) ```
void q_abstracttablemodel_on_create_index(void* self, QModelIndex* (*slot)(void*, int, int)) {
    QAbstractTableModel_OnCreateIndex((QAbstractTableModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* indexes[], QDataStream* stream ```
void q_abstracttablemodel_encode_data(void* self, void* indexes[], void* stream) {
    QModelIndex** indexes_arr = (QModelIndex**)indexes;
    size_t indexes_len = 0;
    while (indexes_arr[indexes_len] != NULL) {
        indexes_len++;
    }
    libqt_list indexes_list = {
        .len = indexes_len,
        .data = {(QModelIndex*)indexes},
    };
    QAbstractTableModel_EncodeData((QAbstractTableModel*)self, indexes_list, (QDataStream*)stream);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* indexes[], QDataStream* stream ```
void q_abstracttablemodel_qbase_encode_data(void* self, void* indexes[], void* stream) {
    QModelIndex** indexes_arr = (QModelIndex**)indexes;
    size_t indexes_len = 0;
    while (indexes_arr[indexes_len] != NULL) {
        indexes_len++;
    }
    libqt_list indexes_list = {
        .len = indexes_len,
        .data = {(QModelIndex*)indexes},
    };
    QAbstractTableModel_QBaseEncodeData((QAbstractTableModel*)self, indexes_list, (QDataStream*)stream);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, void (*slot)(QAbstractTableModel*, QModelIndex*[], QDataStream*) ```
void q_abstracttablemodel_on_encode_data(void* self, void (*slot)(void*, void*, void*)) {
    QAbstractTableModel_OnEncodeData((QAbstractTableModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, int row, int column, QModelIndex* parent, QDataStream* stream ```
bool q_abstracttablemodel_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return QAbstractTableModel_DecodeData((QAbstractTableModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, int row, int column, QModelIndex* parent, QDataStream* stream ```
bool q_abstracttablemodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return QAbstractTableModel_QBaseDecodeData((QAbstractTableModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, bool (*slot)(QAbstractTableModel*, int, int, QModelIndex*, QDataStream*) ```
void q_abstracttablemodel_on_decode_data(void* self, bool (*slot)(void*, int, int, void*, void*)) {
    QAbstractTableModel_OnDecodeData((QAbstractTableModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* parent, int first, int last ```
void q_abstracttablemodel_begin_insert_rows(void* self, void* parent, int first, int last) {
    QAbstractTableModel_BeginInsertRows((QAbstractTableModel*)self, (QModelIndex*)parent, first, last);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* parent, int first, int last ```
void q_abstracttablemodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last) {
    QAbstractTableModel_QBaseBeginInsertRows((QAbstractTableModel*)self, (QModelIndex*)parent, first, last);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, void (*slot)(QAbstractTableModel*, QModelIndex*, int, int) ```
void q_abstracttablemodel_on_begin_insert_rows(void* self, void (*slot)(void*, void*, int, int)) {
    QAbstractTableModel_OnBeginInsertRows((QAbstractTableModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self ```
void q_abstracttablemodel_end_insert_rows(void* self) {
    QAbstractTableModel_EndInsertRows((QAbstractTableModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self ```
void q_abstracttablemodel_qbase_end_insert_rows(void* self) {
    QAbstractTableModel_QBaseEndInsertRows((QAbstractTableModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, void (*slot)() ```
void q_abstracttablemodel_on_end_insert_rows(void* self, void (*slot)()) {
    QAbstractTableModel_OnEndInsertRows((QAbstractTableModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* parent, int first, int last ```
void q_abstracttablemodel_begin_remove_rows(void* self, void* parent, int first, int last) {
    QAbstractTableModel_BeginRemoveRows((QAbstractTableModel*)self, (QModelIndex*)parent, first, last);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* parent, int first, int last ```
void q_abstracttablemodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last) {
    QAbstractTableModel_QBaseBeginRemoveRows((QAbstractTableModel*)self, (QModelIndex*)parent, first, last);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, void (*slot)(QAbstractTableModel*, QModelIndex*, int, int) ```
void q_abstracttablemodel_on_begin_remove_rows(void* self, void (*slot)(void*, void*, int, int)) {
    QAbstractTableModel_OnBeginRemoveRows((QAbstractTableModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self ```
void q_abstracttablemodel_end_remove_rows(void* self) {
    QAbstractTableModel_EndRemoveRows((QAbstractTableModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self ```
void q_abstracttablemodel_qbase_end_remove_rows(void* self) {
    QAbstractTableModel_QBaseEndRemoveRows((QAbstractTableModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, void (*slot)() ```
void q_abstracttablemodel_on_end_remove_rows(void* self, void (*slot)()) {
    QAbstractTableModel_OnEndRemoveRows((QAbstractTableModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow ```
bool q_abstracttablemodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return QAbstractTableModel_BeginMoveRows((QAbstractTableModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow ```
bool q_abstracttablemodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return QAbstractTableModel_QBaseBeginMoveRows((QAbstractTableModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, bool (*slot)(QAbstractTableModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_abstracttablemodel_on_begin_move_rows(void* self, bool (*slot)(void*, void*, int, int, void*, int)) {
    QAbstractTableModel_OnBeginMoveRows((QAbstractTableModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self ```
void q_abstracttablemodel_end_move_rows(void* self) {
    QAbstractTableModel_EndMoveRows((QAbstractTableModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self ```
void q_abstracttablemodel_qbase_end_move_rows(void* self) {
    QAbstractTableModel_QBaseEndMoveRows((QAbstractTableModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, void (*slot)() ```
void q_abstracttablemodel_on_end_move_rows(void* self, void (*slot)()) {
    QAbstractTableModel_OnEndMoveRows((QAbstractTableModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* parent, int first, int last ```
void q_abstracttablemodel_begin_insert_columns(void* self, void* parent, int first, int last) {
    QAbstractTableModel_BeginInsertColumns((QAbstractTableModel*)self, (QModelIndex*)parent, first, last);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* parent, int first, int last ```
void q_abstracttablemodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last) {
    QAbstractTableModel_QBaseBeginInsertColumns((QAbstractTableModel*)self, (QModelIndex*)parent, first, last);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, void (*slot)(QAbstractTableModel*, QModelIndex*, int, int) ```
void q_abstracttablemodel_on_begin_insert_columns(void* self, void (*slot)(void*, void*, int, int)) {
    QAbstractTableModel_OnBeginInsertColumns((QAbstractTableModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self ```
void q_abstracttablemodel_end_insert_columns(void* self) {
    QAbstractTableModel_EndInsertColumns((QAbstractTableModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self ```
void q_abstracttablemodel_qbase_end_insert_columns(void* self) {
    QAbstractTableModel_QBaseEndInsertColumns((QAbstractTableModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, void (*slot)() ```
void q_abstracttablemodel_on_end_insert_columns(void* self, void (*slot)()) {
    QAbstractTableModel_OnEndInsertColumns((QAbstractTableModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* parent, int first, int last ```
void q_abstracttablemodel_begin_remove_columns(void* self, void* parent, int first, int last) {
    QAbstractTableModel_BeginRemoveColumns((QAbstractTableModel*)self, (QModelIndex*)parent, first, last);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* parent, int first, int last ```
void q_abstracttablemodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last) {
    QAbstractTableModel_QBaseBeginRemoveColumns((QAbstractTableModel*)self, (QModelIndex*)parent, first, last);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, void (*slot)(QAbstractTableModel*, QModelIndex*, int, int) ```
void q_abstracttablemodel_on_begin_remove_columns(void* self, void (*slot)(void*, void*, int, int)) {
    QAbstractTableModel_OnBeginRemoveColumns((QAbstractTableModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self ```
void q_abstracttablemodel_end_remove_columns(void* self) {
    QAbstractTableModel_EndRemoveColumns((QAbstractTableModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self ```
void q_abstracttablemodel_qbase_end_remove_columns(void* self) {
    QAbstractTableModel_QBaseEndRemoveColumns((QAbstractTableModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, void (*slot)() ```
void q_abstracttablemodel_on_end_remove_columns(void* self, void (*slot)()) {
    QAbstractTableModel_OnEndRemoveColumns((QAbstractTableModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn ```
bool q_abstracttablemodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return QAbstractTableModel_BeginMoveColumns((QAbstractTableModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn ```
bool q_abstracttablemodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return QAbstractTableModel_QBaseBeginMoveColumns((QAbstractTableModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, bool (*slot)(QAbstractTableModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_abstracttablemodel_on_begin_move_columns(void* self, bool (*slot)(void*, void*, int, int, void*, int)) {
    QAbstractTableModel_OnBeginMoveColumns((QAbstractTableModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self ```
void q_abstracttablemodel_end_move_columns(void* self) {
    QAbstractTableModel_EndMoveColumns((QAbstractTableModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self ```
void q_abstracttablemodel_qbase_end_move_columns(void* self) {
    QAbstractTableModel_QBaseEndMoveColumns((QAbstractTableModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, void (*slot)() ```
void q_abstracttablemodel_on_end_move_columns(void* self, void (*slot)()) {
    QAbstractTableModel_OnEndMoveColumns((QAbstractTableModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self ```
void q_abstracttablemodel_begin_reset_model(void* self) {
    QAbstractTableModel_BeginResetModel((QAbstractTableModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self ```
void q_abstracttablemodel_qbase_begin_reset_model(void* self) {
    QAbstractTableModel_QBaseBeginResetModel((QAbstractTableModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, void (*slot)() ```
void q_abstracttablemodel_on_begin_reset_model(void* self, void (*slot)()) {
    QAbstractTableModel_OnBeginResetModel((QAbstractTableModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self ```
void q_abstracttablemodel_end_reset_model(void* self) {
    QAbstractTableModel_EndResetModel((QAbstractTableModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self ```
void q_abstracttablemodel_qbase_end_reset_model(void* self) {
    QAbstractTableModel_QBaseEndResetModel((QAbstractTableModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, void (*slot)() ```
void q_abstracttablemodel_on_end_reset_model(void* self, void (*slot)()) {
    QAbstractTableModel_OnEndResetModel((QAbstractTableModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* from, QModelIndex* to ```
void q_abstracttablemodel_change_persistent_index(void* self, void* from, void* to) {
    QAbstractTableModel_ChangePersistentIndex((QAbstractTableModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* from, QModelIndex* to ```
void q_abstracttablemodel_qbase_change_persistent_index(void* self, void* from, void* to) {
    QAbstractTableModel_QBaseChangePersistentIndex((QAbstractTableModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, void (*slot)(QAbstractTableModel*, QModelIndex*, QModelIndex*) ```
void q_abstracttablemodel_on_change_persistent_index(void* self, void (*slot)(void*, void*, void*)) {
    QAbstractTableModel_OnChangePersistentIndex((QAbstractTableModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* from[], QModelIndex* to[] ```
void q_abstracttablemodel_change_persistent_index_list(void* self, void* from[], void* to[]) {
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
    QAbstractTableModel_ChangePersistentIndexList((QAbstractTableModel*)self, from_list, to_list);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QModelIndex* from[], QModelIndex* to[] ```
void q_abstracttablemodel_qbase_change_persistent_index_list(void* self, void* from[], void* to[]) {
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
    QAbstractTableModel_QBaseChangePersistentIndexList((QAbstractTableModel*)self, from_list, to_list);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, void (*slot)(QAbstractTableModel*, QModelIndex*[], QModelIndex*[]) ```
void q_abstracttablemodel_on_change_persistent_index_list(void* self, void (*slot)(void*, void*, void*)) {
    QAbstractTableModel_OnChangePersistentIndexList((QAbstractTableModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self ```
libqt_list /* of QModelIndex* */ q_abstracttablemodel_persistent_index_list(void* self) {
    libqt_list _arr = QAbstractTableModel_PersistentIndexList((QAbstractTableModel*)self);
    return _arr;
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self ```
libqt_list /* of QModelIndex* */ q_abstracttablemodel_qbase_persistent_index_list(void* self) {
    libqt_list _arr = QAbstractTableModel_QBasePersistentIndexList((QAbstractTableModel*)self);
    return _arr;
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, libqt_list /* of QModelIndex* */ (*slot)() ```
void q_abstracttablemodel_on_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ (*slot)()) {
    QAbstractTableModel_OnPersistentIndexList((QAbstractTableModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self ```
QObject* q_abstracttablemodel_sender(void* self) {
    return QAbstractTableModel_Sender((QAbstractTableModel*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self ```
QObject* q_abstracttablemodel_qbase_sender(void* self) {
    return QAbstractTableModel_QBaseSender((QAbstractTableModel*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QObject* (*slot)() ```
void q_abstracttablemodel_on_sender(void* self, QObject* (*slot)()) {
    QAbstractTableModel_OnSender((QAbstractTableModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self ```
int32_t q_abstracttablemodel_sender_signal_index(void* self) {
    return QAbstractTableModel_SenderSignalIndex((QAbstractTableModel*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self ```
int32_t q_abstracttablemodel_qbase_sender_signal_index(void* self) {
    return QAbstractTableModel_QBaseSenderSignalIndex((QAbstractTableModel*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, int32_t (*slot)() ```
void q_abstracttablemodel_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QAbstractTableModel_OnSenderSignalIndex((QAbstractTableModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, const char* signal ```
int32_t q_abstracttablemodel_receivers(void* self, const char* signal) {
    return QAbstractTableModel_Receivers((QAbstractTableModel*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, const char* signal ```
int32_t q_abstracttablemodel_qbase_receivers(void* self, const char* signal) {
    return QAbstractTableModel_QBaseReceivers((QAbstractTableModel*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, int32_t (*slot)(QAbstractTableModel*, const char*) ```
void q_abstracttablemodel_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QAbstractTableModel_OnReceivers((QAbstractTableModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractTableModel* self, QMetaMethod* signal ```
bool q_abstracttablemodel_is_signal_connected(void* self, void* signal) {
    return QAbstractTableModel_IsSignalConnected((QAbstractTableModel*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractTableModel* self, QMetaMethod* signal ```
bool q_abstracttablemodel_qbase_is_signal_connected(void* self, void* signal) {
    return QAbstractTableModel_QBaseIsSignalConnected((QAbstractTableModel*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractTableModel* self, bool (*slot)(QAbstractTableModel*, QMetaMethod*) ```
void q_abstracttablemodel_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QAbstractTableModel_OnIsSignalConnected((QAbstractTableModel*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QAbstractTableModel* self ```
void q_abstracttablemodel_delete(void* self) {
    QAbstractTableModel_Delete((QAbstractTableModel*)(self));
}

/// https://doc.qt.io/qt-6/qabstractlistmodel.html

/// q_abstractlistmodel_new constructs a new QAbstractListModel object.
///
///
QAbstractListModel* q_abstractlistmodel_new() {
    return QAbstractListModel_new();
}

/// q_abstractlistmodel_new2 constructs a new QAbstractListModel object.
///
/// ``` QObject* parent ```
QAbstractListModel* q_abstractlistmodel_new2(void* parent) {
    return QAbstractListModel_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QAbstractListModel* self ```
QMetaObject* q_abstractlistmodel_meta_object(void* self) {
    return QAbstractListModel_MetaObject((QAbstractListModel*)self);
}

/// ``` QAbstractListModel* self, const char* param1 ```
void* q_abstractlistmodel_metacast(void* self, const char* param1) {
    return QAbstractListModel_Metacast((QAbstractListModel*)self, param1);
}

/// ``` QAbstractListModel* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_abstractlistmodel_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAbstractListModel_Metacall((QAbstractListModel*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractListModel* self, int32_t (*slot)(QAbstractListModel*, enum QMetaObject__Call, int, void*) ```
void q_abstractlistmodel_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QAbstractListModel_OnMetacall((QAbstractListModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractListModel* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_abstractlistmodel_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAbstractListModel_QBaseMetacall((QAbstractListModel*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_abstractlistmodel_tr(const char* s) {
    libqt_string _str = QAbstractListModel_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractlistmodel.html#index)
///
/// ``` QAbstractListModel* self, int row, int column, QModelIndex* parent ```
QModelIndex* q_abstractlistmodel_index(void* self, int row, int column, void* parent) {
    return QAbstractListModel_Index((QAbstractListModel*)self, row, column, (QModelIndex*)parent);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractListModel* self, QModelIndex* (*slot)(QAbstractListModel*, int, int, QModelIndex*) ```
void q_abstractlistmodel_on_index(void* self, QModelIndex* (*slot)(void*, int, int, void*)) {
    QAbstractListModel_OnIndex((QAbstractListModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractListModel* self, int row, int column, QModelIndex* parent ```
QModelIndex* q_abstractlistmodel_qbase_index(void* self, int row, int column, void* parent) {
    return QAbstractListModel_QBaseIndex((QAbstractListModel*)self, row, column, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractlistmodel.html#sibling)
///
/// ``` QAbstractListModel* self, int row, int column, QModelIndex* idx ```
QModelIndex* q_abstractlistmodel_sibling(void* self, int row, int column, void* idx) {
    return QAbstractListModel_Sibling((QAbstractListModel*)self, row, column, (QModelIndex*)idx);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractListModel* self, QModelIndex* (*slot)(QAbstractListModel*, int, int, QModelIndex*) ```
void q_abstractlistmodel_on_sibling(void* self, QModelIndex* (*slot)(void*, int, int, void*)) {
    QAbstractListModel_OnSibling((QAbstractListModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractListModel* self, int row, int column, QModelIndex* idx ```
QModelIndex* q_abstractlistmodel_qbase_sibling(void* self, int row, int column, void* idx) {
    return QAbstractListModel_QBaseSibling((QAbstractListModel*)self, row, column, (QModelIndex*)idx);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractlistmodel.html#dropMimeData)
///
/// ``` QAbstractListModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_abstractlistmodel_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent) {
    return QAbstractListModel_DropMimeData((QAbstractListModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractListModel* self, bool (*slot)(QAbstractListModel*, QMimeData*, enum Qt__DropAction, int, int, QModelIndex*) ```
void q_abstractlistmodel_on_drop_mime_data(void* self, bool (*slot)(void*, void*, int64_t, int, int, void*)) {
    QAbstractListModel_OnDropMimeData((QAbstractListModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractListModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_abstractlistmodel_qbase_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent) {
    return QAbstractListModel_QBaseDropMimeData((QAbstractListModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractlistmodel.html#flags)
///
/// ``` QAbstractListModel* self, QModelIndex* index ```
int64_t q_abstractlistmodel_flags(void* self, void* index) {
    return QAbstractListModel_Flags((QAbstractListModel*)self, (QModelIndex*)index);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractListModel* self, int64_t (*slot)(QAbstractListModel*, QModelIndex*) ```
void q_abstractlistmodel_on_flags(void* self, int64_t (*slot)(void*, void*)) {
    QAbstractListModel_OnFlags((QAbstractListModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractListModel* self, QModelIndex* index ```
int64_t q_abstractlistmodel_qbase_flags(void* self, void* index) {
    return QAbstractListModel_QBaseFlags((QAbstractListModel*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_abstractlistmodel_tr2(const char* s, const char* c) {
    libqt_string _str = QAbstractListModel_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_abstractlistmodel_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QAbstractListModel_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// ``` QAbstractListModel* self, int row, int column ```
bool q_abstractlistmodel_has_index(void* self, int row, int column) {
    return QAbstractItemModel_HasIndex((QAbstractItemModel*)self, row, column);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
///
/// ``` QAbstractListModel* self, QModelIndex* child ```
QModelIndex* q_abstractlistmodel_parent(void* self, void* child) {
    return QAbstractItemModel_Parent((QAbstractItemModel*)self, (QModelIndex*)child);
}

/// Inherited from QAbstractItemModel
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, QModelIndex* (*slot)(QAbstractItemModel*, QModelIndex*) ```
void q_abstractlistmodel_on_parent(void* self, QModelIndex* (*slot)(void*, void*)) {
    QAbstractItemModel_OnParent((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// Base class method implementation
///
/// ``` QAbstractListModel* self, QModelIndex* child ```
QModelIndex* q_abstractlistmodel_qbase_parent(void* self, void* child) {
    return QAbstractItemModel_QBaseParent((QAbstractItemModel*)self, (QModelIndex*)child);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnCount)
///
/// ``` QAbstractListModel* self, QModelIndex* parent ```
int32_t q_abstractlistmodel_column_count(void* self, void* parent) {
    return QAbstractItemModel_ColumnCount((QAbstractItemModel*)self, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, int32_t (*slot)(QAbstractItemModel*, QModelIndex*) ```
void q_abstractlistmodel_on_column_count(void* self, int32_t (*slot)(void*, void*)) {
    QAbstractItemModel_OnColumnCount((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// Base class method implementation
///
/// ``` QAbstractListModel* self, QModelIndex* parent ```
int32_t q_abstractlistmodel_qbase_column_count(void* self, void* parent) {
    return QAbstractItemModel_QBaseColumnCount((QAbstractItemModel*)self, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// ``` QAbstractListModel* self, QModelIndex* parent ```
bool q_abstractlistmodel_has_children(void* self, void* parent) {
    return QAbstractItemModel_HasChildren((QAbstractItemModel*)self, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemModel* self, bool (*slot)(QAbstractItemModel*, QModelIndex*) ```
void q_abstractlistmodel_on_has_children(void* self, bool (*slot)(void*, void*)) {
    QAbstractItemModel_OnHasChildren((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// Base class method implementation
///
/// ``` QAbstractListModel* self, QModelIndex* parent ```
bool q_abstractlistmodel_qbase_has_children(void* self, void* parent) {
    return QAbstractItemModel_QBaseHasChildren((QAbstractItemModel*)self, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// ``` QAbstractListModel* self, int row ```
bool q_abstractlistmodel_insert_row(void* self, int row) {
    return QAbstractItemModel_InsertRow((QAbstractItemModel*)self, row);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// ``` QAbstractListModel* self, int column ```
bool q_abstractlistmodel_insert_column(void* self, int column) {
    return QAbstractItemModel_InsertColumn((QAbstractItemModel*)self, column);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// ``` QAbstractListModel* self, int row ```
bool q_abstractlistmodel_remove_row(void* self, int row) {
    return QAbstractItemModel_RemoveRow((QAbstractItemModel*)self, row);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// ``` QAbstractListModel* self, int column ```
bool q_abstractlistmodel_remove_column(void* self, int column) {
    return QAbstractItemModel_RemoveColumn((QAbstractItemModel*)self, column);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
///
/// ``` QAbstractListModel* self, QModelIndex* sourceParent, int sourceRow, QModelIndex* destinationParent, int destinationChild ```
bool q_abstractlistmodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveRow((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceRow, (QModelIndex*)destinationParent, destinationChild);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
///
/// ``` QAbstractListModel* self, QModelIndex* sourceParent, int sourceColumn, QModelIndex* destinationParent, int destinationChild ```
bool q_abstractlistmodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveColumn((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceColumn, (QModelIndex*)destinationParent, destinationChild);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// ``` QAbstractListModel* self, QModelIndex* index ```
bool q_abstractlistmodel_check_index(void* self, void* index) {
    return QAbstractItemModel_CheckIndex((QAbstractItemModel*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// ``` QAbstractListModel* self, QModelIndex* topLeft, QModelIndex* bottomRight ```
void q_abstractlistmodel_data_changed(void* self, void* topLeft, void* bottomRight) {
    QAbstractItemModel_DataChanged((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight);
}

/// Inherited from QAbstractItemModel
///
/// ``` QAbstractListModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, QModelIndex*) ```
void q_abstractlistmodel_on_data_changed(void* self, void (*slot)(void*, void*, void*)) {
    QAbstractItemModel_Connect_DataChanged((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// ``` QAbstractListModel* self, enum Qt__Orientation orientation, int first, int last ```
void q_abstractlistmodel_header_data_changed(void* self, int64_t orientation, int first, int last) {
    QAbstractItemModel_HeaderDataChanged((QAbstractItemModel*)self, orientation, first, last);
}

/// Inherited from QAbstractItemModel
///
/// ``` QAbstractListModel* self, void (*slot)(QAbstractItemModel*, enum Qt__Orientation, int, int) ```
void q_abstractlistmodel_on_header_data_changed(void* self, void (*slot)(void*, int64_t, int, int)) {
    QAbstractItemModel_Connect_HeaderDataChanged((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QAbstractListModel* self ```
void q_abstractlistmodel_layout_changed(void* self) {
    QAbstractItemModel_LayoutChanged((QAbstractItemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// ``` QAbstractListModel* self, void (*slot)(QAbstractItemModel*) ```
void q_abstractlistmodel_on_layout_changed(void* self, void (*slot)(void*)) {
    QAbstractItemModel_Connect_LayoutChanged((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QAbstractListModel* self ```
void q_abstractlistmodel_layout_about_to_be_changed(void* self) {
    QAbstractItemModel_LayoutAboutToBeChanged((QAbstractItemModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// ``` QAbstractListModel* self, void (*slot)(QAbstractItemModel*) ```
void q_abstractlistmodel_on_layout_about_to_be_changed(void* self, void (*slot)(void*)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// ``` QAbstractListModel* self, int row, int column, QModelIndex* parent ```
bool q_abstractlistmodel_has_index3(void* self, int row, int column, void* parent) {
    return QAbstractItemModel_HasIndex3((QAbstractItemModel*)self, row, column, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// ``` QAbstractListModel* self, int row, QModelIndex* parent ```
bool q_abstractlistmodel_insert_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_InsertRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// ``` QAbstractListModel* self, int column, QModelIndex* parent ```
bool q_abstractlistmodel_insert_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_InsertColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// ``` QAbstractListModel* self, int row, QModelIndex* parent ```
bool q_abstractlistmodel_remove_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_RemoveRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// ``` QAbstractListModel* self, int column, QModelIndex* parent ```
bool q_abstractlistmodel_remove_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_RemoveColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// ``` QAbstractListModel* self, QModelIndex* index, int options ```
bool q_abstractlistmodel_check_index2(void* self, void* index, int64_t options) {
    return QAbstractItemModel_CheckIndex2((QAbstractItemModel*)self, (QModelIndex*)index, options);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// ``` QAbstractListModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, int* roles[] ```
void q_abstractlistmodel_data_changed3(void* self, void* topLeft, void* bottomRight, int* roles[]) {
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
/// ``` QAbstractListModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, QModelIndex*, int*[]) ```
void q_abstractlistmodel_on_data_changed3(void* self, void (*slot)(void*, void*, void*, int*)) {
    QAbstractItemModel_Connect_DataChanged3((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QAbstractListModel* self, QPersistentModelIndex* parents[] ```
void q_abstractlistmodel_layout_changed1(void* self, void* parents[]) {
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
/// ``` QAbstractListModel* self, void (*slot)(QAbstractItemModel*, QPersistentModelIndex*[]) ```
void q_abstractlistmodel_on_layout_changed1(void* self, void (*slot)(void*, void*)) {
    QAbstractItemModel_Connect_LayoutChanged1((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QAbstractListModel* self, QPersistentModelIndex* parents[], enum QAbstractItemModel__LayoutChangeHint hint ```
void q_abstractlistmodel_layout_changed2(void* self, void* parents[], int64_t hint) {
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
/// ``` QAbstractListModel* self, void (*slot)(QAbstractItemModel*, QPersistentModelIndex*[], enum QAbstractItemModel__LayoutChangeHint) ```
void q_abstractlistmodel_on_layout_changed2(void* self, void (*slot)(void*, void*, int64_t)) {
    QAbstractItemModel_Connect_LayoutChanged2((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QAbstractListModel* self, QPersistentModelIndex* parents[] ```
void q_abstractlistmodel_layout_about_to_be_changed1(void* self, void* parents[]) {
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
/// ``` QAbstractListModel* self, void (*slot)(QAbstractItemModel*, QPersistentModelIndex*[]) ```
void q_abstractlistmodel_on_layout_about_to_be_changed1(void* self, void (*slot)(void*, void*)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged1((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QAbstractListModel* self, QPersistentModelIndex* parents[], enum QAbstractItemModel__LayoutChangeHint hint ```
void q_abstractlistmodel_layout_about_to_be_changed2(void* self, void* parents[], int64_t hint) {
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
/// ``` QAbstractListModel* self, void (*slot)(QAbstractItemModel*, QPersistentModelIndex*[], enum QAbstractItemModel__LayoutChangeHint) ```
void q_abstractlistmodel_on_layout_about_to_be_changed2(void* self, void (*slot)(void*, void*, int64_t)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged2((QAbstractItemModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QAbstractListModel* self ```
const char* q_abstractlistmodel_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QAbstractListModel* self, const char* name ```
void q_abstractlistmodel_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QAbstractListModel* self ```
bool q_abstractlistmodel_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QAbstractListModel* self ```
bool q_abstractlistmodel_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QAbstractListModel* self ```
bool q_abstractlistmodel_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QAbstractListModel* self ```
bool q_abstractlistmodel_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QAbstractListModel* self, bool b ```
bool q_abstractlistmodel_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QAbstractListModel* self ```
QThread* q_abstractlistmodel_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAbstractListModel* self, QThread* thread ```
void q_abstractlistmodel_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAbstractListModel* self, int interval ```
int32_t q_abstractlistmodel_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAbstractListModel* self, int id ```
void q_abstractlistmodel_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QAbstractListModel* self ```
libqt_list /* of QObject* */ q_abstractlistmodel_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QAbstractListModel* self, QObject* parent ```
void q_abstractlistmodel_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QAbstractListModel* self, QObject* filterObj ```
void q_abstractlistmodel_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QAbstractListModel* self, QObject* obj ```
void q_abstractlistmodel_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_abstractlistmodel_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAbstractListModel* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_abstractlistmodel_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_abstractlistmodel_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_abstractlistmodel_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QAbstractListModel* self ```
void q_abstractlistmodel_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QAbstractListModel* self ```
void q_abstractlistmodel_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QAbstractListModel* self, const char* name, QVariant* value ```
bool q_abstractlistmodel_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QAbstractListModel* self, const char* name ```
QVariant* q_abstractlistmodel_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QAbstractListModel* self ```
const char** q_abstractlistmodel_dynamic_property_names(void* self) {
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
/// ``` QAbstractListModel* self ```
QBindingStorage* q_abstractlistmodel_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAbstractListModel* self ```
QBindingStorage* q_abstractlistmodel_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractListModel* self ```
void q_abstractlistmodel_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QAbstractListModel* self, void (*slot)(QObject*) ```
void q_abstractlistmodel_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QAbstractListModel* self, const char* classname ```
bool q_abstractlistmodel_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QAbstractListModel* self ```
void q_abstractlistmodel_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAbstractListModel* self, int interval, enum Qt__TimerType timerType ```
int32_t q_abstractlistmodel_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_abstractlistmodel_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAbstractListModel* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_abstractlistmodel_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractListModel* self, QObject* param1 ```
void q_abstractlistmodel_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QAbstractListModel* self, void (*slot)(QObject*, QObject*) ```
void q_abstractlistmodel_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowCount)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* parent ```
int32_t q_abstractlistmodel_row_count(void* self, void* parent) {
    return QAbstractListModel_RowCount((QAbstractListModel*)self, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* parent ```
int32_t q_abstractlistmodel_qbase_row_count(void* self, void* parent) {
    return QAbstractListModel_QBaseRowCount((QAbstractListModel*)self, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, int32_t (*slot)(QAbstractListModel*, QModelIndex*) ```
void q_abstractlistmodel_on_row_count(void* self, int32_t (*slot)(void*, void*)) {
    QAbstractListModel_OnRowCount((QAbstractListModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#data)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* index, int role ```
QVariant* q_abstractlistmodel_data(void* self, void* index, int role) {
    return QAbstractListModel_Data((QAbstractListModel*)self, (QModelIndex*)index, role);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* index, int role ```
QVariant* q_abstractlistmodel_qbase_data(void* self, void* index, int role) {
    return QAbstractListModel_QBaseData((QAbstractListModel*)self, (QModelIndex*)index, role);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, QVariant* (*slot)(QAbstractListModel*, QModelIndex*, int) ```
void q_abstractlistmodel_on_data(void* self, QVariant* (*slot)(void*, void*, int)) {
    QAbstractListModel_OnData((QAbstractListModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* index, QVariant* value, int role ```
bool q_abstractlistmodel_set_data(void* self, void* index, void* value, int role) {
    return QAbstractListModel_SetData((QAbstractListModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* index, QVariant* value, int role ```
bool q_abstractlistmodel_qbase_set_data(void* self, void* index, void* value, int role) {
    return QAbstractListModel_QBaseSetData((QAbstractListModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, bool (*slot)(QAbstractListModel*, QModelIndex*, QVariant*, int) ```
void q_abstractlistmodel_on_set_data(void* self, bool (*slot)(void*, void*, void*, int)) {
    QAbstractListModel_OnSetData((QAbstractListModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, int section, enum Qt__Orientation orientation, int role ```
QVariant* q_abstractlistmodel_header_data(void* self, int section, int64_t orientation, int role) {
    return QAbstractListModel_HeaderData((QAbstractListModel*)self, section, orientation, role);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, int section, enum Qt__Orientation orientation, int role ```
QVariant* q_abstractlistmodel_qbase_header_data(void* self, int section, int64_t orientation, int role) {
    return QAbstractListModel_QBaseHeaderData((QAbstractListModel*)self, section, orientation, role);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, QVariant* (*slot)(QAbstractListModel*, int, enum Qt__Orientation, int) ```
void q_abstractlistmodel_on_header_data(void* self, QVariant* (*slot)(void*, int, int64_t, int)) {
    QAbstractListModel_OnHeaderData((QAbstractListModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role ```
bool q_abstractlistmodel_set_header_data(void* self, int section, int64_t orientation, void* value, int role) {
    return QAbstractListModel_SetHeaderData((QAbstractListModel*)self, section, orientation, (QVariant*)value, role);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role ```
bool q_abstractlistmodel_qbase_set_header_data(void* self, int section, int64_t orientation, void* value, int role) {
    return QAbstractListModel_QBaseSetHeaderData((QAbstractListModel*)self, section, orientation, (QVariant*)value, role);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, bool (*slot)(QAbstractListModel*, int, enum Qt__Orientation, QVariant*, int) ```
void q_abstractlistmodel_on_set_header_data(void* self, bool (*slot)(void*, int, int64_t, void*, int)) {
    QAbstractListModel_OnSetHeaderData((QAbstractListModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* index ```
libqt_map /* of int to QVariant* */ q_abstractlistmodel_item_data(void* self, void* index) {
    return QAbstractListModel_ItemData((QAbstractListModel*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* index ```
libqt_map /* of int to QVariant* */ q_abstractlistmodel_qbase_item_data(void* self, void* index) {
    return QAbstractListModel_QBaseItemData((QAbstractListModel*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, libqt_map /* of int to QVariant* */ (*slot)(QAbstractListModel*, QModelIndex*) ```
void q_abstractlistmodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*slot)(void*, void*)) {
    QAbstractListModel_OnItemData((QAbstractListModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ roles ```
bool q_abstractlistmodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    return QAbstractListModel_SetItemData((QAbstractListModel*)self, (QModelIndex*)index, roles);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ roles ```
bool q_abstractlistmodel_qbase_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    return QAbstractListModel_QBaseSetItemData((QAbstractListModel*)self, (QModelIndex*)index, roles);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, bool (*slot)(QAbstractListModel*, QModelIndex*, libqt_map /* of int to QVariant* */) ```
void q_abstractlistmodel_on_set_item_data(void* self, bool (*slot)(void*, void*, libqt_map /* of int to QVariant* */)) {
    QAbstractListModel_OnSetItemData((QAbstractListModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* index ```
bool q_abstractlistmodel_clear_item_data(void* self, void* index) {
    return QAbstractListModel_ClearItemData((QAbstractListModel*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* index ```
bool q_abstractlistmodel_qbase_clear_item_data(void* self, void* index) {
    return QAbstractListModel_QBaseClearItemData((QAbstractListModel*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, bool (*slot)(QAbstractListModel*, QModelIndex*) ```
void q_abstractlistmodel_on_clear_item_data(void* self, bool (*slot)(void*, void*)) {
    QAbstractListModel_OnClearItemData((QAbstractListModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self ```
const char** q_abstractlistmodel_mime_types(void* self) {
    libqt_list _arr = QAbstractListModel_MimeTypes((QAbstractListModel*)self);
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
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self ```
const char** q_abstractlistmodel_qbase_mime_types(void* self) {
    libqt_list _arr = QAbstractListModel_QBaseMimeTypes((QAbstractListModel*)self);
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
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, const char** (*slot)() ```
void q_abstractlistmodel_on_mime_types(void* self, const char** (*slot)()) {
    QAbstractListModel_OnMimeTypes((QAbstractListModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* indexes[] ```
QMimeData* q_abstractlistmodel_mime_data(void* self, void* indexes[]) {
    QModelIndex** indexes_arr = (QModelIndex**)indexes;
    size_t indexes_len = 0;
    while (indexes_arr[indexes_len] != NULL) {
        indexes_len++;
    }
    libqt_list indexes_list = {
        .len = indexes_len,
        .data = {(QModelIndex*)indexes},
    };
    return QAbstractListModel_MimeData((QAbstractListModel*)self, indexes_list);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* indexes[] ```
QMimeData* q_abstractlistmodel_qbase_mime_data(void* self, void* indexes[]) {
    QModelIndex** indexes_arr = (QModelIndex**)indexes;
    size_t indexes_len = 0;
    while (indexes_arr[indexes_len] != NULL) {
        indexes_len++;
    }
    libqt_list indexes_list = {
        .len = indexes_len,
        .data = {(QModelIndex*)indexes},
    };
    return QAbstractListModel_QBaseMimeData((QAbstractListModel*)self, indexes_list);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, QMimeData* (*slot)(QAbstractListModel*, QModelIndex*[]) ```
void q_abstractlistmodel_on_mime_data(void* self, QMimeData* (*slot)(void*, void*)) {
    QAbstractListModel_OnMimeData((QAbstractListModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_abstractlistmodel_can_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent) {
    return QAbstractListModel_CanDropMimeData((QAbstractListModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_abstractlistmodel_qbase_can_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent) {
    return QAbstractListModel_QBaseCanDropMimeData((QAbstractListModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, bool (*slot)(QAbstractListModel*, QMimeData*, enum Qt__DropAction, int, int, QModelIndex*) ```
void q_abstractlistmodel_on_can_drop_mime_data(void* self, bool (*slot)(void*, void*, int64_t, int, int, void*)) {
    QAbstractListModel_OnCanDropMimeData((QAbstractListModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self ```
int64_t q_abstractlistmodel_supported_drop_actions(void* self) {
    return QAbstractListModel_SupportedDropActions((QAbstractListModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self ```
int64_t q_abstractlistmodel_qbase_supported_drop_actions(void* self) {
    return QAbstractListModel_QBaseSupportedDropActions((QAbstractListModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, int64_t (*slot)() ```
void q_abstractlistmodel_on_supported_drop_actions(void* self, int64_t (*slot)()) {
    QAbstractListModel_OnSupportedDropActions((QAbstractListModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self ```
int64_t q_abstractlistmodel_supported_drag_actions(void* self) {
    return QAbstractListModel_SupportedDragActions((QAbstractListModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self ```
int64_t q_abstractlistmodel_qbase_supported_drag_actions(void* self) {
    return QAbstractListModel_QBaseSupportedDragActions((QAbstractListModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, int64_t (*slot)() ```
void q_abstractlistmodel_on_supported_drag_actions(void* self, int64_t (*slot)()) {
    QAbstractListModel_OnSupportedDragActions((QAbstractListModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, int row, int count, QModelIndex* parent ```
bool q_abstractlistmodel_insert_rows(void* self, int row, int count, void* parent) {
    return QAbstractListModel_InsertRows((QAbstractListModel*)self, row, count, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, int row, int count, QModelIndex* parent ```
bool q_abstractlistmodel_qbase_insert_rows(void* self, int row, int count, void* parent) {
    return QAbstractListModel_QBaseInsertRows((QAbstractListModel*)self, row, count, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, bool (*slot)(QAbstractListModel*, int, int, QModelIndex*) ```
void q_abstractlistmodel_on_insert_rows(void* self, bool (*slot)(void*, int, int, void*)) {
    QAbstractListModel_OnInsertRows((QAbstractListModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, int column, int count, QModelIndex* parent ```
bool q_abstractlistmodel_insert_columns(void* self, int column, int count, void* parent) {
    return QAbstractListModel_InsertColumns((QAbstractListModel*)self, column, count, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, int column, int count, QModelIndex* parent ```
bool q_abstractlistmodel_qbase_insert_columns(void* self, int column, int count, void* parent) {
    return QAbstractListModel_QBaseInsertColumns((QAbstractListModel*)self, column, count, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, bool (*slot)(QAbstractListModel*, int, int, QModelIndex*) ```
void q_abstractlistmodel_on_insert_columns(void* self, bool (*slot)(void*, int, int, void*)) {
    QAbstractListModel_OnInsertColumns((QAbstractListModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, int row, int count, QModelIndex* parent ```
bool q_abstractlistmodel_remove_rows(void* self, int row, int count, void* parent) {
    return QAbstractListModel_RemoveRows((QAbstractListModel*)self, row, count, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, int row, int count, QModelIndex* parent ```
bool q_abstractlistmodel_qbase_remove_rows(void* self, int row, int count, void* parent) {
    return QAbstractListModel_QBaseRemoveRows((QAbstractListModel*)self, row, count, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, bool (*slot)(QAbstractListModel*, int, int, QModelIndex*) ```
void q_abstractlistmodel_on_remove_rows(void* self, bool (*slot)(void*, int, int, void*)) {
    QAbstractListModel_OnRemoveRows((QAbstractListModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, int column, int count, QModelIndex* parent ```
bool q_abstractlistmodel_remove_columns(void* self, int column, int count, void* parent) {
    return QAbstractListModel_RemoveColumns((QAbstractListModel*)self, column, count, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, int column, int count, QModelIndex* parent ```
bool q_abstractlistmodel_qbase_remove_columns(void* self, int column, int count, void* parent) {
    return QAbstractListModel_QBaseRemoveColumns((QAbstractListModel*)self, column, count, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, bool (*slot)(QAbstractListModel*, int, int, QModelIndex*) ```
void q_abstractlistmodel_on_remove_columns(void* self, bool (*slot)(void*, int, int, void*)) {
    QAbstractListModel_OnRemoveColumns((QAbstractListModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_abstractlistmodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return QAbstractListModel_MoveRows((QAbstractListModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_abstractlistmodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return QAbstractListModel_QBaseMoveRows((QAbstractListModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, bool (*slot)(QAbstractListModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_abstractlistmodel_on_move_rows(void* self, bool (*slot)(void*, void*, int, int, void*, int)) {
    QAbstractListModel_OnMoveRows((QAbstractListModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_abstractlistmodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return QAbstractListModel_MoveColumns((QAbstractListModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_abstractlistmodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return QAbstractListModel_QBaseMoveColumns((QAbstractListModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, bool (*slot)(QAbstractListModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_abstractlistmodel_on_move_columns(void* self, bool (*slot)(void*, void*, int, int, void*, int)) {
    QAbstractListModel_OnMoveColumns((QAbstractListModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* parent ```
void q_abstractlistmodel_fetch_more(void* self, void* parent) {
    QAbstractListModel_FetchMore((QAbstractListModel*)self, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* parent ```
void q_abstractlistmodel_qbase_fetch_more(void* self, void* parent) {
    QAbstractListModel_QBaseFetchMore((QAbstractListModel*)self, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, void (*slot)(QAbstractListModel*, QModelIndex*) ```
void q_abstractlistmodel_on_fetch_more(void* self, void (*slot)(void*, void*)) {
    QAbstractListModel_OnFetchMore((QAbstractListModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* parent ```
bool q_abstractlistmodel_can_fetch_more(void* self, void* parent) {
    return QAbstractListModel_CanFetchMore((QAbstractListModel*)self, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* parent ```
bool q_abstractlistmodel_qbase_can_fetch_more(void* self, void* parent) {
    return QAbstractListModel_QBaseCanFetchMore((QAbstractListModel*)self, (QModelIndex*)parent);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, bool (*slot)(QAbstractListModel*, QModelIndex*) ```
void q_abstractlistmodel_on_can_fetch_more(void* self, bool (*slot)(void*, void*)) {
    QAbstractListModel_OnCanFetchMore((QAbstractListModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, int column, enum Qt__SortOrder order ```
void q_abstractlistmodel_sort(void* self, int column, int64_t order) {
    QAbstractListModel_Sort((QAbstractListModel*)self, column, order);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, int column, enum Qt__SortOrder order ```
void q_abstractlistmodel_qbase_sort(void* self, int column, int64_t order) {
    QAbstractListModel_QBaseSort((QAbstractListModel*)self, column, order);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, void (*slot)(QAbstractListModel*, int, enum Qt__SortOrder) ```
void q_abstractlistmodel_on_sort(void* self, void (*slot)(void*, int, int64_t)) {
    QAbstractListModel_OnSort((QAbstractListModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* index ```
QModelIndex* q_abstractlistmodel_buddy(void* self, void* index) {
    return QAbstractListModel_Buddy((QAbstractListModel*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* index ```
QModelIndex* q_abstractlistmodel_qbase_buddy(void* self, void* index) {
    return QAbstractListModel_QBaseBuddy((QAbstractListModel*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* (*slot)(QAbstractListModel*, QModelIndex*) ```
void q_abstractlistmodel_on_buddy(void* self, QModelIndex* (*slot)(void*, void*)) {
    QAbstractListModel_OnBuddy((QAbstractListModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags ```
libqt_list /* of QModelIndex* */ q_abstractlistmodel_match(void* self, void* start, int role, void* value, int hits, int64_t flags) {
    libqt_list _arr = QAbstractListModel_Match((QAbstractListModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags ```
libqt_list /* of QModelIndex* */ q_abstractlistmodel_qbase_match(void* self, void* start, int role, void* value, int hits, int64_t flags) {
    libqt_list _arr = QAbstractListModel_QBaseMatch((QAbstractListModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, libqt_list /* of QModelIndex* */ (*slot)(QAbstractListModel*, QModelIndex*, int, QVariant*, int, int) ```
void q_abstractlistmodel_on_match(void* self, libqt_list /* of QModelIndex* */ (*slot)(void*, void*, int, void*, int, int64_t)) {
    QAbstractListModel_OnMatch((QAbstractListModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* index ```
QSize* q_abstractlistmodel_span(void* self, void* index) {
    return QAbstractListModel_Span((QAbstractListModel*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* index ```
QSize* q_abstractlistmodel_qbase_span(void* self, void* index) {
    return QAbstractListModel_QBaseSpan((QAbstractListModel*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, QSize* (*slot)(QAbstractListModel*, QModelIndex*) ```
void q_abstractlistmodel_on_span(void* self, QSize* (*slot)(void*, void*)) {
    QAbstractListModel_OnSpan((QAbstractListModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#roleNames)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self ```
libqt_map /* of int to char* */ q_abstractlistmodel_role_names(void* self) {
    return QAbstractListModel_RoleNames((QAbstractListModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self ```
libqt_map /* of int to char* */ q_abstractlistmodel_qbase_role_names(void* self) {
    return QAbstractListModel_QBaseRoleNames((QAbstractListModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, libqt_map /* of int to char* */ (*slot)() ```
void q_abstractlistmodel_on_role_names(void* self, libqt_map /* of int to char* */ (*slot)()) {
    QAbstractListModel_OnRoleNames((QAbstractListModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan ```
void q_abstractlistmodel_multi_data(void* self, void* index, void* roleDataSpan) {
    QAbstractListModel_MultiData((QAbstractListModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan ```
void q_abstractlistmodel_qbase_multi_data(void* self, void* index, void* roleDataSpan) {
    QAbstractListModel_QBaseMultiData((QAbstractListModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, void (*slot)(QAbstractListModel*, QModelIndex*, QModelRoleDataSpan*) ```
void q_abstractlistmodel_on_multi_data(void* self, void (*slot)(void*, void*, void*)) {
    QAbstractListModel_OnMultiData((QAbstractListModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self ```
bool q_abstractlistmodel_submit(void* self) {
    return QAbstractListModel_Submit((QAbstractListModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self ```
bool q_abstractlistmodel_qbase_submit(void* self) {
    return QAbstractListModel_QBaseSubmit((QAbstractListModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, bool (*slot)() ```
void q_abstractlistmodel_on_submit(void* self, bool (*slot)()) {
    QAbstractListModel_OnSubmit((QAbstractListModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self ```
void q_abstractlistmodel_revert(void* self) {
    QAbstractListModel_Revert((QAbstractListModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self ```
void q_abstractlistmodel_qbase_revert(void* self) {
    QAbstractListModel_QBaseRevert((QAbstractListModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, void (*slot)() ```
void q_abstractlistmodel_on_revert(void* self, void (*slot)()) {
    QAbstractListModel_OnRevert((QAbstractListModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self ```
void q_abstractlistmodel_reset_internal_data(void* self) {
    QAbstractListModel_ResetInternalData((QAbstractListModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self ```
void q_abstractlistmodel_qbase_reset_internal_data(void* self) {
    QAbstractListModel_QBaseResetInternalData((QAbstractListModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, void (*slot)() ```
void q_abstractlistmodel_on_reset_internal_data(void* self, void (*slot)()) {
    QAbstractListModel_OnResetInternalData((QAbstractListModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, QEvent* event ```
bool q_abstractlistmodel_event(void* self, void* event) {
    return QAbstractListModel_Event((QAbstractListModel*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, QEvent* event ```
bool q_abstractlistmodel_qbase_event(void* self, void* event) {
    return QAbstractListModel_QBaseEvent((QAbstractListModel*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, bool (*slot)(QAbstractListModel*, QEvent*) ```
void q_abstractlistmodel_on_event(void* self, bool (*slot)(void*, void*)) {
    QAbstractListModel_OnEvent((QAbstractListModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, QObject* watched, QEvent* event ```
bool q_abstractlistmodel_event_filter(void* self, void* watched, void* event) {
    return QAbstractListModel_EventFilter((QAbstractListModel*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, QObject* watched, QEvent* event ```
bool q_abstractlistmodel_qbase_event_filter(void* self, void* watched, void* event) {
    return QAbstractListModel_QBaseEventFilter((QAbstractListModel*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, bool (*slot)(QAbstractListModel*, QObject*, QEvent*) ```
void q_abstractlistmodel_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QAbstractListModel_OnEventFilter((QAbstractListModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, QTimerEvent* event ```
void q_abstractlistmodel_timer_event(void* self, void* event) {
    QAbstractListModel_TimerEvent((QAbstractListModel*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, QTimerEvent* event ```
void q_abstractlistmodel_qbase_timer_event(void* self, void* event) {
    QAbstractListModel_QBaseTimerEvent((QAbstractListModel*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, void (*slot)(QAbstractListModel*, QTimerEvent*) ```
void q_abstractlistmodel_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QAbstractListModel_OnTimerEvent((QAbstractListModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, QChildEvent* event ```
void q_abstractlistmodel_child_event(void* self, void* event) {
    QAbstractListModel_ChildEvent((QAbstractListModel*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, QChildEvent* event ```
void q_abstractlistmodel_qbase_child_event(void* self, void* event) {
    QAbstractListModel_QBaseChildEvent((QAbstractListModel*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, void (*slot)(QAbstractListModel*, QChildEvent*) ```
void q_abstractlistmodel_on_child_event(void* self, void (*slot)(void*, void*)) {
    QAbstractListModel_OnChildEvent((QAbstractListModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, QEvent* event ```
void q_abstractlistmodel_custom_event(void* self, void* event) {
    QAbstractListModel_CustomEvent((QAbstractListModel*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, QEvent* event ```
void q_abstractlistmodel_qbase_custom_event(void* self, void* event) {
    QAbstractListModel_QBaseCustomEvent((QAbstractListModel*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, void (*slot)(QAbstractListModel*, QEvent*) ```
void q_abstractlistmodel_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QAbstractListModel_OnCustomEvent((QAbstractListModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, QMetaMethod* signal ```
void q_abstractlistmodel_connect_notify(void* self, void* signal) {
    QAbstractListModel_ConnectNotify((QAbstractListModel*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, QMetaMethod* signal ```
void q_abstractlistmodel_qbase_connect_notify(void* self, void* signal) {
    QAbstractListModel_QBaseConnectNotify((QAbstractListModel*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, void (*slot)(QAbstractListModel*, QMetaMethod*) ```
void q_abstractlistmodel_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QAbstractListModel_OnConnectNotify((QAbstractListModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, QMetaMethod* signal ```
void q_abstractlistmodel_disconnect_notify(void* self, void* signal) {
    QAbstractListModel_DisconnectNotify((QAbstractListModel*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, QMetaMethod* signal ```
void q_abstractlistmodel_qbase_disconnect_notify(void* self, void* signal) {
    QAbstractListModel_QBaseDisconnectNotify((QAbstractListModel*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, void (*slot)(QAbstractListModel*, QMetaMethod*) ```
void q_abstractlistmodel_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QAbstractListModel_OnDisconnectNotify((QAbstractListModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, int row, int column ```
QModelIndex* q_abstractlistmodel_create_index(void* self, int row, int column) {
    return QAbstractListModel_CreateIndex((QAbstractListModel*)self, row, column);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, int row, int column ```
QModelIndex* q_abstractlistmodel_qbase_create_index(void* self, int row, int column) {
    return QAbstractListModel_QBaseCreateIndex((QAbstractListModel*)self, row, column);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* (*slot)(QAbstractListModel*, int, int) ```
void q_abstractlistmodel_on_create_index(void* self, QModelIndex* (*slot)(void*, int, int)) {
    QAbstractListModel_OnCreateIndex((QAbstractListModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* indexes[], QDataStream* stream ```
void q_abstractlistmodel_encode_data(void* self, void* indexes[], void* stream) {
    QModelIndex** indexes_arr = (QModelIndex**)indexes;
    size_t indexes_len = 0;
    while (indexes_arr[indexes_len] != NULL) {
        indexes_len++;
    }
    libqt_list indexes_list = {
        .len = indexes_len,
        .data = {(QModelIndex*)indexes},
    };
    QAbstractListModel_EncodeData((QAbstractListModel*)self, indexes_list, (QDataStream*)stream);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* indexes[], QDataStream* stream ```
void q_abstractlistmodel_qbase_encode_data(void* self, void* indexes[], void* stream) {
    QModelIndex** indexes_arr = (QModelIndex**)indexes;
    size_t indexes_len = 0;
    while (indexes_arr[indexes_len] != NULL) {
        indexes_len++;
    }
    libqt_list indexes_list = {
        .len = indexes_len,
        .data = {(QModelIndex*)indexes},
    };
    QAbstractListModel_QBaseEncodeData((QAbstractListModel*)self, indexes_list, (QDataStream*)stream);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, void (*slot)(QAbstractListModel*, QModelIndex*[], QDataStream*) ```
void q_abstractlistmodel_on_encode_data(void* self, void (*slot)(void*, void*, void*)) {
    QAbstractListModel_OnEncodeData((QAbstractListModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, int row, int column, QModelIndex* parent, QDataStream* stream ```
bool q_abstractlistmodel_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return QAbstractListModel_DecodeData((QAbstractListModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, int row, int column, QModelIndex* parent, QDataStream* stream ```
bool q_abstractlistmodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return QAbstractListModel_QBaseDecodeData((QAbstractListModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, bool (*slot)(QAbstractListModel*, int, int, QModelIndex*, QDataStream*) ```
void q_abstractlistmodel_on_decode_data(void* self, bool (*slot)(void*, int, int, void*, void*)) {
    QAbstractListModel_OnDecodeData((QAbstractListModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* parent, int first, int last ```
void q_abstractlistmodel_begin_insert_rows(void* self, void* parent, int first, int last) {
    QAbstractListModel_BeginInsertRows((QAbstractListModel*)self, (QModelIndex*)parent, first, last);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* parent, int first, int last ```
void q_abstractlistmodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last) {
    QAbstractListModel_QBaseBeginInsertRows((QAbstractListModel*)self, (QModelIndex*)parent, first, last);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, void (*slot)(QAbstractListModel*, QModelIndex*, int, int) ```
void q_abstractlistmodel_on_begin_insert_rows(void* self, void (*slot)(void*, void*, int, int)) {
    QAbstractListModel_OnBeginInsertRows((QAbstractListModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self ```
void q_abstractlistmodel_end_insert_rows(void* self) {
    QAbstractListModel_EndInsertRows((QAbstractListModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self ```
void q_abstractlistmodel_qbase_end_insert_rows(void* self) {
    QAbstractListModel_QBaseEndInsertRows((QAbstractListModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, void (*slot)() ```
void q_abstractlistmodel_on_end_insert_rows(void* self, void (*slot)()) {
    QAbstractListModel_OnEndInsertRows((QAbstractListModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* parent, int first, int last ```
void q_abstractlistmodel_begin_remove_rows(void* self, void* parent, int first, int last) {
    QAbstractListModel_BeginRemoveRows((QAbstractListModel*)self, (QModelIndex*)parent, first, last);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* parent, int first, int last ```
void q_abstractlistmodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last) {
    QAbstractListModel_QBaseBeginRemoveRows((QAbstractListModel*)self, (QModelIndex*)parent, first, last);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, void (*slot)(QAbstractListModel*, QModelIndex*, int, int) ```
void q_abstractlistmodel_on_begin_remove_rows(void* self, void (*slot)(void*, void*, int, int)) {
    QAbstractListModel_OnBeginRemoveRows((QAbstractListModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self ```
void q_abstractlistmodel_end_remove_rows(void* self) {
    QAbstractListModel_EndRemoveRows((QAbstractListModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self ```
void q_abstractlistmodel_qbase_end_remove_rows(void* self) {
    QAbstractListModel_QBaseEndRemoveRows((QAbstractListModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, void (*slot)() ```
void q_abstractlistmodel_on_end_remove_rows(void* self, void (*slot)()) {
    QAbstractListModel_OnEndRemoveRows((QAbstractListModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow ```
bool q_abstractlistmodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return QAbstractListModel_BeginMoveRows((QAbstractListModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow ```
bool q_abstractlistmodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return QAbstractListModel_QBaseBeginMoveRows((QAbstractListModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, bool (*slot)(QAbstractListModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_abstractlistmodel_on_begin_move_rows(void* self, bool (*slot)(void*, void*, int, int, void*, int)) {
    QAbstractListModel_OnBeginMoveRows((QAbstractListModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self ```
void q_abstractlistmodel_end_move_rows(void* self) {
    QAbstractListModel_EndMoveRows((QAbstractListModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self ```
void q_abstractlistmodel_qbase_end_move_rows(void* self) {
    QAbstractListModel_QBaseEndMoveRows((QAbstractListModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, void (*slot)() ```
void q_abstractlistmodel_on_end_move_rows(void* self, void (*slot)()) {
    QAbstractListModel_OnEndMoveRows((QAbstractListModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* parent, int first, int last ```
void q_abstractlistmodel_begin_insert_columns(void* self, void* parent, int first, int last) {
    QAbstractListModel_BeginInsertColumns((QAbstractListModel*)self, (QModelIndex*)parent, first, last);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* parent, int first, int last ```
void q_abstractlistmodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last) {
    QAbstractListModel_QBaseBeginInsertColumns((QAbstractListModel*)self, (QModelIndex*)parent, first, last);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, void (*slot)(QAbstractListModel*, QModelIndex*, int, int) ```
void q_abstractlistmodel_on_begin_insert_columns(void* self, void (*slot)(void*, void*, int, int)) {
    QAbstractListModel_OnBeginInsertColumns((QAbstractListModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self ```
void q_abstractlistmodel_end_insert_columns(void* self) {
    QAbstractListModel_EndInsertColumns((QAbstractListModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self ```
void q_abstractlistmodel_qbase_end_insert_columns(void* self) {
    QAbstractListModel_QBaseEndInsertColumns((QAbstractListModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, void (*slot)() ```
void q_abstractlistmodel_on_end_insert_columns(void* self, void (*slot)()) {
    QAbstractListModel_OnEndInsertColumns((QAbstractListModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* parent, int first, int last ```
void q_abstractlistmodel_begin_remove_columns(void* self, void* parent, int first, int last) {
    QAbstractListModel_BeginRemoveColumns((QAbstractListModel*)self, (QModelIndex*)parent, first, last);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* parent, int first, int last ```
void q_abstractlistmodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last) {
    QAbstractListModel_QBaseBeginRemoveColumns((QAbstractListModel*)self, (QModelIndex*)parent, first, last);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, void (*slot)(QAbstractListModel*, QModelIndex*, int, int) ```
void q_abstractlistmodel_on_begin_remove_columns(void* self, void (*slot)(void*, void*, int, int)) {
    QAbstractListModel_OnBeginRemoveColumns((QAbstractListModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self ```
void q_abstractlistmodel_end_remove_columns(void* self) {
    QAbstractListModel_EndRemoveColumns((QAbstractListModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self ```
void q_abstractlistmodel_qbase_end_remove_columns(void* self) {
    QAbstractListModel_QBaseEndRemoveColumns((QAbstractListModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, void (*slot)() ```
void q_abstractlistmodel_on_end_remove_columns(void* self, void (*slot)()) {
    QAbstractListModel_OnEndRemoveColumns((QAbstractListModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn ```
bool q_abstractlistmodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return QAbstractListModel_BeginMoveColumns((QAbstractListModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn ```
bool q_abstractlistmodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return QAbstractListModel_QBaseBeginMoveColumns((QAbstractListModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, bool (*slot)(QAbstractListModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_abstractlistmodel_on_begin_move_columns(void* self, bool (*slot)(void*, void*, int, int, void*, int)) {
    QAbstractListModel_OnBeginMoveColumns((QAbstractListModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self ```
void q_abstractlistmodel_end_move_columns(void* self) {
    QAbstractListModel_EndMoveColumns((QAbstractListModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self ```
void q_abstractlistmodel_qbase_end_move_columns(void* self) {
    QAbstractListModel_QBaseEndMoveColumns((QAbstractListModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, void (*slot)() ```
void q_abstractlistmodel_on_end_move_columns(void* self, void (*slot)()) {
    QAbstractListModel_OnEndMoveColumns((QAbstractListModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self ```
void q_abstractlistmodel_begin_reset_model(void* self) {
    QAbstractListModel_BeginResetModel((QAbstractListModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self ```
void q_abstractlistmodel_qbase_begin_reset_model(void* self) {
    QAbstractListModel_QBaseBeginResetModel((QAbstractListModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, void (*slot)() ```
void q_abstractlistmodel_on_begin_reset_model(void* self, void (*slot)()) {
    QAbstractListModel_OnBeginResetModel((QAbstractListModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self ```
void q_abstractlistmodel_end_reset_model(void* self) {
    QAbstractListModel_EndResetModel((QAbstractListModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self ```
void q_abstractlistmodel_qbase_end_reset_model(void* self) {
    QAbstractListModel_QBaseEndResetModel((QAbstractListModel*)self);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, void (*slot)() ```
void q_abstractlistmodel_on_end_reset_model(void* self, void (*slot)()) {
    QAbstractListModel_OnEndResetModel((QAbstractListModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* from, QModelIndex* to ```
void q_abstractlistmodel_change_persistent_index(void* self, void* from, void* to) {
    QAbstractListModel_ChangePersistentIndex((QAbstractListModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* from, QModelIndex* to ```
void q_abstractlistmodel_qbase_change_persistent_index(void* self, void* from, void* to) {
    QAbstractListModel_QBaseChangePersistentIndex((QAbstractListModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, void (*slot)(QAbstractListModel*, QModelIndex*, QModelIndex*) ```
void q_abstractlistmodel_on_change_persistent_index(void* self, void (*slot)(void*, void*, void*)) {
    QAbstractListModel_OnChangePersistentIndex((QAbstractListModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* from[], QModelIndex* to[] ```
void q_abstractlistmodel_change_persistent_index_list(void* self, void* from[], void* to[]) {
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
    QAbstractListModel_ChangePersistentIndexList((QAbstractListModel*)self, from_list, to_list);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, QModelIndex* from[], QModelIndex* to[] ```
void q_abstractlistmodel_qbase_change_persistent_index_list(void* self, void* from[], void* to[]) {
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
    QAbstractListModel_QBaseChangePersistentIndexList((QAbstractListModel*)self, from_list, to_list);
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, void (*slot)(QAbstractListModel*, QModelIndex*[], QModelIndex*[]) ```
void q_abstractlistmodel_on_change_persistent_index_list(void* self, void (*slot)(void*, void*, void*)) {
    QAbstractListModel_OnChangePersistentIndexList((QAbstractListModel*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self ```
libqt_list /* of QModelIndex* */ q_abstractlistmodel_persistent_index_list(void* self) {
    libqt_list _arr = QAbstractListModel_PersistentIndexList((QAbstractListModel*)self);
    return _arr;
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self ```
libqt_list /* of QModelIndex* */ q_abstractlistmodel_qbase_persistent_index_list(void* self) {
    libqt_list _arr = QAbstractListModel_QBasePersistentIndexList((QAbstractListModel*)self);
    return _arr;
}

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, libqt_list /* of QModelIndex* */ (*slot)() ```
void q_abstractlistmodel_on_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ (*slot)()) {
    QAbstractListModel_OnPersistentIndexList((QAbstractListModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self ```
QObject* q_abstractlistmodel_sender(void* self) {
    return QAbstractListModel_Sender((QAbstractListModel*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self ```
QObject* q_abstractlistmodel_qbase_sender(void* self) {
    return QAbstractListModel_QBaseSender((QAbstractListModel*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, QObject* (*slot)() ```
void q_abstractlistmodel_on_sender(void* self, QObject* (*slot)()) {
    QAbstractListModel_OnSender((QAbstractListModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self ```
int32_t q_abstractlistmodel_sender_signal_index(void* self) {
    return QAbstractListModel_SenderSignalIndex((QAbstractListModel*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self ```
int32_t q_abstractlistmodel_qbase_sender_signal_index(void* self) {
    return QAbstractListModel_QBaseSenderSignalIndex((QAbstractListModel*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, int32_t (*slot)() ```
void q_abstractlistmodel_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QAbstractListModel_OnSenderSignalIndex((QAbstractListModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, const char* signal ```
int32_t q_abstractlistmodel_receivers(void* self, const char* signal) {
    return QAbstractListModel_Receivers((QAbstractListModel*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, const char* signal ```
int32_t q_abstractlistmodel_qbase_receivers(void* self, const char* signal) {
    return QAbstractListModel_QBaseReceivers((QAbstractListModel*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, int32_t (*slot)(QAbstractListModel*, const char*) ```
void q_abstractlistmodel_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QAbstractListModel_OnReceivers((QAbstractListModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractListModel* self, QMetaMethod* signal ```
bool q_abstractlistmodel_is_signal_connected(void* self, void* signal) {
    return QAbstractListModel_IsSignalConnected((QAbstractListModel*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractListModel* self, QMetaMethod* signal ```
bool q_abstractlistmodel_qbase_is_signal_connected(void* self, void* signal) {
    return QAbstractListModel_QBaseIsSignalConnected((QAbstractListModel*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractListModel* self, bool (*slot)(QAbstractListModel*, QMetaMethod*) ```
void q_abstractlistmodel_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QAbstractListModel_OnIsSignalConnected((QAbstractListModel*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QAbstractListModel* self ```
void q_abstractlistmodel_delete(void* self) {
    QAbstractListModel_Delete((QAbstractListModel*)(self));
}