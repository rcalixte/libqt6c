#include "libqjsonarray.hpp"
#include "libqjsonobject.hpp"
#include <string.h>
#include "libqvariant.hpp"
#include "libqjsonvalue.hpp"
#include "libqjsonvalue.h"

/// https://doc.qt.io/qt-6/qjsonvalue.html

/// q_jsonvalue_new constructs a new QJsonValue object.
///
///
QJsonValue* q_jsonvalue_new() {
    return QJsonValue_new();
}

/// q_jsonvalue_new2 constructs a new QJsonValue object.
///
/// ``` bool b ```
QJsonValue* q_jsonvalue_new2(bool b) {
    return QJsonValue_new2(b);
}

/// q_jsonvalue_new3 constructs a new QJsonValue object.
///
/// ``` double n ```
QJsonValue* q_jsonvalue_new3(double n) {
    return QJsonValue_new3(n);
}

/// q_jsonvalue_new4 constructs a new QJsonValue object.
///
/// ``` int n ```
QJsonValue* q_jsonvalue_new4(int n) {
    return QJsonValue_new4(n);
}

/// q_jsonvalue_new5 constructs a new QJsonValue object.
///
/// ``` long long v ```
QJsonValue* q_jsonvalue_new5(long long v) {
    return QJsonValue_new5(v);
}

/// q_jsonvalue_new6 constructs a new QJsonValue object.
///
/// ``` const char* s ```
QJsonValue* q_jsonvalue_new6(const char* s) {
    return QJsonValue_new6(qstring(s));
}

/// q_jsonvalue_new7 constructs a new QJsonValue object.
///
/// ``` const char* s ```
QJsonValue* q_jsonvalue_new7(const char* s) {
    return QJsonValue_new7(s);
}

/// q_jsonvalue_new8 constructs a new QJsonValue object.
///
/// ``` QJsonArray* a ```
QJsonValue* q_jsonvalue_new8(void* a) {
    return QJsonValue_new8((QJsonArray*)a);
}

/// q_jsonvalue_new9 constructs a new QJsonValue object.
///
/// ``` QJsonObject* o ```
QJsonValue* q_jsonvalue_new9(void* o) {
    return QJsonValue_new9((QJsonObject*)o);
}

/// q_jsonvalue_new10 constructs a new QJsonValue object.
///
/// ``` QJsonValue* other ```
QJsonValue* q_jsonvalue_new10(void* other) {
    return QJsonValue_new10((QJsonValue*)other);
}

/// q_jsonvalue_new11 constructs a new QJsonValue object.
///
/// ``` enum QJsonValue__Type param1 ```
QJsonValue* q_jsonvalue_new11(int64_t param1) {
    return QJsonValue_new11(param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#operator=)
///
/// ``` QJsonValue* self, QJsonValue* other ```
void q_jsonvalue_operator_assign(void* self, void* other) {
    QJsonValue_OperatorAssign((QJsonValue*)self, (QJsonValue*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#swap)
///
/// ``` QJsonValue* self, QJsonValue* other ```
void q_jsonvalue_swap(void* self, void* other) {
    QJsonValue_Swap((QJsonValue*)self, (QJsonValue*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#fromVariant)
///
/// ``` QVariant* variant ```
QJsonValue* q_jsonvalue_from_variant(void* variant) {
    return QJsonValue_FromVariant((QVariant*)variant);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#toVariant)
///
/// ``` QJsonValue* self ```
QVariant* q_jsonvalue_to_variant(void* self) {
    return QJsonValue_ToVariant((QJsonValue*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#type)
///
/// ``` QJsonValue* self ```
int64_t q_jsonvalue_type(void* self) {
    return QJsonValue_Type((QJsonValue*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#isNull)
///
/// ``` QJsonValue* self ```
bool q_jsonvalue_is_null(void* self) {
    return QJsonValue_IsNull((QJsonValue*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#isBool)
///
/// ``` QJsonValue* self ```
bool q_jsonvalue_is_bool(void* self) {
    return QJsonValue_IsBool((QJsonValue*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#isDouble)
///
/// ``` QJsonValue* self ```
bool q_jsonvalue_is_double(void* self) {
    return QJsonValue_IsDouble((QJsonValue*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#isString)
///
/// ``` QJsonValue* self ```
bool q_jsonvalue_is_string(void* self) {
    return QJsonValue_IsString((QJsonValue*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#isArray)
///
/// ``` QJsonValue* self ```
bool q_jsonvalue_is_array(void* self) {
    return QJsonValue_IsArray((QJsonValue*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#isObject)
///
/// ``` QJsonValue* self ```
bool q_jsonvalue_is_object(void* self) {
    return QJsonValue_IsObject((QJsonValue*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#isUndefined)
///
/// ``` QJsonValue* self ```
bool q_jsonvalue_is_undefined(void* self) {
    return QJsonValue_IsUndefined((QJsonValue*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#toBool)
///
/// ``` QJsonValue* self ```
bool q_jsonvalue_to_bool(void* self) {
    return QJsonValue_ToBool((QJsonValue*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#toInt)
///
/// ``` QJsonValue* self ```
int32_t q_jsonvalue_to_int(void* self) {
    return QJsonValue_ToInt((QJsonValue*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#toInteger)
///
/// ``` QJsonValue* self ```
long long q_jsonvalue_to_integer(void* self) {
    return QJsonValue_ToInteger((QJsonValue*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#toDouble)
///
/// ``` QJsonValue* self ```
double q_jsonvalue_to_double(void* self) {
    return QJsonValue_ToDouble((QJsonValue*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#toString)
///
/// ``` QJsonValue* self ```
const char* q_jsonvalue_to_string(void* self) {
    libqt_string _str = QJsonValue_ToString((QJsonValue*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#toString)
///
/// ``` QJsonValue* self, const char* defaultValue ```
const char* q_jsonvalue_to_string_with_default_value(void* self, const char* defaultValue) {
    libqt_string _str = QJsonValue_ToStringWithDefaultValue((QJsonValue*)self, qstring(defaultValue));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#toArray)
///
/// ``` QJsonValue* self ```
QJsonArray* q_jsonvalue_to_array(void* self) {
    return QJsonValue_ToArray((QJsonValue*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#toArray)
///
/// ``` QJsonValue* self, QJsonArray* defaultValue ```
QJsonArray* q_jsonvalue_to_array_with_default_value(void* self, void* defaultValue) {
    return QJsonValue_ToArrayWithDefaultValue((QJsonValue*)self, (QJsonArray*)defaultValue);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#toObject)
///
/// ``` QJsonValue* self ```
QJsonObject* q_jsonvalue_to_object(void* self) {
    return QJsonValue_ToObject((QJsonValue*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#toObject)
///
/// ``` QJsonValue* self, QJsonObject* defaultValue ```
QJsonObject* q_jsonvalue_to_object_with_default_value(void* self, void* defaultValue) {
    return QJsonValue_ToObjectWithDefaultValue((QJsonValue*)self, (QJsonObject*)defaultValue);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#operator[])
///
/// ``` QJsonValue* self, const char* key ```
QJsonValue* q_jsonvalue_operator_subscript(void* self, const char* key) {
    return QJsonValue_OperatorSubscript((QJsonValue*)self, qstring(key));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#operator[])
///
/// ``` QJsonValue* self, int64_t i ```
QJsonValue* q_jsonvalue_operator_subscript_with_qsizetype(void* self, int64_t i) {
    return QJsonValue_OperatorSubscriptWithQsizetype((QJsonValue*)self, i);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#operator==)
///
/// ``` QJsonValue* self, QJsonValue* other ```
bool q_jsonvalue_operator_equal(void* self, void* other) {
    return QJsonValue_OperatorEqual((QJsonValue*)self, (QJsonValue*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#operator!=)
///
/// ``` QJsonValue* self, QJsonValue* other ```
bool q_jsonvalue_operator_not_equal(void* self, void* other) {
    return QJsonValue_OperatorNotEqual((QJsonValue*)self, (QJsonValue*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#toBool)
///
/// ``` QJsonValue* self, bool defaultValue ```
bool q_jsonvalue_to_bool1(void* self, bool defaultValue) {
    return QJsonValue_ToBool1((QJsonValue*)self, defaultValue);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#toInt)
///
/// ``` QJsonValue* self, int defaultValue ```
int32_t q_jsonvalue_to_int1(void* self, int defaultValue) {
    return QJsonValue_ToInt1((QJsonValue*)self, defaultValue);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#toInteger)
///
/// ``` QJsonValue* self, long long defaultValue ```
long long q_jsonvalue_to_integer1(void* self, long long defaultValue) {
    return QJsonValue_ToInteger1((QJsonValue*)self, defaultValue);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#toDouble)
///
/// ``` QJsonValue* self, double defaultValue ```
double q_jsonvalue_to_double1(void* self, double defaultValue) {
    return QJsonValue_ToDouble1((QJsonValue*)self, defaultValue);
}

/// Delete this object from C++ memory.
///
/// ``` QJsonValue* self ```
void q_jsonvalue_delete(void* self) {
    QJsonValue_Delete((QJsonValue*)(self));
}

/// https://doc.qt.io/qt-6/qjsonvalueconstref.html

/// q_jsonvalueconstref_new constructs a new QJsonValueConstRef object.
///
/// ``` QJsonValueConstRef* other ```
QJsonValueConstRef* q_jsonvalueconstref_new(void* other) {
    return QJsonValueConstRef_new((QJsonValueConstRef*)other);
}

/// q_jsonvalueconstref_new2 constructs a new QJsonValueConstRef object.
///
/// ``` QJsonValueConstRef* param1 ```
QJsonValueConstRef* q_jsonvalueconstref_new2(void* param1) {
    return QJsonValueConstRef_new2((QJsonValueConstRef*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#operator QJsonValue)
///
/// ``` QJsonValueConstRef* self ```
QJsonValue* q_jsonvalueconstref_to_q_json_value(void* self) {
    return QJsonValueConstRef_ToQJsonValue((QJsonValueConstRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toVariant)
///
/// ``` QJsonValueConstRef* self ```
QVariant* q_jsonvalueconstref_to_variant(void* self) {
    return QJsonValueConstRef_ToVariant((QJsonValueConstRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#type)
///
/// ``` QJsonValueConstRef* self ```
int64_t q_jsonvalueconstref_type(void* self) {
    return QJsonValueConstRef_Type((QJsonValueConstRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#isNull)
///
/// ``` QJsonValueConstRef* self ```
bool q_jsonvalueconstref_is_null(void* self) {
    return QJsonValueConstRef_IsNull((QJsonValueConstRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#isBool)
///
/// ``` QJsonValueConstRef* self ```
bool q_jsonvalueconstref_is_bool(void* self) {
    return QJsonValueConstRef_IsBool((QJsonValueConstRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#isDouble)
///
/// ``` QJsonValueConstRef* self ```
bool q_jsonvalueconstref_is_double(void* self) {
    return QJsonValueConstRef_IsDouble((QJsonValueConstRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#isString)
///
/// ``` QJsonValueConstRef* self ```
bool q_jsonvalueconstref_is_string(void* self) {
    return QJsonValueConstRef_IsString((QJsonValueConstRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#isArray)
///
/// ``` QJsonValueConstRef* self ```
bool q_jsonvalueconstref_is_array(void* self) {
    return QJsonValueConstRef_IsArray((QJsonValueConstRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#isObject)
///
/// ``` QJsonValueConstRef* self ```
bool q_jsonvalueconstref_is_object(void* self) {
    return QJsonValueConstRef_IsObject((QJsonValueConstRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#isUndefined)
///
/// ``` QJsonValueConstRef* self ```
bool q_jsonvalueconstref_is_undefined(void* self) {
    return QJsonValueConstRef_IsUndefined((QJsonValueConstRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toBool)
///
/// ``` QJsonValueConstRef* self ```
bool q_jsonvalueconstref_to_bool(void* self) {
    return QJsonValueConstRef_ToBool((QJsonValueConstRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toInt)
///
/// ``` QJsonValueConstRef* self ```
int32_t q_jsonvalueconstref_to_int(void* self) {
    return QJsonValueConstRef_ToInt((QJsonValueConstRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toInteger)
///
/// ``` QJsonValueConstRef* self ```
long long q_jsonvalueconstref_to_integer(void* self) {
    return QJsonValueConstRef_ToInteger((QJsonValueConstRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toDouble)
///
/// ``` QJsonValueConstRef* self ```
double q_jsonvalueconstref_to_double(void* self) {
    return QJsonValueConstRef_ToDouble((QJsonValueConstRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toString)
///
/// ``` QJsonValueConstRef* self ```
const char* q_jsonvalueconstref_to_string(void* self) {
    libqt_string _str = QJsonValueConstRef_ToString((QJsonValueConstRef*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toArray)
///
/// ``` QJsonValueConstRef* self ```
QJsonArray* q_jsonvalueconstref_to_array(void* self) {
    return QJsonValueConstRef_ToArray((QJsonValueConstRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toObject)
///
/// ``` QJsonValueConstRef* self ```
QJsonObject* q_jsonvalueconstref_to_object(void* self) {
    return QJsonValueConstRef_ToObject((QJsonValueConstRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#operator[])
///
/// ``` QJsonValueConstRef* self, int64_t i ```
QJsonValue* q_jsonvalueconstref_operator_subscript_with_qsizetype(void* self, int64_t i) {
    return QJsonValueConstRef_OperatorSubscriptWithQsizetype((QJsonValueConstRef*)self, i);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#operator==)
///
/// ``` QJsonValueConstRef* self, QJsonValue* other ```
bool q_jsonvalueconstref_operator_equal(void* self, void* other) {
    return QJsonValueConstRef_OperatorEqual((QJsonValueConstRef*)self, (QJsonValue*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#operator!=)
///
/// ``` QJsonValueConstRef* self, QJsonValue* other ```
bool q_jsonvalueconstref_operator_not_equal(void* self, void* other) {
    return QJsonValueConstRef_OperatorNotEqual((QJsonValueConstRef*)self, (QJsonValue*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toBool)
///
/// ``` QJsonValueConstRef* self, bool defaultValue ```
bool q_jsonvalueconstref_to_bool1(void* self, bool defaultValue) {
    return QJsonValueConstRef_ToBool1((QJsonValueConstRef*)self, defaultValue);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toInt)
///
/// ``` QJsonValueConstRef* self, int defaultValue ```
int32_t q_jsonvalueconstref_to_int1(void* self, int defaultValue) {
    return QJsonValueConstRef_ToInt1((QJsonValueConstRef*)self, defaultValue);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toInteger)
///
/// ``` QJsonValueConstRef* self, long long defaultValue ```
long long q_jsonvalueconstref_to_integer1(void* self, long long defaultValue) {
    return QJsonValueConstRef_ToInteger1((QJsonValueConstRef*)self, defaultValue);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toDouble)
///
/// ``` QJsonValueConstRef* self, double defaultValue ```
double q_jsonvalueconstref_to_double1(void* self, double defaultValue) {
    return QJsonValueConstRef_ToDouble1((QJsonValueConstRef*)self, defaultValue);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toString)
///
/// ``` QJsonValueConstRef* self, const char* defaultValue ```
const char* q_jsonvalueconstref_to_string1(void* self, const char* defaultValue) {
    libqt_string _str = QJsonValueConstRef_ToString1((QJsonValueConstRef*)self, qstring(defaultValue));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Delete this object from C++ memory.
///
/// ``` QJsonValueConstRef* self ```
void q_jsonvalueconstref_delete(void* self) {
    QJsonValueConstRef_Delete((QJsonValueConstRef*)(self));
}

/// https://doc.qt.io/qt-6/qjsonvalueref.html

/// q_jsonvalueref_new constructs a new QJsonValueRef object.
///
/// ``` QJsonValueRef* other ```
QJsonValueRef* q_jsonvalueref_new(void* other) {
    return QJsonValueRef_new((QJsonValueRef*)other);
}

/// q_jsonvalueref_new2 constructs a new QJsonValueRef object.
///
/// ``` QJsonValueRef* param1 ```
QJsonValueRef* q_jsonvalueref_new2(void* param1) {
    return QJsonValueRef_new2((QJsonValueRef*)param1);
}

/// q_jsonvalueref_new3 constructs a new QJsonValueRef object.
///
/// ``` QJsonArray* array, int64_t idx ```
QJsonValueRef* q_jsonvalueref_new3(void* array, int64_t idx) {
    return QJsonValueRef_new3((QJsonArray*)array, idx);
}

/// q_jsonvalueref_new4 constructs a new QJsonValueRef object.
///
/// ``` QJsonObject* object, int64_t idx ```
QJsonValueRef* q_jsonvalueref_new4(void* object, int64_t idx) {
    return QJsonValueRef_new4((QJsonObject*)object, idx);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#operator=)
///
/// ``` QJsonValueRef* self, QJsonValue* val ```
void q_jsonvalueref_operator_assign(void* self, void* val) {
    QJsonValueRef_OperatorAssign((QJsonValueRef*)self, (QJsonValue*)val);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#operator=)
///
/// ``` QJsonValueRef* self, QJsonValueRef* val ```
void q_jsonvalueref_operator_assign_with_val(void* self, void* val) {
    QJsonValueRef_OperatorAssignWithVal((QJsonValueRef*)self, (QJsonValueRef*)val);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#operator QJsonValue)
///
/// ``` QJsonValueRef* self ```
QJsonValue* q_jsonvalueref_to_q_json_value(void* self) {
    return QJsonValueRef_ToQJsonValue((QJsonValueRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#toVariant)
///
/// ``` QJsonValueRef* self ```
QVariant* q_jsonvalueref_to_variant(void* self) {
    return QJsonValueRef_ToVariant((QJsonValueRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#type)
///
/// ``` QJsonValueRef* self ```
int64_t q_jsonvalueref_type(void* self) {
    return QJsonValueRef_Type((QJsonValueRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#isNull)
///
/// ``` QJsonValueRef* self ```
bool q_jsonvalueref_is_null(void* self) {
    return QJsonValueRef_IsNull((QJsonValueRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#isBool)
///
/// ``` QJsonValueRef* self ```
bool q_jsonvalueref_is_bool(void* self) {
    return QJsonValueRef_IsBool((QJsonValueRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#isDouble)
///
/// ``` QJsonValueRef* self ```
bool q_jsonvalueref_is_double(void* self) {
    return QJsonValueRef_IsDouble((QJsonValueRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#isString)
///
/// ``` QJsonValueRef* self ```
bool q_jsonvalueref_is_string(void* self) {
    return QJsonValueRef_IsString((QJsonValueRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#isArray)
///
/// ``` QJsonValueRef* self ```
bool q_jsonvalueref_is_array(void* self) {
    return QJsonValueRef_IsArray((QJsonValueRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#isObject)
///
/// ``` QJsonValueRef* self ```
bool q_jsonvalueref_is_object(void* self) {
    return QJsonValueRef_IsObject((QJsonValueRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#isUndefined)
///
/// ``` QJsonValueRef* self ```
bool q_jsonvalueref_is_undefined(void* self) {
    return QJsonValueRef_IsUndefined((QJsonValueRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#toBool)
///
/// ``` QJsonValueRef* self ```
bool q_jsonvalueref_to_bool(void* self) {
    return QJsonValueRef_ToBool((QJsonValueRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#toInt)
///
/// ``` QJsonValueRef* self ```
int32_t q_jsonvalueref_to_int(void* self) {
    return QJsonValueRef_ToInt((QJsonValueRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#toInteger)
///
/// ``` QJsonValueRef* self ```
long long q_jsonvalueref_to_integer(void* self) {
    return QJsonValueRef_ToInteger((QJsonValueRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#toDouble)
///
/// ``` QJsonValueRef* self ```
double q_jsonvalueref_to_double(void* self) {
    return QJsonValueRef_ToDouble((QJsonValueRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#toString)
///
/// ``` QJsonValueRef* self ```
const char* q_jsonvalueref_to_string(void* self) {
    libqt_string _str = QJsonValueRef_ToString((QJsonValueRef*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#toArray)
///
/// ``` QJsonValueRef* self ```
QJsonArray* q_jsonvalueref_to_array(void* self) {
    return QJsonValueRef_ToArray((QJsonValueRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#toObject)
///
/// ``` QJsonValueRef* self ```
QJsonObject* q_jsonvalueref_to_object(void* self) {
    return QJsonValueRef_ToObject((QJsonValueRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#operator[])
///
/// ``` QJsonValueRef* self, int64_t i ```
QJsonValue* q_jsonvalueref_operator_subscript_with_qsizetype(void* self, int64_t i) {
    return QJsonValueRef_OperatorSubscriptWithQsizetype((QJsonValueRef*)self, i);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#operator==)
///
/// ``` QJsonValueRef* self, QJsonValue* other ```
bool q_jsonvalueref_operator_equal(void* self, void* other) {
    return QJsonValueRef_OperatorEqual((QJsonValueRef*)self, (QJsonValue*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#operator!=)
///
/// ``` QJsonValueRef* self, QJsonValue* other ```
bool q_jsonvalueref_operator_not_equal(void* self, void* other) {
    return QJsonValueRef_OperatorNotEqual((QJsonValueRef*)self, (QJsonValue*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#toBool)
///
/// ``` QJsonValueRef* self, bool defaultValue ```
bool q_jsonvalueref_to_bool1(void* self, bool defaultValue) {
    return QJsonValueRef_ToBool1((QJsonValueRef*)self, defaultValue);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#toInt)
///
/// ``` QJsonValueRef* self, int defaultValue ```
int32_t q_jsonvalueref_to_int1(void* self, int defaultValue) {
    return QJsonValueRef_ToInt1((QJsonValueRef*)self, defaultValue);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#toInteger)
///
/// ``` QJsonValueRef* self, long long defaultValue ```
long long q_jsonvalueref_to_integer1(void* self, long long defaultValue) {
    return QJsonValueRef_ToInteger1((QJsonValueRef*)self, defaultValue);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#toDouble)
///
/// ``` QJsonValueRef* self, double defaultValue ```
double q_jsonvalueref_to_double1(void* self, double defaultValue) {
    return QJsonValueRef_ToDouble1((QJsonValueRef*)self, defaultValue);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#toString)
///
/// ``` QJsonValueRef* self, const char* defaultValue ```
const char* q_jsonvalueref_to_string1(void* self, const char* defaultValue) {
    libqt_string _str = QJsonValueRef_ToString1((QJsonValueRef*)self, qstring(defaultValue));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Delete this object from C++ memory.
///
/// ``` QJsonValueRef* self ```
void q_jsonvalueref_delete(void* self) {
    QJsonValueRef_Delete((QJsonValueRef*)(self));
}