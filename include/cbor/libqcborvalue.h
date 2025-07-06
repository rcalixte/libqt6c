#pragma once
#ifndef SRC_CBORQT6C_LIBQCBORVALUE_H
#define SRC_CBORQT6C_LIBQCBORVALUE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qcborparsererror.html

/// q_cborparsererror_new constructs a new QCborParserError object.
///
/// ``` QCborParserError* other ```
QCborParserError* q_cborparsererror_new(void* other);

/// q_cborparsererror_new2 constructs a new QCborParserError object and invalidates the source QCborParserError object.
///
/// ``` QCborParserError* other ```
QCborParserError* q_cborparsererror_new2(void* other);

/// q_cborparsererror_copy_assign shallow copies `other` into `self`.
///
/// ``` QCborParserError* self, QCborParserError* other ```
void q_cborparsererror_copy_assign(void* self, void* other);

/// q_cborparsererror_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QCborParserError* self, QCborParserError* other ```
void q_cborparsererror_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborparsererror.html#errorString)
///
/// ``` QCborParserError* self ```
const char* q_cborparsererror_error_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborparsererror.html#dtor.QCborParserError)
///
/// Delete this object from C++ memory.
///
/// ``` QCborParserError* self ```
void q_cborparsererror_delete(void* self);

/// https://doc.qt.io/qt-6/qcborvalue.html

/// q_cborvalue_new constructs a new QCborValue object.
///
///
QCborValue* q_cborvalue_new();

/// q_cborvalue_new2 constructs a new QCborValue object.
///
/// ``` enum QCborValue__Type t_ ```
QCborValue* q_cborvalue_new2(int64_t t_);

/// q_cborvalue_new3 constructs a new QCborValue object.
///
/// ``` bool b_ ```
QCborValue* q_cborvalue_new3(bool b_);

/// q_cborvalue_new4 constructs a new QCborValue object.
///
/// ``` int i ```
QCborValue* q_cborvalue_new4(int i);

/// q_cborvalue_new5 constructs a new QCborValue object.
///
/// ``` uint32_t u ```
QCborValue* q_cborvalue_new5(uint32_t u);

/// q_cborvalue_new6 constructs a new QCborValue object.
///
/// ``` long long i ```
QCborValue* q_cborvalue_new6(long long i);

/// q_cborvalue_new7 constructs a new QCborValue object.
///
/// ``` double v ```
QCborValue* q_cborvalue_new7(double v);

/// q_cborvalue_new8 constructs a new QCborValue object.
///
/// ``` enum QCborValue__QCborSimpleType st ```
QCborValue* q_cborvalue_new8(int64_t st);

/// q_cborvalue_new9 constructs a new QCborValue object.
///
/// ``` const char* ba ```
QCborValue* q_cborvalue_new9(const char* ba);

/// q_cborvalue_new10 constructs a new QCborValue object.
///
/// ``` const char* s ```
QCborValue* q_cborvalue_new10(const char* s);

/// q_cborvalue_new11 constructs a new QCborValue object.
///
/// ``` const char* s ```
QCborValue* q_cborvalue_new11(const char* s);

/// q_cborvalue_new12 constructs a new QCborValue object.
///
/// ``` QCborArray* a ```
QCborValue* q_cborvalue_new12(void* a);

/// q_cborvalue_new13 constructs a new QCborValue object.
///
/// ``` QCborMap* m ```
QCborValue* q_cborvalue_new13(void* m);

/// q_cborvalue_new14 constructs a new QCborValue object.
///
/// ``` enum QCborValue__QCborTag tag ```
QCborValue* q_cborvalue_new14(int64_t tag);

/// q_cborvalue_new15 constructs a new QCborValue object.
///
/// ``` enum QCborValue__QCborKnownTags t_ ```
QCborValue* q_cborvalue_new15(int64_t t_);

/// q_cborvalue_new16 constructs a new QCborValue object.
///
/// ``` QDateTime* dt ```
QCborValue* q_cborvalue_new16(void* dt);

/// q_cborvalue_new17 constructs a new QCborValue object.
///
/// ``` QUrl* url ```
QCborValue* q_cborvalue_new17(void* url);

/// q_cborvalue_new18 constructs a new QCborValue object.
///
/// ``` QRegularExpression* rx ```
QCborValue* q_cborvalue_new18(void* rx);

/// q_cborvalue_new19 constructs a new QCborValue object.
///
/// ``` QUuid* uuid ```
QCborValue* q_cborvalue_new19(void* uuid);

/// q_cborvalue_new20 constructs a new QCborValue object.
///
/// ``` QCborValue* other ```
QCborValue* q_cborvalue_new20(void* other);

/// q_cborvalue_new21 constructs a new QCborValue object.
///
/// ``` enum QCborValue__QCborTag tag, QCborValue* taggedValue ```
QCborValue* q_cborvalue_new21(int64_t tag, void* taggedValue);

/// q_cborvalue_new22 constructs a new QCborValue object.
///
/// ``` enum QCborValue__QCborKnownTags t_, QCborValue* tv ```
QCborValue* q_cborvalue_new22(int64_t t_, void* tv);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#operator=)
///
/// ``` QCborValue* self, QCborValue* other ```
void q_cborvalue_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#swap)
///
/// ``` QCborValue* self, QCborValue* other ```
void q_cborvalue_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#type)
///
/// ``` QCborValue* self ```
int64_t q_cborvalue_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#isInteger)
///
/// ``` QCborValue* self ```
bool q_cborvalue_is_integer(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#isByteArray)
///
/// ``` QCborValue* self ```
bool q_cborvalue_is_byte_array(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#isString)
///
/// ``` QCborValue* self ```
bool q_cborvalue_is_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#isArray)
///
/// ``` QCborValue* self ```
bool q_cborvalue_is_array(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#isMap)
///
/// ``` QCborValue* self ```
bool q_cborvalue_is_map(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#isTag)
///
/// ``` QCborValue* self ```
bool q_cborvalue_is_tag(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#isFalse)
///
/// ``` QCborValue* self ```
bool q_cborvalue_is_false(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#isTrue)
///
/// ``` QCborValue* self ```
bool q_cborvalue_is_true(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#isBool)
///
/// ``` QCborValue* self ```
bool q_cborvalue_is_bool(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#isNull)
///
/// ``` QCborValue* self ```
bool q_cborvalue_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#isUndefined)
///
/// ``` QCborValue* self ```
bool q_cborvalue_is_undefined(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#isDouble)
///
/// ``` QCborValue* self ```
bool q_cborvalue_is_double(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#isDateTime)
///
/// ``` QCborValue* self ```
bool q_cborvalue_is_date_time(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#isUrl)
///
/// ``` QCborValue* self ```
bool q_cborvalue_is_url(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#isRegularExpression)
///
/// ``` QCborValue* self ```
bool q_cborvalue_is_regular_expression(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#isUuid)
///
/// ``` QCborValue* self ```
bool q_cborvalue_is_uuid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#isInvalid)
///
/// ``` QCborValue* self ```
bool q_cborvalue_is_invalid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#isContainer)
///
/// ``` QCborValue* self ```
bool q_cborvalue_is_container(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#isSimpleType)
///
/// ``` QCborValue* self ```
bool q_cborvalue_is_simple_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#isSimpleType)
///
/// ``` QCborValue* self, enum QCborValue__QCborSimpleType st ```
bool q_cborvalue_is_simple_type_with_st(void* self, int64_t st);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#toSimpleType)
///
/// ``` QCborValue* self ```
int64_t q_cborvalue_to_simple_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#toInteger)
///
/// ``` QCborValue* self ```
long long q_cborvalue_to_integer(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#toBool)
///
/// ``` QCborValue* self ```
bool q_cborvalue_to_bool(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#toDouble)
///
/// ``` QCborValue* self ```
double q_cborvalue_to_double(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#tag)
///
/// ``` QCborValue* self ```
int64_t q_cborvalue_tag(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#taggedValue)
///
/// ``` QCborValue* self ```
QCborValue* q_cborvalue_tagged_value(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#toByteArray)
///
/// ``` QCborValue* self ```
char* q_cborvalue_to_byte_array(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#toString)
///
/// ``` QCborValue* self ```
const char* q_cborvalue_to_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#toDateTime)
///
/// ``` QCborValue* self ```
QDateTime* q_cborvalue_to_date_time(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#toUrl)
///
/// ``` QCborValue* self ```
QUrl* q_cborvalue_to_url(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#toRegularExpression)
///
/// ``` QCborValue* self ```
QRegularExpression* q_cborvalue_to_regular_expression(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#toUuid)
///
/// ``` QCborValue* self ```
QUuid* q_cborvalue_to_uuid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#toArray)
///
/// ``` QCborValue* self ```
QCborArray* q_cborvalue_to_array(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#toArray)
///
/// ``` QCborValue* self, QCborArray* defaultValue ```
QCborArray* q_cborvalue_to_array_with_default_value(void* self, void* defaultValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#toMap)
///
/// ``` QCborValue* self ```
QCborMap* q_cborvalue_to_map(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#toMap)
///
/// ``` QCborValue* self, QCborMap* defaultValue ```
QCborMap* q_cborvalue_to_map_with_default_value(void* self, void* defaultValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#operator[])
///
/// ``` QCborValue* self, const char* key ```
const QCborValue* q_cborvalue_operator_subscript(void* self, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#operator[])
///
/// ``` QCborValue* self, long long key ```
const QCborValue* q_cborvalue_operator_subscript2(void* self, long long key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#operator[])
///
/// ``` QCborValue* self, long long key ```
QCborValueRef* q_cborvalue_operator_subscript3(void* self, long long key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#operator[])
///
/// ``` QCborValue* self, const char* key ```
QCborValueRef* q_cborvalue_operator_subscript5(void* self, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#compare)
///
/// ``` QCborValue* self, QCborValue* other ```
int32_t q_cborvalue_compare(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#fromVariant)
///
/// ``` QVariant* variant ```
QCborValue* q_cborvalue_from_variant(void* variant);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#toVariant)
///
/// ``` QCborValue* self ```
QVariant* q_cborvalue_to_variant(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#fromJsonValue)
///
/// ``` QJsonValue* v ```
QCborValue* q_cborvalue_from_json_value(void* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#toJsonValue)
///
/// ``` QCborValue* self ```
QJsonValue* q_cborvalue_to_json_value(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#fromCbor)
///
/// ``` QCborStreamReader* reader ```
QCborValue* q_cborvalue_from_cbor(void* reader);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#fromCbor)
///
/// ``` const char* ba ```
QCborValue* q_cborvalue_from_cbor_with_ba(const char* ba);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#fromCbor)
///
/// ``` const char* data, int64_t lenVal ```
QCborValue* q_cborvalue_from_cbor2(const char* data, int64_t lenVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#fromCbor)
///
/// ``` unsigned char* data, int64_t lenVal ```
QCborValue* q_cborvalue_from_cbor3(unsigned char* data, int64_t lenVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#toCbor)
///
/// ``` QCborValue* self ```
char* q_cborvalue_to_cbor(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#toCbor)
///
/// ``` QCborValue* self, QCborStreamWriter* writer ```
void q_cborvalue_to_cbor_with_writer(void* self, void* writer);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#toDiagnosticNotation)
///
/// ``` QCborValue* self ```
const char* q_cborvalue_to_diagnostic_notation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#toSimpleType)
///
/// ``` QCborValue* self, enum QCborValue__QCborSimpleType defaultValue ```
int64_t q_cborvalue_to_simple_type1(void* self, int64_t defaultValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#toInteger)
///
/// ``` QCborValue* self, long long defaultValue ```
long long q_cborvalue_to_integer1(void* self, long long defaultValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#toBool)
///
/// ``` QCborValue* self, bool defaultValue ```
bool q_cborvalue_to_bool1(void* self, bool defaultValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#toDouble)
///
/// ``` QCborValue* self, double defaultValue ```
double q_cborvalue_to_double1(void* self, double defaultValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#tag)
///
/// ``` QCborValue* self, enum QCborValue__QCborTag defaultValue ```
int64_t q_cborvalue_tag1(void* self, int64_t defaultValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#taggedValue)
///
/// ``` QCborValue* self, QCborValue* defaultValue ```
QCborValue* q_cborvalue_tagged_value1(void* self, void* defaultValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#toByteArray)
///
/// ``` QCborValue* self, const char* defaultValue ```
char* q_cborvalue_to_byte_array1(void* self, const char* defaultValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#toString)
///
/// ``` QCborValue* self, const char* defaultValue ```
const char* q_cborvalue_to_string1(void* self, const char* defaultValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#toDateTime)
///
/// ``` QCborValue* self, QDateTime* defaultValue ```
QDateTime* q_cborvalue_to_date_time1(void* self, void* defaultValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#toUrl)
///
/// ``` QCborValue* self, QUrl* defaultValue ```
QUrl* q_cborvalue_to_url1(void* self, void* defaultValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#toRegularExpression)
///
/// ``` QCborValue* self, QRegularExpression* defaultValue ```
QRegularExpression* q_cborvalue_to_regular_expression1(void* self, void* defaultValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#toUuid)
///
/// ``` QCborValue* self, QUuid* defaultValue ```
QUuid* q_cborvalue_to_uuid1(void* self, void* defaultValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#fromCbor)
///
/// ``` const char* ba, QCborParserError* errorVal ```
QCborValue* q_cborvalue_from_cbor22(const char* ba, void* errorVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#fromCbor)
///
/// ``` const char* data, int64_t lenVal, QCborParserError* errorVal ```
QCborValue* q_cborvalue_from_cbor32(const char* data, int64_t lenVal, void* errorVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#fromCbor)
///
/// ``` unsigned char* data, int64_t lenVal, QCborParserError* errorVal ```
QCborValue* q_cborvalue_from_cbor33(unsigned char* data, int64_t lenVal, void* errorVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#toCbor)
///
/// ``` QCborValue* self, int opt ```
char* q_cborvalue_to_cbor1(void* self, int64_t opt);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#toCbor)
///
/// ``` QCborValue* self, QCborStreamWriter* writer, int opt ```
void q_cborvalue_to_cbor2(void* self, void* writer, int64_t opt);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#toDiagnosticNotation)
///
/// ``` QCborValue* self, int opts ```
const char* q_cborvalue_to_diagnostic_notation1(void* self, int64_t opts);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#dtor.QCborValue)
///
/// Delete this object from C++ memory.
///
/// ``` QCborValue* self ```
void q_cborvalue_delete(void* self);

/// https://doc.qt.io/qt-6/qcborvalueconstref.html

/// q_cborvalueconstref_new constructs a new QCborValueConstRef object.
///
/// ``` QCborValueConstRef* other ```
QCborValueConstRef* q_cborvalueconstref_new(void* other);

/// q_cborvalueconstref_new2 constructs a new QCborValueConstRef object.
///
/// ``` QCborValueConstRef* param1 ```
QCborValueConstRef* q_cborvalueconstref_new2(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#operator QCborValue)
///
/// ``` QCborValueConstRef* self ```
QCborValue* q_cborvalueconstref_to_q_cbor_value(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#type)
///
/// ``` QCborValueConstRef* self ```
int64_t q_cborvalueconstref_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#isInteger)
///
/// ``` QCborValueConstRef* self ```
bool q_cborvalueconstref_is_integer(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#isByteArray)
///
/// ``` QCborValueConstRef* self ```
bool q_cborvalueconstref_is_byte_array(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#isString)
///
/// ``` QCborValueConstRef* self ```
bool q_cborvalueconstref_is_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#isArray)
///
/// ``` QCborValueConstRef* self ```
bool q_cborvalueconstref_is_array(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#isMap)
///
/// ``` QCborValueConstRef* self ```
bool q_cborvalueconstref_is_map(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#isTag)
///
/// ``` QCborValueConstRef* self ```
bool q_cborvalueconstref_is_tag(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#isFalse)
///
/// ``` QCborValueConstRef* self ```
bool q_cborvalueconstref_is_false(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#isTrue)
///
/// ``` QCborValueConstRef* self ```
bool q_cborvalueconstref_is_true(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#isBool)
///
/// ``` QCborValueConstRef* self ```
bool q_cborvalueconstref_is_bool(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#isNull)
///
/// ``` QCborValueConstRef* self ```
bool q_cborvalueconstref_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#isUndefined)
///
/// ``` QCborValueConstRef* self ```
bool q_cborvalueconstref_is_undefined(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#isDouble)
///
/// ``` QCborValueConstRef* self ```
bool q_cborvalueconstref_is_double(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#isDateTime)
///
/// ``` QCborValueConstRef* self ```
bool q_cborvalueconstref_is_date_time(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#isUrl)
///
/// ``` QCborValueConstRef* self ```
bool q_cborvalueconstref_is_url(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#isRegularExpression)
///
/// ``` QCborValueConstRef* self ```
bool q_cborvalueconstref_is_regular_expression(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#isUuid)
///
/// ``` QCborValueConstRef* self ```
bool q_cborvalueconstref_is_uuid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#isInvalid)
///
/// ``` QCborValueConstRef* self ```
bool q_cborvalueconstref_is_invalid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#isContainer)
///
/// ``` QCborValueConstRef* self ```
bool q_cborvalueconstref_is_container(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#isSimpleType)
///
/// ``` QCborValueConstRef* self ```
bool q_cborvalueconstref_is_simple_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#isSimpleType)
///
/// ``` QCborValueConstRef* self, enum QCborValueConstRef__QCborSimpleType st ```
bool q_cborvalueconstref_is_simple_type_with_st(void* self, int64_t st);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#toSimpleType)
///
/// ``` QCborValueConstRef* self ```
int64_t q_cborvalueconstref_to_simple_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#tag)
///
/// ``` QCborValueConstRef* self ```
int64_t q_cborvalueconstref_tag(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#taggedValue)
///
/// ``` QCborValueConstRef* self ```
QCborValue* q_cborvalueconstref_tagged_value(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#toInteger)
///
/// ``` QCborValueConstRef* self ```
long long q_cborvalueconstref_to_integer(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#toBool)
///
/// ``` QCborValueConstRef* self ```
bool q_cborvalueconstref_to_bool(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#toDouble)
///
/// ``` QCborValueConstRef* self ```
double q_cborvalueconstref_to_double(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#toByteArray)
///
/// ``` QCborValueConstRef* self ```
char* q_cborvalueconstref_to_byte_array(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#toString)
///
/// ``` QCborValueConstRef* self ```
const char* q_cborvalueconstref_to_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#toDateTime)
///
/// ``` QCborValueConstRef* self ```
QDateTime* q_cborvalueconstref_to_date_time(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#toUrl)
///
/// ``` QCborValueConstRef* self ```
QUrl* q_cborvalueconstref_to_url(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#toRegularExpression)
///
/// ``` QCborValueConstRef* self ```
QRegularExpression* q_cborvalueconstref_to_regular_expression(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#toUuid)
///
/// ``` QCborValueConstRef* self ```
QUuid* q_cborvalueconstref_to_uuid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#toArray)
///
/// ``` QCborValueConstRef* self ```
QCborArray* q_cborvalueconstref_to_array(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#toArray)
///
/// ``` QCborValueConstRef* self, QCborArray* a ```
QCborArray* q_cborvalueconstref_to_array_with_q_cbor_array(void* self, void* a);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#toMap)
///
/// ``` QCborValueConstRef* self ```
QCborMap* q_cborvalueconstref_to_map(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#toMap)
///
/// ``` QCborValueConstRef* self, QCborMap* m ```
QCborMap* q_cborvalueconstref_to_map_with_q_cbor_map(void* self, void* m);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#operator[])
///
/// ``` QCborValueConstRef* self, const char* key ```
const QCborValue* q_cborvalueconstref_operator_subscript(void* self, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#operator[])
///
/// ``` QCborValueConstRef* self, long long key ```
const QCborValue* q_cborvalueconstref_operator_subscript2(void* self, long long key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#compare)
///
/// ``` QCborValueConstRef* self, QCborValue* other ```
int32_t q_cborvalueconstref_compare(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#toVariant)
///
/// ``` QCborValueConstRef* self ```
QVariant* q_cborvalueconstref_to_variant(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#toJsonValue)
///
/// ``` QCborValueConstRef* self ```
QJsonValue* q_cborvalueconstref_to_json_value(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#toCbor)
///
/// ``` QCborValueConstRef* self ```
char* q_cborvalueconstref_to_cbor(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#toCbor)
///
/// ``` QCborValueConstRef* self, QCborStreamWriter* writer ```
void q_cborvalueconstref_to_cbor_with_writer(void* self, void* writer);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#toDiagnosticNotation)
///
/// ``` QCborValueConstRef* self ```
const char* q_cborvalueconstref_to_diagnostic_notation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#toSimpleType)
///
/// ``` QCborValueConstRef* self, enum QCborValueConstRef__QCborSimpleType defaultValue ```
int64_t q_cborvalueconstref_to_simple_type1(void* self, int64_t defaultValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#tag)
///
/// ``` QCborValueConstRef* self, enum QCborValueConstRef__QCborTag defaultValue ```
int64_t q_cborvalueconstref_tag1(void* self, int64_t defaultValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#taggedValue)
///
/// ``` QCborValueConstRef* self, QCborValue* defaultValue ```
QCborValue* q_cborvalueconstref_tagged_value1(void* self, void* defaultValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#toInteger)
///
/// ``` QCborValueConstRef* self, long long defaultValue ```
long long q_cborvalueconstref_to_integer1(void* self, long long defaultValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#toBool)
///
/// ``` QCborValueConstRef* self, bool defaultValue ```
bool q_cborvalueconstref_to_bool1(void* self, bool defaultValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#toDouble)
///
/// ``` QCborValueConstRef* self, double defaultValue ```
double q_cborvalueconstref_to_double1(void* self, double defaultValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#toByteArray)
///
/// ``` QCborValueConstRef* self, const char* defaultValue ```
char* q_cborvalueconstref_to_byte_array1(void* self, const char* defaultValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#toString)
///
/// ``` QCborValueConstRef* self, const char* defaultValue ```
const char* q_cborvalueconstref_to_string1(void* self, const char* defaultValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#toDateTime)
///
/// ``` QCborValueConstRef* self, QDateTime* defaultValue ```
QDateTime* q_cborvalueconstref_to_date_time1(void* self, void* defaultValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#toUrl)
///
/// ``` QCborValueConstRef* self, QUrl* defaultValue ```
QUrl* q_cborvalueconstref_to_url1(void* self, void* defaultValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#toRegularExpression)
///
/// ``` QCborValueConstRef* self, QRegularExpression* defaultValue ```
QRegularExpression* q_cborvalueconstref_to_regular_expression1(void* self, void* defaultValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#toUuid)
///
/// ``` QCborValueConstRef* self, QUuid* defaultValue ```
QUuid* q_cborvalueconstref_to_uuid1(void* self, void* defaultValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#toCbor)
///
/// ``` QCborValueConstRef* self, int opt ```
char* q_cborvalueconstref_to_cbor1(void* self, int64_t opt);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#toCbor)
///
/// ``` QCborValueConstRef* self, QCborStreamWriter* writer, int opt ```
void q_cborvalueconstref_to_cbor2(void* self, void* writer, int64_t opt);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#toDiagnosticNotation)
///
/// ``` QCborValueConstRef* self, int opt ```
const char* q_cborvalueconstref_to_diagnostic_notation1(void* self, int64_t opt);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#dtor.QCborValueConstRef)
///
/// Delete this object from C++ memory.
///
/// ``` QCborValueConstRef* self ```
void q_cborvalueconstref_delete(void* self);

/// https://doc.qt.io/qt-6/qcborvalueref.html

/// q_cborvalueref_new constructs a new QCborValueRef object.
///
/// ``` QCborValueRef* other ```
QCborValueRef* q_cborvalueref_new(void* other);

/// q_cborvalueref_new2 constructs a new QCborValueRef object and invalidates the source QCborValueRef object.
///
/// ``` QCborValueRef* other ```
QCborValueRef* q_cborvalueref_new2(void* other);

/// q_cborvalueref_new3 constructs a new QCborValueRef object.
///
/// ``` QCborValueRef* param1 ```
QCborValueRef* q_cborvalueref_new3(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#operator=)
///
/// ``` QCborValueRef* self, QCborValue* other ```
void q_cborvalueref_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#operator=)
///
/// ``` QCborValueRef* self, QCborValueRef* other ```
void q_cborvalueref_operator_assign_with_other(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#operator[])
///
/// ``` QCborValueRef* self, long long key ```
QCborValueRef* q_cborvalueref_operator_subscript(void* self, long long key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#operator[])
///
/// ``` QCborValueRef* self, const char* key ```
QCborValueRef* q_cborvalueref_operator_subscript2(void* self, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#operator QCborValue)
///
/// ``` QCborValueRef* self ```
QCborValue* q_cborvalueref_to_q_cbor_value(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#type)
///
/// ``` QCborValueRef* self ```
int64_t q_cborvalueref_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#isInteger)
///
/// ``` QCborValueRef* self ```
bool q_cborvalueref_is_integer(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#isByteArray)
///
/// ``` QCborValueRef* self ```
bool q_cborvalueref_is_byte_array(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#isString)
///
/// ``` QCborValueRef* self ```
bool q_cborvalueref_is_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#isArray)
///
/// ``` QCborValueRef* self ```
bool q_cborvalueref_is_array(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#isMap)
///
/// ``` QCborValueRef* self ```
bool q_cborvalueref_is_map(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#isTag)
///
/// ``` QCborValueRef* self ```
bool q_cborvalueref_is_tag(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#isFalse)
///
/// ``` QCborValueRef* self ```
bool q_cborvalueref_is_false(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#isTrue)
///
/// ``` QCborValueRef* self ```
bool q_cborvalueref_is_true(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#isBool)
///
/// ``` QCborValueRef* self ```
bool q_cborvalueref_is_bool(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#isNull)
///
/// ``` QCborValueRef* self ```
bool q_cborvalueref_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#isUndefined)
///
/// ``` QCborValueRef* self ```
bool q_cborvalueref_is_undefined(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#isDouble)
///
/// ``` QCborValueRef* self ```
bool q_cborvalueref_is_double(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#isDateTime)
///
/// ``` QCborValueRef* self ```
bool q_cborvalueref_is_date_time(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#isUrl)
///
/// ``` QCborValueRef* self ```
bool q_cborvalueref_is_url(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#isRegularExpression)
///
/// ``` QCborValueRef* self ```
bool q_cborvalueref_is_regular_expression(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#isUuid)
///
/// ``` QCborValueRef* self ```
bool q_cborvalueref_is_uuid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#isInvalid)
///
/// ``` QCborValueRef* self ```
bool q_cborvalueref_is_invalid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#isContainer)
///
/// ``` QCborValueRef* self ```
bool q_cborvalueref_is_container(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#isSimpleType)
///
/// ``` QCborValueRef* self ```
bool q_cborvalueref_is_simple_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#isSimpleType)
///
/// ``` QCborValueRef* self, enum QCborValueRef__QCborSimpleType st ```
bool q_cborvalueref_is_simple_type_with_st(void* self, int64_t st);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#toSimpleType)
///
/// ``` QCborValueRef* self ```
int64_t q_cborvalueref_to_simple_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#tag)
///
/// ``` QCborValueRef* self ```
int64_t q_cborvalueref_tag(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#taggedValue)
///
/// ``` QCborValueRef* self ```
QCborValue* q_cborvalueref_tagged_value(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#toInteger)
///
/// ``` QCborValueRef* self ```
long long q_cborvalueref_to_integer(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#toBool)
///
/// ``` QCborValueRef* self ```
bool q_cborvalueref_to_bool(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#toDouble)
///
/// ``` QCborValueRef* self ```
double q_cborvalueref_to_double(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#toByteArray)
///
/// ``` QCborValueRef* self ```
char* q_cborvalueref_to_byte_array(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#toString)
///
/// ``` QCborValueRef* self ```
const char* q_cborvalueref_to_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#toDateTime)
///
/// ``` QCborValueRef* self ```
QDateTime* q_cborvalueref_to_date_time(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#toUrl)
///
/// ``` QCborValueRef* self ```
QUrl* q_cborvalueref_to_url(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#toRegularExpression)
///
/// ``` QCborValueRef* self ```
QRegularExpression* q_cborvalueref_to_regular_expression(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#toUuid)
///
/// ``` QCborValueRef* self ```
QUuid* q_cborvalueref_to_uuid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#toArray)
///
/// ``` QCborValueRef* self ```
QCborArray* q_cborvalueref_to_array(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#toArray)
///
/// ``` QCborValueRef* self, QCborArray* a ```
QCborArray* q_cborvalueref_to_array_with_q_cbor_array(void* self, void* a);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#toMap)
///
/// ``` QCborValueRef* self ```
QCborMap* q_cborvalueref_to_map(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#toMap)
///
/// ``` QCborValueRef* self, QCborMap* m ```
QCborMap* q_cborvalueref_to_map_with_q_cbor_map(void* self, void* m);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#operator[])
///
/// ``` QCborValueRef* self, const char* key ```
const QCborValue* q_cborvalueref_operator_subscript3(void* self, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#operator[])
///
/// ``` QCborValueRef* self, long long key ```
const QCborValue* q_cborvalueref_operator_subscript5(void* self, long long key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#compare)
///
/// ``` QCborValueRef* self, QCborValue* other ```
int32_t q_cborvalueref_compare(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#toVariant)
///
/// ``` QCborValueRef* self ```
QVariant* q_cborvalueref_to_variant(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#toJsonValue)
///
/// ``` QCborValueRef* self ```
QJsonValue* q_cborvalueref_to_json_value(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#toCbor)
///
/// ``` QCborValueRef* self ```
char* q_cborvalueref_to_cbor(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#toCbor)
///
/// ``` QCborValueRef* self, QCborStreamWriter* writer ```
void q_cborvalueref_to_cbor_with_writer(void* self, void* writer);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#toDiagnosticNotation)
///
/// ``` QCborValueRef* self ```
const char* q_cborvalueref_to_diagnostic_notation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#toSimpleType)
///
/// ``` QCborValueRef* self, enum QCborValueRef__QCborSimpleType defaultValue ```
int64_t q_cborvalueref_to_simple_type1(void* self, int64_t defaultValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#tag)
///
/// ``` QCborValueRef* self, enum QCborValueRef__QCborTag defaultValue ```
int64_t q_cborvalueref_tag1(void* self, int64_t defaultValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#taggedValue)
///
/// ``` QCborValueRef* self, QCborValue* defaultValue ```
QCborValue* q_cborvalueref_tagged_value1(void* self, void* defaultValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#toInteger)
///
/// ``` QCborValueRef* self, long long defaultValue ```
long long q_cborvalueref_to_integer1(void* self, long long defaultValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#toBool)
///
/// ``` QCborValueRef* self, bool defaultValue ```
bool q_cborvalueref_to_bool1(void* self, bool defaultValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#toDouble)
///
/// ``` QCborValueRef* self, double defaultValue ```
double q_cborvalueref_to_double1(void* self, double defaultValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#toByteArray)
///
/// ``` QCborValueRef* self, const char* defaultValue ```
char* q_cborvalueref_to_byte_array1(void* self, const char* defaultValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#toString)
///
/// ``` QCborValueRef* self, const char* defaultValue ```
const char* q_cborvalueref_to_string1(void* self, const char* defaultValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#toDateTime)
///
/// ``` QCborValueRef* self, QDateTime* defaultValue ```
QDateTime* q_cborvalueref_to_date_time1(void* self, void* defaultValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#toUrl)
///
/// ``` QCborValueRef* self, QUrl* defaultValue ```
QUrl* q_cborvalueref_to_url1(void* self, void* defaultValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#toRegularExpression)
///
/// ``` QCborValueRef* self, QRegularExpression* defaultValue ```
QRegularExpression* q_cborvalueref_to_regular_expression1(void* self, void* defaultValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#toUuid)
///
/// ``` QCborValueRef* self, QUuid* defaultValue ```
QUuid* q_cborvalueref_to_uuid1(void* self, void* defaultValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#toCbor)
///
/// ``` QCborValueRef* self, int opt ```
char* q_cborvalueref_to_cbor1(void* self, int64_t opt);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#toCbor)
///
/// ``` QCborValueRef* self, QCborStreamWriter* writer, int opt ```
void q_cborvalueref_to_cbor2(void* self, void* writer, int64_t opt);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#toDiagnosticNotation)
///
/// ``` QCborValueRef* self, int opt ```
const char* q_cborvalueref_to_diagnostic_notation1(void* self, int64_t opt);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#dtor.QCborValueRef)
///
/// Delete this object from C++ memory.
///
/// ``` QCborValueRef* self ```
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
