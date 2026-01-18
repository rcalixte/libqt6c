#include "libqcborvalue.hpp"
#include "../libqjsonobject.hpp"
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

QCborValue* q_cbormap_value3(void* self, const char* key) {
    return QCborMap_Value3((QCborMap*)self, qstring(key));
}

QCborValue* q_cbormap_value4(void* self, void* key) {
    return QCborMap_Value4((QCborMap*)self, (QCborValue*)key);
}

const QCborValue* q_cbormap_operator_subscript(void* self, long long key) {
    return QCborMap_OperatorSubscript((QCborMap*)self, key);
}

const QCborValue* q_cbormap_operator_subscript3(void* self, const char* key) {
    return QCborMap_OperatorSubscript3((QCborMap*)self, qstring(key));
}

const QCborValue* q_cbormap_operator_subscript4(void* self, void* key) {
    return QCborMap_OperatorSubscript4((QCborMap*)self, (QCborValue*)key);
}

QCborValueRef* q_cbormap_operator_subscript5(void* self, long long key) {
    return QCborMap_OperatorSubscript5((QCborMap*)self, key);
}

QCborValueRef* q_cbormap_operator_subscript7(void* self, const char* key) {
    return QCborMap_OperatorSubscript7((QCborMap*)self, qstring(key));
}

QCborValueRef* q_cbormap_operator_subscript8(void* self, void* key) {
    return QCborMap_OperatorSubscript8((QCborMap*)self, (QCborValue*)key);
}

QCborValue* q_cbormap_take(void* self, long long key) {
    return QCborMap_Take((QCborMap*)self, key);
}

QCborValue* q_cbormap_take3(void* self, const char* key) {
    return QCborMap_Take3((QCborMap*)self, qstring(key));
}

QCborValue* q_cbormap_take4(void* self, void* key) {
    return QCborMap_Take4((QCborMap*)self, (QCborValue*)key);
}

void q_cbormap_remove(void* self, long long key) {
    QCborMap_Remove((QCborMap*)self, key);
}

void q_cbormap_remove3(void* self, const char* key) {
    QCborMap_Remove3((QCborMap*)self, qstring(key));
}

void q_cbormap_remove4(void* self, void* key) {
    QCborMap_Remove4((QCborMap*)self, (QCborValue*)key);
}

bool q_cbormap_contains(void* self, long long key) {
    return QCborMap_Contains((QCborMap*)self, key);
}

bool q_cbormap_contains3(void* self, const char* key) {
    return QCborMap_Contains3((QCborMap*)self, qstring(key));
}

bool q_cbormap_contains4(void* self, void* key) {
    return QCborMap_Contains4((QCborMap*)self, (QCborValue*)key);
}

int32_t q_cbormap_compare(void* self, void* other) {
    return QCborMap_Compare((QCborMap*)self, (QCborMap*)other);
}

QCborMap__Iterator* q_cbormap_begin(void* self) {
    return QCborMap_Begin((QCborMap*)self);
}

QCborMap__ConstIterator* q_cbormap_const_begin(void* self) {
    return QCborMap_ConstBegin((QCborMap*)self);
}

QCborMap__ConstIterator* q_cbormap_begin2(void* self) {
    return QCborMap_Begin2((QCborMap*)self);
}

QCborMap__ConstIterator* q_cbormap_cbegin(void* self) {
    return QCborMap_Cbegin((QCborMap*)self);
}

QCborMap__Iterator* q_cbormap_end(void* self) {
    return QCborMap_End((QCborMap*)self);
}

QCborMap__ConstIterator* q_cbormap_const_end(void* self) {
    return QCborMap_ConstEnd((QCborMap*)self);
}

QCborMap__ConstIterator* q_cbormap_end2(void* self) {
    return QCborMap_End2((QCborMap*)self);
}

QCborMap__ConstIterator* q_cbormap_cend(void* self) {
    return QCborMap_Cend((QCborMap*)self);
}

QCborMap__Iterator* q_cbormap_erase(void* self, void* it) {
    return QCborMap_Erase((QCborMap*)self, (QCborMap__Iterator*)it);
}

QCborMap__Iterator* q_cbormap_erase2(void* self, void* it) {
    return QCborMap_Erase2((QCborMap*)self, (QCborMap__ConstIterator*)it);
}

QCborValue* q_cbormap_extract(void* self, void* it) {
    return QCborMap_Extract((QCborMap*)self, (QCborMap__Iterator*)it);
}

QCborValue* q_cbormap_extract2(void* self, void* it) {
    return QCborMap_Extract2((QCborMap*)self, (QCborMap__ConstIterator*)it);
}

bool q_cbormap_empty(void* self) {
    return QCborMap_Empty((QCborMap*)self);
}

QCborMap__Iterator* q_cbormap_find(void* self, long long key) {
    return QCborMap_Find((QCborMap*)self, key);
}

QCborMap__Iterator* q_cbormap_find3(void* self, const char* key) {
    return QCborMap_Find3((QCborMap*)self, qstring(key));
}

QCborMap__Iterator* q_cbormap_find4(void* self, void* key) {
    return QCborMap_Find4((QCborMap*)self, (QCborValue*)key);
}

QCborMap__ConstIterator* q_cbormap_const_find(void* self, long long key) {
    return QCborMap_ConstFind((QCborMap*)self, key);
}

QCborMap__ConstIterator* q_cbormap_const_find3(void* self, const char* key) {
    return QCborMap_ConstFind3((QCborMap*)self, qstring(key));
}

QCborMap__ConstIterator* q_cbormap_const_find4(void* self, void* key) {
    return QCborMap_ConstFind4((QCborMap*)self, (QCborValue*)key);
}

QCborMap__ConstIterator* q_cbormap_find5(void* self, long long key) {
    return QCborMap_Find5((QCborMap*)self, key);
}

QCborMap__ConstIterator* q_cbormap_find7(void* self, const char* key) {
    return QCborMap_Find7((QCborMap*)self, qstring(key));
}

QCborMap__ConstIterator* q_cbormap_find8(void* self, void* key) {
    return QCborMap_Find8((QCborMap*)self, (QCborValue*)key);
}

QCborMap__Iterator* q_cbormap_insert(void* self, long long key, void* value_) {
    return QCborMap_Insert((QCborMap*)self, key, (QCborValue*)value_);
}

QCborMap__Iterator* q_cbormap_insert3(void* self, const char* key, void* value_) {
    return QCborMap_Insert3((QCborMap*)self, qstring(key), (QCborValue*)value_);
}

QCborMap__Iterator* q_cbormap_insert4(void* self, void* key, void* value_) {
    return QCborMap_Insert4((QCborMap*)self, (QCborValue*)key, (QCborValue*)value_);
}

QCborMap__Iterator* q_cbormap_insert5(void* self, libqt_pair /* tuple of QCborValue* and QCborValue* */ v) {
    return QCborMap_Insert5((QCborMap*)self, v);
}

QCborMap* q_cbormap_from_variant_map(libqt_map /* of const char* to QVariant* */ mapVal) {
    // Convert libqt_map to QMap<QString,QVariant>
    libqt_map mapVal_ret;
    mapVal_ret.len = mapVal.len;
    mapVal_ret.keys = (libqt_string*)malloc(mapVal_ret.len * sizeof(libqt_string));
    if (mapVal_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_cbormap_from_variant_map\n");
        abort();
    }
    mapVal_ret.values = (QVariant**)malloc(mapVal_ret.len * sizeof(QVariant*));
    if (mapVal_ret.values == NULL) {
        free(mapVal_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_cbormap_from_variant_map\n");
        abort();
    }
    const char** mapVal_karr = (const char**)mapVal.keys;
    libqt_string* mapVal_kdest = (libqt_string*)mapVal_ret.keys;
    QVariant** mapVal_varr = (QVariant**)mapVal.values;
    QVariant** mapVal_vdest = (QVariant**)mapVal_ret.values;
    for (size_t i = 0; i < mapVal_ret.len; ++i) {
        mapVal_kdest[i] = qstring(mapVal_karr[i]);
        mapVal_vdest[i] = mapVal_varr[i];
    }
    QCborMap* _out = QCborMap_FromVariantMap(mapVal_ret);
    free(mapVal_ret.keys);
    free(mapVal_ret.values);
    return _out;
}

QCborMap* q_cbormap_from_variant_hash(libqt_map /* of const char* to QVariant* */ hash) {
    // Convert libqt_map to QHash<QString,QVariant>
    libqt_map hash_ret;
    hash_ret.len = hash.len;
    hash_ret.keys = (libqt_string*)malloc(hash_ret.len * sizeof(libqt_string));
    if (hash_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_cbormap_from_variant_hash\n");
        abort();
    }
    hash_ret.values = (QVariant**)malloc(hash_ret.len * sizeof(QVariant*));
    if (hash_ret.values == NULL) {
        free(hash_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_cbormap_from_variant_hash\n");
        abort();
    }
    const char** hash_karr = (const char**)hash.keys;
    libqt_string* hash_kdest = (libqt_string*)hash_ret.keys;
    QVariant** hash_varr = (QVariant**)hash.values;
    QVariant** hash_vdest = (QVariant**)hash_ret.values;
    for (size_t i = 0; i < hash_ret.len; ++i) {
        hash_kdest[i] = qstring(hash_karr[i]);
        hash_vdest[i] = hash_varr[i];
    }
    QCborMap* _out = QCborMap_FromVariantHash(hash_ret);
    free(hash_ret.keys);
    free(hash_ret.values);
    return _out;
}

QCborMap* q_cbormap_from_json_object(void* o) {
    return QCborMap_FromJsonObject((QJsonObject*)o);
}

libqt_map /* of const char* to QVariant* */ q_cbormap_to_variant_map(void* self) {
    // Convert QMap<QString,QVariant> to libqt_map
    libqt_map _out = QCborMap_ToVariantMap((QCborMap*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_keys = (libqt_string*)_out.keys;
    char** _ret_keys = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string keys in q_cbormap_to_variant_map\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_keys[i] = (char*)malloc(_out_keys[i].len + 1);
        if (_ret_keys[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_keys[j]);
            }
            free(_ret_keys);
            fprintf(stderr, "Failed to allocate memory for map keys in q_cbormap_to_variant_map\n");
            abort();
        }
        memcpy(_ret_keys[i], _out_keys[i].data, _out_keys[i].len);
        _ret_keys[i][_out_keys[i].len] = '\0';
    }
    _ret.keys = (void*)_ret_keys;
    _ret.values = _out.values;
    for (size_t i = 0; i < _out.len; ++i) {
        libqt_free(_out_keys[i].data);
    }
    free(_out.keys);
    return _ret;
}

libqt_map /* of const char* to QVariant* */ q_cbormap_to_variant_hash(void* self) {
    // Convert QHash<QString,QVariant> to libqt_map
    libqt_map _out = QCborMap_ToVariantHash((QCborMap*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_keys = (libqt_string*)_out.keys;
    char** _ret_keys = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string keys in q_cbormap_to_variant_hash\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_keys[i] = (char*)malloc(_out_keys[i].len + 1);
        if (_ret_keys[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_keys[j]);
            }
            free(_ret_keys);
            fprintf(stderr, "Failed to allocate memory for map keys in q_cbormap_to_variant_hash\n");
            abort();
        }
        memcpy(_ret_keys[i], _out_keys[i].data, _out_keys[i].len);
        _ret_keys[i][_out_keys[i].len] = '\0';
    }
    _ret.keys = (void*)_ret_keys;
    _ret.values = _out.values;
    for (size_t i = 0; i < _out.len; ++i) {
        libqt_free(_out_keys[i].data);
    }
    free(_out.keys);
    return _ret;
}

QJsonObject* q_cbormap_to_json_object(void* self) {
    return QCborMap_ToJsonObject((QCborMap*)self);
}

void q_cbormap_delete(void* self) {
    QCborMap_Delete((QCborMap*)(self));
}

QCborMap__Iterator* q_cbormap__iterator_new(void* other) {
    return QCborMap__Iterator_new((QCborMap__Iterator*)other);
}

QCborMap__Iterator* q_cbormap__iterator_new2() {
    return QCborMap__Iterator_new2();
}

QCborMap__Iterator* q_cbormap__iterator_new3(void* param1) {
    return QCborMap__Iterator_new3((QCborMap__Iterator*)param1);
}

void q_cbormap__iterator_operator_assign(void* self, void* other) {
    QCborMap__Iterator_OperatorAssign((QCborMap__Iterator*)self, (QCborMap__Iterator*)other);
}

libqt_pair /* tuple of QCborValue* and QCborValue* */ q_cbormap__iterator_operator_multiply(void* self) {
    return QCborMap__Iterator_OperatorMultiply((QCborMap__Iterator*)self);
}

libqt_pair /* tuple of QCborValue* and QCborValue* */ q_cbormap__iterator_operator_subscript(void* self, int64_t j) {
    return QCborMap__Iterator_OperatorSubscript((QCborMap__Iterator*)self, j);
}

QCborValueRef* q_cbormap__iterator_operator_minus_greater(void* self) {
    return QCborMap__Iterator_OperatorMinusGreater((QCborMap__Iterator*)self);
}

const QCborValueConstRef* q_cbormap__iterator_operator_minus_greater2(void* self) {
    return QCborMap__Iterator_OperatorMinusGreater2((QCborMap__Iterator*)self);
}

QCborValue* q_cbormap__iterator_key(void* self) {
    return QCborMap__Iterator_Key((QCborMap__Iterator*)self);
}

QCborValueRef* q_cbormap__iterator_value(void* self) {
    return QCborMap__Iterator_Value((QCborMap__Iterator*)self);
}

QCborMap__Iterator* q_cbormap__iterator_operator_plus_plus(void* self) {
    return QCborMap__Iterator_OperatorPlusPlus((QCborMap__Iterator*)self);
}

QCborMap__Iterator* q_cbormap__iterator_operator_plus_plus2(void* self, int param1) {
    return QCborMap__Iterator_OperatorPlusPlus2((QCborMap__Iterator*)self, param1);
}

QCborMap__Iterator* q_cbormap__iterator_operator_minus_minus(void* self) {
    return QCborMap__Iterator_OperatorMinusMinus((QCborMap__Iterator*)self);
}

QCborMap__Iterator* q_cbormap__iterator_operator_minus_minus2(void* self, int param1) {
    return QCborMap__Iterator_OperatorMinusMinus2((QCborMap__Iterator*)self, param1);
}

QCborMap__Iterator* q_cbormap__iterator_operator_plus_assign(void* self, int64_t j) {
    return QCborMap__Iterator_OperatorPlusAssign((QCborMap__Iterator*)self, j);
}

QCborMap__Iterator* q_cbormap__iterator_operator_minus_assign(void* self, int64_t j) {
    return QCborMap__Iterator_OperatorMinusAssign((QCborMap__Iterator*)self, j);
}

QCborMap__Iterator* q_cbormap__iterator_operator_plus(void* self, int64_t j) {
    return QCborMap__Iterator_OperatorPlus((QCborMap__Iterator*)self, j);
}

QCborMap__Iterator* q_cbormap__iterator_operator_minus(void* self, int64_t j) {
    return QCborMap__Iterator_OperatorMinus((QCborMap__Iterator*)self, j);
}

int64_t q_cbormap__iterator_operator_minus2(void* self, void* j) {
    return QCborMap__Iterator_OperatorMinus2((QCborMap__Iterator*)self, (QCborMap__Iterator*)j);
}

void q_cbormap__iterator_delete(void* self) {
    QCborMap__Iterator_Delete((QCborMap__Iterator*)(self));
}

QCborMap__ConstIterator* q_cbormap__constiterator_new(void* other) {
    return QCborMap__ConstIterator_new((QCborMap__ConstIterator*)other);
}

QCborMap__ConstIterator* q_cbormap__constiterator_new2() {
    return QCborMap__ConstIterator_new2();
}

QCborMap__ConstIterator* q_cbormap__constiterator_new3(void* param1) {
    return QCborMap__ConstIterator_new3((QCborMap__ConstIterator*)param1);
}

void q_cbormap__constiterator_operator_assign(void* self, void* other) {
    QCborMap__ConstIterator_OperatorAssign((QCborMap__ConstIterator*)self, (QCborMap__ConstIterator*)other);
}

libqt_pair /* tuple of QCborValue* and QCborValue* */ q_cbormap__constiterator_operator_multiply(void* self) {
    return QCborMap__ConstIterator_OperatorMultiply((QCborMap__ConstIterator*)self);
}

libqt_pair /* tuple of QCborValue* and QCborValue* */ q_cbormap__constiterator_operator_subscript(void* self, int64_t j) {
    return QCborMap__ConstIterator_OperatorSubscript((QCborMap__ConstIterator*)self, j);
}

const QCborValueConstRef* q_cbormap__constiterator_operator_minus_greater(void* self) {
    return QCborMap__ConstIterator_OperatorMinusGreater((QCborMap__ConstIterator*)self);
}

QCborValue* q_cbormap__constiterator_key(void* self) {
    return QCborMap__ConstIterator_Key((QCborMap__ConstIterator*)self);
}

QCborValueConstRef* q_cbormap__constiterator_value(void* self) {
    return QCborMap__ConstIterator_Value((QCborMap__ConstIterator*)self);
}

QCborMap__ConstIterator* q_cbormap__constiterator_operator_plus_plus(void* self) {
    return QCborMap__ConstIterator_OperatorPlusPlus((QCborMap__ConstIterator*)self);
}

QCborMap__ConstIterator* q_cbormap__constiterator_operator_plus_plus2(void* self, int param1) {
    return QCborMap__ConstIterator_OperatorPlusPlus2((QCborMap__ConstIterator*)self, param1);
}

QCborMap__ConstIterator* q_cbormap__constiterator_operator_minus_minus(void* self) {
    return QCborMap__ConstIterator_OperatorMinusMinus((QCborMap__ConstIterator*)self);
}

QCborMap__ConstIterator* q_cbormap__constiterator_operator_minus_minus2(void* self, int param1) {
    return QCborMap__ConstIterator_OperatorMinusMinus2((QCborMap__ConstIterator*)self, param1);
}

QCborMap__ConstIterator* q_cbormap__constiterator_operator_plus_assign(void* self, int64_t j) {
    return QCborMap__ConstIterator_OperatorPlusAssign((QCborMap__ConstIterator*)self, j);
}

QCborMap__ConstIterator* q_cbormap__constiterator_operator_minus_assign(void* self, int64_t j) {
    return QCborMap__ConstIterator_OperatorMinusAssign((QCborMap__ConstIterator*)self, j);
}

QCborMap__ConstIterator* q_cbormap__constiterator_operator_plus(void* self, int64_t j) {
    return QCborMap__ConstIterator_OperatorPlus((QCborMap__ConstIterator*)self, j);
}

QCborMap__ConstIterator* q_cbormap__constiterator_operator_minus(void* self, int64_t j) {
    return QCborMap__ConstIterator_OperatorMinus((QCborMap__ConstIterator*)self, j);
}

int64_t q_cbormap__constiterator_operator_minus2(void* self, void* j) {
    return QCborMap__ConstIterator_OperatorMinus2((QCborMap__ConstIterator*)self, (QCborMap__ConstIterator*)j);
}

void q_cbormap__constiterator_delete(void* self) {
    QCborMap__ConstIterator_Delete((QCborMap__ConstIterator*)(self));
}
