#include "libqjsonarray.hpp"
#include "libqjsonobject.hpp"
#include <string.h>
#include "libqvariant.hpp"
#include "libqjsonvalue.hpp"
#include "libqjsonvalue.h"

QJsonValue* q_jsonvalue_new() {
    return QJsonValue_new();
}

QJsonValue* q_jsonvalue_new2(bool b) {
    return QJsonValue_new2(b);
}

QJsonValue* q_jsonvalue_new3(double n) {
    return QJsonValue_new3(n);
}

QJsonValue* q_jsonvalue_new4(int n) {
    return QJsonValue_new4(n);
}

QJsonValue* q_jsonvalue_new5(long long v) {
    return QJsonValue_new5(v);
}

QJsonValue* q_jsonvalue_new6(const char* s) {
    return QJsonValue_new6(qstring(s));
}

QJsonValue* q_jsonvalue_new7(const char* s) {
    return QJsonValue_new7(s);
}

QJsonValue* q_jsonvalue_new8(void* a) {
    return QJsonValue_new8((QJsonArray*)a);
}

QJsonValue* q_jsonvalue_new9(void* o) {
    return QJsonValue_new9((QJsonObject*)o);
}

QJsonValue* q_jsonvalue_new10(void* other) {
    return QJsonValue_new10((QJsonValue*)other);
}

QJsonValue* q_jsonvalue_new11(int64_t param1) {
    return QJsonValue_new11(param1);
}

void q_jsonvalue_operator_assign(void* self, void* other) {
    QJsonValue_OperatorAssign((QJsonValue*)self, (QJsonValue*)other);
}

void q_jsonvalue_swap(void* self, void* other) {
    QJsonValue_Swap((QJsonValue*)self, (QJsonValue*)other);
}

QJsonValue* q_jsonvalue_from_variant(void* variant) {
    return QJsonValue_FromVariant((QVariant*)variant);
}

QVariant* q_jsonvalue_to_variant(void* self) {
    return QJsonValue_ToVariant((QJsonValue*)self);
}

int64_t q_jsonvalue_type(void* self) {
    return QJsonValue_Type((QJsonValue*)self);
}

bool q_jsonvalue_is_null(void* self) {
    return QJsonValue_IsNull((QJsonValue*)self);
}

bool q_jsonvalue_is_bool(void* self) {
    return QJsonValue_IsBool((QJsonValue*)self);
}

bool q_jsonvalue_is_double(void* self) {
    return QJsonValue_IsDouble((QJsonValue*)self);
}

bool q_jsonvalue_is_string(void* self) {
    return QJsonValue_IsString((QJsonValue*)self);
}

bool q_jsonvalue_is_array(void* self) {
    return QJsonValue_IsArray((QJsonValue*)self);
}

bool q_jsonvalue_is_object(void* self) {
    return QJsonValue_IsObject((QJsonValue*)self);
}

bool q_jsonvalue_is_undefined(void* self) {
    return QJsonValue_IsUndefined((QJsonValue*)self);
}

bool q_jsonvalue_to_bool(void* self) {
    return QJsonValue_ToBool((QJsonValue*)self);
}

int32_t q_jsonvalue_to_int(void* self) {
    return QJsonValue_ToInt((QJsonValue*)self);
}

long long q_jsonvalue_to_integer(void* self) {
    return QJsonValue_ToInteger((QJsonValue*)self);
}

double q_jsonvalue_to_double(void* self) {
    return QJsonValue_ToDouble((QJsonValue*)self);
}

const char* q_jsonvalue_to_string(void* self) {
    libqt_string _str = QJsonValue_ToString((QJsonValue*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_jsonvalue_to_string_with_default_value(void* self, const char* defaultValue) {
    libqt_string _str = QJsonValue_ToStringWithDefaultValue((QJsonValue*)self, qstring(defaultValue));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QJsonArray* q_jsonvalue_to_array(void* self) {
    return QJsonValue_ToArray((QJsonValue*)self);
}

QJsonArray* q_jsonvalue_to_array_with_default_value(void* self, void* defaultValue) {
    return QJsonValue_ToArrayWithDefaultValue((QJsonValue*)self, (QJsonArray*)defaultValue);
}

QJsonObject* q_jsonvalue_to_object(void* self) {
    return QJsonValue_ToObject((QJsonValue*)self);
}

QJsonObject* q_jsonvalue_to_object_with_default_value(void* self, void* defaultValue) {
    return QJsonValue_ToObjectWithDefaultValue((QJsonValue*)self, (QJsonObject*)defaultValue);
}

QJsonValue* q_jsonvalue_operator_subscript(void* self, const char* key) {
    return QJsonValue_OperatorSubscript((QJsonValue*)self, qstring(key));
}

QJsonValue* q_jsonvalue_operator_subscript_with_qsizetype(void* self, int64_t i) {
    return QJsonValue_OperatorSubscriptWithQsizetype((QJsonValue*)self, i);
}

bool q_jsonvalue_operator_equal(void* self, void* other) {
    return QJsonValue_OperatorEqual((QJsonValue*)self, (QJsonValue*)other);
}

bool q_jsonvalue_operator_not_equal(void* self, void* other) {
    return QJsonValue_OperatorNotEqual((QJsonValue*)self, (QJsonValue*)other);
}

bool q_jsonvalue_to_bool1(void* self, bool defaultValue) {
    return QJsonValue_ToBool1((QJsonValue*)self, defaultValue);
}

int32_t q_jsonvalue_to_int1(void* self, int defaultValue) {
    return QJsonValue_ToInt1((QJsonValue*)self, defaultValue);
}

long long q_jsonvalue_to_integer1(void* self, long long defaultValue) {
    return QJsonValue_ToInteger1((QJsonValue*)self, defaultValue);
}

double q_jsonvalue_to_double1(void* self, double defaultValue) {
    return QJsonValue_ToDouble1((QJsonValue*)self, defaultValue);
}

void q_jsonvalue_delete(void* self) {
    QJsonValue_Delete((QJsonValue*)(self));
}

QJsonValueConstRef* q_jsonvalueconstref_new(void* other) {
    return QJsonValueConstRef_new((QJsonValueConstRef*)other);
}

QJsonValueConstRef* q_jsonvalueconstref_new2(void* param1) {
    return QJsonValueConstRef_new2((QJsonValueConstRef*)param1);
}

QJsonValue* q_jsonvalueconstref_to_q_json_value(void* self) {
    return QJsonValueConstRef_ToQJsonValue((QJsonValueConstRef*)self);
}

QVariant* q_jsonvalueconstref_to_variant(void* self) {
    return QJsonValueConstRef_ToVariant((QJsonValueConstRef*)self);
}

int64_t q_jsonvalueconstref_type(void* self) {
    return QJsonValueConstRef_Type((QJsonValueConstRef*)self);
}

bool q_jsonvalueconstref_is_null(void* self) {
    return QJsonValueConstRef_IsNull((QJsonValueConstRef*)self);
}

bool q_jsonvalueconstref_is_bool(void* self) {
    return QJsonValueConstRef_IsBool((QJsonValueConstRef*)self);
}

bool q_jsonvalueconstref_is_double(void* self) {
    return QJsonValueConstRef_IsDouble((QJsonValueConstRef*)self);
}

bool q_jsonvalueconstref_is_string(void* self) {
    return QJsonValueConstRef_IsString((QJsonValueConstRef*)self);
}

bool q_jsonvalueconstref_is_array(void* self) {
    return QJsonValueConstRef_IsArray((QJsonValueConstRef*)self);
}

bool q_jsonvalueconstref_is_object(void* self) {
    return QJsonValueConstRef_IsObject((QJsonValueConstRef*)self);
}

bool q_jsonvalueconstref_is_undefined(void* self) {
    return QJsonValueConstRef_IsUndefined((QJsonValueConstRef*)self);
}

bool q_jsonvalueconstref_to_bool(void* self) {
    return QJsonValueConstRef_ToBool((QJsonValueConstRef*)self);
}

int32_t q_jsonvalueconstref_to_int(void* self) {
    return QJsonValueConstRef_ToInt((QJsonValueConstRef*)self);
}

long long q_jsonvalueconstref_to_integer(void* self) {
    return QJsonValueConstRef_ToInteger((QJsonValueConstRef*)self);
}

double q_jsonvalueconstref_to_double(void* self) {
    return QJsonValueConstRef_ToDouble((QJsonValueConstRef*)self);
}

const char* q_jsonvalueconstref_to_string(void* self) {
    libqt_string _str = QJsonValueConstRef_ToString((QJsonValueConstRef*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QJsonArray* q_jsonvalueconstref_to_array(void* self) {
    return QJsonValueConstRef_ToArray((QJsonValueConstRef*)self);
}

QJsonObject* q_jsonvalueconstref_to_object(void* self) {
    return QJsonValueConstRef_ToObject((QJsonValueConstRef*)self);
}

QJsonValue* q_jsonvalueconstref_operator_subscript_with_qsizetype(void* self, int64_t i) {
    return QJsonValueConstRef_OperatorSubscriptWithQsizetype((QJsonValueConstRef*)self, i);
}

bool q_jsonvalueconstref_operator_equal(void* self, void* other) {
    return QJsonValueConstRef_OperatorEqual((QJsonValueConstRef*)self, (QJsonValue*)other);
}

bool q_jsonvalueconstref_operator_not_equal(void* self, void* other) {
    return QJsonValueConstRef_OperatorNotEqual((QJsonValueConstRef*)self, (QJsonValue*)other);
}

bool q_jsonvalueconstref_to_bool1(void* self, bool defaultValue) {
    return QJsonValueConstRef_ToBool1((QJsonValueConstRef*)self, defaultValue);
}

int32_t q_jsonvalueconstref_to_int1(void* self, int defaultValue) {
    return QJsonValueConstRef_ToInt1((QJsonValueConstRef*)self, defaultValue);
}

long long q_jsonvalueconstref_to_integer1(void* self, long long defaultValue) {
    return QJsonValueConstRef_ToInteger1((QJsonValueConstRef*)self, defaultValue);
}

double q_jsonvalueconstref_to_double1(void* self, double defaultValue) {
    return QJsonValueConstRef_ToDouble1((QJsonValueConstRef*)self, defaultValue);
}

const char* q_jsonvalueconstref_to_string1(void* self, const char* defaultValue) {
    libqt_string _str = QJsonValueConstRef_ToString1((QJsonValueConstRef*)self, qstring(defaultValue));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_jsonvalueconstref_delete(void* self) {
    QJsonValueConstRef_Delete((QJsonValueConstRef*)(self));
}

QJsonValueRef* q_jsonvalueref_new(void* other) {
    return QJsonValueRef_new((QJsonValueRef*)other);
}

QJsonValueRef* q_jsonvalueref_new2(void* param1) {
    return QJsonValueRef_new2((QJsonValueRef*)param1);
}

QJsonValueRef* q_jsonvalueref_new3(void* array, int64_t idx) {
    return QJsonValueRef_new3((QJsonArray*)array, idx);
}

QJsonValueRef* q_jsonvalueref_new4(void* object, int64_t idx) {
    return QJsonValueRef_new4((QJsonObject*)object, idx);
}

void q_jsonvalueref_operator_assign(void* self, void* val) {
    QJsonValueRef_OperatorAssign((QJsonValueRef*)self, (QJsonValue*)val);
}

void q_jsonvalueref_operator_assign_with_val(void* self, void* val) {
    QJsonValueRef_OperatorAssignWithVal((QJsonValueRef*)self, (QJsonValueRef*)val);
}

QJsonValue* q_jsonvalueref_to_q_json_value(void* self) {
    return QJsonValueRef_ToQJsonValue((QJsonValueRef*)self);
}

QVariant* q_jsonvalueref_to_variant(void* self) {
    return QJsonValueRef_ToVariant((QJsonValueRef*)self);
}

int64_t q_jsonvalueref_type(void* self) {
    return QJsonValueRef_Type((QJsonValueRef*)self);
}

bool q_jsonvalueref_is_null(void* self) {
    return QJsonValueRef_IsNull((QJsonValueRef*)self);
}

bool q_jsonvalueref_is_bool(void* self) {
    return QJsonValueRef_IsBool((QJsonValueRef*)self);
}

bool q_jsonvalueref_is_double(void* self) {
    return QJsonValueRef_IsDouble((QJsonValueRef*)self);
}

bool q_jsonvalueref_is_string(void* self) {
    return QJsonValueRef_IsString((QJsonValueRef*)self);
}

bool q_jsonvalueref_is_array(void* self) {
    return QJsonValueRef_IsArray((QJsonValueRef*)self);
}

bool q_jsonvalueref_is_object(void* self) {
    return QJsonValueRef_IsObject((QJsonValueRef*)self);
}

bool q_jsonvalueref_is_undefined(void* self) {
    return QJsonValueRef_IsUndefined((QJsonValueRef*)self);
}

bool q_jsonvalueref_to_bool(void* self) {
    return QJsonValueRef_ToBool((QJsonValueRef*)self);
}

int32_t q_jsonvalueref_to_int(void* self) {
    return QJsonValueRef_ToInt((QJsonValueRef*)self);
}

long long q_jsonvalueref_to_integer(void* self) {
    return QJsonValueRef_ToInteger((QJsonValueRef*)self);
}

double q_jsonvalueref_to_double(void* self) {
    return QJsonValueRef_ToDouble((QJsonValueRef*)self);
}

const char* q_jsonvalueref_to_string(void* self) {
    libqt_string _str = QJsonValueRef_ToString((QJsonValueRef*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QJsonArray* q_jsonvalueref_to_array(void* self) {
    return QJsonValueRef_ToArray((QJsonValueRef*)self);
}

QJsonObject* q_jsonvalueref_to_object(void* self) {
    return QJsonValueRef_ToObject((QJsonValueRef*)self);
}

QJsonValue* q_jsonvalueref_operator_subscript_with_qsizetype(void* self, int64_t i) {
    return QJsonValueRef_OperatorSubscriptWithQsizetype((QJsonValueRef*)self, i);
}

bool q_jsonvalueref_operator_equal(void* self, void* other) {
    return QJsonValueRef_OperatorEqual((QJsonValueRef*)self, (QJsonValue*)other);
}

bool q_jsonvalueref_operator_not_equal(void* self, void* other) {
    return QJsonValueRef_OperatorNotEqual((QJsonValueRef*)self, (QJsonValue*)other);
}

bool q_jsonvalueref_to_bool1(void* self, bool defaultValue) {
    return QJsonValueRef_ToBool1((QJsonValueRef*)self, defaultValue);
}

int32_t q_jsonvalueref_to_int1(void* self, int defaultValue) {
    return QJsonValueRef_ToInt1((QJsonValueRef*)self, defaultValue);
}

long long q_jsonvalueref_to_integer1(void* self, long long defaultValue) {
    return QJsonValueRef_ToInteger1((QJsonValueRef*)self, defaultValue);
}

double q_jsonvalueref_to_double1(void* self, double defaultValue) {
    return QJsonValueRef_ToDouble1((QJsonValueRef*)self, defaultValue);
}

const char* q_jsonvalueref_to_string1(void* self, const char* defaultValue) {
    libqt_string _str = QJsonValueRef_ToString1((QJsonValueRef*)self, qstring(defaultValue));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_jsonvalueref_delete(void* self) {
    QJsonValueRef_Delete((QJsonValueRef*)(self));
}
