#pragma once
#ifndef SRCQT6C_LIBQJSONVALUE_H
#define SRCQT6C_LIBQJSONVALUE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqjsonarray.h"
#include "libqjsonobject.h"
#include <string.h>
#include "libqvariant.h"

QJsonValue* q_jsonvalue_new();
QJsonValue* q_jsonvalue_new2(bool b);
QJsonValue* q_jsonvalue_new3(double n);
QJsonValue* q_jsonvalue_new4(int n);
QJsonValue* q_jsonvalue_new5(long long v);
QJsonValue* q_jsonvalue_new6(const char* s);
QJsonValue* q_jsonvalue_new7(const char* s);
QJsonValue* q_jsonvalue_new8(void* a);
QJsonValue* q_jsonvalue_new9(void* o);
QJsonValue* q_jsonvalue_new10(void* other);
QJsonValue* q_jsonvalue_new11(int64_t param1);
void q_jsonvalue_operator_assign(void* self, void* other);
void q_jsonvalue_swap(void* self, void* other);
QJsonValue* q_jsonvalue_from_variant(void* variant);
QVariant* q_jsonvalue_to_variant(void* self);
int64_t q_jsonvalue_type(void* self);
bool q_jsonvalue_is_null(void* self);
bool q_jsonvalue_is_bool(void* self);
bool q_jsonvalue_is_double(void* self);
bool q_jsonvalue_is_string(void* self);
bool q_jsonvalue_is_array(void* self);
bool q_jsonvalue_is_object(void* self);
bool q_jsonvalue_is_undefined(void* self);
bool q_jsonvalue_to_bool(void* self);
int32_t q_jsonvalue_to_int(void* self);
long long q_jsonvalue_to_integer(void* self);
double q_jsonvalue_to_double(void* self);
const char* q_jsonvalue_to_string(void* self);
const char* q_jsonvalue_to_string_with_default_value(void* self, const char* defaultValue);
QJsonArray* q_jsonvalue_to_array(void* self);
QJsonArray* q_jsonvalue_to_array_with_default_value(void* self, void* defaultValue);
QJsonObject* q_jsonvalue_to_object(void* self);
QJsonObject* q_jsonvalue_to_object_with_default_value(void* self, void* defaultValue);
QJsonValue* q_jsonvalue_operator_subscript(void* self, const char* key);
QJsonValue* q_jsonvalue_operator_subscript_with_qsizetype(void* self, int64_t i);
bool q_jsonvalue_operator_equal(void* self, void* other);
bool q_jsonvalue_operator_not_equal(void* self, void* other);
bool q_jsonvalue_to_bool1(void* self, bool defaultValue);
int32_t q_jsonvalue_to_int1(void* self, int defaultValue);
long long q_jsonvalue_to_integer1(void* self, long long defaultValue);
double q_jsonvalue_to_double1(void* self, double defaultValue);
void q_jsonvalue_delete(void* self);

QJsonValueConstRef* q_jsonvalueconstref_new(void* other);
QJsonValueConstRef* q_jsonvalueconstref_new2(void* param1);
QJsonValue* q_jsonvalueconstref_to_q_json_value(void* self);
QVariant* q_jsonvalueconstref_to_variant(void* self);
int64_t q_jsonvalueconstref_type(void* self);
bool q_jsonvalueconstref_is_null(void* self);
bool q_jsonvalueconstref_is_bool(void* self);
bool q_jsonvalueconstref_is_double(void* self);
bool q_jsonvalueconstref_is_string(void* self);
bool q_jsonvalueconstref_is_array(void* self);
bool q_jsonvalueconstref_is_object(void* self);
bool q_jsonvalueconstref_is_undefined(void* self);
bool q_jsonvalueconstref_to_bool(void* self);
int32_t q_jsonvalueconstref_to_int(void* self);
long long q_jsonvalueconstref_to_integer(void* self);
double q_jsonvalueconstref_to_double(void* self);
const char* q_jsonvalueconstref_to_string(void* self);
QJsonArray* q_jsonvalueconstref_to_array(void* self);
QJsonObject* q_jsonvalueconstref_to_object(void* self);
QJsonValue* q_jsonvalueconstref_operator_subscript_with_qsizetype(void* self, int64_t i);
bool q_jsonvalueconstref_operator_equal(void* self, void* other);
bool q_jsonvalueconstref_operator_not_equal(void* self, void* other);
bool q_jsonvalueconstref_to_bool1(void* self, bool defaultValue);
int32_t q_jsonvalueconstref_to_int1(void* self, int defaultValue);
long long q_jsonvalueconstref_to_integer1(void* self, long long defaultValue);
double q_jsonvalueconstref_to_double1(void* self, double defaultValue);
const char* q_jsonvalueconstref_to_string1(void* self, const char* defaultValue);
void q_jsonvalueconstref_delete(void* self);

QJsonValueRef* q_jsonvalueref_new(void* other);
QJsonValueRef* q_jsonvalueref_new2(void* param1);
QJsonValueRef* q_jsonvalueref_new3(void* array, int64_t idx);
QJsonValueRef* q_jsonvalueref_new4(void* object, int64_t idx);
void q_jsonvalueref_operator_assign(void* self, void* val);
void q_jsonvalueref_operator_assign_with_val(void* self, void* val);
QJsonValue* q_jsonvalueref_to_q_json_value(void* self);
QVariant* q_jsonvalueref_to_variant(void* self);
int64_t q_jsonvalueref_type(void* self);
bool q_jsonvalueref_is_null(void* self);
bool q_jsonvalueref_is_bool(void* self);
bool q_jsonvalueref_is_double(void* self);
bool q_jsonvalueref_is_string(void* self);
bool q_jsonvalueref_is_array(void* self);
bool q_jsonvalueref_is_object(void* self);
bool q_jsonvalueref_is_undefined(void* self);
bool q_jsonvalueref_to_bool(void* self);
int32_t q_jsonvalueref_to_int(void* self);
long long q_jsonvalueref_to_integer(void* self);
double q_jsonvalueref_to_double(void* self);
const char* q_jsonvalueref_to_string(void* self);
QJsonArray* q_jsonvalueref_to_array(void* self);
QJsonObject* q_jsonvalueref_to_object(void* self);
QJsonValue* q_jsonvalueref_operator_subscript_with_qsizetype(void* self, int64_t i);
bool q_jsonvalueref_operator_equal(void* self, void* other);
bool q_jsonvalueref_operator_not_equal(void* self, void* other);
bool q_jsonvalueref_to_bool1(void* self, bool defaultValue);
int32_t q_jsonvalueref_to_int1(void* self, int defaultValue);
long long q_jsonvalueref_to_integer1(void* self, long long defaultValue);
double q_jsonvalueref_to_double1(void* self, double defaultValue);
const char* q_jsonvalueref_to_string1(void* self, const char* defaultValue);
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
