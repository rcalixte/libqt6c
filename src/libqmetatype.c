#include "libqbytearrayview.hpp"
#include "libqdatastream.hpp"
#include "libqdebug.hpp"
#include "libqobjectdefs.hpp"
#include "libqcompare.hpp"
#include "libqmetatype.hpp"
#include "libqmetatype.h"

QMetaType* q_metatype_new(void* other) {
    return QMetaType_new((QMetaType*)other);
}

QMetaType* q_metatype_new2(void* other) {
    return QMetaType_new2((QMetaType*)other);
}

QMetaType* q_metatype_new3(int type) {
    return QMetaType_new3(type);
}

QMetaType* q_metatype_new4() {
    return QMetaType_new4();
}

QMetaType* q_metatype_new5(void* param1) {
    return QMetaType_new5((QMetaType*)param1);
}

void q_metatype_copy_assign(void* self, void* other) {
    QMetaType_CopyAssign((QMetaType*)self, (QMetaType*)other);
}

void q_metatype_move_assign(void* self, void* other) {
    QMetaType_MoveAssign((QMetaType*)self, (QMetaType*)other);
}

void q_metatype_register_normalized_typedef(const char* normalizedTypeName, void* type) {
    QMetaType_RegisterNormalizedTypedef(qstring(normalizedTypeName), (QMetaType*)type);
}

int32_t q_metatype_type(const char* typeName) {
    return QMetaType_Type(typeName);
}

int32_t q_metatype_type2(const char* typeName) {
    return QMetaType_Type2(qstring(typeName));
}

const char* q_metatype_type_name(int type) {
    return QMetaType_TypeName(type);
}

int32_t q_metatype_size_of(int type) {
    return QMetaType_SizeOf(type);
}

int32_t q_metatype_type_flags(int type) {
    return QMetaType_TypeFlags(type);
}

const QMetaObject* q_metatype_meta_object_for_type(int type) {
    return QMetaType_MetaObjectForType(type);
}

void* q_metatype_create(int type) {
    return QMetaType_Create(type);
}

void q_metatype_destroy(int type, void* data) {
    QMetaType_Destroy(type, data);
}

void* q_metatype_construct(int type, void* where, void* copyVal) {
    return QMetaType_Construct(type, where, copyVal);
}

void q_metatype_destruct(int type, void* where) {
    QMetaType_Destruct(type, where);
}

bool q_metatype_is_registered(int type) {
    return QMetaType_IsRegistered(type);
}

bool q_metatype_is_valid(void* self) {
    return QMetaType_IsValid((QMetaType*)self);
}

bool q_metatype_is_registered2(void* self) {
    return QMetaType_IsRegistered2((QMetaType*)self);
}

void q_metatype_register_type(void* self) {
    QMetaType_RegisterType((QMetaType*)self);
}

int32_t q_metatype_id(void* self) {
    return QMetaType_Id((QMetaType*)self);
}

int64_t q_metatype_size_of2(void* self) {
    return QMetaType_SizeOf2((QMetaType*)self);
}

int64_t q_metatype_align_of(void* self) {
    return QMetaType_AlignOf((QMetaType*)self);
}

int32_t q_metatype_flags(void* self) {
    return QMetaType_Flags((QMetaType*)self);
}

const QMetaObject* q_metatype_meta_object(void* self) {
    return QMetaType_MetaObject((QMetaType*)self);
}

const char* q_metatype_name(void* self) {
    return QMetaType_Name((QMetaType*)self);
}

void* q_metatype_create2(void* self) {
    return QMetaType_Create2((QMetaType*)self);
}

void q_metatype_destroy2(void* self, void* data) {
    QMetaType_Destroy2((QMetaType*)self, data);
}

void* q_metatype_construct2(void* self, void* where) {
    return QMetaType_Construct2((QMetaType*)self, where);
}

void q_metatype_destruct2(void* self, void* data) {
    QMetaType_Destruct2((QMetaType*)self, data);
}

QPartialOrdering* q_metatype_compare(void* self, void* lhs, void* rhs) {
    return QMetaType_Compare((QMetaType*)self, lhs, rhs);
}

bool q_metatype_equals(void* self, void* lhs, void* rhs) {
    return QMetaType_Equals((QMetaType*)self, lhs, rhs);
}

bool q_metatype_is_default_constructible(void* self) {
    return QMetaType_IsDefaultConstructible((QMetaType*)self);
}

bool q_metatype_is_copy_constructible(void* self) {
    return QMetaType_IsCopyConstructible((QMetaType*)self);
}

bool q_metatype_is_move_constructible(void* self) {
    return QMetaType_IsMoveConstructible((QMetaType*)self);
}

bool q_metatype_is_destructible(void* self) {
    return QMetaType_IsDestructible((QMetaType*)self);
}

bool q_metatype_is_equality_comparable(void* self) {
    return QMetaType_IsEqualityComparable((QMetaType*)self);
}

bool q_metatype_is_ordered(void* self) {
    return QMetaType_IsOrdered((QMetaType*)self);
}

bool q_metatype_save(void* self, void* stream, void* data) {
    return QMetaType_Save((QMetaType*)self, (QDataStream*)stream, data);
}

bool q_metatype_load(void* self, void* stream, void* data) {
    return QMetaType_Load((QMetaType*)self, (QDataStream*)stream, data);
}

bool q_metatype_has_registered_data_stream_operators(void* self) {
    return QMetaType_HasRegisteredDataStreamOperators((QMetaType*)self);
}

bool q_metatype_save2(void* stream, int type, void* data) {
    return QMetaType_Save2((QDataStream*)stream, type, data);
}

bool q_metatype_load2(void* stream, int type, void* data) {
    return QMetaType_Load2((QDataStream*)stream, type, data);
}

QMetaType* q_metatype_underlying_type(void* self) {
    return QMetaType_UnderlyingType((QMetaType*)self);
}

QMetaType* q_metatype_from_name(const char* name) {
    libqt_string name_string = qstring(name);
    return QMetaType_FromName((QByteArrayView*)&name_string);
}

bool q_metatype_debug_stream(void* self, void* dbg, void* rhs) {
    return QMetaType_DebugStream((QMetaType*)self, (QDebug*)dbg, rhs);
}

bool q_metatype_has_registered_debug_stream_operator(void* self) {
    return QMetaType_HasRegisteredDebugStreamOperator((QMetaType*)self);
}

bool q_metatype_debug_stream2(void* dbg, void* rhs, int typeId) {
    return QMetaType_DebugStream2((QDebug*)dbg, rhs, typeId);
}

bool q_metatype_has_registered_debug_stream_operator2(int typeId) {
    return QMetaType_HasRegisteredDebugStreamOperator2(typeId);
}

bool q_metatype_convert(void* fromType, void* from, void* toType, void* to) {
    return QMetaType_Convert((QMetaType*)fromType, from, (QMetaType*)toType, to);
}

bool q_metatype_can_convert(void* fromType, void* toType) {
    return QMetaType_CanConvert((QMetaType*)fromType, (QMetaType*)toType);
}

bool q_metatype_view(void* fromType, void* from, void* toType, void* to) {
    return QMetaType_View((QMetaType*)fromType, from, (QMetaType*)toType, to);
}

bool q_metatype_can_view(void* fromType, void* toType) {
    return QMetaType_CanView((QMetaType*)fromType, (QMetaType*)toType);
}

bool q_metatype_convert2(void* from, int fromTypeId, void* to, int toTypeId) {
    return QMetaType_Convert2(from, fromTypeId, to, toTypeId);
}

bool q_metatype_compare2(void* lhs, void* rhs, int typeId, int* result) {
    return QMetaType_Compare2(lhs, rhs, typeId, result);
}

bool q_metatype_equals2(void* lhs, void* rhs, int typeId, int* result) {
    return QMetaType_Equals2(lhs, rhs, typeId, result);
}

bool q_metatype_has_registered_converter_function(void* fromType, void* toType) {
    return QMetaType_HasRegisteredConverterFunction((QMetaType*)fromType, (QMetaType*)toType);
}

bool q_metatype_has_registered_mutable_view_function(void* fromType, void* toType) {
    return QMetaType_HasRegisteredMutableViewFunction((QMetaType*)fromType, (QMetaType*)toType);
}

void q_metatype_unregister_converter_function(void* from, void* to) {
    QMetaType_UnregisterConverterFunction((QMetaType*)from, (QMetaType*)to);
}

void q_metatype_unregister_mutable_view_function(void* from, void* to) {
    QMetaType_UnregisterMutableViewFunction((QMetaType*)from, (QMetaType*)to);
}

void q_metatype_unregister_meta_type(void* type) {
    QMetaType_UnregisterMetaType((QMetaType*)type);
}

void* q_metatype_create22(int type, void* copyVal) {
    return QMetaType_Create22(type, copyVal);
}

int32_t q_metatype_id1(void* self, int param1) {
    return QMetaType_Id1((QMetaType*)self, param1);
}

void* q_metatype_create1(void* self, void* copyVal) {
    return QMetaType_Create1((QMetaType*)self, copyVal);
}

void* q_metatype_construct22(void* self, void* where, void* copyVal) {
    return QMetaType_Construct22((QMetaType*)self, where, copyVal);
}

void q_metatype_delete(void* self) {
    QMetaType_Delete((QMetaType*)(self));
}
