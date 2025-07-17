#pragma once
#ifndef SRCQT6C_LIBQJSONVALUE_H
#define SRCQT6C_LIBQJSONVALUE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qjsonvalue.html

/// q_jsonvalue_new constructs a new QJsonValue object.
///
///
QJsonValue* q_jsonvalue_new();

/// q_jsonvalue_new2 constructs a new QJsonValue object.
///
/// ``` bool b ```
QJsonValue* q_jsonvalue_new2(bool b);

/// q_jsonvalue_new3 constructs a new QJsonValue object.
///
/// ``` double n ```
QJsonValue* q_jsonvalue_new3(double n);

/// q_jsonvalue_new4 constructs a new QJsonValue object.
///
/// ``` int n ```
QJsonValue* q_jsonvalue_new4(int n);

/// q_jsonvalue_new5 constructs a new QJsonValue object.
///
/// ``` long long v ```
QJsonValue* q_jsonvalue_new5(long long v);

/// q_jsonvalue_new6 constructs a new QJsonValue object.
///
/// ``` const char* s ```
QJsonValue* q_jsonvalue_new6(const char* s);

/// q_jsonvalue_new7 constructs a new QJsonValue object.
///
/// ``` const char* s ```
QJsonValue* q_jsonvalue_new7(const char* s);

/// q_jsonvalue_new8 constructs a new QJsonValue object.
///
/// ``` QJsonArray* a ```
QJsonValue* q_jsonvalue_new8(void* a);

/// q_jsonvalue_new9 constructs a new QJsonValue object.
///
/// ``` QJsonObject* o ```
QJsonValue* q_jsonvalue_new9(void* o);

/// q_jsonvalue_new10 constructs a new QJsonValue object.
///
/// ``` QJsonValue* other ```
QJsonValue* q_jsonvalue_new10(void* other);

/// q_jsonvalue_new11 constructs a new QJsonValue object.
///
/// ``` enum QJsonValue__Type param1 ```
QJsonValue* q_jsonvalue_new11(int64_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#operator-eq)
///
/// ``` QJsonValue* self, QJsonValue* other ```
void q_jsonvalue_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#swap)
///
/// ``` QJsonValue* self, QJsonValue* other ```
void q_jsonvalue_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#fromVariant)
///
/// ``` QVariant* variant ```
QJsonValue* q_jsonvalue_from_variant(void* variant);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#toVariant)
///
/// ``` QJsonValue* self ```
QVariant* q_jsonvalue_to_variant(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#type)
///
/// ``` QJsonValue* self ```
int64_t q_jsonvalue_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#isNull)
///
/// ``` QJsonValue* self ```
bool q_jsonvalue_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#isBool)
///
/// ``` QJsonValue* self ```
bool q_jsonvalue_is_bool(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#isDouble)
///
/// ``` QJsonValue* self ```
bool q_jsonvalue_is_double(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#isString)
///
/// ``` QJsonValue* self ```
bool q_jsonvalue_is_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#isArray)
///
/// ``` QJsonValue* self ```
bool q_jsonvalue_is_array(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#isObject)
///
/// ``` QJsonValue* self ```
bool q_jsonvalue_is_object(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#isUndefined)
///
/// ``` QJsonValue* self ```
bool q_jsonvalue_is_undefined(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#toBool)
///
/// ``` QJsonValue* self ```
bool q_jsonvalue_to_bool(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#toInt)
///
/// ``` QJsonValue* self ```
int32_t q_jsonvalue_to_int(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#toInteger)
///
/// ``` QJsonValue* self ```
long long q_jsonvalue_to_integer(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#toDouble)
///
/// ``` QJsonValue* self ```
double q_jsonvalue_to_double(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#toString)
///
/// ``` QJsonValue* self ```
const char* q_jsonvalue_to_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#toString)
///
/// ``` QJsonValue* self, const char* defaultValue ```
const char* q_jsonvalue_to_string2(void* self, const char* defaultValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#toArray)
///
/// ``` QJsonValue* self ```
QJsonArray* q_jsonvalue_to_array(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#toArray)
///
/// ``` QJsonValue* self, QJsonArray* defaultValue ```
QJsonArray* q_jsonvalue_to_array2(void* self, void* defaultValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#toObject)
///
/// ``` QJsonValue* self ```
QJsonObject* q_jsonvalue_to_object(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#toObject)
///
/// ``` QJsonValue* self, QJsonObject* defaultValue ```
QJsonObject* q_jsonvalue_to_object2(void* self, void* defaultValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#operator-5b-5d)
///
/// ``` QJsonValue* self, const char* key ```
const QJsonValue* q_jsonvalue_operator_subscript(void* self, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#operator-5b-5d)
///
/// ``` QJsonValue* self, int64_t i ```
const QJsonValue* q_jsonvalue_operator_subscript4(void* self, int64_t i);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#toBool)
///
/// ``` QJsonValue* self, bool defaultValue ```
bool q_jsonvalue_to_bool1(void* self, bool defaultValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#toInt)
///
/// ``` QJsonValue* self, int defaultValue ```
int32_t q_jsonvalue_to_int1(void* self, int defaultValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#toInteger)
///
/// ``` QJsonValue* self, long long defaultValue ```
long long q_jsonvalue_to_integer1(void* self, long long defaultValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#toDouble)
///
/// ``` QJsonValue* self, double defaultValue ```
double q_jsonvalue_to_double1(void* self, double defaultValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#dtor.QJsonValue)
///
/// Delete this object from C++ memory.
///
/// ``` QJsonValue* self ```
void q_jsonvalue_delete(void* self);

/// https://doc.qt.io/qt-6/qjsonvalueconstref.html

/// q_jsonvalueconstref_new constructs a new QJsonValueConstRef object.
///
/// ``` QJsonValueConstRef* other ```
QJsonValueConstRef* q_jsonvalueconstref_new(void* other);

/// q_jsonvalueconstref_new2 constructs a new QJsonValueConstRef object.
///
/// ``` QJsonValueConstRef* param1 ```
QJsonValueConstRef* q_jsonvalueconstref_new2(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#operator)
///
/// ``` QJsonValueConstRef* self ```
QJsonValue* q_jsonvalueconstref_to_q_json_value(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toVariant)
///
/// ``` QJsonValueConstRef* self ```
QVariant* q_jsonvalueconstref_to_variant(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#type)
///
/// ``` QJsonValueConstRef* self ```
int64_t q_jsonvalueconstref_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#isNull)
///
/// ``` QJsonValueConstRef* self ```
bool q_jsonvalueconstref_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#isBool)
///
/// ``` QJsonValueConstRef* self ```
bool q_jsonvalueconstref_is_bool(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#isDouble)
///
/// ``` QJsonValueConstRef* self ```
bool q_jsonvalueconstref_is_double(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#isString)
///
/// ``` QJsonValueConstRef* self ```
bool q_jsonvalueconstref_is_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#isArray)
///
/// ``` QJsonValueConstRef* self ```
bool q_jsonvalueconstref_is_array(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#isObject)
///
/// ``` QJsonValueConstRef* self ```
bool q_jsonvalueconstref_is_object(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#isUndefined)
///
/// ``` QJsonValueConstRef* self ```
bool q_jsonvalueconstref_is_undefined(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toBool)
///
/// ``` QJsonValueConstRef* self ```
bool q_jsonvalueconstref_to_bool(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toInt)
///
/// ``` QJsonValueConstRef* self ```
int32_t q_jsonvalueconstref_to_int(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toInteger)
///
/// ``` QJsonValueConstRef* self ```
long long q_jsonvalueconstref_to_integer(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toDouble)
///
/// ``` QJsonValueConstRef* self ```
double q_jsonvalueconstref_to_double(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toString)
///
/// ``` QJsonValueConstRef* self ```
const char* q_jsonvalueconstref_to_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toArray)
///
/// ``` QJsonValueConstRef* self ```
QJsonArray* q_jsonvalueconstref_to_array(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toObject)
///
/// ``` QJsonValueConstRef* self ```
QJsonObject* q_jsonvalueconstref_to_object(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#operator-5b-5d)
///
/// ``` QJsonValueConstRef* self, int64_t i ```
const QJsonValue* q_jsonvalueconstref_operator_subscript3(void* self, int64_t i);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toBool)
///
/// ``` QJsonValueConstRef* self, bool defaultValue ```
bool q_jsonvalueconstref_to_bool1(void* self, bool defaultValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toInt)
///
/// ``` QJsonValueConstRef* self, int defaultValue ```
int32_t q_jsonvalueconstref_to_int1(void* self, int defaultValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toInteger)
///
/// ``` QJsonValueConstRef* self, long long defaultValue ```
long long q_jsonvalueconstref_to_integer1(void* self, long long defaultValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toDouble)
///
/// ``` QJsonValueConstRef* self, double defaultValue ```
double q_jsonvalueconstref_to_double1(void* self, double defaultValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toString)
///
/// ``` QJsonValueConstRef* self, const char* defaultValue ```
const char* q_jsonvalueconstref_to_string1(void* self, const char* defaultValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#dtor.QJsonValueConstRef)
///
/// Delete this object from C++ memory.
///
/// ``` QJsonValueConstRef* self ```
void q_jsonvalueconstref_delete(void* self);

/// https://doc.qt.io/qt-6/qjsonvalueref.html

/// q_jsonvalueref_new constructs a new QJsonValueRef object.
///
/// ``` QJsonValueRef* other ```
QJsonValueRef* q_jsonvalueref_new(void* other);

/// q_jsonvalueref_new2 constructs a new QJsonValueRef object.
///
/// ``` QJsonValueRef* param1 ```
QJsonValueRef* q_jsonvalueref_new2(void* param1);

/// q_jsonvalueref_new3 constructs a new QJsonValueRef object.
///
/// ``` QJsonArray* array, int64_t idx ```
QJsonValueRef* q_jsonvalueref_new3(void* array, int64_t idx);

/// q_jsonvalueref_new4 constructs a new QJsonValueRef object.
///
/// ``` QJsonObject* object, int64_t idx ```
QJsonValueRef* q_jsonvalueref_new4(void* object, int64_t idx);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#operator-eq)
///
/// ``` QJsonValueRef* self, QJsonValue* val ```
void q_jsonvalueref_operator_assign(void* self, void* val);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#operator-eq)
///
/// ``` QJsonValueRef* self, QJsonValueRef* val ```
void q_jsonvalueref_operator_assign2(void* self, void* val);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#operator)
///
/// ``` QJsonValueRef* self ```
QJsonValue* q_jsonvalueref_to_q_json_value(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#toVariant)
///
/// ``` QJsonValueRef* self ```
QVariant* q_jsonvalueref_to_variant(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#type)
///
/// ``` QJsonValueRef* self ```
int64_t q_jsonvalueref_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#isNull)
///
/// ``` QJsonValueRef* self ```
bool q_jsonvalueref_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#isBool)
///
/// ``` QJsonValueRef* self ```
bool q_jsonvalueref_is_bool(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#isDouble)
///
/// ``` QJsonValueRef* self ```
bool q_jsonvalueref_is_double(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#isString)
///
/// ``` QJsonValueRef* self ```
bool q_jsonvalueref_is_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#isArray)
///
/// ``` QJsonValueRef* self ```
bool q_jsonvalueref_is_array(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#isObject)
///
/// ``` QJsonValueRef* self ```
bool q_jsonvalueref_is_object(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#isUndefined)
///
/// ``` QJsonValueRef* self ```
bool q_jsonvalueref_is_undefined(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#toBool)
///
/// ``` QJsonValueRef* self ```
bool q_jsonvalueref_to_bool(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#toInt)
///
/// ``` QJsonValueRef* self ```
int32_t q_jsonvalueref_to_int(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#toInteger)
///
/// ``` QJsonValueRef* self ```
long long q_jsonvalueref_to_integer(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#toDouble)
///
/// ``` QJsonValueRef* self ```
double q_jsonvalueref_to_double(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#toString)
///
/// ``` QJsonValueRef* self ```
const char* q_jsonvalueref_to_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#toArray)
///
/// ``` QJsonValueRef* self ```
QJsonArray* q_jsonvalueref_to_array(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#toObject)
///
/// ``` QJsonValueRef* self ```
QJsonObject* q_jsonvalueref_to_object(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#operator-5b-5d)
///
/// ``` QJsonValueRef* self, int64_t i ```
const QJsonValue* q_jsonvalueref_operator_subscript3(void* self, int64_t i);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#toBool)
///
/// ``` QJsonValueRef* self, bool defaultValue ```
bool q_jsonvalueref_to_bool1(void* self, bool defaultValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#toInt)
///
/// ``` QJsonValueRef* self, int defaultValue ```
int32_t q_jsonvalueref_to_int1(void* self, int defaultValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#toInteger)
///
/// ``` QJsonValueRef* self, long long defaultValue ```
long long q_jsonvalueref_to_integer1(void* self, long long defaultValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#toDouble)
///
/// ``` QJsonValueRef* self, double defaultValue ```
double q_jsonvalueref_to_double1(void* self, double defaultValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#toString)
///
/// ``` QJsonValueRef* self, const char* defaultValue ```
const char* q_jsonvalueref_to_string1(void* self, const char* defaultValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#dtor.QJsonValueRef)
///
/// Delete this object from C++ memory.
///
/// ``` QJsonValueRef* self ```
void q_jsonvalueref_delete(void* self);

/// https://doc.qt.io/qt-6/qjsonvalue.html#types

typedef enum {
    QJSONVALUE_TYPE_NULL = 0,
    QJSONVALUE_TYPE_BOOL = 1,
    QJSONVALUE_TYPE_DOUBLE = 2,
    QJSONVALUE_TYPE_STRING = 3,
    QJSONVALUE_TYPE_ARRAY = 4,
    QJSONVALUE_TYPE_OBJECT = 5,
    QJSONVALUE_TYPE_UNDEFINED = 128
} QJsonValue__Type;

#endif
