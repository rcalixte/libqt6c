#pragma once
#ifndef LIBQJSONVALUE_H
#define LIBQJSONVALUE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html)

/// q_jsonvalue_new constructs a new QJsonValue object.
///
QJsonValue* q_jsonvalue_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html)

/// q_jsonvalue_new2 constructs a new QJsonValue object.
///
/// @param b bool
///
QJsonValue* q_jsonvalue_new2(bool b);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html)

/// q_jsonvalue_new3 constructs a new QJsonValue object.
///
/// @param n double
///
QJsonValue* q_jsonvalue_new3(double n);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html)

/// q_jsonvalue_new4 constructs a new QJsonValue object.
///
/// @param n int
///
QJsonValue* q_jsonvalue_new4(int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html)

/// q_jsonvalue_new5 constructs a new QJsonValue object.
///
/// @param v int64_t
///
QJsonValue* q_jsonvalue_new5(int64_t v);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html)

/// q_jsonvalue_new6 constructs a new QJsonValue object.
///
/// @param s const char*
///
QJsonValue* q_jsonvalue_new6(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html)

/// q_jsonvalue_new7 constructs a new QJsonValue object.
///
/// @param s char*
///
QJsonValue* q_jsonvalue_new7(char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html)

/// q_jsonvalue_new8 constructs a new QJsonValue object.
///
/// @param s const char*
///
QJsonValue* q_jsonvalue_new8(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html)

/// q_jsonvalue_new9 constructs a new QJsonValue object.
///
/// @param a QJsonArray*
///
QJsonValue* q_jsonvalue_new9(const void* a);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html)

/// q_jsonvalue_new10 constructs a new QJsonValue object.
///
/// @param o QJsonObject*
///
QJsonValue* q_jsonvalue_new10(const void* o);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html)

/// q_jsonvalue_new11 constructs a new QJsonValue object.
///
/// @param other QJsonValue*
///
QJsonValue* q_jsonvalue_new11(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html)

/// q_jsonvalue_new12 constructs a new QJsonValue object.
///
/// @param param1 enum QJsonValue__Type
///
QJsonValue* q_jsonvalue_new12(int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#operator-eq)
///
/// @param self QJsonValue*
/// @param other QJsonValue*
///
void q_jsonvalue_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#swap)
///
/// @param self QJsonValue*
/// @param other QJsonValue*
///
void q_jsonvalue_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#fromVariant)
///
/// @param variant QVariant*
///
QJsonValue* q_jsonvalue_from_variant(const void* variant);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toVariant)
///
/// @param self const QJsonValue*
///
QVariant* q_jsonvalue_to_variant(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#type)
///
/// @param self const QJsonValue*
///
/// @return enum QJsonValue__Type
///
int32_t q_jsonvalue_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#isNull)
///
/// @param self const QJsonValue*
///
bool q_jsonvalue_is_null(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#isBool)
///
/// @param self const QJsonValue*
///
bool q_jsonvalue_is_bool(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#isDouble)
///
/// @param self const QJsonValue*
///
bool q_jsonvalue_is_double(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#isString)
///
/// @param self const QJsonValue*
///
bool q_jsonvalue_is_string(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#isArray)
///
/// @param self const QJsonValue*
///
bool q_jsonvalue_is_array(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#isObject)
///
/// @param self const QJsonValue*
///
bool q_jsonvalue_is_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#isUndefined)
///
/// @param self const QJsonValue*
///
bool q_jsonvalue_is_undefined(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toBool)
///
/// @param self const QJsonValue*
///
bool q_jsonvalue_to_bool(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toInt)
///
/// @param self const QJsonValue*
///
int32_t q_jsonvalue_to_int(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toInteger)
///
/// @param self const QJsonValue*
///
int64_t q_jsonvalue_to_integer(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toDouble)
///
/// @param self const QJsonValue*
///
double q_jsonvalue_to_double(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QJsonValue*
///
const char* q_jsonvalue_to_string(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QJsonValue*
/// @param defaultValue const char*
///
const char* q_jsonvalue_to_string2(const void* self, const char* defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toArray)
///
/// @param self const QJsonValue*
///
QJsonArray* q_jsonvalue_to_array(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toArray)
///
/// @param self const QJsonValue*
/// @param defaultValue QJsonArray*
///
QJsonArray* q_jsonvalue_to_array2(const void* self, const void* defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toObject)
///
/// @param self const QJsonValue*
///
QJsonObject* q_jsonvalue_to_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toObject)
///
/// @param self const QJsonValue*
/// @param defaultValue QJsonObject*
///
QJsonObject* q_jsonvalue_to_object2(const void* self, const void* defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#operator-5b-5d)
///
/// @param self const QJsonValue*
/// @param key const char*
///
const QJsonValue* q_jsonvalue_operator_subscript(const void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#operator-5b-5d)
///
/// @param self const QJsonValue*
/// @param key const char*
///
const QJsonValue* q_jsonvalue_operator_subscript2(const void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#operator-5b-5d)
///
/// @param self const QJsonValue*
/// @param key char*
///
const QJsonValue* q_jsonvalue_operator_subscript3(const void* self, char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#operator-5b-5d)
///
/// @param self const QJsonValue*
/// @param i intptr_t
///
const QJsonValue* q_jsonvalue_operator_subscript4(const void* self, intptr_t i);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toBool)
///
/// @param self const QJsonValue*
/// @param defaultValue bool
///
bool q_jsonvalue_to_bool1(const void* self, bool defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toInt)
///
/// @param self const QJsonValue*
/// @param defaultValue int
///
int32_t q_jsonvalue_to_int1(const void* self, int defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toInteger)
///
/// @param self const QJsonValue*
/// @param defaultValue int64_t
///
int64_t q_jsonvalue_to_integer1(const void* self, int64_t defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toDouble)
///
/// @param self const QJsonValue*
/// @param defaultValue double
///
double q_jsonvalue_to_double1(const void* self, double defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#dtor.QJsonValue)
///
/// Delete this object from C++ memory.
///
/// @param self QJsonValue*
///
void q_jsonvalue_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html)

/// q_jsonvalueconstref_new constructs a new QJsonValueConstRef object.
///
/// @param other QJsonValueConstRef*
///
QJsonValueConstRef* q_jsonvalueconstref_new(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html)

/// q_jsonvalueconstref_new2 constructs a new QJsonValueConstRef object.
///
/// @param param1 QJsonValueConstRef*
///
QJsonValueConstRef* q_jsonvalueconstref_new2(const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#operator-QJsonValue)
///
/// @param self const QJsonValueConstRef*
///
QJsonValue* q_jsonvalueconstref_to_q_json_value(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toVariant)
///
/// @param self const QJsonValueConstRef*
///
QVariant* q_jsonvalueconstref_to_variant(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#type)
///
/// @param self const QJsonValueConstRef*
///
/// @return enum QJsonValue__Type
///
int32_t q_jsonvalueconstref_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#isNull)
///
/// @param self const QJsonValueConstRef*
///
bool q_jsonvalueconstref_is_null(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#isBool)
///
/// @param self const QJsonValueConstRef*
///
bool q_jsonvalueconstref_is_bool(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#isDouble)
///
/// @param self const QJsonValueConstRef*
///
bool q_jsonvalueconstref_is_double(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#isString)
///
/// @param self const QJsonValueConstRef*
///
bool q_jsonvalueconstref_is_string(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#isArray)
///
/// @param self const QJsonValueConstRef*
///
bool q_jsonvalueconstref_is_array(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#isObject)
///
/// @param self const QJsonValueConstRef*
///
bool q_jsonvalueconstref_is_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#isUndefined)
///
/// @param self const QJsonValueConstRef*
///
bool q_jsonvalueconstref_is_undefined(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toBool)
///
/// @param self const QJsonValueConstRef*
///
bool q_jsonvalueconstref_to_bool(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toInt)
///
/// @param self const QJsonValueConstRef*
///
int32_t q_jsonvalueconstref_to_int(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toInteger)
///
/// @param self const QJsonValueConstRef*
///
int64_t q_jsonvalueconstref_to_integer(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toDouble)
///
/// @param self const QJsonValueConstRef*
///
double q_jsonvalueconstref_to_double(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QJsonValueConstRef*
///
const char* q_jsonvalueconstref_to_string(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toArray)
///
/// @param self const QJsonValueConstRef*
///
QJsonArray* q_jsonvalueconstref_to_array(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toObject)
///
/// @param self const QJsonValueConstRef*
///
QJsonObject* q_jsonvalueconstref_to_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#operator-5b-5d)
///
/// @param self const QJsonValueConstRef*
/// @param key const char*
///
const QJsonValue* q_jsonvalueconstref_operator_subscript(const void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#operator-5b-5d)
///
/// @param self const QJsonValueConstRef*
/// @param key char*
///
const QJsonValue* q_jsonvalueconstref_operator_subscript2(const void* self, char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#operator-5b-5d)
///
/// @param self const QJsonValueConstRef*
/// @param i intptr_t
///
const QJsonValue* q_jsonvalueconstref_operator_subscript3(const void* self, intptr_t i);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toBool)
///
/// @param self const QJsonValueConstRef*
/// @param defaultValue bool
///
bool q_jsonvalueconstref_to_bool1(const void* self, bool defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toInt)
///
/// @param self const QJsonValueConstRef*
/// @param defaultValue int
///
int32_t q_jsonvalueconstref_to_int1(const void* self, int defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toInteger)
///
/// @param self const QJsonValueConstRef*
/// @param defaultValue int64_t
///
int64_t q_jsonvalueconstref_to_integer1(const void* self, int64_t defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toDouble)
///
/// @param self const QJsonValueConstRef*
/// @param defaultValue double
///
double q_jsonvalueconstref_to_double1(const void* self, double defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QJsonValueConstRef*
/// @param defaultValue const char*
///
const char* q_jsonvalueconstref_to_string1(const void* self, const char* defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#dtor.QJsonValueConstRef)
///
/// Delete this object from C++ memory.
///
/// @param self QJsonValueConstRef*
///
void q_jsonvalueconstref_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html)

/// q_jsonvalueref_new constructs a new QJsonValueRef object.
///
/// @param other QJsonValueRef*
///
QJsonValueRef* q_jsonvalueref_new(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html)

/// q_jsonvalueref_new2 constructs a new QJsonValueRef object.
///
/// @param param1 QJsonValueRef*
///
QJsonValueRef* q_jsonvalueref_new2(const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html)

/// q_jsonvalueref_new3 constructs a new QJsonValueRef object.
///
/// @param array QJsonArray*
/// @param idx intptr_t
///
QJsonValueRef* q_jsonvalueref_new3(void* array, intptr_t idx);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html)

/// q_jsonvalueref_new4 constructs a new QJsonValueRef object.
///
/// @param object QJsonObject*
/// @param idx intptr_t
///
QJsonValueRef* q_jsonvalueref_new4(void* object, intptr_t idx);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#operator-eq)
///
/// @param self QJsonValueRef*
/// @param val QJsonValue*
///
void q_jsonvalueref_operator_assign(void* self, const void* val);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#operator-eq)
///
/// @param self QJsonValueRef*
/// @param val QJsonValueRef*
///
void q_jsonvalueref_operator_assign2(void* self, const void* val);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#operator-QJsonValue)
///
/// @param self const QJsonValueRef*
///
QJsonValue* q_jsonvalueref_to_q_json_value(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#toVariant)
///
/// @param self const QJsonValueRef*
///
QVariant* q_jsonvalueref_to_variant(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#type)
///
/// @param self const QJsonValueRef*
///
/// @return enum QJsonValue__Type
///
int32_t q_jsonvalueref_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#isNull)
///
/// @param self const QJsonValueRef*
///
bool q_jsonvalueref_is_null(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#isBool)
///
/// @param self const QJsonValueRef*
///
bool q_jsonvalueref_is_bool(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#isDouble)
///
/// @param self const QJsonValueRef*
///
bool q_jsonvalueref_is_double(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#isString)
///
/// @param self const QJsonValueRef*
///
bool q_jsonvalueref_is_string(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#isArray)
///
/// @param self const QJsonValueRef*
///
bool q_jsonvalueref_is_array(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#isObject)
///
/// @param self const QJsonValueRef*
///
bool q_jsonvalueref_is_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#isUndefined)
///
/// @param self const QJsonValueRef*
///
bool q_jsonvalueref_is_undefined(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#toBool)
///
/// @param self const QJsonValueRef*
///
bool q_jsonvalueref_to_bool(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#toInt)
///
/// @param self const QJsonValueRef*
///
int32_t q_jsonvalueref_to_int(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#toInteger)
///
/// @param self const QJsonValueRef*
///
int64_t q_jsonvalueref_to_integer(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#toDouble)
///
/// @param self const QJsonValueRef*
///
double q_jsonvalueref_to_double(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#toString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QJsonValueRef*
///
const char* q_jsonvalueref_to_string(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#toArray)
///
/// @param self const QJsonValueRef*
///
QJsonArray* q_jsonvalueref_to_array(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#toObject)
///
/// @param self const QJsonValueRef*
///
QJsonObject* q_jsonvalueref_to_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#operator-5b-5d)
///
/// @param self const QJsonValueRef*
/// @param key const char*
///
const QJsonValue* q_jsonvalueref_operator_subscript(const void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#operator-5b-5d)
///
/// @param self const QJsonValueRef*
/// @param key char*
///
const QJsonValue* q_jsonvalueref_operator_subscript2(const void* self, char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#operator-5b-5d)
///
/// @param self const QJsonValueRef*
/// @param i intptr_t
///
const QJsonValue* q_jsonvalueref_operator_subscript3(const void* self, intptr_t i);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#toBool)
///
/// @param self const QJsonValueRef*
/// @param defaultValue bool
///
bool q_jsonvalueref_to_bool1(const void* self, bool defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#toInt)
///
/// @param self const QJsonValueRef*
/// @param defaultValue int
///
int32_t q_jsonvalueref_to_int1(const void* self, int defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#toInteger)
///
/// @param self const QJsonValueRef*
/// @param defaultValue int64_t
///
int64_t q_jsonvalueref_to_integer1(const void* self, int64_t defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#toDouble)
///
/// @param self const QJsonValueRef*
/// @param defaultValue double
///
double q_jsonvalueref_to_double1(const void* self, double defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#toString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QJsonValueRef*
/// @param defaultValue const char*
///
const char* q_jsonvalueref_to_string1(const void* self, const char* defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#dtor.QJsonValueRef)
///
/// Delete this object from C++ memory.
///
/// @param self QJsonValueRef*
///
void q_jsonvalueref_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#qHash)
///
/// @param value QJsonValue*
/// @param seed size_t
///
size_t q_qjsonvalue_q_hash(const void* value, size_t seed);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#public-types)

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
