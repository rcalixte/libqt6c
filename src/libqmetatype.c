#include "libqbytearrayview.hpp"
#include "libqdatastream.hpp"
#include "libqdebug.hpp"
#include "libqmetaobject.hpp"
#include "libqcompare.hpp"
#include "libqmetatype.hpp"
#include "libqmetatype.h"

/// https://doc.qt.io/qt-6/qmetatype.html

/// q_metatype_new constructs a new QMetaType object.
///
/// ``` QMetaType* other ```
QMetaType* q_metatype_new(void* other) {
    return QMetaType_new((QMetaType*)other);
}

/// q_metatype_new2 constructs a new QMetaType object and invalidates the source QMetaType object.
///
/// ``` QMetaType* other ```
QMetaType* q_metatype_new2(void* other) {
    return QMetaType_new2((QMetaType*)other);
}

/// q_metatype_new3 constructs a new QMetaType object.
///
/// ``` int typeVal ```
QMetaType* q_metatype_new3(int typeVal) {
    return QMetaType_new3(typeVal);
}

/// q_metatype_new4 constructs a new QMetaType object.
///
///
QMetaType* q_metatype_new4() {
    return QMetaType_new4();
}

/// q_metatype_new5 constructs a new QMetaType object.
///
/// ``` QMetaType* param1 ```
QMetaType* q_metatype_new5(void* param1) {
    return QMetaType_new5((QMetaType*)param1);
}

/// q_metatype_copy_assign shallow copies `other` into `self`.
///
/// ``` QMetaType* self, QMetaType* other ```
void q_metatype_copy_assign(void* self, void* other) {
    QMetaType_CopyAssign((QMetaType*)self, (QMetaType*)other);
}

/// q_metatype_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QMetaType* self, QMetaType* other ```
void q_metatype_move_assign(void* self, void* other) {
    QMetaType_MoveAssign((QMetaType*)self, (QMetaType*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#registerNormalizedTypedef)
///
/// ``` const char* normalizedTypeName, QMetaType* typeVal ```
void q_metatype_register_normalized_typedef(const char* normalizedTypeName, void* typeVal) {
    QMetaType_RegisterNormalizedTypedef(qstring(normalizedTypeName), (QMetaType*)typeVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#type)
///
/// ``` const char* typeName ```
int32_t q_metatype_type(const char* typeName) {
    return QMetaType_Type(typeName);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#type)
///
/// ``` const char* typeName ```
int32_t q_metatype_type_with_type_name(const char* typeName) {
    return QMetaType_TypeWithTypeName(qstring(typeName));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#typeName)
///
/// ``` int typeVal ```
const char* q_metatype_type_name(int typeVal) {
    return QMetaType_TypeName(typeVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#sizeOf)
///
/// ``` int typeVal ```
int32_t q_metatype_size_of(int typeVal) {
    return QMetaType_SizeOf(typeVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#typeFlags)
///
/// ``` int typeVal ```
int64_t q_metatype_type_flags(int typeVal) {
    return QMetaType_TypeFlags(typeVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#metaObjectForType)
///
/// ``` int typeVal ```
QMetaObject* q_metatype_meta_object_for_type(int typeVal) {
    return QMetaType_MetaObjectForType(typeVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#create)
///
/// ``` int typeVal ```
void* q_metatype_create(int typeVal) {
    return QMetaType_Create(typeVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#destroy)
///
/// ``` int typeVal, void* data ```
void q_metatype_destroy(int typeVal, void* data) {
    QMetaType_Destroy(typeVal, data);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#construct)
///
/// ``` int typeVal, void* where, void* copyVal ```
void* q_metatype_construct(int typeVal, void* where, void* copyVal) {
    return QMetaType_Construct(typeVal, where, copyVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#destruct)
///
/// ``` int typeVal, void* where ```
void q_metatype_destruct(int typeVal, void* where) {
    QMetaType_Destruct(typeVal, where);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#isRegistered)
///
/// ``` int typeVal ```
bool q_metatype_is_registered(int typeVal) {
    return QMetaType_IsRegistered(typeVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#isValid)
///
/// ``` QMetaType* self ```
bool q_metatype_is_valid(void* self) {
    return QMetaType_IsValid((QMetaType*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#isRegistered)
///
/// ``` QMetaType* self ```
bool q_metatype_is_registered2(void* self) {
    return QMetaType_IsRegistered2((QMetaType*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#id)
///
/// ``` QMetaType* self ```
int32_t q_metatype_id(void* self) {
    return QMetaType_Id((QMetaType*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#sizeOf)
///
/// ``` QMetaType* self ```
int64_t q_metatype_size_of2(void* self) {
    return QMetaType_SizeOf2((QMetaType*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#alignOf)
///
/// ``` QMetaType* self ```
int64_t q_metatype_align_of(void* self) {
    return QMetaType_AlignOf((QMetaType*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#flags)
///
/// ``` QMetaType* self ```
int64_t q_metatype_flags(void* self) {
    return QMetaType_Flags((QMetaType*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QMetaType* self ```
QMetaObject* q_metatype_meta_object(void* self) {
    return QMetaType_MetaObject((QMetaType*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#name)
///
/// ``` QMetaType* self ```
const char* q_metatype_name(void* self) {
    return QMetaType_Name((QMetaType*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#create)
///
/// ``` QMetaType* self ```
void* q_metatype_create2(void* self) {
    return QMetaType_Create2((QMetaType*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#destroy)
///
/// ``` QMetaType* self, void* data ```
void q_metatype_destroy_with_data(void* self, void* data) {
    QMetaType_DestroyWithData((QMetaType*)self, data);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#construct)
///
/// ``` QMetaType* self, void* where ```
void* q_metatype_construct_with_where(void* self, void* where) {
    return QMetaType_ConstructWithWhere((QMetaType*)self, where);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#destruct)
///
/// ``` QMetaType* self, void* data ```
void q_metatype_destruct_with_data(void* self, void* data) {
    QMetaType_DestructWithData((QMetaType*)self, data);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#compare)
///
/// ``` QMetaType* self, void* lhs, void* rhs ```
QPartialOrdering* q_metatype_compare(void* self, void* lhs, void* rhs) {
    return QMetaType_Compare((QMetaType*)self, lhs, rhs);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#equals)
///
/// ``` QMetaType* self, void* lhs, void* rhs ```
bool q_metatype_equals(void* self, void* lhs, void* rhs) {
    return QMetaType_Equals((QMetaType*)self, lhs, rhs);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#isEqualityComparable)
///
/// ``` QMetaType* self ```
bool q_metatype_is_equality_comparable(void* self) {
    return QMetaType_IsEqualityComparable((QMetaType*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#isOrdered)
///
/// ``` QMetaType* self ```
bool q_metatype_is_ordered(void* self) {
    return QMetaType_IsOrdered((QMetaType*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#save)
///
/// ``` QMetaType* self, QDataStream* stream, void* data ```
bool q_metatype_save(void* self, void* stream, void* data) {
    return QMetaType_Save((QMetaType*)self, (QDataStream*)stream, data);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#load)
///
/// ``` QMetaType* self, QDataStream* stream, void* data ```
bool q_metatype_load(void* self, void* stream, void* data) {
    return QMetaType_Load((QMetaType*)self, (QDataStream*)stream, data);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#hasRegisteredDataStreamOperators)
///
/// ``` QMetaType* self ```
bool q_metatype_has_registered_data_stream_operators(void* self) {
    return QMetaType_HasRegisteredDataStreamOperators((QMetaType*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#save)
///
/// ``` QDataStream* stream, int typeVal, void* data ```
bool q_metatype_save2(void* stream, int typeVal, void* data) {
    return QMetaType_Save2((QDataStream*)stream, typeVal, data);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#load)
///
/// ``` QDataStream* stream, int typeVal, void* data ```
bool q_metatype_load2(void* stream, int typeVal, void* data) {
    return QMetaType_Load2((QDataStream*)stream, typeVal, data);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#fromName)
///
/// ``` const char* name ```
QMetaType* q_metatype_from_name(const char* name) {
    libqt_strview name_strview = qstrview(name);
    return QMetaType_FromName((QByteArrayView*)&name_strview);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#debugStream)
///
/// ``` QMetaType* self, QDebug* dbg, void* rhs ```
bool q_metatype_debug_stream(void* self, void* dbg, void* rhs) {
    return QMetaType_DebugStream((QMetaType*)self, (QDebug*)dbg, rhs);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#hasRegisteredDebugStreamOperator)
///
/// ``` QMetaType* self ```
bool q_metatype_has_registered_debug_stream_operator(void* self) {
    return QMetaType_HasRegisteredDebugStreamOperator((QMetaType*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#debugStream)
///
/// ``` QDebug* dbg, void* rhs, int typeId ```
bool q_metatype_debug_stream2(void* dbg, void* rhs, int typeId) {
    return QMetaType_DebugStream2((QDebug*)dbg, rhs, typeId);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#hasRegisteredDebugStreamOperator)
///
/// ``` int typeId ```
bool q_metatype_has_registered_debug_stream_operator_with_type_id(int typeId) {
    return QMetaType_HasRegisteredDebugStreamOperatorWithTypeId(typeId);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#convert)
///
/// ``` QMetaType* fromType, void* from, QMetaType* toType, void* to ```
bool q_metatype_convert(void* fromType, void* from, void* toType, void* to) {
    return QMetaType_Convert((QMetaType*)fromType, from, (QMetaType*)toType, to);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#canConvert)
///
/// ``` QMetaType* fromType, QMetaType* toType ```
bool q_metatype_can_convert(void* fromType, void* toType) {
    return QMetaType_CanConvert((QMetaType*)fromType, (QMetaType*)toType);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#view)
///
/// ``` QMetaType* fromType, void* from, QMetaType* toType, void* to ```
bool q_metatype_view(void* fromType, void* from, void* toType, void* to) {
    return QMetaType_View((QMetaType*)fromType, from, (QMetaType*)toType, to);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#canView)
///
/// ``` QMetaType* fromType, QMetaType* toType ```
bool q_metatype_can_view(void* fromType, void* toType) {
    return QMetaType_CanView((QMetaType*)fromType, (QMetaType*)toType);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#convert)
///
/// ``` void* from, int fromTypeId, void* to, int toTypeId ```
bool q_metatype_convert2(void* from, int fromTypeId, void* to, int toTypeId) {
    return QMetaType_Convert2(from, fromTypeId, to, toTypeId);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#compare)
///
/// ``` void* lhs, void* rhs, int typeId, int* result ```
bool q_metatype_compare2(void* lhs, void* rhs, int typeId, int* result) {
    return QMetaType_Compare2(lhs, rhs, typeId, result);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#equals)
///
/// ``` void* lhs, void* rhs, int typeId, int* result ```
bool q_metatype_equals2(void* lhs, void* rhs, int typeId, int* result) {
    return QMetaType_Equals2(lhs, rhs, typeId, result);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#hasRegisteredConverterFunction)
///
/// ``` QMetaType* fromType, QMetaType* toType ```
bool q_metatype_has_registered_converter_function(void* fromType, void* toType) {
    return QMetaType_HasRegisteredConverterFunction((QMetaType*)fromType, (QMetaType*)toType);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#hasRegisteredMutableViewFunction)
///
/// ``` QMetaType* fromType, QMetaType* toType ```
bool q_metatype_has_registered_mutable_view_function(void* fromType, void* toType) {
    return QMetaType_HasRegisteredMutableViewFunction((QMetaType*)fromType, (QMetaType*)toType);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#unregisterConverterFunction)
///
/// ``` QMetaType* from, QMetaType* to ```
void q_metatype_unregister_converter_function(void* from, void* to) {
    QMetaType_UnregisterConverterFunction((QMetaType*)from, (QMetaType*)to);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#unregisterMutableViewFunction)
///
/// ``` QMetaType* from, QMetaType* to ```
void q_metatype_unregister_mutable_view_function(void* from, void* to) {
    QMetaType_UnregisterMutableViewFunction((QMetaType*)from, (QMetaType*)to);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#unregisterMetaType)
///
/// ``` QMetaType* typeVal ```
void q_metatype_unregister_meta_type(void* typeVal) {
    QMetaType_UnregisterMetaType((QMetaType*)typeVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#create)
///
/// ``` int typeVal, void* copyVal ```
void* q_metatype_create22(int typeVal, void* copyVal) {
    return QMetaType_Create22(typeVal, copyVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#id)
///
/// ``` QMetaType* self, int param1 ```
int32_t q_metatype_id1(void* self, int param1) {
    return QMetaType_Id1((QMetaType*)self, param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#create)
///
/// ``` QMetaType* self, void* copyVal ```
void* q_metatype_create1(void* self, void* copyVal) {
    return QMetaType_Create1((QMetaType*)self, copyVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetatype.html#construct)
///
/// ``` QMetaType* self, void* where, void* copyVal ```
void* q_metatype_construct2(void* self, void* where, void* copyVal) {
    return QMetaType_Construct2((QMetaType*)self, where, copyVal);
}

/// Delete this object from C++ memory.
///
/// ``` QMetaType* self ```
void q_metatype_delete(void* self) {
    QMetaType_Delete((QMetaType*)(self));
}