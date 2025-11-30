#pragma once
#ifndef SRC_QT6C_LIBQJSONVALUE_H
#define SRC_QT6C_LIBQJSONVALUE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qjsonvalue.html

/// q_jsonvalue_new constructs a new QJsonValue object.
///
QJsonValue* q_jsonvalue_new();

/// q_jsonvalue_new2 constructs a new QJsonValue object.
///
/// @param b bool
QJsonValue* q_jsonvalue_new2(bool b);

/// q_jsonvalue_new3 constructs a new QJsonValue object.
///
/// @param n double
QJsonValue* q_jsonvalue_new3(double n);

/// q_jsonvalue_new4 constructs a new QJsonValue object.
///
/// @param n int
QJsonValue* q_jsonvalue_new4(int n);

/// q_jsonvalue_new5 constructs a new QJsonValue object.
///
/// @param v long long
QJsonValue* q_jsonvalue_new5(long long v);

/// q_jsonvalue_new6 constructs a new QJsonValue object.
///
/// @param s const char*
QJsonValue* q_jsonvalue_new6(const char* s);

/// q_jsonvalue_new7 constructs a new QJsonValue object.
///
/// @param s const char*
QJsonValue* q_jsonvalue_new7(const char* s);

/// q_jsonvalue_new8 constructs a new QJsonValue object.
///
/// @param a QJsonArray*
QJsonValue* q_jsonvalue_new8(void* a);

/// q_jsonvalue_new9 constructs a new QJsonValue object.
///
/// @param o QJsonObject*
QJsonValue* q_jsonvalue_new9(void* o);

/// q_jsonvalue_new10 constructs a new QJsonValue object.
///
/// @param other QJsonValue*
QJsonValue* q_jsonvalue_new10(void* other);

/// q_jsonvalue_new11 constructs a new QJsonValue object.
///
/// @param param1 enum QJsonValue__Type
QJsonValue* q_jsonvalue_new11(int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#operator-eq)
///
/// @param self QJsonValue*
/// @param other QJsonValue*
void q_jsonvalue_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#swap)
///
/// @param self QJsonValue*
/// @param other QJsonValue*
void q_jsonvalue_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#fromVariant)
///
/// @param variant QVariant*
QJsonValue* q_jsonvalue_from_variant(void* variant);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toVariant)
///
/// @param self QJsonValue*
QVariant* q_jsonvalue_to_variant(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#type)
///
/// @param self QJsonValue*
///
/// @return enum QJsonValue__Type
int32_t q_jsonvalue_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#isNull)
///
/// @param self QJsonValue*
bool q_jsonvalue_is_null(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#isBool)
///
/// @param self QJsonValue*
bool q_jsonvalue_is_bool(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#isDouble)
///
/// @param self QJsonValue*
bool q_jsonvalue_is_double(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#isString)
///
/// @param self QJsonValue*
bool q_jsonvalue_is_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#isArray)
///
/// @param self QJsonValue*
bool q_jsonvalue_is_array(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#isObject)
///
/// @param self QJsonValue*
bool q_jsonvalue_is_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#isUndefined)
///
/// @param self QJsonValue*
bool q_jsonvalue_is_undefined(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toBool)
///
/// @param self QJsonValue*
bool q_jsonvalue_to_bool(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toInt)
///
/// @param self QJsonValue*
int32_t q_jsonvalue_to_int(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toInteger)
///
/// @param self QJsonValue*
long long q_jsonvalue_to_integer(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toDouble)
///
/// @param self QJsonValue*
double q_jsonvalue_to_double(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QJsonValue*
const char* q_jsonvalue_to_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QJsonValue*
/// @param defaultValue const char*
const char* q_jsonvalue_to_string2(void* self, const char* defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toArray)
///
/// @param self QJsonValue*
QJsonArray* q_jsonvalue_to_array(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toArray)
///
/// @param self QJsonValue*
/// @param defaultValue QJsonArray*
QJsonArray* q_jsonvalue_to_array2(void* self, void* defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toObject)
///
/// @param self QJsonValue*
QJsonObject* q_jsonvalue_to_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toObject)
///
/// @param self QJsonValue*
/// @param defaultValue QJsonObject*
QJsonObject* q_jsonvalue_to_object2(void* self, void* defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#operator-5b-5d)
///
/// @param self QJsonValue*
/// @param key const char*
const QJsonValue* q_jsonvalue_operator_subscript(void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#operator-5b-5d)
///
/// @param self QJsonValue*
/// @param i int64_t
const QJsonValue* q_jsonvalue_operator_subscript4(void* self, int64_t i);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toBool)
///
/// @param self QJsonValue*
/// @param defaultValue bool
bool q_jsonvalue_to_bool1(void* self, bool defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toInt)
///
/// @param self QJsonValue*
/// @param defaultValue int
int32_t q_jsonvalue_to_int1(void* self, int defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toInteger)
///
/// @param self QJsonValue*
/// @param defaultValue long long
long long q_jsonvalue_to_integer1(void* self, long long defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toDouble)
///
/// @param self QJsonValue*
/// @param defaultValue double
double q_jsonvalue_to_double1(void* self, double defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#dtor.QJsonValue)
///
/// Delete this object from C++ memory.
///
/// @param self QJsonValue*
void q_jsonvalue_delete(void* self);

/// https://doc.qt.io/qt-6/qjsonvalueconstref.html

/// q_jsonvalueconstref_new constructs a new QJsonValueConstRef object.
///
/// @param other QJsonValueConstRef*
QJsonValueConstRef* q_jsonvalueconstref_new(void* other);

/// q_jsonvalueconstref_new2 constructs a new QJsonValueConstRef object.
///
/// @param param1 QJsonValueConstRef*
QJsonValueConstRef* q_jsonvalueconstref_new2(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#operator)
///
/// @param self QJsonValueConstRef*
QJsonValue* q_jsonvalueconstref_to_q_json_value(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toVariant)
///
/// @param self QJsonValueConstRef*
QVariant* q_jsonvalueconstref_to_variant(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#type)
///
/// @param self QJsonValueConstRef*
///
/// @return enum QJsonValue__Type
int32_t q_jsonvalueconstref_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#isNull)
///
/// @param self QJsonValueConstRef*
bool q_jsonvalueconstref_is_null(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#isBool)
///
/// @param self QJsonValueConstRef*
bool q_jsonvalueconstref_is_bool(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#isDouble)
///
/// @param self QJsonValueConstRef*
bool q_jsonvalueconstref_is_double(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#isString)
///
/// @param self QJsonValueConstRef*
bool q_jsonvalueconstref_is_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#isArray)
///
/// @param self QJsonValueConstRef*
bool q_jsonvalueconstref_is_array(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#isObject)
///
/// @param self QJsonValueConstRef*
bool q_jsonvalueconstref_is_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#isUndefined)
///
/// @param self QJsonValueConstRef*
bool q_jsonvalueconstref_is_undefined(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toBool)
///
/// @param self QJsonValueConstRef*
bool q_jsonvalueconstref_to_bool(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toInt)
///
/// @param self QJsonValueConstRef*
int32_t q_jsonvalueconstref_to_int(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toInteger)
///
/// @param self QJsonValueConstRef*
long long q_jsonvalueconstref_to_integer(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toDouble)
///
/// @param self QJsonValueConstRef*
double q_jsonvalueconstref_to_double(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QJsonValueConstRef*
const char* q_jsonvalueconstref_to_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toArray)
///
/// @param self QJsonValueConstRef*
QJsonArray* q_jsonvalueconstref_to_array(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toObject)
///
/// @param self QJsonValueConstRef*
QJsonObject* q_jsonvalueconstref_to_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#operator-5b-5d)
///
/// @param self QJsonValueConstRef*
/// @param i int64_t
const QJsonValue* q_jsonvalueconstref_operator_subscript3(void* self, int64_t i);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toBool)
///
/// @param self QJsonValueConstRef*
/// @param defaultValue bool
bool q_jsonvalueconstref_to_bool1(void* self, bool defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toInt)
///
/// @param self QJsonValueConstRef*
/// @param defaultValue int
int32_t q_jsonvalueconstref_to_int1(void* self, int defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toInteger)
///
/// @param self QJsonValueConstRef*
/// @param defaultValue long long
long long q_jsonvalueconstref_to_integer1(void* self, long long defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toDouble)
///
/// @param self QJsonValueConstRef*
/// @param defaultValue double
double q_jsonvalueconstref_to_double1(void* self, double defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QJsonValueConstRef*
/// @param defaultValue const char*
const char* q_jsonvalueconstref_to_string1(void* self, const char* defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#dtor.QJsonValueConstRef)
///
/// Delete this object from C++ memory.
///
/// @param self QJsonValueConstRef*
void q_jsonvalueconstref_delete(void* self);

/// https://doc.qt.io/qt-6/qjsonvalueref.html

/// q_jsonvalueref_new constructs a new QJsonValueRef object.
///
/// @param other QJsonValueRef*
QJsonValueRef* q_jsonvalueref_new(void* other);

/// q_jsonvalueref_new2 constructs a new QJsonValueRef object.
///
/// @param param1 QJsonValueRef*
QJsonValueRef* q_jsonvalueref_new2(void* param1);

/// q_jsonvalueref_new3 constructs a new QJsonValueRef object.
///
/// @param array QJsonArray*
/// @param idx int64_t
QJsonValueRef* q_jsonvalueref_new3(void* array, int64_t idx);

/// q_jsonvalueref_new4 constructs a new QJsonValueRef object.
///
/// @param object QJsonObject*
/// @param idx int64_t
QJsonValueRef* q_jsonvalueref_new4(void* object, int64_t idx);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#operator-eq)
///
/// @param self QJsonValueRef*
/// @param val QJsonValue*
void q_jsonvalueref_operator_assign(void* self, void* val);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#operator-eq)
///
/// @param self QJsonValueRef*
/// @param val QJsonValueRef*
void q_jsonvalueref_operator_assign2(void* self, void* val);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#operator)
///
/// @param self QJsonValueRef*
QJsonValue* q_jsonvalueref_to_q_json_value(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#toVariant)
///
/// @param self QJsonValueRef*
QVariant* q_jsonvalueref_to_variant(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#type)
///
/// @param self QJsonValueRef*
///
/// @return enum QJsonValue__Type
int32_t q_jsonvalueref_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#isNull)
///
/// @param self QJsonValueRef*
bool q_jsonvalueref_is_null(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#isBool)
///
/// @param self QJsonValueRef*
bool q_jsonvalueref_is_bool(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#isDouble)
///
/// @param self QJsonValueRef*
bool q_jsonvalueref_is_double(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#isString)
///
/// @param self QJsonValueRef*
bool q_jsonvalueref_is_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#isArray)
///
/// @param self QJsonValueRef*
bool q_jsonvalueref_is_array(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#isObject)
///
/// @param self QJsonValueRef*
bool q_jsonvalueref_is_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#isUndefined)
///
/// @param self QJsonValueRef*
bool q_jsonvalueref_is_undefined(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#toBool)
///
/// @param self QJsonValueRef*
bool q_jsonvalueref_to_bool(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#toInt)
///
/// @param self QJsonValueRef*
int32_t q_jsonvalueref_to_int(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#toInteger)
///
/// @param self QJsonValueRef*
long long q_jsonvalueref_to_integer(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#toDouble)
///
/// @param self QJsonValueRef*
double q_jsonvalueref_to_double(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#toString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QJsonValueRef*
const char* q_jsonvalueref_to_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#toArray)
///
/// @param self QJsonValueRef*
QJsonArray* q_jsonvalueref_to_array(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#toObject)
///
/// @param self QJsonValueRef*
QJsonObject* q_jsonvalueref_to_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#operator-5b-5d)
///
/// @param self QJsonValueRef*
/// @param i int64_t
const QJsonValue* q_jsonvalueref_operator_subscript3(void* self, int64_t i);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#toBool)
///
/// @param self QJsonValueRef*
/// @param defaultValue bool
bool q_jsonvalueref_to_bool1(void* self, bool defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#toInt)
///
/// @param self QJsonValueRef*
/// @param defaultValue int
int32_t q_jsonvalueref_to_int1(void* self, int defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#toInteger)
///
/// @param self QJsonValueRef*
/// @param defaultValue long long
long long q_jsonvalueref_to_integer1(void* self, long long defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#toDouble)
///
/// @param self QJsonValueRef*
/// @param defaultValue double
double q_jsonvalueref_to_double1(void* self, double defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#toString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QJsonValueRef*
/// @param defaultValue const char*
const char* q_jsonvalueref_to_string1(void* self, const char* defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#dtor.QJsonValueRef)
///
/// Delete this object from C++ memory.
///
/// @param self QJsonValueRef*
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
