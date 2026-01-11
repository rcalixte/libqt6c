#include "libqjsonvalue.hpp"
#include "libqvariant.hpp"
#include "libqjsonobject.hpp"
#include "libqjsonobject.h"

QJsonObject* q_jsonobject_new() {
    return QJsonObject_new();
}

QJsonObject* q_jsonobject_new2(void* other) {
    return QJsonObject_new2((QJsonObject*)other);
}

void q_jsonobject_operator_assign(void* self, void* other) {
    QJsonObject_OperatorAssign((QJsonObject*)self, (QJsonObject*)other);
}

void q_jsonobject_swap(void* self, void* other) {
    QJsonObject_Swap((QJsonObject*)self, (QJsonObject*)other);
}

QJsonObject* q_jsonobject_from_variant_map(libqt_map /* of const char* to QVariant* */ mapVal) {
    // Convert libqt_map to QMap<QString,QVariant>
    libqt_map mapVal_ret;
    mapVal_ret.len = mapVal.len;
    mapVal_ret.keys = (libqt_string*)malloc(mapVal_ret.len * sizeof(libqt_string));
    if (mapVal_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_jsonobject_from_variant_map\n");
        abort();
    }
    mapVal_ret.values = (QVariant**)malloc(mapVal_ret.len * sizeof(QVariant*));
    if (mapVal_ret.values == NULL) {
        free(mapVal_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_jsonobject_from_variant_map\n");
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
    QJsonObject* _out = QJsonObject_FromVariantMap(mapVal_ret);
    free(mapVal_ret.keys);
    free(mapVal_ret.values);
    return _out;
}

libqt_map /* of const char* to QVariant* */ q_jsonobject_to_variant_map(void* self) {
    // Convert QMap<QString,QVariant> to libqt_map
    libqt_map _out = QJsonObject_ToVariantMap((QJsonObject*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_keys = (libqt_string*)_out.keys;
    char** _ret_keys = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string keys in q_jsonobject_to_variant_map");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_keys[i] = (char*)malloc(_out_keys[i].len + 1);
        if (_ret_keys[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_keys[j]);
            }
            free(_ret_keys);
            fprintf(stderr, "Failed to allocate memory for map keys in q_jsonobject_to_variant_map");
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

QJsonObject* q_jsonobject_from_variant_hash(libqt_map /* of const char* to QVariant* */ mapVal) {
    // Convert libqt_map to QHash<QString,QVariant>
    libqt_map mapVal_ret;
    mapVal_ret.len = mapVal.len;
    mapVal_ret.keys = (libqt_string*)malloc(mapVal_ret.len * sizeof(libqt_string));
    if (mapVal_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_jsonobject_from_variant_hash\n");
        abort();
    }
    mapVal_ret.values = (QVariant**)malloc(mapVal_ret.len * sizeof(QVariant*));
    if (mapVal_ret.values == NULL) {
        free(mapVal_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_jsonobject_from_variant_hash\n");
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
    QJsonObject* _out = QJsonObject_FromVariantHash(mapVal_ret);
    free(mapVal_ret.keys);
    free(mapVal_ret.values);
    return _out;
}

libqt_map /* of const char* to QVariant* */ q_jsonobject_to_variant_hash(void* self) {
    // Convert QHash<QString,QVariant> to libqt_map
    libqt_map _out = QJsonObject_ToVariantHash((QJsonObject*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_keys = (libqt_string*)_out.keys;
    char** _ret_keys = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string keys in q_jsonobject_to_variant_hash");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_keys[i] = (char*)malloc(_out_keys[i].len + 1);
        if (_ret_keys[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_keys[j]);
            }
            free(_ret_keys);
            fprintf(stderr, "Failed to allocate memory for map keys in q_jsonobject_to_variant_hash");
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

const char** q_jsonobject_keys(void* self) {
    libqt_list _arr = QJsonObject_Keys((QJsonObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_jsonobject_keys");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

int64_t q_jsonobject_size(void* self) {
    return QJsonObject_Size((QJsonObject*)self);
}

int64_t q_jsonobject_count(void* self) {
    return QJsonObject_Count((QJsonObject*)self);
}

int64_t q_jsonobject_length(void* self) {
    return QJsonObject_Length((QJsonObject*)self);
}

bool q_jsonobject_is_empty(void* self) {
    return QJsonObject_IsEmpty((QJsonObject*)self);
}

QJsonValue* q_jsonobject_value(void* self, const char* key) {
    return QJsonObject_Value((QJsonObject*)self, qstring(key));
}

QJsonValue* q_jsonobject_operator_subscript(void* self, const char* key) {
    return QJsonObject_OperatorSubscript((QJsonObject*)self, qstring(key));
}

QJsonValueRef* q_jsonobject_operator_subscript2(void* self, const char* key) {
    return QJsonObject_OperatorSubscript2((QJsonObject*)self, qstring(key));
}

void q_jsonobject_remove(void* self, const char* key) {
    QJsonObject_Remove((QJsonObject*)self, qstring(key));
}

QJsonValue* q_jsonobject_take(void* self, const char* key) {
    return QJsonObject_Take((QJsonObject*)self, qstring(key));
}

bool q_jsonobject_contains(void* self, const char* key) {
    return QJsonObject_Contains((QJsonObject*)self, qstring(key));
}

QJsonObject__iterator* q_jsonobject_begin(void* self) {
    return QJsonObject_Begin((QJsonObject*)self);
}

QJsonObject__const_iterator* q_jsonobject_begin2(void* self) {
    return QJsonObject_Begin2((QJsonObject*)self);
}

QJsonObject__const_iterator* q_jsonobject_const_begin(void* self) {
    return QJsonObject_ConstBegin((QJsonObject*)self);
}

QJsonObject__iterator* q_jsonobject_end(void* self) {
    return QJsonObject_End((QJsonObject*)self);
}

QJsonObject__const_iterator* q_jsonobject_end2(void* self) {
    return QJsonObject_End2((QJsonObject*)self);
}

QJsonObject__const_iterator* q_jsonobject_const_end(void* self) {
    return QJsonObject_ConstEnd((QJsonObject*)self);
}

QJsonObject__iterator* q_jsonobject_erase(void* self, void* it) {
    return QJsonObject_Erase((QJsonObject*)self, (QJsonObject__iterator*)it);
}

QJsonObject__iterator* q_jsonobject_find(void* self, const char* key) {
    return QJsonObject_Find((QJsonObject*)self, qstring(key));
}

QJsonObject__const_iterator* q_jsonobject_find2(void* self, const char* key) {
    return QJsonObject_Find2((QJsonObject*)self, qstring(key));
}

QJsonObject__const_iterator* q_jsonobject_const_find(void* self, const char* key) {
    return QJsonObject_ConstFind((QJsonObject*)self, qstring(key));
}

QJsonObject__iterator* q_jsonobject_insert(void* self, const char* key, void* value) {
    return QJsonObject_Insert((QJsonObject*)self, qstring(key), (QJsonValue*)value);
}

bool q_jsonobject_empty(void* self) {
    return QJsonObject_Empty((QJsonObject*)self);
}

void q_jsonobject_delete(void* self) {
    QJsonObject_Delete((QJsonObject*)(self));
}

QJsonObject__iterator* q_jsonobject__iterator_new(void* other) {
    return QJsonObject__iterator_new((QJsonObject__iterator*)other);
}

QJsonObject__iterator* q_jsonobject__iterator_new2() {
    return QJsonObject__iterator_new2();
}

QJsonObject__iterator* q_jsonobject__iterator_new3(void* obj, int64_t index) {
    return QJsonObject__iterator_new3((QJsonObject*)obj, index);
}

QJsonObject__iterator* q_jsonobject__iterator_new4(void* other) {
    return QJsonObject__iterator_new4((QJsonObject__iterator*)other);
}

void q_jsonobject__iterator_operator_assign(void* self, void* other) {
    QJsonObject__iterator_OperatorAssign((QJsonObject__iterator*)self, (QJsonObject__iterator*)other);
}

const char* q_jsonobject__iterator_key(void* self) {
    libqt_string _str = QJsonObject__iterator_Key((QJsonObject__iterator*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QJsonValueRef* q_jsonobject__iterator_value(void* self) {
    return QJsonObject__iterator_Value((QJsonObject__iterator*)self);
}

QJsonValueRef* q_jsonobject__iterator_operator_multiply(void* self) {
    return QJsonObject__iterator_OperatorMultiply((QJsonObject__iterator*)self);
}

const QJsonValueConstRef* q_jsonobject__iterator_operator_minus_greater(void* self) {
    return QJsonObject__iterator_OperatorMinusGreater((QJsonObject__iterator*)self);
}

QJsonValueRef* q_jsonobject__iterator_operator_minus_greater2(void* self) {
    return QJsonObject__iterator_OperatorMinusGreater2((QJsonObject__iterator*)self);
}

QJsonValueRef* q_jsonobject__iterator_operator_subscript(void* self, int64_t j) {
    return QJsonObject__iterator_OperatorSubscript((QJsonObject__iterator*)self, j);
}

QJsonObject__iterator* q_jsonobject__iterator_operator_plus_plus(void* self) {
    return QJsonObject__iterator_OperatorPlusPlus((QJsonObject__iterator*)self);
}

QJsonObject__iterator* q_jsonobject__iterator_operator_plus_plus2(void* self, int param1) {
    return QJsonObject__iterator_OperatorPlusPlus2((QJsonObject__iterator*)self, param1);
}

QJsonObject__iterator* q_jsonobject__iterator_operator_minus_minus(void* self) {
    return QJsonObject__iterator_OperatorMinusMinus((QJsonObject__iterator*)self);
}

QJsonObject__iterator* q_jsonobject__iterator_operator_minus_minus2(void* self, int param1) {
    return QJsonObject__iterator_OperatorMinusMinus2((QJsonObject__iterator*)self, param1);
}

QJsonObject__iterator* q_jsonobject__iterator_operator_plus(void* self, int64_t j) {
    return QJsonObject__iterator_OperatorPlus((QJsonObject__iterator*)self, j);
}

QJsonObject__iterator* q_jsonobject__iterator_operator_minus(void* self, int64_t j) {
    return QJsonObject__iterator_OperatorMinus((QJsonObject__iterator*)self, j);
}

QJsonObject__iterator* q_jsonobject__iterator_operator_plus_assign(void* self, int64_t j) {
    return QJsonObject__iterator_OperatorPlusAssign((QJsonObject__iterator*)self, j);
}

QJsonObject__iterator* q_jsonobject__iterator_operator_minus_assign(void* self, int64_t j) {
    return QJsonObject__iterator_OperatorMinusAssign((QJsonObject__iterator*)self, j);
}

int64_t q_jsonobject__iterator_operator_minus2(void* self, void* j) {
    return QJsonObject__iterator_OperatorMinus2((QJsonObject__iterator*)self, (QJsonObject__iterator*)j);
}

void q_jsonobject__iterator_delete(void* self) {
    QJsonObject__iterator_Delete((QJsonObject__iterator*)(self));
}

QJsonObject__const_iterator* q_jsonobject__const_iterator_new(void* other) {
    return QJsonObject__const_iterator_new((QJsonObject__const_iterator*)other);
}

QJsonObject__const_iterator* q_jsonobject__const_iterator_new2() {
    return QJsonObject__const_iterator_new2();
}

QJsonObject__const_iterator* q_jsonobject__const_iterator_new3(void* obj, int64_t index) {
    return QJsonObject__const_iterator_new3((QJsonObject*)obj, index);
}

QJsonObject__const_iterator* q_jsonobject__const_iterator_new4(void* other) {
    return QJsonObject__const_iterator_new4((QJsonObject__iterator*)other);
}

QJsonObject__const_iterator* q_jsonobject__const_iterator_new5(void* other) {
    return QJsonObject__const_iterator_new5((QJsonObject__const_iterator*)other);
}

void q_jsonobject__const_iterator_operator_assign(void* self, void* other) {
    QJsonObject__const_iterator_OperatorAssign((QJsonObject__const_iterator*)self, (QJsonObject__const_iterator*)other);
}

const char* q_jsonobject__const_iterator_key(void* self) {
    libqt_string _str = QJsonObject__const_iterator_Key((QJsonObject__const_iterator*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QJsonValueConstRef* q_jsonobject__const_iterator_value(void* self) {
    return QJsonObject__const_iterator_Value((QJsonObject__const_iterator*)self);
}

const QJsonValueConstRef* q_jsonobject__const_iterator_operator_multiply(void* self) {
    return QJsonObject__const_iterator_OperatorMultiply((QJsonObject__const_iterator*)self);
}

const QJsonValueConstRef* q_jsonobject__const_iterator_operator_minus_greater(void* self) {
    return QJsonObject__const_iterator_OperatorMinusGreater((QJsonObject__const_iterator*)self);
}

QJsonValueConstRef* q_jsonobject__const_iterator_operator_subscript(void* self, int64_t j) {
    return QJsonObject__const_iterator_OperatorSubscript((QJsonObject__const_iterator*)self, j);
}

QJsonObject__const_iterator* q_jsonobject__const_iterator_operator_plus_plus(void* self) {
    return QJsonObject__const_iterator_OperatorPlusPlus((QJsonObject__const_iterator*)self);
}

QJsonObject__const_iterator* q_jsonobject__const_iterator_operator_plus_plus2(void* self, int param1) {
    return QJsonObject__const_iterator_OperatorPlusPlus2((QJsonObject__const_iterator*)self, param1);
}

QJsonObject__const_iterator* q_jsonobject__const_iterator_operator_minus_minus(void* self) {
    return QJsonObject__const_iterator_OperatorMinusMinus((QJsonObject__const_iterator*)self);
}

QJsonObject__const_iterator* q_jsonobject__const_iterator_operator_minus_minus2(void* self, int param1) {
    return QJsonObject__const_iterator_OperatorMinusMinus2((QJsonObject__const_iterator*)self, param1);
}

QJsonObject__const_iterator* q_jsonobject__const_iterator_operator_plus(void* self, int64_t j) {
    return QJsonObject__const_iterator_OperatorPlus((QJsonObject__const_iterator*)self, j);
}

QJsonObject__const_iterator* q_jsonobject__const_iterator_operator_minus(void* self, int64_t j) {
    return QJsonObject__const_iterator_OperatorMinus((QJsonObject__const_iterator*)self, j);
}

QJsonObject__const_iterator* q_jsonobject__const_iterator_operator_plus_assign(void* self, int64_t j) {
    return QJsonObject__const_iterator_OperatorPlusAssign((QJsonObject__const_iterator*)self, j);
}

QJsonObject__const_iterator* q_jsonobject__const_iterator_operator_minus_assign(void* self, int64_t j) {
    return QJsonObject__const_iterator_OperatorMinusAssign((QJsonObject__const_iterator*)self, j);
}

int64_t q_jsonobject__const_iterator_operator_minus2(void* self, void* j) {
    return QJsonObject__const_iterator_OperatorMinus2((QJsonObject__const_iterator*)self, (QJsonObject__const_iterator*)j);
}

void q_jsonobject__const_iterator_delete(void* self) {
    QJsonObject__const_iterator_Delete((QJsonObject__const_iterator*)(self));
}
