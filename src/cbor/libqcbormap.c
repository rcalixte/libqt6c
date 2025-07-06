#include "libqcborvalue.hpp"
#include "../libqjsonobject.hpp"
#include <string.h>
#include "../libqvariant.hpp"
#include "libqcbormap.hpp"
#include "libqcbormap.h"

QCborMap* q_cbormap_new() {
    return QCborMap_new();
}

QCborMap* q_cbormap_new2(void* other) {
    return QCborMap_new2((QCborMap*)other);
}

void q_cbormap_operator_assign(void* self, void* other) {
    QCborMap_OperatorAssign((QCborMap*)self, (QCborMap*)other);
}

void q_cbormap_swap(void* self, void* other) {
    QCborMap_Swap((QCborMap*)self, (QCborMap*)other);
}

QCborValue* q_cbormap_to_cbor_value(void* self) {
    return QCborMap_ToCborValue((QCborMap*)self);
}

int64_t q_cbormap_size(void* self) {
    return QCborMap_Size((QCborMap*)self);
}

bool q_cbormap_is_empty(void* self) {
    return QCborMap_IsEmpty((QCborMap*)self);
}

void q_cbormap_clear(void* self) {
    QCborMap_Clear((QCborMap*)self);
}

libqt_list /* of QCborValue* */ q_cbormap_keys(void* self) {
    libqt_list _arr = QCborMap_Keys((QCborMap*)self);
    return _arr;
}

QCborValue* q_cbormap_value(void* self, long long key) {
    return QCborMap_Value((QCborMap*)self, key);
}

QCborValue* q_cbormap_value2(void* self, const char* key) {
    return QCborMap_Value2((QCborMap*)self, qstring(key));
}

QCborValue* q_cbormap_value3(void* self, void* key) {
    return QCborMap_Value3((QCborMap*)self, (QCborValue*)key);
}

const QCborValue* q_cbormap_operator_subscript(void* self, long long key) {
    return QCborMap_OperatorSubscript((QCborMap*)self, key);
}

const QCborValue* q_cbormap_operator_subscript2(void* self, const char* key) {
    return QCborMap_OperatorSubscript2((QCborMap*)self, qstring(key));
}

const QCborValue* q_cbormap_operator_subscript3(void* self, void* key) {
    return QCborMap_OperatorSubscript3((QCborMap*)self, (QCborValue*)key);
}

QCborValueRef* q_cbormap_operator_subscript4(void* self, long long key) {
    return QCborMap_OperatorSubscript4((QCborMap*)self, key);
}

QCborValueRef* q_cbormap_operator_subscript6(void* self, const char* key) {
    return QCborMap_OperatorSubscript6((QCborMap*)self, qstring(key));
}

QCborValueRef* q_cbormap_operator_subscript7(void* self, void* key) {
    return QCborMap_OperatorSubscript7((QCborMap*)self, (QCborValue*)key);
}

QCborValue* q_cbormap_take(void* self, long long key) {
    return QCborMap_Take((QCborMap*)self, key);
}

QCborValue* q_cbormap_take2(void* self, const char* key) {
    return QCborMap_Take2((QCborMap*)self, qstring(key));
}

QCborValue* q_cbormap_take3(void* self, void* key) {
    return QCborMap_Take3((QCborMap*)self, (QCborValue*)key);
}

void q_cbormap_remove(void* self, long long key) {
    QCborMap_Remove((QCborMap*)self, key);
}

void q_cbormap_remove2(void* self, const char* key) {
    QCborMap_Remove2((QCborMap*)self, qstring(key));
}

void q_cbormap_remove3(void* self, void* key) {
    QCborMap_Remove3((QCborMap*)self, (QCborValue*)key);
}

bool q_cbormap_contains(void* self, long long key) {
    return QCborMap_Contains((QCborMap*)self, key);
}

bool q_cbormap_contains2(void* self, const char* key) {
    return QCborMap_Contains2((QCborMap*)self, qstring(key));
}

bool q_cbormap_contains3(void* self, void* key) {
    return QCborMap_Contains3((QCborMap*)self, (QCborValue*)key);
}

int32_t q_cbormap_compare(void* self, void* other) {
    return QCborMap_Compare((QCborMap*)self, (QCborMap*)other);
}

bool q_cbormap_empty(void* self) {
    return QCborMap_Empty((QCborMap*)self);
}

QCborMap* q_cbormap_from_variant_map(libqt_map /* of const char* to QVariant* */ mapVal) {
    return QCborMap_FromVariantMap(mapVal);
}

QCborMap* q_cbormap_from_variant_hash(libqt_map /* of const char* to QVariant* */ hash) {
    return QCborMap_FromVariantHash(hash);
}

QCborMap* q_cbormap_from_json_object(void* o) {
    return QCborMap_FromJsonObject((QJsonObject*)o);
}

libqt_map /* of const char* to QVariant* */ q_cbormap_to_variant_map(void* self) {
    return QCborMap_ToVariantMap((QCborMap*)self);
}

libqt_map /* of const char* to QVariant* */ q_cbormap_to_variant_hash(void* self) {
    return QCborMap_ToVariantHash((QCborMap*)self);
}

QJsonObject* q_cbormap_to_json_object(void* self) {
    return QCborMap_ToJsonObject((QCborMap*)self);
}

void q_cbormap_delete(void* self) {
    QCborMap_Delete((QCborMap*)(self));
}
