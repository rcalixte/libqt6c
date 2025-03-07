#include "libqjsonarray.hpp"
#include "libqjsonobject.hpp"
#include "libqjsonvalue.hpp"
#include <string.h>
#include "libqvariant.hpp"
#include "libqjsondocument.hpp"
#include "libqjsondocument.h"

/// https://doc.qt.io/qt-6/qjsonparseerror.html

/// q_jsonparseerror_new constructs a new QJsonParseError object.
///
/// ``` QJsonParseError* other ```
QJsonParseError* q_jsonparseerror_new(void* other) {
    return QJsonParseError_new((QJsonParseError*)other);
}

/// q_jsonparseerror_new2 constructs a new QJsonParseError object and invalidates the source QJsonParseError object.
///
/// ``` QJsonParseError* other ```
QJsonParseError* q_jsonparseerror_new2(void* other) {
    return QJsonParseError_new2((QJsonParseError*)other);
}

/// q_jsonparseerror_copy_assign shallow copies `other` into `self`.
///
/// ``` QJsonParseError* self, QJsonParseError* other ```
void q_jsonparseerror_copy_assign(void* self, void* other) {
    QJsonParseError_CopyAssign((QJsonParseError*)self, (QJsonParseError*)other);
}

/// q_jsonparseerror_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QJsonParseError* self, QJsonParseError* other ```
void q_jsonparseerror_move_assign(void* self, void* other) {
    QJsonParseError_MoveAssign((QJsonParseError*)self, (QJsonParseError*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonparseerror.html#errorString)
///
/// ``` QJsonParseError* self ```
const char* q_jsonparseerror_error_string(void* self) {
    libqt_string _str = QJsonParseError_ErrorString((QJsonParseError*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Delete this object from C++ memory.
///
/// ``` QJsonParseError* self ```
void q_jsonparseerror_delete(void* self) {
    QJsonParseError_Delete((QJsonParseError*)(self));
}

/// https://doc.qt.io/qt-6/qjsondocument.html

/// q_jsondocument_new constructs a new QJsonDocument object.
///
///
QJsonDocument* q_jsondocument_new() {
    return QJsonDocument_new();
}

/// q_jsondocument_new2 constructs a new QJsonDocument object.
///
/// ``` QJsonObject* object ```
QJsonDocument* q_jsondocument_new2(void* object) {
    return QJsonDocument_new2((QJsonObject*)object);
}

/// q_jsondocument_new3 constructs a new QJsonDocument object.
///
/// ``` QJsonArray* array ```
QJsonDocument* q_jsondocument_new3(void* array) {
    return QJsonDocument_new3((QJsonArray*)array);
}

/// q_jsondocument_new4 constructs a new QJsonDocument object.
///
/// ``` QJsonDocument* other ```
QJsonDocument* q_jsondocument_new4(void* other) {
    return QJsonDocument_new4((QJsonDocument*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#operator=)
///
/// ``` QJsonDocument* self, QJsonDocument* other ```
void q_jsondocument_operator_assign(void* self, void* other) {
    QJsonDocument_OperatorAssign((QJsonDocument*)self, (QJsonDocument*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#swap)
///
/// ``` QJsonDocument* self, QJsonDocument* other ```
void q_jsondocument_swap(void* self, void* other) {
    QJsonDocument_Swap((QJsonDocument*)self, (QJsonDocument*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#fromVariant)
///
/// ``` QVariant* variant ```
QJsonDocument* q_jsondocument_from_variant(void* variant) {
    return QJsonDocument_FromVariant((QVariant*)variant);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#toVariant)
///
/// ``` QJsonDocument* self ```
QVariant* q_jsondocument_to_variant(void* self) {
    return QJsonDocument_ToVariant((QJsonDocument*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#fromJson)
///
/// ``` const char* json ```
QJsonDocument* q_jsondocument_from_json(const char* json) {
    return QJsonDocument_FromJson(qstring(json));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#toJson)
///
/// ``` QJsonDocument* self ```
char* q_jsondocument_to_json(void* self) {
    libqt_string _str = QJsonDocument_ToJson((QJsonDocument*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#isEmpty)
///
/// ``` QJsonDocument* self ```
bool q_jsondocument_is_empty(void* self) {
    return QJsonDocument_IsEmpty((QJsonDocument*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#isArray)
///
/// ``` QJsonDocument* self ```
bool q_jsondocument_is_array(void* self) {
    return QJsonDocument_IsArray((QJsonDocument*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#isObject)
///
/// ``` QJsonDocument* self ```
bool q_jsondocument_is_object(void* self) {
    return QJsonDocument_IsObject((QJsonDocument*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#object)
///
/// ``` QJsonDocument* self ```
QJsonObject* q_jsondocument_object(void* self) {
    return QJsonDocument_Object((QJsonDocument*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#array)
///
/// ``` QJsonDocument* self ```
QJsonArray* q_jsondocument_array(void* self) {
    return QJsonDocument_Array((QJsonDocument*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#setObject)
///
/// ``` QJsonDocument* self, QJsonObject* object ```
void q_jsondocument_set_object(void* self, void* object) {
    QJsonDocument_SetObject((QJsonDocument*)self, (QJsonObject*)object);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#setArray)
///
/// ``` QJsonDocument* self, QJsonArray* array ```
void q_jsondocument_set_array(void* self, void* array) {
    QJsonDocument_SetArray((QJsonDocument*)self, (QJsonArray*)array);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#operator[])
///
/// ``` QJsonDocument* self, const char* key ```
QJsonValue* q_jsondocument_operator_subscript(void* self, const char* key) {
    return QJsonDocument_OperatorSubscript((QJsonDocument*)self, qstring(key));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#operator[])
///
/// ``` QJsonDocument* self, int64_t i ```
QJsonValue* q_jsondocument_operator_subscript_with_qsizetype(void* self, int64_t i) {
    return QJsonDocument_OperatorSubscriptWithQsizetype((QJsonDocument*)self, i);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#operator==)
///
/// ``` QJsonDocument* self, QJsonDocument* other ```
bool q_jsondocument_operator_equal(void* self, void* other) {
    return QJsonDocument_OperatorEqual((QJsonDocument*)self, (QJsonDocument*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#operator!=)
///
/// ``` QJsonDocument* self, QJsonDocument* other ```
bool q_jsondocument_operator_not_equal(void* self, void* other) {
    return QJsonDocument_OperatorNotEqual((QJsonDocument*)self, (QJsonDocument*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#isNull)
///
/// ``` QJsonDocument* self ```
bool q_jsondocument_is_null(void* self) {
    return QJsonDocument_IsNull((QJsonDocument*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#fromJson)
///
/// ``` const char* json, QJsonParseError* errorVal ```
QJsonDocument* q_jsondocument_from_json2(const char* json, void* errorVal) {
    return QJsonDocument_FromJson2(qstring(json), (QJsonParseError*)errorVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#toJson)
///
/// ``` QJsonDocument* self, enum QJsonDocument__JsonFormat format ```
char* q_jsondocument_to_json1(void* self, int64_t format) {
    libqt_string _str = QJsonDocument_ToJson1((QJsonDocument*)self, format);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Delete this object from C++ memory.
///
/// ``` QJsonDocument* self ```
void q_jsondocument_delete(void* self) {
    QJsonDocument_Delete((QJsonDocument*)(self));
}