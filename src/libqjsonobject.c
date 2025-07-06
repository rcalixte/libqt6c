#include "libqjsonvalue.hpp"
#include <string.h>
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
    return QJsonObject_FromVariantMap(mapVal);
}

libqt_map /* of const char* to QVariant* */ q_jsonobject_to_variant_map(void* self) {
    return QJsonObject_ToVariantMap((QJsonObject*)self);
}

QJsonObject* q_jsonobject_from_variant_hash(libqt_map /* of const char* to QVariant* */ mapVal) {
    return QJsonObject_FromVariantHash(mapVal);
}

libqt_map /* of const char* to QVariant* */ q_jsonobject_to_variant_hash(void* self) {
    return QJsonObject_ToVariantHash((QJsonObject*)self);
}

const char** q_jsonobject_keys(void* self) {
    libqt_list _arr = QJsonObject_Keys((QJsonObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
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

QJsonValueRef* q_jsonobject_operator_subscript_with_key(void* self, const char* key) {
    return QJsonObject_OperatorSubscriptWithKey((QJsonObject*)self, qstring(key));
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

bool q_jsonobject_empty(void* self) {
    return QJsonObject_Empty((QJsonObject*)self);
}

void q_jsonobject_delete(void* self) {
    QJsonObject_Delete((QJsonObject*)(self));
}
