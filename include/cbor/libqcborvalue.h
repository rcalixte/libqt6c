#pragma once
#ifndef SRC_CBOR_QT6C_LIBQCBORVALUE_H
#define SRC_CBOR_QT6C_LIBQCBORVALUE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qcborparsererror.html)

/// q_cborparsererror_new constructs a new QCborParserError object.
///
/// @param other QCborParserError*
///
QCborParserError* q_cborparsererror_new(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborparsererror.html)

/// q_cborparsererror_new2 constructs a new QCborParserError object and invalidates the source QCborParserError object.
///
/// @param other QCborParserError*
///
QCborParserError* q_cborparsererror_new2(void* other);

/// q_cborparsererror_copy_assign shallow copies `other` into `self`.
///
/// @param self QCborParserError*
/// @param other QCborParserError*
///
void q_cborparsererror_copy_assign(void* self, void* other);

/// q_cborparsererror_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QCborParserError*
/// @param other QCborParserError*
///
void q_cborparsererror_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborparsererror.html#offset-var)
///
/// @param self QCborParserError*
///
long long q_cborparsererror_offset(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborparsererror.html#offset-var)
///
/// @param self QCborParserError*
/// @param offset long long
///
void q_cborparsererror_set_offset(void* self, long long offset);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborparsererror.html#error-var)
///
/// @param self QCborParserError*
///
QCborError* q_cborparsererror_error(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborparsererror.html#error-var)
///
/// @param self QCborParserError*
/// @param error QCborError*
///
void q_cborparsererror_set_error(void* self, void* error);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborparsererror.html#errorString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCborParserError*
///
const char* q_cborparsererror_error_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborparsererror.html#dtor.QCborParserError)
///
/// Delete this object from C++ memory.
///
/// @param self QCborParserError*
///
void q_cborparsererror_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html)

/// q_cborvalue_new constructs a new QCborValue object.
///
QCborValue* q_cborvalue_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html)

/// q_cborvalue_new2 constructs a new QCborValue object.
///
/// @param t_ enum QCborValue__Type
///
QCborValue* q_cborvalue_new2(int32_t t_);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html)

/// q_cborvalue_new3 constructs a new QCborValue object.
///
/// @param b_ bool
///
QCborValue* q_cborvalue_new3(bool b_);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html)

/// q_cborvalue_new4 constructs a new QCborValue object.
///
/// @param i int
///
QCborValue* q_cborvalue_new4(int i);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html)

/// q_cborvalue_new5 constructs a new QCborValue object.
///
/// @param u uint32_t
///
QCborValue* q_cborvalue_new5(uint32_t u);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html)

/// q_cborvalue_new6 constructs a new QCborValue object.
///
/// @param i long long
///
QCborValue* q_cborvalue_new6(long long i);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html)

/// q_cborvalue_new7 constructs a new QCborValue object.
///
/// @param v double
///
QCborValue* q_cborvalue_new7(double v);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html)

/// q_cborvalue_new8 constructs a new QCborValue object.
///
/// @param st enum QCborValue__QCborSimpleType
///
QCborValue* q_cborvalue_new8(uint8_t st);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html)

/// q_cborvalue_new9 constructs a new QCborValue object.
///
/// @param ba const char*
///
QCborValue* q_cborvalue_new9(const char* ba);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html)

/// q_cborvalue_new10 constructs a new QCborValue object.
///
/// @param s const char*
///
QCborValue* q_cborvalue_new10(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html)

/// q_cborvalue_new11 constructs a new QCborValue object.
///
/// @param s const char*
///
QCborValue* q_cborvalue_new11(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html)

/// q_cborvalue_new12 constructs a new QCborValue object.
///
/// @param a QCborArray*
///
QCborValue* q_cborvalue_new12(void* a);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html)

/// q_cborvalue_new13 constructs a new QCborValue object.
///
/// @param m QCborMap*
///
QCborValue* q_cborvalue_new13(void* m);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html)

/// q_cborvalue_new14 constructs a new QCborValue object.
///
/// @param tag enum QCborValue__QCborTag
///
QCborValue* q_cborvalue_new14(uint64_t tag);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html)

/// q_cborvalue_new15 constructs a new QCborValue object.
///
/// @param t_ enum QCborValue__QCborKnownTags
///
QCborValue* q_cborvalue_new15(int32_t t_);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html)

/// q_cborvalue_new16 constructs a new QCborValue object.
///
/// @param dt QDateTime*
///
QCborValue* q_cborvalue_new16(void* dt);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html)

/// q_cborvalue_new17 constructs a new QCborValue object.
///
/// @param url QUrl*
///
QCborValue* q_cborvalue_new17(void* url);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html)

/// q_cborvalue_new18 constructs a new QCborValue object.
///
/// @param rx QRegularExpression*
///
QCborValue* q_cborvalue_new18(void* rx);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html)

/// q_cborvalue_new19 constructs a new QCborValue object.
///
/// @param uuid QUuid*
///
QCborValue* q_cborvalue_new19(void* uuid);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html)

/// q_cborvalue_new20 constructs a new QCborValue object.
///
/// @param other QCborValue*
///
QCborValue* q_cborvalue_new20(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html)

/// q_cborvalue_new21 constructs a new QCborValue object.
///
/// @param tag enum QCborValue__QCborTag
/// @param taggedValue QCborValue*
///
QCborValue* q_cborvalue_new21(uint64_t tag, void* taggedValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html)

/// q_cborvalue_new22 constructs a new QCborValue object.
///
/// @param t_ enum QCborValue__QCborKnownTags
/// @param tv QCborValue*
///
QCborValue* q_cborvalue_new22(int32_t t_, void* tv);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#operator-eq)
///
/// @param self QCborValue*
/// @param other QCborValue*
///
void q_cborvalue_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#swap)
///
/// @param self QCborValue*
/// @param other QCborValue*
///
void q_cborvalue_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#type)
///
/// @param self QCborValue*
///
/// @return enum QCborValue__Type
///
int32_t q_cborvalue_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isInteger)
///
/// @param self QCborValue*
///
bool q_cborvalue_is_integer(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isByteArray)
///
/// @param self QCborValue*
///
bool q_cborvalue_is_byte_array(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isString)
///
/// @param self QCborValue*
///
bool q_cborvalue_is_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isArray)
///
/// @param self QCborValue*
///
bool q_cborvalue_is_array(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isMap)
///
/// @param self QCborValue*
///
bool q_cborvalue_is_map(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isTag)
///
/// @param self QCborValue*
///
bool q_cborvalue_is_tag(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isFalse)
///
/// @param self QCborValue*
///
bool q_cborvalue_is_false(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isTrue)
///
/// @param self QCborValue*
///
bool q_cborvalue_is_true(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isBool)
///
/// @param self QCborValue*
///
bool q_cborvalue_is_bool(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isNull)
///
/// @param self QCborValue*
///
bool q_cborvalue_is_null(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isUndefined)
///
/// @param self QCborValue*
///
bool q_cborvalue_is_undefined(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isDouble)
///
/// @param self QCborValue*
///
bool q_cborvalue_is_double(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isDateTime)
///
/// @param self QCborValue*
///
bool q_cborvalue_is_date_time(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isUrl)
///
/// @param self QCborValue*
///
bool q_cborvalue_is_url(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isRegularExpression)
///
/// @param self QCborValue*
///
bool q_cborvalue_is_regular_expression(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isUuid)
///
/// @param self QCborValue*
///
bool q_cborvalue_is_uuid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isInvalid)
///
/// @param self QCborValue*
///
bool q_cborvalue_is_invalid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isContainer)
///
/// @param self QCborValue*
///
bool q_cborvalue_is_container(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isSimpleType)
///
/// @param self QCborValue*
///
bool q_cborvalue_is_simple_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#isSimpleType)
///
/// @param self QCborValue*
/// @param st enum QCborValue__QCborSimpleType
///
bool q_cborvalue_is_simple_type2(void* self, uint8_t st);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toSimpleType)
///
/// @param self QCborValue*
///
/// @return enum QCborValue__QCborSimpleType
///
uint8_t q_cborvalue_to_simple_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toInteger)
///
/// @param self QCborValue*
///
long long q_cborvalue_to_integer(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toBool)
///
/// @param self QCborValue*
///
bool q_cborvalue_to_bool(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toDouble)
///
/// @param self QCborValue*
///
double q_cborvalue_to_double(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#tag)
///
/// @param self QCborValue*
///
/// @return enum QCborValue__QCborTag
///
uint64_t q_cborvalue_tag(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#taggedValue)
///
/// @param self QCborValue*
///
QCborValue* q_cborvalue_tagged_value(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toByteArray)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCborValue*
///
char* q_cborvalue_to_byte_array(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCborValue*
///
const char* q_cborvalue_to_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toDateTime)
///
/// @param self QCborValue*
///
QDateTime* q_cborvalue_to_date_time(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toUrl)
///
/// @param self QCborValue*
///
QUrl* q_cborvalue_to_url(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toRegularExpression)
///
/// @param self QCborValue*
///
QRegularExpression* q_cborvalue_to_regular_expression(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toUuid)
///
/// @param self QCborValue*
///
QUuid* q_cborvalue_to_uuid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toArray)
///
/// @param self QCborValue*
///
QCborArray* q_cborvalue_to_array(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toArray)
///
/// @param self QCborValue*
/// @param defaultValue QCborArray*
///
QCborArray* q_cborvalue_to_array2(void* self, void* defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toMap)
///
/// @param self QCborValue*
///
QCborMap* q_cborvalue_to_map(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toMap)
///
/// @param self QCborValue*
/// @param defaultValue QCborMap*
///
QCborMap* q_cborvalue_to_map2(void* self, void* defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#operator-5b-5d)
///
/// @param self QCborValue*
/// @param key const char*
///
const QCborValue* q_cborvalue_operator_subscript(void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#operator-5b-5d)
///
/// @param self QCborValue*
/// @param key long long
///
const QCborValue* q_cborvalue_operator_subscript3(void* self, long long key);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#operator-5b-5d)
///
/// @param self QCborValue*
/// @param key long long
///
QCborValueRef* q_cborvalue_operator_subscript4(void* self, long long key);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#operator-5b-5d)
///
/// @param self QCborValue*
/// @param key const char*
///
QCborValueRef* q_cborvalue_operator_subscript6(void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#compare)
///
/// @param self QCborValue*
/// @param other QCborValue*
///
int32_t q_cborvalue_compare(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#fromVariant)
///
/// @param variant QVariant*
///
QCborValue* q_cborvalue_from_variant(void* variant);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toVariant)
///
/// @param self QCborValue*
///
QVariant* q_cborvalue_to_variant(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#fromJsonValue)
///
/// @param v QJsonValue*
///
QCborValue* q_cborvalue_from_json_value(void* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toJsonValue)
///
/// @param self QCborValue*
///
QJsonValue* q_cborvalue_to_json_value(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#fromCbor)
///
/// @param reader QCborStreamReader*
///
QCborValue* q_cborvalue_from_cbor(void* reader);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#fromCbor)
///
/// @param ba const char*
///
QCborValue* q_cborvalue_from_cbor2(const char* ba);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#fromCbor)
///
/// @param data const char*
/// @param lenVal int64_t
///
QCborValue* q_cborvalue_from_cbor3(const char* data, int64_t lenVal);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#fromCbor)
///
/// @param data unsigned char*
/// @param lenVal int64_t
///
QCborValue* q_cborvalue_from_cbor4(unsigned char* data, int64_t lenVal);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toCbor)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCborValue*
///
char* q_cborvalue_to_cbor(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toCbor)
///
/// @param self QCborValue*
/// @param writer QCborStreamWriter*
///
void q_cborvalue_to_cbor2(void* self, void* writer);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toDiagnosticNotation)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCborValue*
///
const char* q_cborvalue_to_diagnostic_notation(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toSimpleType)
///
/// @param self QCborValue*
/// @param defaultValue enum QCborValue__QCborSimpleType
///
/// @return enum QCborValue__QCborSimpleType
///
uint8_t q_cborvalue_to_simple_type1(void* self, uint8_t defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toInteger)
///
/// @param self QCborValue*
/// @param defaultValue long long
///
long long q_cborvalue_to_integer1(void* self, long long defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toBool)
///
/// @param self QCborValue*
/// @param defaultValue bool
///
bool q_cborvalue_to_bool1(void* self, bool defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toDouble)
///
/// @param self QCborValue*
/// @param defaultValue double
///
double q_cborvalue_to_double1(void* self, double defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#tag)
///
/// @param self QCborValue*
/// @param defaultValue enum QCborValue__QCborTag
///
/// @return enum QCborValue__QCborTag
///
uint64_t q_cborvalue_tag1(void* self, uint64_t defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#taggedValue)
///
/// @param self QCborValue*
/// @param defaultValue QCborValue*
///
QCborValue* q_cborvalue_tagged_value1(void* self, void* defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toByteArray)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCborValue*
/// @param defaultValue const char*
///
char* q_cborvalue_to_byte_array1(void* self, const char* defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCborValue*
/// @param defaultValue const char*
///
const char* q_cborvalue_to_string1(void* self, const char* defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toDateTime)
///
/// @param self QCborValue*
/// @param defaultValue QDateTime*
///
QDateTime* q_cborvalue_to_date_time1(void* self, void* defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toUrl)
///
/// @param self QCborValue*
/// @param defaultValue QUrl*
///
QUrl* q_cborvalue_to_url1(void* self, void* defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toRegularExpression)
///
/// @param self QCborValue*
/// @param defaultValue QRegularExpression*
///
QRegularExpression* q_cborvalue_to_regular_expression1(void* self, void* defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toUuid)
///
/// @param self QCborValue*
/// @param defaultValue QUuid*
///
QUuid* q_cborvalue_to_uuid1(void* self, void* defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#fromCbor)
///
/// @param ba const char*
/// @param error QCborParserError*
///
QCborValue* q_cborvalue_from_cbor22(const char* ba, void* error);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#fromCbor)
///
/// @param data const char*
/// @param lenVal int64_t
/// @param error QCborParserError*
///
QCborValue* q_cborvalue_from_cbor32(const char* data, int64_t lenVal, void* error);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#fromCbor)
///
/// @param data unsigned char*
/// @param lenVal int64_t
/// @param error QCborParserError*
///
QCborValue* q_cborvalue_from_cbor33(unsigned char* data, int64_t lenVal, void* error);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toCbor)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCborValue*
/// @param opt flag of enum QCborValue__EncodingOption
///
char* q_cborvalue_to_cbor1(void* self, int32_t opt);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toCbor)
///
/// @param self QCborValue*
/// @param writer QCborStreamWriter*
/// @param opt flag of enum QCborValue__EncodingOption
///
void q_cborvalue_to_cbor22(void* self, void* writer, int32_t opt);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#toDiagnosticNotation)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCborValue*
/// @param opts flag of enum QCborValue__DiagnosticNotationOption
///
const char* q_cborvalue_to_diagnostic_notation1(void* self, int32_t opts);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#dtor.QCborValue)
///
/// Delete this object from C++ memory.
///
/// @param self QCborValue*
///
void q_cborvalue_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html)

/// q_cborvalueconstref_new constructs a new QCborValueConstRef object.
///
/// @param other QCborValueConstRef*
///
QCborValueConstRef* q_cborvalueconstref_new(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html)

/// q_cborvalueconstref_new2 constructs a new QCborValueConstRef object.
///
/// @param param1 QCborValueConstRef*
///
QCborValueConstRef* q_cborvalueconstref_new2(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#operator)
///
/// @param self QCborValueConstRef*
///
QCborValue* q_cborvalueconstref_to_q_cbor_value(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#type)
///
/// @param self QCborValueConstRef*
///
/// @return enum QCborValue__Type
///
int32_t q_cborvalueconstref_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isInteger)
///
/// @param self QCborValueConstRef*
///
bool q_cborvalueconstref_is_integer(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isByteArray)
///
/// @param self QCborValueConstRef*
///
bool q_cborvalueconstref_is_byte_array(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isString)
///
/// @param self QCborValueConstRef*
///
bool q_cborvalueconstref_is_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isArray)
///
/// @param self QCborValueConstRef*
///
bool q_cborvalueconstref_is_array(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isMap)
///
/// @param self QCborValueConstRef*
///
bool q_cborvalueconstref_is_map(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isTag)
///
/// @param self QCborValueConstRef*
///
bool q_cborvalueconstref_is_tag(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isFalse)
///
/// @param self QCborValueConstRef*
///
bool q_cborvalueconstref_is_false(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isTrue)
///
/// @param self QCborValueConstRef*
///
bool q_cborvalueconstref_is_true(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isBool)
///
/// @param self QCborValueConstRef*
///
bool q_cborvalueconstref_is_bool(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isNull)
///
/// @param self QCborValueConstRef*
///
bool q_cborvalueconstref_is_null(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isUndefined)
///
/// @param self QCborValueConstRef*
///
bool q_cborvalueconstref_is_undefined(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isDouble)
///
/// @param self QCborValueConstRef*
///
bool q_cborvalueconstref_is_double(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isDateTime)
///
/// @param self QCborValueConstRef*
///
bool q_cborvalueconstref_is_date_time(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isUrl)
///
/// @param self QCborValueConstRef*
///
bool q_cborvalueconstref_is_url(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isRegularExpression)
///
/// @param self QCborValueConstRef*
///
bool q_cborvalueconstref_is_regular_expression(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isUuid)
///
/// @param self QCborValueConstRef*
///
bool q_cborvalueconstref_is_uuid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isInvalid)
///
/// @param self QCborValueConstRef*
///
bool q_cborvalueconstref_is_invalid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isContainer)
///
/// @param self QCborValueConstRef*
///
bool q_cborvalueconstref_is_container(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isSimpleType)
///
/// @param self QCborValueConstRef*
///
bool q_cborvalueconstref_is_simple_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#isSimpleType)
///
/// @param self QCborValueConstRef*
/// @param st enum QCborValueConstRef__QCborSimpleType
///
bool q_cborvalueconstref_is_simple_type2(void* self, uint8_t st);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toSimpleType)
///
/// @param self QCborValueConstRef*
///
/// @return enum QCborValueConstRef__QCborSimpleType
///
uint8_t q_cborvalueconstref_to_simple_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#tag)
///
/// @param self QCborValueConstRef*
///
/// @return enum QCborValueConstRef__QCborTag
///
uint64_t q_cborvalueconstref_tag(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#taggedValue)
///
/// @param self QCborValueConstRef*
///
QCborValue* q_cborvalueconstref_tagged_value(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toInteger)
///
/// @param self QCborValueConstRef*
///
long long q_cborvalueconstref_to_integer(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toBool)
///
/// @param self QCborValueConstRef*
///
bool q_cborvalueconstref_to_bool(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toDouble)
///
/// @param self QCborValueConstRef*
///
double q_cborvalueconstref_to_double(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toByteArray)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCborValueConstRef*
///
char* q_cborvalueconstref_to_byte_array(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCborValueConstRef*
///
const char* q_cborvalueconstref_to_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toDateTime)
///
/// @param self QCborValueConstRef*
///
QDateTime* q_cborvalueconstref_to_date_time(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toUrl)
///
/// @param self QCborValueConstRef*
///
QUrl* q_cborvalueconstref_to_url(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toRegularExpression)
///
/// @param self QCborValueConstRef*
///
QRegularExpression* q_cborvalueconstref_to_regular_expression(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toUuid)
///
/// @param self QCborValueConstRef*
///
QUuid* q_cborvalueconstref_to_uuid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toArray)
///
/// @param self QCborValueConstRef*
///
QCborArray* q_cborvalueconstref_to_array(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toArray)
///
/// @param self QCborValueConstRef*
/// @param a QCborArray*
///
QCborArray* q_cborvalueconstref_to_array2(void* self, void* a);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toMap)
///
/// @param self QCborValueConstRef*
///
QCborMap* q_cborvalueconstref_to_map(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toMap)
///
/// @param self QCborValueConstRef*
/// @param m QCborMap*
///
QCborMap* q_cborvalueconstref_to_map2(void* self, void* m);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#operator-5b-5d)
///
/// @param self QCborValueConstRef*
/// @param key const char*
///
const QCborValue* q_cborvalueconstref_operator_subscript(void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#operator-5b-5d)
///
/// @param self QCborValueConstRef*
/// @param key long long
///
const QCborValue* q_cborvalueconstref_operator_subscript3(void* self, long long key);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#compare)
///
/// @param self QCborValueConstRef*
/// @param other QCborValue*
///
int32_t q_cborvalueconstref_compare(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toVariant)
///
/// @param self QCborValueConstRef*
///
QVariant* q_cborvalueconstref_to_variant(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toJsonValue)
///
/// @param self QCborValueConstRef*
///
QJsonValue* q_cborvalueconstref_to_json_value(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toCbor)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCborValueConstRef*
///
char* q_cborvalueconstref_to_cbor(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toCbor)
///
/// @param self QCborValueConstRef*
/// @param writer QCborStreamWriter*
///
void q_cborvalueconstref_to_cbor2(void* self, void* writer);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toDiagnosticNotation)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCborValueConstRef*
///
const char* q_cborvalueconstref_to_diagnostic_notation(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toSimpleType)
///
/// @param self QCborValueConstRef*
/// @param defaultValue enum QCborValueConstRef__QCborSimpleType
///
/// @return enum QCborValueConstRef__QCborSimpleType
///
uint8_t q_cborvalueconstref_to_simple_type1(void* self, uint8_t defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#tag)
///
/// @param self QCborValueConstRef*
/// @param defaultValue enum QCborValueConstRef__QCborTag
///
/// @return enum QCborValueConstRef__QCborTag
///
uint64_t q_cborvalueconstref_tag1(void* self, uint64_t defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#taggedValue)
///
/// @param self QCborValueConstRef*
/// @param defaultValue QCborValue*
///
QCborValue* q_cborvalueconstref_tagged_value1(void* self, void* defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toInteger)
///
/// @param self QCborValueConstRef*
/// @param defaultValue long long
///
long long q_cborvalueconstref_to_integer1(void* self, long long defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toBool)
///
/// @param self QCborValueConstRef*
/// @param defaultValue bool
///
bool q_cborvalueconstref_to_bool1(void* self, bool defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toDouble)
///
/// @param self QCborValueConstRef*
/// @param defaultValue double
///
double q_cborvalueconstref_to_double1(void* self, double defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toByteArray)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCborValueConstRef*
/// @param defaultValue const char*
///
char* q_cborvalueconstref_to_byte_array1(void* self, const char* defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCborValueConstRef*
/// @param defaultValue const char*
///
const char* q_cborvalueconstref_to_string1(void* self, const char* defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toDateTime)
///
/// @param self QCborValueConstRef*
/// @param defaultValue QDateTime*
///
QDateTime* q_cborvalueconstref_to_date_time1(void* self, void* defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toUrl)
///
/// @param self QCborValueConstRef*
/// @param defaultValue QUrl*
///
QUrl* q_cborvalueconstref_to_url1(void* self, void* defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toRegularExpression)
///
/// @param self QCborValueConstRef*
/// @param defaultValue QRegularExpression*
///
QRegularExpression* q_cborvalueconstref_to_regular_expression1(void* self, void* defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toUuid)
///
/// @param self QCborValueConstRef*
/// @param defaultValue QUuid*
///
QUuid* q_cborvalueconstref_to_uuid1(void* self, void* defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toCbor)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCborValueConstRef*
/// @param opt flag of enum QCborValue__EncodingOption
///
char* q_cborvalueconstref_to_cbor1(void* self, int32_t opt);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toCbor)
///
/// @param self QCborValueConstRef*
/// @param writer QCborStreamWriter*
/// @param opt flag of enum QCborValue__EncodingOption
///
void q_cborvalueconstref_to_cbor22(void* self, void* writer, int32_t opt);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#toDiagnosticNotation)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCborValueConstRef*
/// @param opt flag of enum QCborValue__DiagnosticNotationOption
///
const char* q_cborvalueconstref_to_diagnostic_notation1(void* self, int32_t opt);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueconstref.html#dtor.QCborValueConstRef)
///
/// Delete this object from C++ memory.
///
/// @param self QCborValueConstRef*
///
void q_cborvalueconstref_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html)

/// q_cborvalueref_new constructs a new QCborValueRef object.
///
/// @param other QCborValueRef*
///
QCborValueRef* q_cborvalueref_new(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html)

/// q_cborvalueref_new2 constructs a new QCborValueRef object and invalidates the source QCborValueRef object.
///
/// @param other QCborValueRef*
///
QCborValueRef* q_cborvalueref_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html)

/// q_cborvalueref_new3 constructs a new QCborValueRef object.
///
/// @param param1 QCborValueRef*
///
QCborValueRef* q_cborvalueref_new3(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#operator-eq)
///
/// @param self QCborValueRef*
/// @param other QCborValue*
///
void q_cborvalueref_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#operator-eq)
///
/// @param self QCborValueRef*
/// @param other QCborValueRef*
///
void q_cborvalueref_operator_assign2(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#operator-5b-5d)
///
/// @param self QCborValueRef*
/// @param key long long
///
QCborValueRef* q_cborvalueref_operator_subscript(void* self, long long key);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#operator-5b-5d)
///
/// @param self QCborValueRef*
/// @param key const char*
///
QCborValueRef* q_cborvalueref_operator_subscript3(void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#operator)
///
/// @param self QCborValueRef*
///
QCborValue* q_cborvalueref_to_q_cbor_value(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#type)
///
/// @param self QCborValueRef*
///
/// @return enum QCborValue__Type
///
int32_t q_cborvalueref_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isInteger)
///
/// @param self QCborValueRef*
///
bool q_cborvalueref_is_integer(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isByteArray)
///
/// @param self QCborValueRef*
///
bool q_cborvalueref_is_byte_array(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isString)
///
/// @param self QCborValueRef*
///
bool q_cborvalueref_is_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isArray)
///
/// @param self QCborValueRef*
///
bool q_cborvalueref_is_array(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isMap)
///
/// @param self QCborValueRef*
///
bool q_cborvalueref_is_map(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isTag)
///
/// @param self QCborValueRef*
///
bool q_cborvalueref_is_tag(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isFalse)
///
/// @param self QCborValueRef*
///
bool q_cborvalueref_is_false(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isTrue)
///
/// @param self QCborValueRef*
///
bool q_cborvalueref_is_true(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isBool)
///
/// @param self QCborValueRef*
///
bool q_cborvalueref_is_bool(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isNull)
///
/// @param self QCborValueRef*
///
bool q_cborvalueref_is_null(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isUndefined)
///
/// @param self QCborValueRef*
///
bool q_cborvalueref_is_undefined(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isDouble)
///
/// @param self QCborValueRef*
///
bool q_cborvalueref_is_double(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isDateTime)
///
/// @param self QCborValueRef*
///
bool q_cborvalueref_is_date_time(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isUrl)
///
/// @param self QCborValueRef*
///
bool q_cborvalueref_is_url(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isRegularExpression)
///
/// @param self QCborValueRef*
///
bool q_cborvalueref_is_regular_expression(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isUuid)
///
/// @param self QCborValueRef*
///
bool q_cborvalueref_is_uuid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isInvalid)
///
/// @param self QCborValueRef*
///
bool q_cborvalueref_is_invalid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isContainer)
///
/// @param self QCborValueRef*
///
bool q_cborvalueref_is_container(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isSimpleType)
///
/// @param self QCborValueRef*
///
bool q_cborvalueref_is_simple_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#isSimpleType)
///
/// @param self QCborValueRef*
/// @param st enum QCborValueRef__QCborSimpleType
///
bool q_cborvalueref_is_simple_type2(void* self, uint8_t st);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toSimpleType)
///
/// @param self QCborValueRef*
///
/// @return enum QCborValueRef__QCborSimpleType
///
uint8_t q_cborvalueref_to_simple_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#tag)
///
/// @param self QCborValueRef*
///
/// @return enum QCborValueRef__QCborTag
///
uint64_t q_cborvalueref_tag(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#taggedValue)
///
/// @param self QCborValueRef*
///
QCborValue* q_cborvalueref_tagged_value(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toInteger)
///
/// @param self QCborValueRef*
///
long long q_cborvalueref_to_integer(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toBool)
///
/// @param self QCborValueRef*
///
bool q_cborvalueref_to_bool(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toDouble)
///
/// @param self QCborValueRef*
///
double q_cborvalueref_to_double(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toByteArray)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCborValueRef*
///
char* q_cborvalueref_to_byte_array(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCborValueRef*
///
const char* q_cborvalueref_to_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toDateTime)
///
/// @param self QCborValueRef*
///
QDateTime* q_cborvalueref_to_date_time(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toUrl)
///
/// @param self QCborValueRef*
///
QUrl* q_cborvalueref_to_url(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toRegularExpression)
///
/// @param self QCborValueRef*
///
QRegularExpression* q_cborvalueref_to_regular_expression(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toUuid)
///
/// @param self QCborValueRef*
///
QUuid* q_cborvalueref_to_uuid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toArray)
///
/// @param self QCborValueRef*
///
QCborArray* q_cborvalueref_to_array(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toArray)
///
/// @param self QCborValueRef*
/// @param a QCborArray*
///
QCborArray* q_cborvalueref_to_array2(void* self, void* a);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toMap)
///
/// @param self QCborValueRef*
///
QCborMap* q_cborvalueref_to_map(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toMap)
///
/// @param self QCborValueRef*
/// @param m QCborMap*
///
QCborMap* q_cborvalueref_to_map2(void* self, void* m);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#operator-5b-5d)
///
/// @param self QCborValueRef*
/// @param key const char*
///
const QCborValue* q_cborvalueref_operator_subscript4(void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#operator-5b-5d)
///
/// @param self QCborValueRef*
/// @param key long long
///
const QCborValue* q_cborvalueref_operator_subscript6(void* self, long long key);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#compare)
///
/// @param self QCborValueRef*
/// @param other QCborValue*
///
int32_t q_cborvalueref_compare(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toVariant)
///
/// @param self QCborValueRef*
///
QVariant* q_cborvalueref_to_variant(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toJsonValue)
///
/// @param self QCborValueRef*
///
QJsonValue* q_cborvalueref_to_json_value(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toCbor)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCborValueRef*
///
char* q_cborvalueref_to_cbor(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toCbor)
///
/// @param self QCborValueRef*
/// @param writer QCborStreamWriter*
///
void q_cborvalueref_to_cbor2(void* self, void* writer);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toDiagnosticNotation)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCborValueRef*
///
const char* q_cborvalueref_to_diagnostic_notation(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toSimpleType)
///
/// @param self QCborValueRef*
/// @param defaultValue enum QCborValueRef__QCborSimpleType
///
/// @return enum QCborValueRef__QCborSimpleType
///
uint8_t q_cborvalueref_to_simple_type1(void* self, uint8_t defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#tag)
///
/// @param self QCborValueRef*
/// @param defaultValue enum QCborValueRef__QCborTag
///
/// @return enum QCborValueRef__QCborTag
///
uint64_t q_cborvalueref_tag1(void* self, uint64_t defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#taggedValue)
///
/// @param self QCborValueRef*
/// @param defaultValue QCborValue*
///
QCborValue* q_cborvalueref_tagged_value1(void* self, void* defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toInteger)
///
/// @param self QCborValueRef*
/// @param defaultValue long long
///
long long q_cborvalueref_to_integer1(void* self, long long defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toBool)
///
/// @param self QCborValueRef*
/// @param defaultValue bool
///
bool q_cborvalueref_to_bool1(void* self, bool defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toDouble)
///
/// @param self QCborValueRef*
/// @param defaultValue double
///
double q_cborvalueref_to_double1(void* self, double defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toByteArray)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCborValueRef*
/// @param defaultValue const char*
///
char* q_cborvalueref_to_byte_array1(void* self, const char* defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCborValueRef*
/// @param defaultValue const char*
///
const char* q_cborvalueref_to_string1(void* self, const char* defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toDateTime)
///
/// @param self QCborValueRef*
/// @param defaultValue QDateTime*
///
QDateTime* q_cborvalueref_to_date_time1(void* self, void* defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toUrl)
///
/// @param self QCborValueRef*
/// @param defaultValue QUrl*
///
QUrl* q_cborvalueref_to_url1(void* self, void* defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toRegularExpression)
///
/// @param self QCborValueRef*
/// @param defaultValue QRegularExpression*
///
QRegularExpression* q_cborvalueref_to_regular_expression1(void* self, void* defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toUuid)
///
/// @param self QCborValueRef*
/// @param defaultValue QUuid*
///
QUuid* q_cborvalueref_to_uuid1(void* self, void* defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toCbor)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCborValueRef*
/// @param opt flag of enum QCborValue__EncodingOption
///
char* q_cborvalueref_to_cbor1(void* self, int32_t opt);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toCbor)
///
/// @param self QCborValueRef*
/// @param writer QCborStreamWriter*
/// @param opt flag of enum QCborValue__EncodingOption
///
void q_cborvalueref_to_cbor22(void* self, void* writer, int32_t opt);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#toDiagnosticNotation)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCborValueRef*
/// @param opt flag of enum QCborValue__DiagnosticNotationOption
///
const char* q_cborvalueref_to_diagnostic_notation1(void* self, int32_t opt);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalueref.html#dtor.QCborValueRef)
///
/// Delete this object from C++ memory.
///
/// @param self QCborValueRef*
///
void q_cborvalueref_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#public-types)

typedef enum {
    QCBORVALUE_ENCODINGOPTION_SORTKEYSINMAPS = 1,
    QCBORVALUE_ENCODINGOPTION_USEFLOAT = 2,
    QCBORVALUE_ENCODINGOPTION_USEFLOAT16 = 6,
    QCBORVALUE_ENCODINGOPTION_USEINTEGERS = 8,
    QCBORVALUE_ENCODINGOPTION_NOTRANSFORMATION = 0
} QCborValue__EncodingOption;

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#public-types)

typedef enum {
    QCBORVALUE_DIAGNOSTICNOTATIONOPTION_COMPACT = 0,
    QCBORVALUE_DIAGNOSTICNOTATIONOPTION_LINEWRAPPED = 1,
    QCBORVALUE_DIAGNOSTICNOTATIONOPTION_EXTENDEDFORMAT = 2
} QCborValue__DiagnosticNotationOption;

/// [Upstream resources](https://doc.qt.io/qt-6/qcborvalue.html#public-types)

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
