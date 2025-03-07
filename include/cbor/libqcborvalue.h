#pragma once
#ifndef SRC_CBORQT6C_LIBQCBORVALUE_H
#define SRC_CBORQT6C_LIBQCBORVALUE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "libqcborarray.h"
#include "libqcbormap.h"
#include "libqcborstreamreader.h"
#include "libqcborstreamwriter.h"
#include "../libqdatetime.h"
#include "../libqjsonvalue.h"
#include "../libqregularexpression.h"
#include <string.h>
#include "../libqurl.h"
#include "../libquuid.h"
#include "../libqvariant.h"

QCborParserError* q_cborparsererror_new(void* other);
QCborParserError* q_cborparsererror_new2(void* other);
void q_cborparsererror_copy_assign(void* self, void* other);
void q_cborparsererror_move_assign(void* self, void* other);
const char* q_cborparsererror_error_string(void* self);
void q_cborparsererror_delete(void* self);

QCborValue* q_cborvalue_new();
QCborValue* q_cborvalue_new2(int64_t t_);
QCborValue* q_cborvalue_new3(bool b_);
QCborValue* q_cborvalue_new4(int i);
QCborValue* q_cborvalue_new5(uint32_t u);
QCborValue* q_cborvalue_new6(long long i);
QCborValue* q_cborvalue_new7(double v);
QCborValue* q_cborvalue_new8(int64_t st);
QCborValue* q_cborvalue_new9(const char* ba);
QCborValue* q_cborvalue_new10(const char* s);
QCborValue* q_cborvalue_new11(const char* s);
QCborValue* q_cborvalue_new12(void* a);
QCborValue* q_cborvalue_new13(void* m);
QCborValue* q_cborvalue_new14(int64_t tag);
QCborValue* q_cborvalue_new15(int64_t t_);
QCborValue* q_cborvalue_new16(void* dt);
QCborValue* q_cborvalue_new17(void* url);
QCborValue* q_cborvalue_new18(void* rx);
QCborValue* q_cborvalue_new19(void* uuid);
QCborValue* q_cborvalue_new20(void* other);
QCborValue* q_cborvalue_new21(int64_t tag, void* taggedValue);
QCborValue* q_cborvalue_new22(int64_t t_, void* tv);
void q_cborvalue_operator_assign(void* self, void* other);
void q_cborvalue_swap(void* self, void* other);
int64_t q_cborvalue_type(void* self);
bool q_cborvalue_is_integer(void* self);
bool q_cborvalue_is_byte_array(void* self);
bool q_cborvalue_is_string(void* self);
bool q_cborvalue_is_array(void* self);
bool q_cborvalue_is_map(void* self);
bool q_cborvalue_is_tag(void* self);
bool q_cborvalue_is_false(void* self);
bool q_cborvalue_is_true(void* self);
bool q_cborvalue_is_bool(void* self);
bool q_cborvalue_is_null(void* self);
bool q_cborvalue_is_undefined(void* self);
bool q_cborvalue_is_double(void* self);
bool q_cborvalue_is_date_time(void* self);
bool q_cborvalue_is_url(void* self);
bool q_cborvalue_is_regular_expression(void* self);
bool q_cborvalue_is_uuid(void* self);
bool q_cborvalue_is_invalid(void* self);
bool q_cborvalue_is_container(void* self);
bool q_cborvalue_is_simple_type(void* self);
bool q_cborvalue_is_simple_type_with_st(void* self, int64_t st);
int64_t q_cborvalue_to_simple_type(void* self);
long long q_cborvalue_to_integer(void* self);
bool q_cborvalue_to_bool(void* self);
double q_cborvalue_to_double(void* self);
int64_t q_cborvalue_tag(void* self);
QCborValue* q_cborvalue_tagged_value(void* self);
char* q_cborvalue_to_byte_array(void* self);
const char* q_cborvalue_to_string(void* self);
QDateTime* q_cborvalue_to_date_time(void* self);
QUrl* q_cborvalue_to_url(void* self);
QRegularExpression* q_cborvalue_to_regular_expression(void* self);
QUuid* q_cborvalue_to_uuid(void* self);
QCborArray* q_cborvalue_to_array(void* self);
QCborArray* q_cborvalue_to_array_with_default_value(void* self, void* defaultValue);
QCborMap* q_cborvalue_to_map(void* self);
QCborMap* q_cborvalue_to_map_with_default_value(void* self, void* defaultValue);
QCborValue* q_cborvalue_operator_subscript(void* self, const char* key);
QCborValue* q_cborvalue_operator_subscript2(void* self, long long key);
QCborValueRef* q_cborvalue_operator_subscript3(void* self, long long key);
QCborValueRef* q_cborvalue_operator_subscript5(void* self, const char* key);
int32_t q_cborvalue_compare(void* self, void* other);
bool q_cborvalue_operator_equal(void* self, void* other);
bool q_cborvalue_operator_not_equal(void* self, void* other);
bool q_cborvalue_operator_lesser(void* self, void* other);
QCborValue* q_cborvalue_from_variant(void* variant);
QVariant* q_cborvalue_to_variant(void* self);
QCborValue* q_cborvalue_from_json_value(void* v);
QJsonValue* q_cborvalue_to_json_value(void* self);
QCborValue* q_cborvalue_from_cbor(void* reader);
QCborValue* q_cborvalue_from_cbor_with_ba(const char* ba);
QCborValue* q_cborvalue_from_cbor2(const char* data, int64_t lenVal);
QCborValue* q_cborvalue_from_cbor3(unsigned char* data, int64_t lenVal);
char* q_cborvalue_to_cbor(void* self);
void q_cborvalue_to_cbor_with_writer(void* self, void* writer);
const char* q_cborvalue_to_diagnostic_notation(void* self);
int64_t q_cborvalue_to_simple_type1(void* self, int64_t defaultValue);
long long q_cborvalue_to_integer1(void* self, long long defaultValue);
bool q_cborvalue_to_bool1(void* self, bool defaultValue);
double q_cborvalue_to_double1(void* self, double defaultValue);
int64_t q_cborvalue_tag1(void* self, int64_t defaultValue);
QCborValue* q_cborvalue_tagged_value1(void* self, void* defaultValue);
char* q_cborvalue_to_byte_array1(void* self, const char* defaultValue);
const char* q_cborvalue_to_string1(void* self, const char* defaultValue);
QDateTime* q_cborvalue_to_date_time1(void* self, void* defaultValue);
QUrl* q_cborvalue_to_url1(void* self, void* defaultValue);
QRegularExpression* q_cborvalue_to_regular_expression1(void* self, void* defaultValue);
QUuid* q_cborvalue_to_uuid1(void* self, void* defaultValue);
QCborValue* q_cborvalue_from_cbor22(const char* ba, void* errorVal);
QCborValue* q_cborvalue_from_cbor32(const char* data, int64_t lenVal, void* errorVal);
QCborValue* q_cborvalue_from_cbor33(unsigned char* data, int64_t lenVal, void* errorVal);
char* q_cborvalue_to_cbor1(void* self, int64_t opt);
void q_cborvalue_to_cbor2(void* self, void* writer, int64_t opt);
const char* q_cborvalue_to_diagnostic_notation1(void* self, int64_t opts);
void q_cborvalue_delete(void* self);

QCborValueConstRef* q_cborvalueconstref_new(void* other);
QCborValueConstRef* q_cborvalueconstref_new2(void* param1);
QCborValue* q_cborvalueconstref_to_q_cbor_value(void* self);
int64_t q_cborvalueconstref_type(void* self);
bool q_cborvalueconstref_is_integer(void* self);
bool q_cborvalueconstref_is_byte_array(void* self);
bool q_cborvalueconstref_is_string(void* self);
bool q_cborvalueconstref_is_array(void* self);
bool q_cborvalueconstref_is_map(void* self);
bool q_cborvalueconstref_is_tag(void* self);
bool q_cborvalueconstref_is_false(void* self);
bool q_cborvalueconstref_is_true(void* self);
bool q_cborvalueconstref_is_bool(void* self);
bool q_cborvalueconstref_is_null(void* self);
bool q_cborvalueconstref_is_undefined(void* self);
bool q_cborvalueconstref_is_double(void* self);
bool q_cborvalueconstref_is_date_time(void* self);
bool q_cborvalueconstref_is_url(void* self);
bool q_cborvalueconstref_is_regular_expression(void* self);
bool q_cborvalueconstref_is_uuid(void* self);
bool q_cborvalueconstref_is_invalid(void* self);
bool q_cborvalueconstref_is_container(void* self);
bool q_cborvalueconstref_is_simple_type(void* self);
bool q_cborvalueconstref_is_simple_type_with_st(void* self, int64_t st);
int64_t q_cborvalueconstref_to_simple_type(void* self);
int64_t q_cborvalueconstref_tag(void* self);
QCborValue* q_cborvalueconstref_tagged_value(void* self);
long long q_cborvalueconstref_to_integer(void* self);
bool q_cborvalueconstref_to_bool(void* self);
double q_cborvalueconstref_to_double(void* self);
char* q_cborvalueconstref_to_byte_array(void* self);
const char* q_cborvalueconstref_to_string(void* self);
QDateTime* q_cborvalueconstref_to_date_time(void* self);
QUrl* q_cborvalueconstref_to_url(void* self);
QRegularExpression* q_cborvalueconstref_to_regular_expression(void* self);
QUuid* q_cborvalueconstref_to_uuid(void* self);
QCborArray* q_cborvalueconstref_to_array(void* self);
QCborArray* q_cborvalueconstref_to_array_with_q_cbor_array(void* self, void* a);
QCborMap* q_cborvalueconstref_to_map(void* self);
QCborMap* q_cborvalueconstref_to_map_with_q_cbor_map(void* self, void* m);
QCborValue* q_cborvalueconstref_operator_subscript(void* self, const char* key);
QCborValue* q_cborvalueconstref_operator_subscript2(void* self, long long key);
int32_t q_cborvalueconstref_compare(void* self, void* other);
bool q_cborvalueconstref_operator_equal(void* self, void* other);
bool q_cborvalueconstref_operator_not_equal(void* self, void* other);
bool q_cborvalueconstref_operator_lesser(void* self, void* other);
QVariant* q_cborvalueconstref_to_variant(void* self);
QJsonValue* q_cborvalueconstref_to_json_value(void* self);
char* q_cborvalueconstref_to_cbor(void* self);
void q_cborvalueconstref_to_cbor_with_writer(void* self, void* writer);
const char* q_cborvalueconstref_to_diagnostic_notation(void* self);
int64_t q_cborvalueconstref_to_simple_type1(void* self, int64_t defaultValue);
int64_t q_cborvalueconstref_tag1(void* self, int64_t defaultValue);
QCborValue* q_cborvalueconstref_tagged_value1(void* self, void* defaultValue);
long long q_cborvalueconstref_to_integer1(void* self, long long defaultValue);
bool q_cborvalueconstref_to_bool1(void* self, bool defaultValue);
double q_cborvalueconstref_to_double1(void* self, double defaultValue);
char* q_cborvalueconstref_to_byte_array1(void* self, const char* defaultValue);
const char* q_cborvalueconstref_to_string1(void* self, const char* defaultValue);
QDateTime* q_cborvalueconstref_to_date_time1(void* self, void* defaultValue);
QUrl* q_cborvalueconstref_to_url1(void* self, void* defaultValue);
QRegularExpression* q_cborvalueconstref_to_regular_expression1(void* self, void* defaultValue);
QUuid* q_cborvalueconstref_to_uuid1(void* self, void* defaultValue);
char* q_cborvalueconstref_to_cbor1(void* self, int64_t opt);
void q_cborvalueconstref_to_cbor2(void* self, void* writer, int64_t opt);
const char* q_cborvalueconstref_to_diagnostic_notation1(void* self, int64_t opt);
void q_cborvalueconstref_delete(void* self);

QCborValueRef* q_cborvalueref_new(void* other);
QCborValueRef* q_cborvalueref_new2(void* other);
QCborValueRef* q_cborvalueref_new3(void* param1);
void q_cborvalueref_operator_assign(void* self, void* other);
void q_cborvalueref_operator_assign_with_other(void* self, void* other);
QCborValueRef* q_cborvalueref_operator_subscript(void* self, long long key);
QCborValueRef* q_cborvalueref_operator_subscript2(void* self, const char* key);
QCborValue* q_cborvalueref_to_q_cbor_value(void* self);
int64_t q_cborvalueref_type(void* self);
bool q_cborvalueref_is_integer(void* self);
bool q_cborvalueref_is_byte_array(void* self);
bool q_cborvalueref_is_string(void* self);
bool q_cborvalueref_is_array(void* self);
bool q_cborvalueref_is_map(void* self);
bool q_cborvalueref_is_tag(void* self);
bool q_cborvalueref_is_false(void* self);
bool q_cborvalueref_is_true(void* self);
bool q_cborvalueref_is_bool(void* self);
bool q_cborvalueref_is_null(void* self);
bool q_cborvalueref_is_undefined(void* self);
bool q_cborvalueref_is_double(void* self);
bool q_cborvalueref_is_date_time(void* self);
bool q_cborvalueref_is_url(void* self);
bool q_cborvalueref_is_regular_expression(void* self);
bool q_cborvalueref_is_uuid(void* self);
bool q_cborvalueref_is_invalid(void* self);
bool q_cborvalueref_is_container(void* self);
bool q_cborvalueref_is_simple_type(void* self);
bool q_cborvalueref_is_simple_type_with_st(void* self, int64_t st);
int64_t q_cborvalueref_to_simple_type(void* self);
int64_t q_cborvalueref_tag(void* self);
QCborValue* q_cborvalueref_tagged_value(void* self);
long long q_cborvalueref_to_integer(void* self);
bool q_cborvalueref_to_bool(void* self);
double q_cborvalueref_to_double(void* self);
char* q_cborvalueref_to_byte_array(void* self);
const char* q_cborvalueref_to_string(void* self);
QDateTime* q_cborvalueref_to_date_time(void* self);
QUrl* q_cborvalueref_to_url(void* self);
QRegularExpression* q_cborvalueref_to_regular_expression(void* self);
QUuid* q_cborvalueref_to_uuid(void* self);
QCborArray* q_cborvalueref_to_array(void* self);
QCborArray* q_cborvalueref_to_array_with_q_cbor_array(void* self, void* a);
QCborMap* q_cborvalueref_to_map(void* self);
QCborMap* q_cborvalueref_to_map_with_q_cbor_map(void* self, void* m);
QCborValue* q_cborvalueref_operator_subscript3(void* self, const char* key);
QCborValue* q_cborvalueref_operator_subscript5(void* self, long long key);
int32_t q_cborvalueref_compare(void* self, void* other);
bool q_cborvalueref_operator_equal(void* self, void* other);
bool q_cborvalueref_operator_not_equal(void* self, void* other);
bool q_cborvalueref_operator_lesser(void* self, void* other);
QVariant* q_cborvalueref_to_variant(void* self);
QJsonValue* q_cborvalueref_to_json_value(void* self);
char* q_cborvalueref_to_cbor(void* self);
void q_cborvalueref_to_cbor_with_writer(void* self, void* writer);
const char* q_cborvalueref_to_diagnostic_notation(void* self);
int64_t q_cborvalueref_to_simple_type1(void* self, int64_t defaultValue);
int64_t q_cborvalueref_tag1(void* self, int64_t defaultValue);
QCborValue* q_cborvalueref_tagged_value1(void* self, void* defaultValue);
long long q_cborvalueref_to_integer1(void* self, long long defaultValue);
bool q_cborvalueref_to_bool1(void* self, bool defaultValue);
double q_cborvalueref_to_double1(void* self, double defaultValue);
char* q_cborvalueref_to_byte_array1(void* self, const char* defaultValue);
const char* q_cborvalueref_to_string1(void* self, const char* defaultValue);
QDateTime* q_cborvalueref_to_date_time1(void* self, void* defaultValue);
QUrl* q_cborvalueref_to_url1(void* self, void* defaultValue);
QRegularExpression* q_cborvalueref_to_regular_expression1(void* self, void* defaultValue);
QUuid* q_cborvalueref_to_uuid1(void* self, void* defaultValue);
char* q_cborvalueref_to_cbor1(void* self, int64_t opt);
void q_cborvalueref_to_cbor2(void* self, void* writer, int64_t opt);
const char* q_cborvalueref_to_diagnostic_notation1(void* self, int64_t opt);
void q_cborvalueref_delete(void* self);

/// https://doc.qt.io/qt-6/qcborvalue.html#types

typedef enum {
    QCBORVALUE_ENCODINGOPTION_SORTKEYSINMAPS = 1,
    QCBORVALUE_ENCODINGOPTION_USEFLOAT = 2,
    QCBORVALUE_ENCODINGOPTION_USEFLOAT16 = 6,
    QCBORVALUE_ENCODINGOPTION_USEINTEGERS = 8,
    QCBORVALUE_ENCODINGOPTION_NOTRANSFORMATION = 0
} QCborValue__EncodingOption;

typedef enum {
    QCBORVALUE_DIAGNOSTICNOTATIONOPTION_COMPACT = 0,
    QCBORVALUE_DIAGNOSTICNOTATIONOPTION_LINEWRAPPED = 1,
    QCBORVALUE_DIAGNOSTICNOTATIONOPTION_EXTENDEDFORMAT = 2
} QCborValue__DiagnosticNotationOption;

typedef enum {
    QCBORVALUE_TYPE_INTEGER = 0,
    QCBORVALUE_TYPE_BYTEARRAY = 64,
    QCBORVALUE_TYPE_STRING = 96,
    QCBORVALUE_TYPE_ARRAY = 128,
    QCBORVALUE_TYPE_MAP = 160,
    QCBORVALUE_TYPE_TAG = 192,
    QCBORVALUE_TYPE_SIMPLETYPE = 256,
    QCBORVALUE_TYPE_FALSE = 276,
    QCBORVALUE_TYPE_TRUE = 277,
    QCBORVALUE_TYPE_NULL = 278,
    QCBORVALUE_TYPE_UNDEFINED = 279,
    QCBORVALUE_TYPE_DOUBLE = 514,
    QCBORVALUE_TYPE_DATETIME = 65536,
    QCBORVALUE_TYPE_URL = 65568,
    QCBORVALUE_TYPE_REGULAREXPRESSION = 65571,
    QCBORVALUE_TYPE_UUID = 65573,
    QCBORVALUE_TYPE_INVALID = -1
} QCborValue__Type;

#endif
