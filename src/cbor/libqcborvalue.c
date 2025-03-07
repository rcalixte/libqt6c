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

/// https://doc.qt.io/qt-6/qcborparsererror.html

/// q_cborparsererror_new constructs a new QCborParserError object.
///
/// ``` QCborParserError* other ```
QCborParserError* q_cborparsererror_new(void* other) {
    return QCborParserError_new((QCborParserError*)other);
}

/// q_cborparsererror_new2 constructs a new QCborParserError object and invalidates the source QCborParserError object.
///
/// ``` QCborParserError* other ```
QCborParserError* q_cborparsererror_new2(void* other) {
    return QCborParserError_new2((QCborParserError*)other);
}

/// q_cborparsererror_copy_assign shallow copies `other` into `self`.
///
/// ``` QCborParserError* self, QCborParserError* other ```
void q_cborparsererror_copy_assign(void* self, void* other) {
    QCborParserError_CopyAssign((QCborParserError*)self, (QCborParserError*)other);
}

/// q_cborparsererror_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QCborParserError* self, QCborParserError* other ```
void q_cborparsererror_move_assign(void* self, void* other) {
    QCborParserError_MoveAssign((QCborParserError*)self, (QCborParserError*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborparsererror.html#errorString)
///
/// ``` QCborParserError* self ```
const char* q_cborparsererror_error_string(void* self) {
    libqt_string _str = QCborParserError_ErrorString((QCborParserError*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Delete this object from C++ memory.
///
/// ``` QCborParserError* self ```
void q_cborparsererror_delete(void* self) {
    QCborParserError_Delete((QCborParserError*)(self));
}

/// https://doc.qt.io/qt-6/qcborvalue.html

/// q_cborvalue_new constructs a new QCborValue object.
///
///
QCborValue* q_cborvalue_new() {
    return QCborValue_new();
}

/// q_cborvalue_new2 constructs a new QCborValue object.
///
/// ``` enum QCborValue__Type t_ ```
QCborValue* q_cborvalue_new2(int64_t t_) {
    return QCborValue_new2(t_);
}

/// q_cborvalue_new3 constructs a new QCborValue object.
///
/// ``` bool b_ ```
QCborValue* q_cborvalue_new3(bool b_) {
    return QCborValue_new3(b_);
}

/// q_cborvalue_new4 constructs a new QCborValue object.
///
/// ``` int i ```
QCborValue* q_cborvalue_new4(int i) {
    return QCborValue_new4(i);
}

/// q_cborvalue_new5 constructs a new QCborValue object.
///
/// ``` uint32_t u ```
QCborValue* q_cborvalue_new5(uint32_t u) {
    return QCborValue_new5(u);
}

/// q_cborvalue_new6 constructs a new QCborValue object.
///
/// ``` long long i ```
QCborValue* q_cborvalue_new6(long long i) {
    return QCborValue_new6(i);
}

/// q_cborvalue_new7 constructs a new QCborValue object.
///
/// ``` double v ```
QCborValue* q_cborvalue_new7(double v) {
    return QCborValue_new7(v);
}

/// q_cborvalue_new8 constructs a new QCborValue object.
///
/// ``` enum QCborValue__QCborSimpleType st ```
QCborValue* q_cborvalue_new8(int64_t st) {
    return QCborValue_new8(st);
}

/// q_cborvalue_new9 constructs a new QCborValue object.
///
/// ``` const char* ba ```
QCborValue* q_cborvalue_new9(const char* ba) {
    return QCborValue_new9(qstring(ba));
}

/// q_cborvalue_new10 constructs a new QCborValue object.
///
/// ``` const char* s ```
QCborValue* q_cborvalue_new10(const char* s) {
    return QCborValue_new10(qstring(s));
}

/// q_cborvalue_new11 constructs a new QCborValue object.
///
/// ``` const char* s ```
QCborValue* q_cborvalue_new11(const char* s) {
    return QCborValue_new11(s);
}

/// q_cborvalue_new12 constructs a new QCborValue object.
///
/// ``` QCborArray* a ```
QCborValue* q_cborvalue_new12(void* a) {
    return QCborValue_new12((QCborArray*)a);
}

/// q_cborvalue_new13 constructs a new QCborValue object.
///
/// ``` QCborMap* m ```
QCborValue* q_cborvalue_new13(void* m) {
    return QCborValue_new13((QCborMap*)m);
}

/// q_cborvalue_new14 constructs a new QCborValue object.
///
/// ``` enum QCborValue__QCborTag tag ```
QCborValue* q_cborvalue_new14(int64_t tag) {
    return QCborValue_new14(tag);
}

/// q_cborvalue_new15 constructs a new QCborValue object.
///
/// ``` enum QCborValue__QCborKnownTags t_ ```
QCborValue* q_cborvalue_new15(int64_t t_) {
    return QCborValue_new15(t_);
}

/// q_cborvalue_new16 constructs a new QCborValue object.
///
/// ``` QDateTime* dt ```
QCborValue* q_cborvalue_new16(void* dt) {
    return QCborValue_new16((QDateTime*)dt);
}

/// q_cborvalue_new17 constructs a new QCborValue object.
///
/// ``` QUrl* url ```
QCborValue* q_cborvalue_new17(void* url) {
    return QCborValue_new17((QUrl*)url);
}

/// q_cborvalue_new18 constructs a new QCborValue object.
///
/// ``` QRegularExpression* rx ```
QCborValue* q_cborvalue_new18(void* rx) {
    return QCborValue_new18((QRegularExpression*)rx);
}

/// q_cborvalue_new19 constructs a new QCborValue object.
///
/// ``` QUuid* uuid ```
QCborValue* q_cborvalue_new19(void* uuid) {
    return QCborValue_new19((QUuid*)uuid);
}

/// q_cborvalue_new20 constructs a new QCborValue object.
///
/// ``` QCborValue* other ```
QCborValue* q_cborvalue_new20(void* other) {
    return QCborValue_new20((QCborValue*)other);
}

/// q_cborvalue_new21 constructs a new QCborValue object.
///
/// ``` enum QCborValue__QCborTag tag, QCborValue* taggedValue ```
QCborValue* q_cborvalue_new21(int64_t tag, void* taggedValue) {
    return QCborValue_new21(tag, (QCborValue*)taggedValue);
}

/// q_cborvalue_new22 constructs a new QCborValue object.
///
/// ``` enum QCborValue__QCborKnownTags t_, QCborValue* tv ```
QCborValue* q_cborvalue_new22(int64_t t_, void* tv) {
    return QCborValue_new22(t_, (QCborValue*)tv);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#operator=)
///
/// ``` QCborValue* self, QCborValue* other ```
void q_cborvalue_operator_assign(void* self, void* other) {
    QCborValue_OperatorAssign((QCborValue*)self, (QCborValue*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#swap)
///
/// ``` QCborValue* self, QCborValue* other ```
void q_cborvalue_swap(void* self, void* other) {
    QCborValue_Swap((QCborValue*)self, (QCborValue*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#type)
///
/// ``` QCborValue* self ```
int64_t q_cborvalue_type(void* self) {
    return QCborValue_Type((QCborValue*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#isInteger)
///
/// ``` QCborValue* self ```
bool q_cborvalue_is_integer(void* self) {
    return QCborValue_IsInteger((QCborValue*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#isByteArray)
///
/// ``` QCborValue* self ```
bool q_cborvalue_is_byte_array(void* self) {
    return QCborValue_IsByteArray((QCborValue*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#isString)
///
/// ``` QCborValue* self ```
bool q_cborvalue_is_string(void* self) {
    return QCborValue_IsString((QCborValue*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#isArray)
///
/// ``` QCborValue* self ```
bool q_cborvalue_is_array(void* self) {
    return QCborValue_IsArray((QCborValue*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#isMap)
///
/// ``` QCborValue* self ```
bool q_cborvalue_is_map(void* self) {
    return QCborValue_IsMap((QCborValue*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#isTag)
///
/// ``` QCborValue* self ```
bool q_cborvalue_is_tag(void* self) {
    return QCborValue_IsTag((QCborValue*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#isFalse)
///
/// ``` QCborValue* self ```
bool q_cborvalue_is_false(void* self) {
    return QCborValue_IsFalse((QCborValue*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#isTrue)
///
/// ``` QCborValue* self ```
bool q_cborvalue_is_true(void* self) {
    return QCborValue_IsTrue((QCborValue*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#isBool)
///
/// ``` QCborValue* self ```
bool q_cborvalue_is_bool(void* self) {
    return QCborValue_IsBool((QCborValue*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#isNull)
///
/// ``` QCborValue* self ```
bool q_cborvalue_is_null(void* self) {
    return QCborValue_IsNull((QCborValue*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#isUndefined)
///
/// ``` QCborValue* self ```
bool q_cborvalue_is_undefined(void* self) {
    return QCborValue_IsUndefined((QCborValue*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#isDouble)
///
/// ``` QCborValue* self ```
bool q_cborvalue_is_double(void* self) {
    return QCborValue_IsDouble((QCborValue*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#isDateTime)
///
/// ``` QCborValue* self ```
bool q_cborvalue_is_date_time(void* self) {
    return QCborValue_IsDateTime((QCborValue*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#isUrl)
///
/// ``` QCborValue* self ```
bool q_cborvalue_is_url(void* self) {
    return QCborValue_IsUrl((QCborValue*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#isRegularExpression)
///
/// ``` QCborValue* self ```
bool q_cborvalue_is_regular_expression(void* self) {
    return QCborValue_IsRegularExpression((QCborValue*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#isUuid)
///
/// ``` QCborValue* self ```
bool q_cborvalue_is_uuid(void* self) {
    return QCborValue_IsUuid((QCborValue*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#isInvalid)
///
/// ``` QCborValue* self ```
bool q_cborvalue_is_invalid(void* self) {
    return QCborValue_IsInvalid((QCborValue*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#isContainer)
///
/// ``` QCborValue* self ```
bool q_cborvalue_is_container(void* self) {
    return QCborValue_IsContainer((QCborValue*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#isSimpleType)
///
/// ``` QCborValue* self ```
bool q_cborvalue_is_simple_type(void* self) {
    return QCborValue_IsSimpleType((QCborValue*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#isSimpleType)
///
/// ``` QCborValue* self, enum QCborValue__QCborSimpleType st ```
bool q_cborvalue_is_simple_type_with_st(void* self, int64_t st) {
    return QCborValue_IsSimpleTypeWithSt((QCborValue*)self, st);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#toSimpleType)
///
/// ``` QCborValue* self ```
int64_t q_cborvalue_to_simple_type(void* self) {
    return QCborValue_ToSimpleType((QCborValue*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#toInteger)
///
/// ``` QCborValue* self ```
long long q_cborvalue_to_integer(void* self) {
    return QCborValue_ToInteger((QCborValue*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#toBool)
///
/// ``` QCborValue* self ```
bool q_cborvalue_to_bool(void* self) {
    return QCborValue_ToBool((QCborValue*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#toDouble)
///
/// ``` QCborValue* self ```
double q_cborvalue_to_double(void* self) {
    return QCborValue_ToDouble((QCborValue*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#tag)
///
/// ``` QCborValue* self ```
int64_t q_cborvalue_tag(void* self) {
    return QCborValue_Tag((QCborValue*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#taggedValue)
///
/// ``` QCborValue* self ```
QCborValue* q_cborvalue_tagged_value(void* self) {
    return QCborValue_TaggedValue((QCborValue*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#toByteArray)
///
/// ``` QCborValue* self ```
char* q_cborvalue_to_byte_array(void* self) {
    libqt_string _str = QCborValue_ToByteArray((QCborValue*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#toString)
///
/// ``` QCborValue* self ```
const char* q_cborvalue_to_string(void* self) {
    libqt_string _str = QCborValue_ToString((QCborValue*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#toDateTime)
///
/// ``` QCborValue* self ```
QDateTime* q_cborvalue_to_date_time(void* self) {
    return QCborValue_ToDateTime((QCborValue*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#toUrl)
///
/// ``` QCborValue* self ```
QUrl* q_cborvalue_to_url(void* self) {
    return QCborValue_ToUrl((QCborValue*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#toRegularExpression)
///
/// ``` QCborValue* self ```
QRegularExpression* q_cborvalue_to_regular_expression(void* self) {
    return QCborValue_ToRegularExpression((QCborValue*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#toUuid)
///
/// ``` QCborValue* self ```
QUuid* q_cborvalue_to_uuid(void* self) {
    return QCborValue_ToUuid((QCborValue*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#toArray)
///
/// ``` QCborValue* self ```
QCborArray* q_cborvalue_to_array(void* self) {
    return QCborValue_ToArray((QCborValue*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#toArray)
///
/// ``` QCborValue* self, QCborArray* defaultValue ```
QCborArray* q_cborvalue_to_array_with_default_value(void* self, void* defaultValue) {
    return QCborValue_ToArrayWithDefaultValue((QCborValue*)self, (QCborArray*)defaultValue);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#toMap)
///
/// ``` QCborValue* self ```
QCborMap* q_cborvalue_to_map(void* self) {
    return QCborValue_ToMap((QCborValue*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#toMap)
///
/// ``` QCborValue* self, QCborMap* defaultValue ```
QCborMap* q_cborvalue_to_map_with_default_value(void* self, void* defaultValue) {
    return QCborValue_ToMapWithDefaultValue((QCborValue*)self, (QCborMap*)defaultValue);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#operator[])
///
/// ``` QCborValue* self, const char* key ```
QCborValue* q_cborvalue_operator_subscript(void* self, const char* key) {
    return QCborValue_OperatorSubscript((QCborValue*)self, qstring(key));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#operator[])
///
/// ``` QCborValue* self, long long key ```
QCborValue* q_cborvalue_operator_subscript2(void* self, long long key) {
    return QCborValue_OperatorSubscript2((QCborValue*)self, key);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#operator[])
///
/// ``` QCborValue* self, long long key ```
QCborValueRef* q_cborvalue_operator_subscript3(void* self, long long key) {
    return QCborValue_OperatorSubscript3((QCborValue*)self, key);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#operator[])
///
/// ``` QCborValue* self, const char* key ```
QCborValueRef* q_cborvalue_operator_subscript5(void* self, const char* key) {
    return QCborValue_OperatorSubscript5((QCborValue*)self, qstring(key));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#compare)
///
/// ``` QCborValue* self, QCborValue* other ```
int32_t q_cborvalue_compare(void* self, void* other) {
    return QCborValue_Compare((QCborValue*)self, (QCborValue*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#operator==)
///
/// ``` QCborValue* self, QCborValue* other ```
bool q_cborvalue_operator_equal(void* self, void* other) {
    return QCborValue_OperatorEqual((QCborValue*)self, (QCborValue*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#operator!=)
///
/// ``` QCborValue* self, QCborValue* other ```
bool q_cborvalue_operator_not_equal(void* self, void* other) {
    return QCborValue_OperatorNotEqual((QCborValue*)self, (QCborValue*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#operator<)
///
/// ``` QCborValue* self, QCborValue* other ```
bool q_cborvalue_operator_lesser(void* self, void* other) {
    return QCborValue_OperatorLesser((QCborValue*)self, (QCborValue*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#fromVariant)
///
/// ``` QVariant* variant ```
QCborValue* q_cborvalue_from_variant(void* variant) {
    return QCborValue_FromVariant((QVariant*)variant);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#toVariant)
///
/// ``` QCborValue* self ```
QVariant* q_cborvalue_to_variant(void* self) {
    return QCborValue_ToVariant((QCborValue*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#fromJsonValue)
///
/// ``` QJsonValue* v ```
QCborValue* q_cborvalue_from_json_value(void* v) {
    return QCborValue_FromJsonValue((QJsonValue*)v);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#toJsonValue)
///
/// ``` QCborValue* self ```
QJsonValue* q_cborvalue_to_json_value(void* self) {
    return QCborValue_ToJsonValue((QCborValue*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#fromCbor)
///
/// ``` QCborStreamReader* reader ```
QCborValue* q_cborvalue_from_cbor(void* reader) {
    return QCborValue_FromCbor((QCborStreamReader*)reader);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#fromCbor)
///
/// ``` const char* ba ```
QCborValue* q_cborvalue_from_cbor_with_ba(const char* ba) {
    return QCborValue_FromCborWithBa(qstring(ba));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#fromCbor)
///
/// ``` const char* data, int64_t lenVal ```
QCborValue* q_cborvalue_from_cbor2(const char* data, int64_t lenVal) {
    return QCborValue_FromCbor2(data, lenVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#fromCbor)
///
/// ``` unsigned char* data, int64_t lenVal ```
QCborValue* q_cborvalue_from_cbor3(unsigned char* data, int64_t lenVal) {
    return QCborValue_FromCbor3(data, lenVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#toCbor)
///
/// ``` QCborValue* self ```
char* q_cborvalue_to_cbor(void* self) {
    libqt_string _str = QCborValue_ToCbor((QCborValue*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#toCbor)
///
/// ``` QCborValue* self, QCborStreamWriter* writer ```
void q_cborvalue_to_cbor_with_writer(void* self, void* writer) {
    QCborValue_ToCborWithWriter((QCborValue*)self, (QCborStreamWriter*)writer);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#toDiagnosticNotation)
///
/// ``` QCborValue* self ```
const char* q_cborvalue_to_diagnostic_notation(void* self) {
    libqt_string _str = QCborValue_ToDiagnosticNotation((QCborValue*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#toSimpleType)
///
/// ``` QCborValue* self, enum QCborValue__QCborSimpleType defaultValue ```
int64_t q_cborvalue_to_simple_type1(void* self, int64_t defaultValue) {
    return QCborValue_ToSimpleType1((QCborValue*)self, defaultValue);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#toInteger)
///
/// ``` QCborValue* self, long long defaultValue ```
long long q_cborvalue_to_integer1(void* self, long long defaultValue) {
    return QCborValue_ToInteger1((QCborValue*)self, defaultValue);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#toBool)
///
/// ``` QCborValue* self, bool defaultValue ```
bool q_cborvalue_to_bool1(void* self, bool defaultValue) {
    return QCborValue_ToBool1((QCborValue*)self, defaultValue);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#toDouble)
///
/// ``` QCborValue* self, double defaultValue ```
double q_cborvalue_to_double1(void* self, double defaultValue) {
    return QCborValue_ToDouble1((QCborValue*)self, defaultValue);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#tag)
///
/// ``` QCborValue* self, enum QCborValue__QCborTag defaultValue ```
int64_t q_cborvalue_tag1(void* self, int64_t defaultValue) {
    return QCborValue_Tag1((QCborValue*)self, defaultValue);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#taggedValue)
///
/// ``` QCborValue* self, QCborValue* defaultValue ```
QCborValue* q_cborvalue_tagged_value1(void* self, void* defaultValue) {
    return QCborValue_TaggedValue1((QCborValue*)self, (QCborValue*)defaultValue);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#toByteArray)
///
/// ``` QCborValue* self, const char* defaultValue ```
char* q_cborvalue_to_byte_array1(void* self, const char* defaultValue) {
    libqt_string _str = QCborValue_ToByteArray1((QCborValue*)self, qstring(defaultValue));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#toString)
///
/// ``` QCborValue* self, const char* defaultValue ```
const char* q_cborvalue_to_string1(void* self, const char* defaultValue) {
    libqt_string _str = QCborValue_ToString1((QCborValue*)self, qstring(defaultValue));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#toDateTime)
///
/// ``` QCborValue* self, QDateTime* defaultValue ```
QDateTime* q_cborvalue_to_date_time1(void* self, void* defaultValue) {
    return QCborValue_ToDateTime1((QCborValue*)self, (QDateTime*)defaultValue);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#toUrl)
///
/// ``` QCborValue* self, QUrl* defaultValue ```
QUrl* q_cborvalue_to_url1(void* self, void* defaultValue) {
    return QCborValue_ToUrl1((QCborValue*)self, (QUrl*)defaultValue);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#toRegularExpression)
///
/// ``` QCborValue* self, QRegularExpression* defaultValue ```
QRegularExpression* q_cborvalue_to_regular_expression1(void* self, void* defaultValue) {
    return QCborValue_ToRegularExpression1((QCborValue*)self, (QRegularExpression*)defaultValue);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#toUuid)
///
/// ``` QCborValue* self, QUuid* defaultValue ```
QUuid* q_cborvalue_to_uuid1(void* self, void* defaultValue) {
    return QCborValue_ToUuid1((QCborValue*)self, (QUuid*)defaultValue);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#fromCbor)
///
/// ``` const char* ba, QCborParserError* errorVal ```
QCborValue* q_cborvalue_from_cbor22(const char* ba, void* errorVal) {
    return QCborValue_FromCbor22(qstring(ba), (QCborParserError*)errorVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#fromCbor)
///
/// ``` const char* data, int64_t lenVal, QCborParserError* errorVal ```
QCborValue* q_cborvalue_from_cbor32(const char* data, int64_t lenVal, void* errorVal) {
    return QCborValue_FromCbor32(data, lenVal, (QCborParserError*)errorVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#fromCbor)
///
/// ``` unsigned char* data, int64_t lenVal, QCborParserError* errorVal ```
QCborValue* q_cborvalue_from_cbor33(unsigned char* data, int64_t lenVal, void* errorVal) {
    return QCborValue_FromCbor33(data, lenVal, (QCborParserError*)errorVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#toCbor)
///
/// ``` QCborValue* self, int opt ```
char* q_cborvalue_to_cbor1(void* self, int64_t opt) {
    libqt_string _str = QCborValue_ToCbor1((QCborValue*)self, opt);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#toCbor)
///
/// ``` QCborValue* self, QCborStreamWriter* writer, int opt ```
void q_cborvalue_to_cbor2(void* self, void* writer, int64_t opt) {
    QCborValue_ToCbor2((QCborValue*)self, (QCborStreamWriter*)writer, opt);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalue.html#toDiagnosticNotation)
///
/// ``` QCborValue* self, int opts ```
const char* q_cborvalue_to_diagnostic_notation1(void* self, int64_t opts) {
    libqt_string _str = QCborValue_ToDiagnosticNotation1((QCborValue*)self, opts);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Delete this object from C++ memory.
///
/// ``` QCborValue* self ```
void q_cborvalue_delete(void* self) {
    QCborValue_Delete((QCborValue*)(self));
}

/// https://doc.qt.io/qt-6/qcborvalueconstref.html

/// q_cborvalueconstref_new constructs a new QCborValueConstRef object.
///
/// ``` QCborValueConstRef* other ```
QCborValueConstRef* q_cborvalueconstref_new(void* other) {
    return QCborValueConstRef_new((QCborValueConstRef*)other);
}

/// q_cborvalueconstref_new2 constructs a new QCborValueConstRef object.
///
/// ``` QCborValueConstRef* param1 ```
QCborValueConstRef* q_cborvalueconstref_new2(void* param1) {
    return QCborValueConstRef_new2((QCborValueConstRef*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#operator QCborValue)
///
/// ``` QCborValueConstRef* self ```
QCborValue* q_cborvalueconstref_to_q_cbor_value(void* self) {
    return QCborValueConstRef_ToQCborValue((QCborValueConstRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#type)
///
/// ``` QCborValueConstRef* self ```
int64_t q_cborvalueconstref_type(void* self) {
    return QCborValueConstRef_Type((QCborValueConstRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#isInteger)
///
/// ``` QCborValueConstRef* self ```
bool q_cborvalueconstref_is_integer(void* self) {
    return QCborValueConstRef_IsInteger((QCborValueConstRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#isByteArray)
///
/// ``` QCborValueConstRef* self ```
bool q_cborvalueconstref_is_byte_array(void* self) {
    return QCborValueConstRef_IsByteArray((QCborValueConstRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#isString)
///
/// ``` QCborValueConstRef* self ```
bool q_cborvalueconstref_is_string(void* self) {
    return QCborValueConstRef_IsString((QCborValueConstRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#isArray)
///
/// ``` QCborValueConstRef* self ```
bool q_cborvalueconstref_is_array(void* self) {
    return QCborValueConstRef_IsArray((QCborValueConstRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#isMap)
///
/// ``` QCborValueConstRef* self ```
bool q_cborvalueconstref_is_map(void* self) {
    return QCborValueConstRef_IsMap((QCborValueConstRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#isTag)
///
/// ``` QCborValueConstRef* self ```
bool q_cborvalueconstref_is_tag(void* self) {
    return QCborValueConstRef_IsTag((QCborValueConstRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#isFalse)
///
/// ``` QCborValueConstRef* self ```
bool q_cborvalueconstref_is_false(void* self) {
    return QCborValueConstRef_IsFalse((QCborValueConstRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#isTrue)
///
/// ``` QCborValueConstRef* self ```
bool q_cborvalueconstref_is_true(void* self) {
    return QCborValueConstRef_IsTrue((QCborValueConstRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#isBool)
///
/// ``` QCborValueConstRef* self ```
bool q_cborvalueconstref_is_bool(void* self) {
    return QCborValueConstRef_IsBool((QCborValueConstRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#isNull)
///
/// ``` QCborValueConstRef* self ```
bool q_cborvalueconstref_is_null(void* self) {
    return QCborValueConstRef_IsNull((QCborValueConstRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#isUndefined)
///
/// ``` QCborValueConstRef* self ```
bool q_cborvalueconstref_is_undefined(void* self) {
    return QCborValueConstRef_IsUndefined((QCborValueConstRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#isDouble)
///
/// ``` QCborValueConstRef* self ```
bool q_cborvalueconstref_is_double(void* self) {
    return QCborValueConstRef_IsDouble((QCborValueConstRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#isDateTime)
///
/// ``` QCborValueConstRef* self ```
bool q_cborvalueconstref_is_date_time(void* self) {
    return QCborValueConstRef_IsDateTime((QCborValueConstRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#isUrl)
///
/// ``` QCborValueConstRef* self ```
bool q_cborvalueconstref_is_url(void* self) {
    return QCborValueConstRef_IsUrl((QCborValueConstRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#isRegularExpression)
///
/// ``` QCborValueConstRef* self ```
bool q_cborvalueconstref_is_regular_expression(void* self) {
    return QCborValueConstRef_IsRegularExpression((QCborValueConstRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#isUuid)
///
/// ``` QCborValueConstRef* self ```
bool q_cborvalueconstref_is_uuid(void* self) {
    return QCborValueConstRef_IsUuid((QCborValueConstRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#isInvalid)
///
/// ``` QCborValueConstRef* self ```
bool q_cborvalueconstref_is_invalid(void* self) {
    return QCborValueConstRef_IsInvalid((QCborValueConstRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#isContainer)
///
/// ``` QCborValueConstRef* self ```
bool q_cborvalueconstref_is_container(void* self) {
    return QCborValueConstRef_IsContainer((QCborValueConstRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#isSimpleType)
///
/// ``` QCborValueConstRef* self ```
bool q_cborvalueconstref_is_simple_type(void* self) {
    return QCborValueConstRef_IsSimpleType((QCborValueConstRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#isSimpleType)
///
/// ``` QCborValueConstRef* self, enum QCborValueConstRef__QCborSimpleType st ```
bool q_cborvalueconstref_is_simple_type_with_st(void* self, int64_t st) {
    return QCborValueConstRef_IsSimpleTypeWithSt((QCborValueConstRef*)self, st);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#toSimpleType)
///
/// ``` QCborValueConstRef* self ```
int64_t q_cborvalueconstref_to_simple_type(void* self) {
    return QCborValueConstRef_ToSimpleType((QCborValueConstRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#tag)
///
/// ``` QCborValueConstRef* self ```
int64_t q_cborvalueconstref_tag(void* self) {
    return QCborValueConstRef_Tag((QCborValueConstRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#taggedValue)
///
/// ``` QCborValueConstRef* self ```
QCborValue* q_cborvalueconstref_tagged_value(void* self) {
    return QCborValueConstRef_TaggedValue((QCborValueConstRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#toInteger)
///
/// ``` QCborValueConstRef* self ```
long long q_cborvalueconstref_to_integer(void* self) {
    return QCborValueConstRef_ToInteger((QCborValueConstRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#toBool)
///
/// ``` QCborValueConstRef* self ```
bool q_cborvalueconstref_to_bool(void* self) {
    return QCborValueConstRef_ToBool((QCborValueConstRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#toDouble)
///
/// ``` QCborValueConstRef* self ```
double q_cborvalueconstref_to_double(void* self) {
    return QCborValueConstRef_ToDouble((QCborValueConstRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#toByteArray)
///
/// ``` QCborValueConstRef* self ```
char* q_cborvalueconstref_to_byte_array(void* self) {
    libqt_string _str = QCborValueConstRef_ToByteArray((QCborValueConstRef*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#toString)
///
/// ``` QCborValueConstRef* self ```
const char* q_cborvalueconstref_to_string(void* self) {
    libqt_string _str = QCborValueConstRef_ToString((QCborValueConstRef*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#toDateTime)
///
/// ``` QCborValueConstRef* self ```
QDateTime* q_cborvalueconstref_to_date_time(void* self) {
    return QCborValueConstRef_ToDateTime((QCborValueConstRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#toUrl)
///
/// ``` QCborValueConstRef* self ```
QUrl* q_cborvalueconstref_to_url(void* self) {
    return QCborValueConstRef_ToUrl((QCborValueConstRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#toRegularExpression)
///
/// ``` QCborValueConstRef* self ```
QRegularExpression* q_cborvalueconstref_to_regular_expression(void* self) {
    return QCborValueConstRef_ToRegularExpression((QCborValueConstRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#toUuid)
///
/// ``` QCborValueConstRef* self ```
QUuid* q_cborvalueconstref_to_uuid(void* self) {
    return QCborValueConstRef_ToUuid((QCborValueConstRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#toArray)
///
/// ``` QCborValueConstRef* self ```
QCborArray* q_cborvalueconstref_to_array(void* self) {
    return QCborValueConstRef_ToArray((QCborValueConstRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#toArray)
///
/// ``` QCborValueConstRef* self, QCborArray* a ```
QCborArray* q_cborvalueconstref_to_array_with_q_cbor_array(void* self, void* a) {
    return QCborValueConstRef_ToArrayWithQCborArray((QCborValueConstRef*)self, (QCborArray*)a);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#toMap)
///
/// ``` QCborValueConstRef* self ```
QCborMap* q_cborvalueconstref_to_map(void* self) {
    return QCborValueConstRef_ToMap((QCborValueConstRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#toMap)
///
/// ``` QCborValueConstRef* self, QCborMap* m ```
QCborMap* q_cborvalueconstref_to_map_with_q_cbor_map(void* self, void* m) {
    return QCborValueConstRef_ToMapWithQCborMap((QCborValueConstRef*)self, (QCborMap*)m);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#operator[])
///
/// ``` QCborValueConstRef* self, const char* key ```
QCborValue* q_cborvalueconstref_operator_subscript(void* self, const char* key) {
    return QCborValueConstRef_OperatorSubscript((QCborValueConstRef*)self, qstring(key));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#operator[])
///
/// ``` QCborValueConstRef* self, long long key ```
QCborValue* q_cborvalueconstref_operator_subscript2(void* self, long long key) {
    return QCborValueConstRef_OperatorSubscript2((QCborValueConstRef*)self, key);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#compare)
///
/// ``` QCborValueConstRef* self, QCborValue* other ```
int32_t q_cborvalueconstref_compare(void* self, void* other) {
    return QCborValueConstRef_Compare((QCborValueConstRef*)self, (QCborValue*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#operator==)
///
/// ``` QCborValueConstRef* self, QCborValue* other ```
bool q_cborvalueconstref_operator_equal(void* self, void* other) {
    return QCborValueConstRef_OperatorEqual((QCborValueConstRef*)self, (QCborValue*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#operator!=)
///
/// ``` QCborValueConstRef* self, QCborValue* other ```
bool q_cborvalueconstref_operator_not_equal(void* self, void* other) {
    return QCborValueConstRef_OperatorNotEqual((QCborValueConstRef*)self, (QCborValue*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#operator<)
///
/// ``` QCborValueConstRef* self, QCborValue* other ```
bool q_cborvalueconstref_operator_lesser(void* self, void* other) {
    return QCborValueConstRef_OperatorLesser((QCborValueConstRef*)self, (QCborValue*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#toVariant)
///
/// ``` QCborValueConstRef* self ```
QVariant* q_cborvalueconstref_to_variant(void* self) {
    return QCborValueConstRef_ToVariant((QCborValueConstRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#toJsonValue)
///
/// ``` QCborValueConstRef* self ```
QJsonValue* q_cborvalueconstref_to_json_value(void* self) {
    return QCborValueConstRef_ToJsonValue((QCborValueConstRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#toCbor)
///
/// ``` QCborValueConstRef* self ```
char* q_cborvalueconstref_to_cbor(void* self) {
    libqt_string _str = QCborValueConstRef_ToCbor((QCborValueConstRef*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#toCbor)
///
/// ``` QCborValueConstRef* self, QCborStreamWriter* writer ```
void q_cborvalueconstref_to_cbor_with_writer(void* self, void* writer) {
    QCborValueConstRef_ToCborWithWriter((QCborValueConstRef*)self, (QCborStreamWriter*)writer);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#toDiagnosticNotation)
///
/// ``` QCborValueConstRef* self ```
const char* q_cborvalueconstref_to_diagnostic_notation(void* self) {
    libqt_string _str = QCborValueConstRef_ToDiagnosticNotation((QCborValueConstRef*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#toSimpleType)
///
/// ``` QCborValueConstRef* self, enum QCborValueConstRef__QCborSimpleType defaultValue ```
int64_t q_cborvalueconstref_to_simple_type1(void* self, int64_t defaultValue) {
    return QCborValueConstRef_ToSimpleType1((QCborValueConstRef*)self, defaultValue);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#tag)
///
/// ``` QCborValueConstRef* self, enum QCborValueConstRef__QCborTag defaultValue ```
int64_t q_cborvalueconstref_tag1(void* self, int64_t defaultValue) {
    return QCborValueConstRef_Tag1((QCborValueConstRef*)self, defaultValue);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#taggedValue)
///
/// ``` QCborValueConstRef* self, QCborValue* defaultValue ```
QCborValue* q_cborvalueconstref_tagged_value1(void* self, void* defaultValue) {
    return QCborValueConstRef_TaggedValue1((QCborValueConstRef*)self, (QCborValue*)defaultValue);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#toInteger)
///
/// ``` QCborValueConstRef* self, long long defaultValue ```
long long q_cborvalueconstref_to_integer1(void* self, long long defaultValue) {
    return QCborValueConstRef_ToInteger1((QCborValueConstRef*)self, defaultValue);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#toBool)
///
/// ``` QCborValueConstRef* self, bool defaultValue ```
bool q_cborvalueconstref_to_bool1(void* self, bool defaultValue) {
    return QCborValueConstRef_ToBool1((QCborValueConstRef*)self, defaultValue);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#toDouble)
///
/// ``` QCborValueConstRef* self, double defaultValue ```
double q_cborvalueconstref_to_double1(void* self, double defaultValue) {
    return QCborValueConstRef_ToDouble1((QCborValueConstRef*)self, defaultValue);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#toByteArray)
///
/// ``` QCborValueConstRef* self, const char* defaultValue ```
char* q_cborvalueconstref_to_byte_array1(void* self, const char* defaultValue) {
    libqt_string _str = QCborValueConstRef_ToByteArray1((QCborValueConstRef*)self, qstring(defaultValue));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#toString)
///
/// ``` QCborValueConstRef* self, const char* defaultValue ```
const char* q_cborvalueconstref_to_string1(void* self, const char* defaultValue) {
    libqt_string _str = QCborValueConstRef_ToString1((QCborValueConstRef*)self, qstring(defaultValue));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#toDateTime)
///
/// ``` QCborValueConstRef* self, QDateTime* defaultValue ```
QDateTime* q_cborvalueconstref_to_date_time1(void* self, void* defaultValue) {
    return QCborValueConstRef_ToDateTime1((QCborValueConstRef*)self, (QDateTime*)defaultValue);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#toUrl)
///
/// ``` QCborValueConstRef* self, QUrl* defaultValue ```
QUrl* q_cborvalueconstref_to_url1(void* self, void* defaultValue) {
    return QCborValueConstRef_ToUrl1((QCborValueConstRef*)self, (QUrl*)defaultValue);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#toRegularExpression)
///
/// ``` QCborValueConstRef* self, QRegularExpression* defaultValue ```
QRegularExpression* q_cborvalueconstref_to_regular_expression1(void* self, void* defaultValue) {
    return QCborValueConstRef_ToRegularExpression1((QCborValueConstRef*)self, (QRegularExpression*)defaultValue);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#toUuid)
///
/// ``` QCborValueConstRef* self, QUuid* defaultValue ```
QUuid* q_cborvalueconstref_to_uuid1(void* self, void* defaultValue) {
    return QCborValueConstRef_ToUuid1((QCborValueConstRef*)self, (QUuid*)defaultValue);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#toCbor)
///
/// ``` QCborValueConstRef* self, int opt ```
char* q_cborvalueconstref_to_cbor1(void* self, int64_t opt) {
    libqt_string _str = QCborValueConstRef_ToCbor1((QCborValueConstRef*)self, opt);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#toCbor)
///
/// ``` QCborValueConstRef* self, QCborStreamWriter* writer, int opt ```
void q_cborvalueconstref_to_cbor2(void* self, void* writer, int64_t opt) {
    QCborValueConstRef_ToCbor2((QCborValueConstRef*)self, (QCborStreamWriter*)writer, opt);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueconstref.html#toDiagnosticNotation)
///
/// ``` QCborValueConstRef* self, int opt ```
const char* q_cborvalueconstref_to_diagnostic_notation1(void* self, int64_t opt) {
    libqt_string _str = QCborValueConstRef_ToDiagnosticNotation1((QCborValueConstRef*)self, opt);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Delete this object from C++ memory.
///
/// ``` QCborValueConstRef* self ```
void q_cborvalueconstref_delete(void* self) {
    QCborValueConstRef_Delete((QCborValueConstRef*)(self));
}

/// https://doc.qt.io/qt-6/qcborvalueref.html

/// q_cborvalueref_new constructs a new QCborValueRef object.
///
/// ``` QCborValueRef* other ```
QCborValueRef* q_cborvalueref_new(void* other) {
    return QCborValueRef_new((QCborValueRef*)other);
}

/// q_cborvalueref_new2 constructs a new QCborValueRef object and invalidates the source QCborValueRef object.
///
/// ``` QCborValueRef* other ```
QCborValueRef* q_cborvalueref_new2(void* other) {
    return QCborValueRef_new2((QCborValueRef*)other);
}

/// q_cborvalueref_new3 constructs a new QCborValueRef object.
///
/// ``` QCborValueRef* param1 ```
QCborValueRef* q_cborvalueref_new3(void* param1) {
    return QCborValueRef_new3((QCborValueRef*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#operator=)
///
/// ``` QCborValueRef* self, QCborValue* other ```
void q_cborvalueref_operator_assign(void* self, void* other) {
    QCborValueRef_OperatorAssign((QCborValueRef*)self, (QCborValue*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#operator=)
///
/// ``` QCborValueRef* self, QCborValueRef* other ```
void q_cborvalueref_operator_assign_with_other(void* self, void* other) {
    QCborValueRef_OperatorAssignWithOther((QCborValueRef*)self, (QCborValueRef*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#operator[])
///
/// ``` QCborValueRef* self, long long key ```
QCborValueRef* q_cborvalueref_operator_subscript(void* self, long long key) {
    return QCborValueRef_OperatorSubscript((QCborValueRef*)self, key);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#operator[])
///
/// ``` QCborValueRef* self, const char* key ```
QCborValueRef* q_cborvalueref_operator_subscript2(void* self, const char* key) {
    return QCborValueRef_OperatorSubscript2((QCborValueRef*)self, qstring(key));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#operator QCborValue)
///
/// ``` QCborValueRef* self ```
QCborValue* q_cborvalueref_to_q_cbor_value(void* self) {
    return QCborValueRef_ToQCborValue((QCborValueRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#type)
///
/// ``` QCborValueRef* self ```
int64_t q_cborvalueref_type(void* self) {
    return QCborValueRef_Type((QCborValueRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#isInteger)
///
/// ``` QCborValueRef* self ```
bool q_cborvalueref_is_integer(void* self) {
    return QCborValueRef_IsInteger((QCborValueRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#isByteArray)
///
/// ``` QCborValueRef* self ```
bool q_cborvalueref_is_byte_array(void* self) {
    return QCborValueRef_IsByteArray((QCborValueRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#isString)
///
/// ``` QCborValueRef* self ```
bool q_cborvalueref_is_string(void* self) {
    return QCborValueRef_IsString((QCborValueRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#isArray)
///
/// ``` QCborValueRef* self ```
bool q_cborvalueref_is_array(void* self) {
    return QCborValueRef_IsArray((QCborValueRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#isMap)
///
/// ``` QCborValueRef* self ```
bool q_cborvalueref_is_map(void* self) {
    return QCborValueRef_IsMap((QCborValueRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#isTag)
///
/// ``` QCborValueRef* self ```
bool q_cborvalueref_is_tag(void* self) {
    return QCborValueRef_IsTag((QCborValueRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#isFalse)
///
/// ``` QCborValueRef* self ```
bool q_cborvalueref_is_false(void* self) {
    return QCborValueRef_IsFalse((QCborValueRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#isTrue)
///
/// ``` QCborValueRef* self ```
bool q_cborvalueref_is_true(void* self) {
    return QCborValueRef_IsTrue((QCborValueRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#isBool)
///
/// ``` QCborValueRef* self ```
bool q_cborvalueref_is_bool(void* self) {
    return QCborValueRef_IsBool((QCborValueRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#isNull)
///
/// ``` QCborValueRef* self ```
bool q_cborvalueref_is_null(void* self) {
    return QCborValueRef_IsNull((QCborValueRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#isUndefined)
///
/// ``` QCborValueRef* self ```
bool q_cborvalueref_is_undefined(void* self) {
    return QCborValueRef_IsUndefined((QCborValueRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#isDouble)
///
/// ``` QCborValueRef* self ```
bool q_cborvalueref_is_double(void* self) {
    return QCborValueRef_IsDouble((QCborValueRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#isDateTime)
///
/// ``` QCborValueRef* self ```
bool q_cborvalueref_is_date_time(void* self) {
    return QCborValueRef_IsDateTime((QCborValueRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#isUrl)
///
/// ``` QCborValueRef* self ```
bool q_cborvalueref_is_url(void* self) {
    return QCborValueRef_IsUrl((QCborValueRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#isRegularExpression)
///
/// ``` QCborValueRef* self ```
bool q_cborvalueref_is_regular_expression(void* self) {
    return QCborValueRef_IsRegularExpression((QCborValueRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#isUuid)
///
/// ``` QCborValueRef* self ```
bool q_cborvalueref_is_uuid(void* self) {
    return QCborValueRef_IsUuid((QCborValueRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#isInvalid)
///
/// ``` QCborValueRef* self ```
bool q_cborvalueref_is_invalid(void* self) {
    return QCborValueRef_IsInvalid((QCborValueRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#isContainer)
///
/// ``` QCborValueRef* self ```
bool q_cborvalueref_is_container(void* self) {
    return QCborValueRef_IsContainer((QCborValueRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#isSimpleType)
///
/// ``` QCborValueRef* self ```
bool q_cborvalueref_is_simple_type(void* self) {
    return QCborValueRef_IsSimpleType((QCborValueRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#isSimpleType)
///
/// ``` QCborValueRef* self, enum QCborValueRef__QCborSimpleType st ```
bool q_cborvalueref_is_simple_type_with_st(void* self, int64_t st) {
    return QCborValueRef_IsSimpleTypeWithSt((QCborValueRef*)self, st);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#toSimpleType)
///
/// ``` QCborValueRef* self ```
int64_t q_cborvalueref_to_simple_type(void* self) {
    return QCborValueRef_ToSimpleType((QCborValueRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#tag)
///
/// ``` QCborValueRef* self ```
int64_t q_cborvalueref_tag(void* self) {
    return QCborValueRef_Tag((QCborValueRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#taggedValue)
///
/// ``` QCborValueRef* self ```
QCborValue* q_cborvalueref_tagged_value(void* self) {
    return QCborValueRef_TaggedValue((QCborValueRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#toInteger)
///
/// ``` QCborValueRef* self ```
long long q_cborvalueref_to_integer(void* self) {
    return QCborValueRef_ToInteger((QCborValueRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#toBool)
///
/// ``` QCborValueRef* self ```
bool q_cborvalueref_to_bool(void* self) {
    return QCborValueRef_ToBool((QCborValueRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#toDouble)
///
/// ``` QCborValueRef* self ```
double q_cborvalueref_to_double(void* self) {
    return QCborValueRef_ToDouble((QCborValueRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#toByteArray)
///
/// ``` QCborValueRef* self ```
char* q_cborvalueref_to_byte_array(void* self) {
    libqt_string _str = QCborValueRef_ToByteArray((QCborValueRef*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#toString)
///
/// ``` QCborValueRef* self ```
const char* q_cborvalueref_to_string(void* self) {
    libqt_string _str = QCborValueRef_ToString((QCborValueRef*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#toDateTime)
///
/// ``` QCborValueRef* self ```
QDateTime* q_cborvalueref_to_date_time(void* self) {
    return QCborValueRef_ToDateTime((QCborValueRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#toUrl)
///
/// ``` QCborValueRef* self ```
QUrl* q_cborvalueref_to_url(void* self) {
    return QCborValueRef_ToUrl((QCborValueRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#toRegularExpression)
///
/// ``` QCborValueRef* self ```
QRegularExpression* q_cborvalueref_to_regular_expression(void* self) {
    return QCborValueRef_ToRegularExpression((QCborValueRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#toUuid)
///
/// ``` QCborValueRef* self ```
QUuid* q_cborvalueref_to_uuid(void* self) {
    return QCborValueRef_ToUuid((QCborValueRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#toArray)
///
/// ``` QCborValueRef* self ```
QCborArray* q_cborvalueref_to_array(void* self) {
    return QCborValueRef_ToArray((QCborValueRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#toArray)
///
/// ``` QCborValueRef* self, QCborArray* a ```
QCborArray* q_cborvalueref_to_array_with_q_cbor_array(void* self, void* a) {
    return QCborValueRef_ToArrayWithQCborArray((QCborValueRef*)self, (QCborArray*)a);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#toMap)
///
/// ``` QCborValueRef* self ```
QCborMap* q_cborvalueref_to_map(void* self) {
    return QCborValueRef_ToMap((QCborValueRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#toMap)
///
/// ``` QCborValueRef* self, QCborMap* m ```
QCborMap* q_cborvalueref_to_map_with_q_cbor_map(void* self, void* m) {
    return QCborValueRef_ToMapWithQCborMap((QCborValueRef*)self, (QCborMap*)m);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#operator[])
///
/// ``` QCborValueRef* self, const char* key ```
QCborValue* q_cborvalueref_operator_subscript3(void* self, const char* key) {
    return QCborValueRef_OperatorSubscript3((QCborValueRef*)self, qstring(key));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#operator[])
///
/// ``` QCborValueRef* self, long long key ```
QCborValue* q_cborvalueref_operator_subscript5(void* self, long long key) {
    return QCborValueRef_OperatorSubscript5((QCborValueRef*)self, key);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#compare)
///
/// ``` QCborValueRef* self, QCborValue* other ```
int32_t q_cborvalueref_compare(void* self, void* other) {
    return QCborValueRef_Compare((QCborValueRef*)self, (QCborValue*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#operator==)
///
/// ``` QCborValueRef* self, QCborValue* other ```
bool q_cborvalueref_operator_equal(void* self, void* other) {
    return QCborValueRef_OperatorEqual((QCborValueRef*)self, (QCborValue*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#operator!=)
///
/// ``` QCborValueRef* self, QCborValue* other ```
bool q_cborvalueref_operator_not_equal(void* self, void* other) {
    return QCborValueRef_OperatorNotEqual((QCborValueRef*)self, (QCborValue*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#operator<)
///
/// ``` QCborValueRef* self, QCborValue* other ```
bool q_cborvalueref_operator_lesser(void* self, void* other) {
    return QCborValueRef_OperatorLesser((QCborValueRef*)self, (QCborValue*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#toVariant)
///
/// ``` QCborValueRef* self ```
QVariant* q_cborvalueref_to_variant(void* self) {
    return QCborValueRef_ToVariant((QCborValueRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#toJsonValue)
///
/// ``` QCborValueRef* self ```
QJsonValue* q_cborvalueref_to_json_value(void* self) {
    return QCborValueRef_ToJsonValue((QCborValueRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#toCbor)
///
/// ``` QCborValueRef* self ```
char* q_cborvalueref_to_cbor(void* self) {
    libqt_string _str = QCborValueRef_ToCbor((QCborValueRef*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#toCbor)
///
/// ``` QCborValueRef* self, QCborStreamWriter* writer ```
void q_cborvalueref_to_cbor_with_writer(void* self, void* writer) {
    QCborValueRef_ToCborWithWriter((QCborValueRef*)self, (QCborStreamWriter*)writer);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#toDiagnosticNotation)
///
/// ``` QCborValueRef* self ```
const char* q_cborvalueref_to_diagnostic_notation(void* self) {
    libqt_string _str = QCborValueRef_ToDiagnosticNotation((QCborValueRef*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#toSimpleType)
///
/// ``` QCborValueRef* self, enum QCborValueRef__QCborSimpleType defaultValue ```
int64_t q_cborvalueref_to_simple_type1(void* self, int64_t defaultValue) {
    return QCborValueRef_ToSimpleType1((QCborValueRef*)self, defaultValue);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#tag)
///
/// ``` QCborValueRef* self, enum QCborValueRef__QCborTag defaultValue ```
int64_t q_cborvalueref_tag1(void* self, int64_t defaultValue) {
    return QCborValueRef_Tag1((QCborValueRef*)self, defaultValue);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#taggedValue)
///
/// ``` QCborValueRef* self, QCborValue* defaultValue ```
QCborValue* q_cborvalueref_tagged_value1(void* self, void* defaultValue) {
    return QCborValueRef_TaggedValue1((QCborValueRef*)self, (QCborValue*)defaultValue);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#toInteger)
///
/// ``` QCborValueRef* self, long long defaultValue ```
long long q_cborvalueref_to_integer1(void* self, long long defaultValue) {
    return QCborValueRef_ToInteger1((QCborValueRef*)self, defaultValue);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#toBool)
///
/// ``` QCborValueRef* self, bool defaultValue ```
bool q_cborvalueref_to_bool1(void* self, bool defaultValue) {
    return QCborValueRef_ToBool1((QCborValueRef*)self, defaultValue);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#toDouble)
///
/// ``` QCborValueRef* self, double defaultValue ```
double q_cborvalueref_to_double1(void* self, double defaultValue) {
    return QCborValueRef_ToDouble1((QCborValueRef*)self, defaultValue);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#toByteArray)
///
/// ``` QCborValueRef* self, const char* defaultValue ```
char* q_cborvalueref_to_byte_array1(void* self, const char* defaultValue) {
    libqt_string _str = QCborValueRef_ToByteArray1((QCborValueRef*)self, qstring(defaultValue));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#toString)
///
/// ``` QCborValueRef* self, const char* defaultValue ```
const char* q_cborvalueref_to_string1(void* self, const char* defaultValue) {
    libqt_string _str = QCborValueRef_ToString1((QCborValueRef*)self, qstring(defaultValue));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#toDateTime)
///
/// ``` QCborValueRef* self, QDateTime* defaultValue ```
QDateTime* q_cborvalueref_to_date_time1(void* self, void* defaultValue) {
    return QCborValueRef_ToDateTime1((QCborValueRef*)self, (QDateTime*)defaultValue);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#toUrl)
///
/// ``` QCborValueRef* self, QUrl* defaultValue ```
QUrl* q_cborvalueref_to_url1(void* self, void* defaultValue) {
    return QCborValueRef_ToUrl1((QCborValueRef*)self, (QUrl*)defaultValue);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#toRegularExpression)
///
/// ``` QCborValueRef* self, QRegularExpression* defaultValue ```
QRegularExpression* q_cborvalueref_to_regular_expression1(void* self, void* defaultValue) {
    return QCborValueRef_ToRegularExpression1((QCborValueRef*)self, (QRegularExpression*)defaultValue);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#toUuid)
///
/// ``` QCborValueRef* self, QUuid* defaultValue ```
QUuid* q_cborvalueref_to_uuid1(void* self, void* defaultValue) {
    return QCborValueRef_ToUuid1((QCborValueRef*)self, (QUuid*)defaultValue);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#toCbor)
///
/// ``` QCborValueRef* self, int opt ```
char* q_cborvalueref_to_cbor1(void* self, int64_t opt) {
    libqt_string _str = QCborValueRef_ToCbor1((QCborValueRef*)self, opt);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#toCbor)
///
/// ``` QCborValueRef* self, QCborStreamWriter* writer, int opt ```
void q_cborvalueref_to_cbor2(void* self, void* writer, int64_t opt) {
    QCborValueRef_ToCbor2((QCborValueRef*)self, (QCborStreamWriter*)writer, opt);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborvalueref.html#toDiagnosticNotation)
///
/// ``` QCborValueRef* self, int opt ```
const char* q_cborvalueref_to_diagnostic_notation1(void* self, int64_t opt) {
    libqt_string _str = QCborValueRef_ToDiagnosticNotation1((QCborValueRef*)self, opt);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Delete this object from C++ memory.
///
/// ``` QCborValueRef* self ```
void q_cborvalueref_delete(void* self) {
    QCborValueRef_Delete((QCborValueRef*)(self));
}