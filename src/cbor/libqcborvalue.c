#include "libqcborarray.hpp"
#include "libqcbormap.hpp"
#include "libqcborstreamreader.hpp"
#include "libqcborstreamwriter.hpp"
#include "../libqdatetime.hpp"
#include "../libqjsonvalue.hpp"
#include "../libqregularexpression.hpp"
#include <string.h>
#include "../libqurl.hpp"
#include "../libquuid.hpp"
#include "../libqvariant.hpp"
#include "libqcborvalue.hpp"
#include "libqcborvalue.h"

QCborParserError* q_cborparsererror_new(void* other) {
    return QCborParserError_new((QCborParserError*)other);
}

QCborParserError* q_cborparsererror_new2(void* other) {
    return QCborParserError_new2((QCborParserError*)other);
}

void q_cborparsererror_copy_assign(void* self, void* other) {
    QCborParserError_CopyAssign((QCborParserError*)self, (QCborParserError*)other);
}

void q_cborparsererror_move_assign(void* self, void* other) {
    QCborParserError_MoveAssign((QCborParserError*)self, (QCborParserError*)other);
}

const char* q_cborparsererror_error_string(void* self) {
    libqt_string _str = QCborParserError_ErrorString((QCborParserError*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_cborparsererror_delete(void* self) {
    QCborParserError_Delete((QCborParserError*)(self));
}

QCborValue* q_cborvalue_new() {
    return QCborValue_new();
}

QCborValue* q_cborvalue_new2(int64_t t_) {
    return QCborValue_new2(t_);
}

QCborValue* q_cborvalue_new3(bool b_) {
    return QCborValue_new3(b_);
}

QCborValue* q_cborvalue_new4(int i) {
    return QCborValue_new4(i);
}

QCborValue* q_cborvalue_new5(uint32_t u) {
    return QCborValue_new5(u);
}

QCborValue* q_cborvalue_new6(long long i) {
    return QCborValue_new6(i);
}

QCborValue* q_cborvalue_new7(double v) {
    return QCborValue_new7(v);
}

QCborValue* q_cborvalue_new8(int64_t st) {
    return QCborValue_new8(st);
}

QCborValue* q_cborvalue_new9(const char* ba) {
    return QCborValue_new9(qstring(ba));
}

QCborValue* q_cborvalue_new10(const char* s) {
    return QCborValue_new10(qstring(s));
}

QCborValue* q_cborvalue_new11(const char* s) {
    return QCborValue_new11(s);
}

QCborValue* q_cborvalue_new12(void* a) {
    return QCborValue_new12((QCborArray*)a);
}

QCborValue* q_cborvalue_new13(void* m) {
    return QCborValue_new13((QCborMap*)m);
}

QCborValue* q_cborvalue_new14(int64_t tag) {
    return QCborValue_new14(tag);
}

QCborValue* q_cborvalue_new15(int64_t t_) {
    return QCborValue_new15(t_);
}

QCborValue* q_cborvalue_new16(void* dt) {
    return QCborValue_new16((QDateTime*)dt);
}

QCborValue* q_cborvalue_new17(void* url) {
    return QCborValue_new17((QUrl*)url);
}

QCborValue* q_cborvalue_new18(void* rx) {
    return QCborValue_new18((QRegularExpression*)rx);
}

QCborValue* q_cborvalue_new19(void* uuid) {
    return QCborValue_new19((QUuid*)uuid);
}

QCborValue* q_cborvalue_new20(void* other) {
    return QCborValue_new20((QCborValue*)other);
}

QCborValue* q_cborvalue_new21(int64_t tag, void* taggedValue) {
    return QCborValue_new21(tag, (QCborValue*)taggedValue);
}

QCborValue* q_cborvalue_new22(int64_t t_, void* tv) {
    return QCborValue_new22(t_, (QCborValue*)tv);
}

void q_cborvalue_operator_assign(void* self, void* other) {
    QCborValue_OperatorAssign((QCborValue*)self, (QCborValue*)other);
}

void q_cborvalue_swap(void* self, void* other) {
    QCborValue_Swap((QCborValue*)self, (QCborValue*)other);
}

int64_t q_cborvalue_type(void* self) {
    return QCborValue_Type((QCborValue*)self);
}

bool q_cborvalue_is_integer(void* self) {
    return QCborValue_IsInteger((QCborValue*)self);
}

bool q_cborvalue_is_byte_array(void* self) {
    return QCborValue_IsByteArray((QCborValue*)self);
}

bool q_cborvalue_is_string(void* self) {
    return QCborValue_IsString((QCborValue*)self);
}

bool q_cborvalue_is_array(void* self) {
    return QCborValue_IsArray((QCborValue*)self);
}

bool q_cborvalue_is_map(void* self) {
    return QCborValue_IsMap((QCborValue*)self);
}

bool q_cborvalue_is_tag(void* self) {
    return QCborValue_IsTag((QCborValue*)self);
}

bool q_cborvalue_is_false(void* self) {
    return QCborValue_IsFalse((QCborValue*)self);
}

bool q_cborvalue_is_true(void* self) {
    return QCborValue_IsTrue((QCborValue*)self);
}

bool q_cborvalue_is_bool(void* self) {
    return QCborValue_IsBool((QCborValue*)self);
}

bool q_cborvalue_is_null(void* self) {
    return QCborValue_IsNull((QCborValue*)self);
}

bool q_cborvalue_is_undefined(void* self) {
    return QCborValue_IsUndefined((QCborValue*)self);
}

bool q_cborvalue_is_double(void* self) {
    return QCborValue_IsDouble((QCborValue*)self);
}

bool q_cborvalue_is_date_time(void* self) {
    return QCborValue_IsDateTime((QCborValue*)self);
}

bool q_cborvalue_is_url(void* self) {
    return QCborValue_IsUrl((QCborValue*)self);
}

bool q_cborvalue_is_regular_expression(void* self) {
    return QCborValue_IsRegularExpression((QCborValue*)self);
}

bool q_cborvalue_is_uuid(void* self) {
    return QCborValue_IsUuid((QCborValue*)self);
}

bool q_cborvalue_is_invalid(void* self) {
    return QCborValue_IsInvalid((QCborValue*)self);
}

bool q_cborvalue_is_container(void* self) {
    return QCborValue_IsContainer((QCborValue*)self);
}

bool q_cborvalue_is_simple_type(void* self) {
    return QCborValue_IsSimpleType((QCborValue*)self);
}

bool q_cborvalue_is_simple_type_with_st(void* self, int64_t st) {
    return QCborValue_IsSimpleTypeWithSt((QCborValue*)self, st);
}

int64_t q_cborvalue_to_simple_type(void* self) {
    return QCborValue_ToSimpleType((QCborValue*)self);
}

long long q_cborvalue_to_integer(void* self) {
    return QCborValue_ToInteger((QCborValue*)self);
}

bool q_cborvalue_to_bool(void* self) {
    return QCborValue_ToBool((QCborValue*)self);
}

double q_cborvalue_to_double(void* self) {
    return QCborValue_ToDouble((QCborValue*)self);
}

int64_t q_cborvalue_tag(void* self) {
    return QCborValue_Tag((QCborValue*)self);
}

QCborValue* q_cborvalue_tagged_value(void* self) {
    return QCborValue_TaggedValue((QCborValue*)self);
}

char* q_cborvalue_to_byte_array(void* self) {
    libqt_string _str = QCborValue_ToByteArray((QCborValue*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_cborvalue_to_string(void* self) {
    libqt_string _str = QCborValue_ToString((QCborValue*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QDateTime* q_cborvalue_to_date_time(void* self) {
    return QCborValue_ToDateTime((QCborValue*)self);
}

QUrl* q_cborvalue_to_url(void* self) {
    return QCborValue_ToUrl((QCborValue*)self);
}

QRegularExpression* q_cborvalue_to_regular_expression(void* self) {
    return QCborValue_ToRegularExpression((QCborValue*)self);
}

QUuid* q_cborvalue_to_uuid(void* self) {
    return QCborValue_ToUuid((QCborValue*)self);
}

QCborArray* q_cborvalue_to_array(void* self) {
    return QCborValue_ToArray((QCborValue*)self);
}

QCborArray* q_cborvalue_to_array_with_default_value(void* self, void* defaultValue) {
    return QCborValue_ToArrayWithDefaultValue((QCborValue*)self, (QCborArray*)defaultValue);
}

QCborMap* q_cborvalue_to_map(void* self) {
    return QCborValue_ToMap((QCborValue*)self);
}

QCborMap* q_cborvalue_to_map_with_default_value(void* self, void* defaultValue) {
    return QCborValue_ToMapWithDefaultValue((QCborValue*)self, (QCborMap*)defaultValue);
}

const QCborValue* q_cborvalue_operator_subscript(void* self, const char* key) {
    return QCborValue_OperatorSubscript((QCborValue*)self, qstring(key));
}

const QCborValue* q_cborvalue_operator_subscript2(void* self, long long key) {
    return QCborValue_OperatorSubscript2((QCborValue*)self, key);
}

QCborValueRef* q_cborvalue_operator_subscript3(void* self, long long key) {
    return QCborValue_OperatorSubscript3((QCborValue*)self, key);
}

QCborValueRef* q_cborvalue_operator_subscript5(void* self, const char* key) {
    return QCborValue_OperatorSubscript5((QCborValue*)self, qstring(key));
}

int32_t q_cborvalue_compare(void* self, void* other) {
    return QCborValue_Compare((QCborValue*)self, (QCborValue*)other);
}

bool q_cborvalue_operator_equal(void* self, void* other) {
    return QCborValue_OperatorEqual((QCborValue*)self, (QCborValue*)other);
}

bool q_cborvalue_operator_not_equal(void* self, void* other) {
    return QCborValue_OperatorNotEqual((QCborValue*)self, (QCborValue*)other);
}

bool q_cborvalue_operator_lesser(void* self, void* other) {
    return QCborValue_OperatorLesser((QCborValue*)self, (QCborValue*)other);
}

QCborValue* q_cborvalue_from_variant(void* variant) {
    return QCborValue_FromVariant((QVariant*)variant);
}

QVariant* q_cborvalue_to_variant(void* self) {
    return QCborValue_ToVariant((QCborValue*)self);
}

QCborValue* q_cborvalue_from_json_value(void* v) {
    return QCborValue_FromJsonValue((QJsonValue*)v);
}

QJsonValue* q_cborvalue_to_json_value(void* self) {
    return QCborValue_ToJsonValue((QCborValue*)self);
}

QCborValue* q_cborvalue_from_cbor(void* reader) {
    return QCborValue_FromCbor((QCborStreamReader*)reader);
}

QCborValue* q_cborvalue_from_cbor_with_ba(const char* ba) {
    return QCborValue_FromCborWithBa(qstring(ba));
}

QCborValue* q_cborvalue_from_cbor2(const char* data, int64_t lenVal) {
    return QCborValue_FromCbor2(data, lenVal);
}

QCborValue* q_cborvalue_from_cbor3(unsigned char* data, int64_t lenVal) {
    return QCborValue_FromCbor3(data, lenVal);
}

char* q_cborvalue_to_cbor(void* self) {
    libqt_string _str = QCborValue_ToCbor((QCborValue*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_cborvalue_to_cbor_with_writer(void* self, void* writer) {
    QCborValue_ToCborWithWriter((QCborValue*)self, (QCborStreamWriter*)writer);
}

const char* q_cborvalue_to_diagnostic_notation(void* self) {
    libqt_string _str = QCborValue_ToDiagnosticNotation((QCborValue*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_cborvalue_to_simple_type1(void* self, int64_t defaultValue) {
    return QCborValue_ToSimpleType1((QCborValue*)self, defaultValue);
}

long long q_cborvalue_to_integer1(void* self, long long defaultValue) {
    return QCborValue_ToInteger1((QCborValue*)self, defaultValue);
}

bool q_cborvalue_to_bool1(void* self, bool defaultValue) {
    return QCborValue_ToBool1((QCborValue*)self, defaultValue);
}

double q_cborvalue_to_double1(void* self, double defaultValue) {
    return QCborValue_ToDouble1((QCborValue*)self, defaultValue);
}

int64_t q_cborvalue_tag1(void* self, int64_t defaultValue) {
    return QCborValue_Tag1((QCborValue*)self, defaultValue);
}

QCborValue* q_cborvalue_tagged_value1(void* self, void* defaultValue) {
    return QCborValue_TaggedValue1((QCborValue*)self, (QCborValue*)defaultValue);
}

char* q_cborvalue_to_byte_array1(void* self, const char* defaultValue) {
    libqt_string _str = QCborValue_ToByteArray1((QCborValue*)self, qstring(defaultValue));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_cborvalue_to_string1(void* self, const char* defaultValue) {
    libqt_string _str = QCborValue_ToString1((QCborValue*)self, qstring(defaultValue));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QDateTime* q_cborvalue_to_date_time1(void* self, void* defaultValue) {
    return QCborValue_ToDateTime1((QCborValue*)self, (QDateTime*)defaultValue);
}

QUrl* q_cborvalue_to_url1(void* self, void* defaultValue) {
    return QCborValue_ToUrl1((QCborValue*)self, (QUrl*)defaultValue);
}

QRegularExpression* q_cborvalue_to_regular_expression1(void* self, void* defaultValue) {
    return QCborValue_ToRegularExpression1((QCborValue*)self, (QRegularExpression*)defaultValue);
}

QUuid* q_cborvalue_to_uuid1(void* self, void* defaultValue) {
    return QCborValue_ToUuid1((QCborValue*)self, (QUuid*)defaultValue);
}

QCborValue* q_cborvalue_from_cbor22(const char* ba, void* errorVal) {
    return QCborValue_FromCbor22(qstring(ba), (QCborParserError*)errorVal);
}

QCborValue* q_cborvalue_from_cbor32(const char* data, int64_t lenVal, void* errorVal) {
    return QCborValue_FromCbor32(data, lenVal, (QCborParserError*)errorVal);
}

QCborValue* q_cborvalue_from_cbor33(unsigned char* data, int64_t lenVal, void* errorVal) {
    return QCborValue_FromCbor33(data, lenVal, (QCborParserError*)errorVal);
}

char* q_cborvalue_to_cbor1(void* self, int64_t opt) {
    libqt_string _str = QCborValue_ToCbor1((QCborValue*)self, opt);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_cborvalue_to_cbor2(void* self, void* writer, int64_t opt) {
    QCborValue_ToCbor2((QCborValue*)self, (QCborStreamWriter*)writer, opt);
}

const char* q_cborvalue_to_diagnostic_notation1(void* self, int64_t opts) {
    libqt_string _str = QCborValue_ToDiagnosticNotation1((QCborValue*)self, opts);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_cborvalue_delete(void* self) {
    QCborValue_Delete((QCborValue*)(self));
}

QCborValueConstRef* q_cborvalueconstref_new(void* other) {
    return QCborValueConstRef_new((QCborValueConstRef*)other);
}

QCborValueConstRef* q_cborvalueconstref_new2(void* param1) {
    return QCborValueConstRef_new2((QCborValueConstRef*)param1);
}

QCborValue* q_cborvalueconstref_to_q_cbor_value(void* self) {
    return QCborValueConstRef_ToQCborValue((QCborValueConstRef*)self);
}

int64_t q_cborvalueconstref_type(void* self) {
    return QCborValueConstRef_Type((QCborValueConstRef*)self);
}

bool q_cborvalueconstref_is_integer(void* self) {
    return QCborValueConstRef_IsInteger((QCborValueConstRef*)self);
}

bool q_cborvalueconstref_is_byte_array(void* self) {
    return QCborValueConstRef_IsByteArray((QCborValueConstRef*)self);
}

bool q_cborvalueconstref_is_string(void* self) {
    return QCborValueConstRef_IsString((QCborValueConstRef*)self);
}

bool q_cborvalueconstref_is_array(void* self) {
    return QCborValueConstRef_IsArray((QCborValueConstRef*)self);
}

bool q_cborvalueconstref_is_map(void* self) {
    return QCborValueConstRef_IsMap((QCborValueConstRef*)self);
}

bool q_cborvalueconstref_is_tag(void* self) {
    return QCborValueConstRef_IsTag((QCborValueConstRef*)self);
}

bool q_cborvalueconstref_is_false(void* self) {
    return QCborValueConstRef_IsFalse((QCborValueConstRef*)self);
}

bool q_cborvalueconstref_is_true(void* self) {
    return QCborValueConstRef_IsTrue((QCborValueConstRef*)self);
}

bool q_cborvalueconstref_is_bool(void* self) {
    return QCborValueConstRef_IsBool((QCborValueConstRef*)self);
}

bool q_cborvalueconstref_is_null(void* self) {
    return QCborValueConstRef_IsNull((QCborValueConstRef*)self);
}

bool q_cborvalueconstref_is_undefined(void* self) {
    return QCborValueConstRef_IsUndefined((QCborValueConstRef*)self);
}

bool q_cborvalueconstref_is_double(void* self) {
    return QCborValueConstRef_IsDouble((QCborValueConstRef*)self);
}

bool q_cborvalueconstref_is_date_time(void* self) {
    return QCborValueConstRef_IsDateTime((QCborValueConstRef*)self);
}

bool q_cborvalueconstref_is_url(void* self) {
    return QCborValueConstRef_IsUrl((QCborValueConstRef*)self);
}

bool q_cborvalueconstref_is_regular_expression(void* self) {
    return QCborValueConstRef_IsRegularExpression((QCborValueConstRef*)self);
}

bool q_cborvalueconstref_is_uuid(void* self) {
    return QCborValueConstRef_IsUuid((QCborValueConstRef*)self);
}

bool q_cborvalueconstref_is_invalid(void* self) {
    return QCborValueConstRef_IsInvalid((QCborValueConstRef*)self);
}

bool q_cborvalueconstref_is_container(void* self) {
    return QCborValueConstRef_IsContainer((QCborValueConstRef*)self);
}

bool q_cborvalueconstref_is_simple_type(void* self) {
    return QCborValueConstRef_IsSimpleType((QCborValueConstRef*)self);
}

bool q_cborvalueconstref_is_simple_type_with_st(void* self, int64_t st) {
    return QCborValueConstRef_IsSimpleTypeWithSt((QCborValueConstRef*)self, st);
}

int64_t q_cborvalueconstref_to_simple_type(void* self) {
    return QCborValueConstRef_ToSimpleType((QCborValueConstRef*)self);
}

int64_t q_cborvalueconstref_tag(void* self) {
    return QCborValueConstRef_Tag((QCborValueConstRef*)self);
}

QCborValue* q_cborvalueconstref_tagged_value(void* self) {
    return QCborValueConstRef_TaggedValue((QCborValueConstRef*)self);
}

long long q_cborvalueconstref_to_integer(void* self) {
    return QCborValueConstRef_ToInteger((QCborValueConstRef*)self);
}

bool q_cborvalueconstref_to_bool(void* self) {
    return QCborValueConstRef_ToBool((QCborValueConstRef*)self);
}

double q_cborvalueconstref_to_double(void* self) {
    return QCborValueConstRef_ToDouble((QCborValueConstRef*)self);
}

char* q_cborvalueconstref_to_byte_array(void* self) {
    libqt_string _str = QCborValueConstRef_ToByteArray((QCborValueConstRef*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_cborvalueconstref_to_string(void* self) {
    libqt_string _str = QCborValueConstRef_ToString((QCborValueConstRef*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QDateTime* q_cborvalueconstref_to_date_time(void* self) {
    return QCborValueConstRef_ToDateTime((QCborValueConstRef*)self);
}

QUrl* q_cborvalueconstref_to_url(void* self) {
    return QCborValueConstRef_ToUrl((QCborValueConstRef*)self);
}

QRegularExpression* q_cborvalueconstref_to_regular_expression(void* self) {
    return QCborValueConstRef_ToRegularExpression((QCborValueConstRef*)self);
}

QUuid* q_cborvalueconstref_to_uuid(void* self) {
    return QCborValueConstRef_ToUuid((QCborValueConstRef*)self);
}

QCborArray* q_cborvalueconstref_to_array(void* self) {
    return QCborValueConstRef_ToArray((QCborValueConstRef*)self);
}

QCborArray* q_cborvalueconstref_to_array_with_q_cbor_array(void* self, void* a) {
    return QCborValueConstRef_ToArrayWithQCborArray((QCborValueConstRef*)self, (QCborArray*)a);
}

QCborMap* q_cborvalueconstref_to_map(void* self) {
    return QCborValueConstRef_ToMap((QCborValueConstRef*)self);
}

QCborMap* q_cborvalueconstref_to_map_with_q_cbor_map(void* self, void* m) {
    return QCborValueConstRef_ToMapWithQCborMap((QCborValueConstRef*)self, (QCborMap*)m);
}

const QCborValue* q_cborvalueconstref_operator_subscript(void* self, const char* key) {
    return QCborValueConstRef_OperatorSubscript((QCborValueConstRef*)self, qstring(key));
}

const QCborValue* q_cborvalueconstref_operator_subscript2(void* self, long long key) {
    return QCborValueConstRef_OperatorSubscript2((QCborValueConstRef*)self, key);
}

int32_t q_cborvalueconstref_compare(void* self, void* other) {
    return QCborValueConstRef_Compare((QCborValueConstRef*)self, (QCborValue*)other);
}

bool q_cborvalueconstref_operator_equal(void* self, void* other) {
    return QCborValueConstRef_OperatorEqual((QCborValueConstRef*)self, (QCborValue*)other);
}

bool q_cborvalueconstref_operator_not_equal(void* self, void* other) {
    return QCborValueConstRef_OperatorNotEqual((QCborValueConstRef*)self, (QCborValue*)other);
}

bool q_cborvalueconstref_operator_lesser(void* self, void* other) {
    return QCborValueConstRef_OperatorLesser((QCborValueConstRef*)self, (QCborValue*)other);
}

QVariant* q_cborvalueconstref_to_variant(void* self) {
    return QCborValueConstRef_ToVariant((QCborValueConstRef*)self);
}

QJsonValue* q_cborvalueconstref_to_json_value(void* self) {
    return QCborValueConstRef_ToJsonValue((QCborValueConstRef*)self);
}

char* q_cborvalueconstref_to_cbor(void* self) {
    libqt_string _str = QCborValueConstRef_ToCbor((QCborValueConstRef*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_cborvalueconstref_to_cbor_with_writer(void* self, void* writer) {
    QCborValueConstRef_ToCborWithWriter((QCborValueConstRef*)self, (QCborStreamWriter*)writer);
}

const char* q_cborvalueconstref_to_diagnostic_notation(void* self) {
    libqt_string _str = QCborValueConstRef_ToDiagnosticNotation((QCborValueConstRef*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_cborvalueconstref_to_simple_type1(void* self, int64_t defaultValue) {
    return QCborValueConstRef_ToSimpleType1((QCborValueConstRef*)self, defaultValue);
}

int64_t q_cborvalueconstref_tag1(void* self, int64_t defaultValue) {
    return QCborValueConstRef_Tag1((QCborValueConstRef*)self, defaultValue);
}

QCborValue* q_cborvalueconstref_tagged_value1(void* self, void* defaultValue) {
    return QCborValueConstRef_TaggedValue1((QCborValueConstRef*)self, (QCborValue*)defaultValue);
}

long long q_cborvalueconstref_to_integer1(void* self, long long defaultValue) {
    return QCborValueConstRef_ToInteger1((QCborValueConstRef*)self, defaultValue);
}

bool q_cborvalueconstref_to_bool1(void* self, bool defaultValue) {
    return QCborValueConstRef_ToBool1((QCborValueConstRef*)self, defaultValue);
}

double q_cborvalueconstref_to_double1(void* self, double defaultValue) {
    return QCborValueConstRef_ToDouble1((QCborValueConstRef*)self, defaultValue);
}

char* q_cborvalueconstref_to_byte_array1(void* self, const char* defaultValue) {
    libqt_string _str = QCborValueConstRef_ToByteArray1((QCborValueConstRef*)self, qstring(defaultValue));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_cborvalueconstref_to_string1(void* self, const char* defaultValue) {
    libqt_string _str = QCborValueConstRef_ToString1((QCborValueConstRef*)self, qstring(defaultValue));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QDateTime* q_cborvalueconstref_to_date_time1(void* self, void* defaultValue) {
    return QCborValueConstRef_ToDateTime1((QCborValueConstRef*)self, (QDateTime*)defaultValue);
}

QUrl* q_cborvalueconstref_to_url1(void* self, void* defaultValue) {
    return QCborValueConstRef_ToUrl1((QCborValueConstRef*)self, (QUrl*)defaultValue);
}

QRegularExpression* q_cborvalueconstref_to_regular_expression1(void* self, void* defaultValue) {
    return QCborValueConstRef_ToRegularExpression1((QCborValueConstRef*)self, (QRegularExpression*)defaultValue);
}

QUuid* q_cborvalueconstref_to_uuid1(void* self, void* defaultValue) {
    return QCborValueConstRef_ToUuid1((QCborValueConstRef*)self, (QUuid*)defaultValue);
}

char* q_cborvalueconstref_to_cbor1(void* self, int64_t opt) {
    libqt_string _str = QCborValueConstRef_ToCbor1((QCborValueConstRef*)self, opt);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_cborvalueconstref_to_cbor2(void* self, void* writer, int64_t opt) {
    QCborValueConstRef_ToCbor2((QCborValueConstRef*)self, (QCborStreamWriter*)writer, opt);
}

const char* q_cborvalueconstref_to_diagnostic_notation1(void* self, int64_t opt) {
    libqt_string _str = QCborValueConstRef_ToDiagnosticNotation1((QCborValueConstRef*)self, opt);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_cborvalueconstref_delete(void* self) {
    QCborValueConstRef_Delete((QCborValueConstRef*)(self));
}

QCborValueRef* q_cborvalueref_new(void* other) {
    return QCborValueRef_new((QCborValueRef*)other);
}

QCborValueRef* q_cborvalueref_new2(void* other) {
    return QCborValueRef_new2((QCborValueRef*)other);
}

QCborValueRef* q_cborvalueref_new3(void* param1) {
    return QCborValueRef_new3((QCborValueRef*)param1);
}

void q_cborvalueref_operator_assign(void* self, void* other) {
    QCborValueRef_OperatorAssign((QCborValueRef*)self, (QCborValue*)other);
}

void q_cborvalueref_operator_assign_with_other(void* self, void* other) {
    QCborValueRef_OperatorAssignWithOther((QCborValueRef*)self, (QCborValueRef*)other);
}

QCborValueRef* q_cborvalueref_operator_subscript(void* self, long long key) {
    return QCborValueRef_OperatorSubscript((QCborValueRef*)self, key);
}

QCborValueRef* q_cborvalueref_operator_subscript2(void* self, const char* key) {
    return QCborValueRef_OperatorSubscript2((QCborValueRef*)self, qstring(key));
}

QCborValue* q_cborvalueref_to_q_cbor_value(void* self) {
    return QCborValueRef_ToQCborValue((QCborValueRef*)self);
}

int64_t q_cborvalueref_type(void* self) {
    return QCborValueRef_Type((QCborValueRef*)self);
}

bool q_cborvalueref_is_integer(void* self) {
    return QCborValueRef_IsInteger((QCborValueRef*)self);
}

bool q_cborvalueref_is_byte_array(void* self) {
    return QCborValueRef_IsByteArray((QCborValueRef*)self);
}

bool q_cborvalueref_is_string(void* self) {
    return QCborValueRef_IsString((QCborValueRef*)self);
}

bool q_cborvalueref_is_array(void* self) {
    return QCborValueRef_IsArray((QCborValueRef*)self);
}

bool q_cborvalueref_is_map(void* self) {
    return QCborValueRef_IsMap((QCborValueRef*)self);
}

bool q_cborvalueref_is_tag(void* self) {
    return QCborValueRef_IsTag((QCborValueRef*)self);
}

bool q_cborvalueref_is_false(void* self) {
    return QCborValueRef_IsFalse((QCborValueRef*)self);
}

bool q_cborvalueref_is_true(void* self) {
    return QCborValueRef_IsTrue((QCborValueRef*)self);
}

bool q_cborvalueref_is_bool(void* self) {
    return QCborValueRef_IsBool((QCborValueRef*)self);
}

bool q_cborvalueref_is_null(void* self) {
    return QCborValueRef_IsNull((QCborValueRef*)self);
}

bool q_cborvalueref_is_undefined(void* self) {
    return QCborValueRef_IsUndefined((QCborValueRef*)self);
}

bool q_cborvalueref_is_double(void* self) {
    return QCborValueRef_IsDouble((QCborValueRef*)self);
}

bool q_cborvalueref_is_date_time(void* self) {
    return QCborValueRef_IsDateTime((QCborValueRef*)self);
}

bool q_cborvalueref_is_url(void* self) {
    return QCborValueRef_IsUrl((QCborValueRef*)self);
}

bool q_cborvalueref_is_regular_expression(void* self) {
    return QCborValueRef_IsRegularExpression((QCborValueRef*)self);
}

bool q_cborvalueref_is_uuid(void* self) {
    return QCborValueRef_IsUuid((QCborValueRef*)self);
}

bool q_cborvalueref_is_invalid(void* self) {
    return QCborValueRef_IsInvalid((QCborValueRef*)self);
}

bool q_cborvalueref_is_container(void* self) {
    return QCborValueRef_IsContainer((QCborValueRef*)self);
}

bool q_cborvalueref_is_simple_type(void* self) {
    return QCborValueRef_IsSimpleType((QCborValueRef*)self);
}

bool q_cborvalueref_is_simple_type_with_st(void* self, int64_t st) {
    return QCborValueRef_IsSimpleTypeWithSt((QCborValueRef*)self, st);
}

int64_t q_cborvalueref_to_simple_type(void* self) {
    return QCborValueRef_ToSimpleType((QCborValueRef*)self);
}

int64_t q_cborvalueref_tag(void* self) {
    return QCborValueRef_Tag((QCborValueRef*)self);
}

QCborValue* q_cborvalueref_tagged_value(void* self) {
    return QCborValueRef_TaggedValue((QCborValueRef*)self);
}

long long q_cborvalueref_to_integer(void* self) {
    return QCborValueRef_ToInteger((QCborValueRef*)self);
}

bool q_cborvalueref_to_bool(void* self) {
    return QCborValueRef_ToBool((QCborValueRef*)self);
}

double q_cborvalueref_to_double(void* self) {
    return QCborValueRef_ToDouble((QCborValueRef*)self);
}

char* q_cborvalueref_to_byte_array(void* self) {
    libqt_string _str = QCborValueRef_ToByteArray((QCborValueRef*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_cborvalueref_to_string(void* self) {
    libqt_string _str = QCborValueRef_ToString((QCborValueRef*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QDateTime* q_cborvalueref_to_date_time(void* self) {
    return QCborValueRef_ToDateTime((QCborValueRef*)self);
}

QUrl* q_cborvalueref_to_url(void* self) {
    return QCborValueRef_ToUrl((QCborValueRef*)self);
}

QRegularExpression* q_cborvalueref_to_regular_expression(void* self) {
    return QCborValueRef_ToRegularExpression((QCborValueRef*)self);
}

QUuid* q_cborvalueref_to_uuid(void* self) {
    return QCborValueRef_ToUuid((QCborValueRef*)self);
}

QCborArray* q_cborvalueref_to_array(void* self) {
    return QCborValueRef_ToArray((QCborValueRef*)self);
}

QCborArray* q_cborvalueref_to_array_with_q_cbor_array(void* self, void* a) {
    return QCborValueRef_ToArrayWithQCborArray((QCborValueRef*)self, (QCborArray*)a);
}

QCborMap* q_cborvalueref_to_map(void* self) {
    return QCborValueRef_ToMap((QCborValueRef*)self);
}

QCborMap* q_cborvalueref_to_map_with_q_cbor_map(void* self, void* m) {
    return QCborValueRef_ToMapWithQCborMap((QCborValueRef*)self, (QCborMap*)m);
}

const QCborValue* q_cborvalueref_operator_subscript3(void* self, const char* key) {
    return QCborValueRef_OperatorSubscript3((QCborValueRef*)self, qstring(key));
}

const QCborValue* q_cborvalueref_operator_subscript5(void* self, long long key) {
    return QCborValueRef_OperatorSubscript5((QCborValueRef*)self, key);
}

int32_t q_cborvalueref_compare(void* self, void* other) {
    return QCborValueRef_Compare((QCborValueRef*)self, (QCborValue*)other);
}

bool q_cborvalueref_operator_equal(void* self, void* other) {
    return QCborValueRef_OperatorEqual((QCborValueRef*)self, (QCborValue*)other);
}

bool q_cborvalueref_operator_not_equal(void* self, void* other) {
    return QCborValueRef_OperatorNotEqual((QCborValueRef*)self, (QCborValue*)other);
}

bool q_cborvalueref_operator_lesser(void* self, void* other) {
    return QCborValueRef_OperatorLesser((QCborValueRef*)self, (QCborValue*)other);
}

QVariant* q_cborvalueref_to_variant(void* self) {
    return QCborValueRef_ToVariant((QCborValueRef*)self);
}

QJsonValue* q_cborvalueref_to_json_value(void* self) {
    return QCborValueRef_ToJsonValue((QCborValueRef*)self);
}

char* q_cborvalueref_to_cbor(void* self) {
    libqt_string _str = QCborValueRef_ToCbor((QCborValueRef*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_cborvalueref_to_cbor_with_writer(void* self, void* writer) {
    QCborValueRef_ToCborWithWriter((QCborValueRef*)self, (QCborStreamWriter*)writer);
}

const char* q_cborvalueref_to_diagnostic_notation(void* self) {
    libqt_string _str = QCborValueRef_ToDiagnosticNotation((QCborValueRef*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_cborvalueref_to_simple_type1(void* self, int64_t defaultValue) {
    return QCborValueRef_ToSimpleType1((QCborValueRef*)self, defaultValue);
}

int64_t q_cborvalueref_tag1(void* self, int64_t defaultValue) {
    return QCborValueRef_Tag1((QCborValueRef*)self, defaultValue);
}

QCborValue* q_cborvalueref_tagged_value1(void* self, void* defaultValue) {
    return QCborValueRef_TaggedValue1((QCborValueRef*)self, (QCborValue*)defaultValue);
}

long long q_cborvalueref_to_integer1(void* self, long long defaultValue) {
    return QCborValueRef_ToInteger1((QCborValueRef*)self, defaultValue);
}

bool q_cborvalueref_to_bool1(void* self, bool defaultValue) {
    return QCborValueRef_ToBool1((QCborValueRef*)self, defaultValue);
}

double q_cborvalueref_to_double1(void* self, double defaultValue) {
    return QCborValueRef_ToDouble1((QCborValueRef*)self, defaultValue);
}

char* q_cborvalueref_to_byte_array1(void* self, const char* defaultValue) {
    libqt_string _str = QCborValueRef_ToByteArray1((QCborValueRef*)self, qstring(defaultValue));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_cborvalueref_to_string1(void* self, const char* defaultValue) {
    libqt_string _str = QCborValueRef_ToString1((QCborValueRef*)self, qstring(defaultValue));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QDateTime* q_cborvalueref_to_date_time1(void* self, void* defaultValue) {
    return QCborValueRef_ToDateTime1((QCborValueRef*)self, (QDateTime*)defaultValue);
}

QUrl* q_cborvalueref_to_url1(void* self, void* defaultValue) {
    return QCborValueRef_ToUrl1((QCborValueRef*)self, (QUrl*)defaultValue);
}

QRegularExpression* q_cborvalueref_to_regular_expression1(void* self, void* defaultValue) {
    return QCborValueRef_ToRegularExpression1((QCborValueRef*)self, (QRegularExpression*)defaultValue);
}

QUuid* q_cborvalueref_to_uuid1(void* self, void* defaultValue) {
    return QCborValueRef_ToUuid1((QCborValueRef*)self, (QUuid*)defaultValue);
}

char* q_cborvalueref_to_cbor1(void* self, int64_t opt) {
    libqt_string _str = QCborValueRef_ToCbor1((QCborValueRef*)self, opt);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_cborvalueref_to_cbor2(void* self, void* writer, int64_t opt) {
    QCborValueRef_ToCbor2((QCborValueRef*)self, (QCborStreamWriter*)writer, opt);
}

const char* q_cborvalueref_to_diagnostic_notation1(void* self, int64_t opt) {
    libqt_string _str = QCborValueRef_ToDiagnosticNotation1((QCborValueRef*)self, opt);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_cborvalueref_delete(void* self) {
    QCborValueRef_Delete((QCborValueRef*)(self));
}
