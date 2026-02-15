#include "libqjsonarray.hpp"
#include "libqjsonobject.hpp"
#include "libqjsonvalue.hpp"
#include "libqvariant.hpp"
#include "libqjsondocument.hpp"
#include "libqjsondocument.h"

QJsonParseError* q_jsonparseerror_new(void* other) {
    return QJsonParseError_new((QJsonParseError*)other);
}

QJsonParseError* q_jsonparseerror_new2(void* other) {
    return QJsonParseError_new2((QJsonParseError*)other);
}

void q_jsonparseerror_copy_assign(void* self, void* other) {
    QJsonParseError_CopyAssign((QJsonParseError*)self, (QJsonParseError*)other);
}

void q_jsonparseerror_move_assign(void* self, void* other) {
    QJsonParseError_MoveAssign((QJsonParseError*)self, (QJsonParseError*)other);
}

const char* q_jsonparseerror_error_string(void* self) {
    libqt_string _str = QJsonParseError_ErrorString((QJsonParseError*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_jsonparseerror_offset(void* self) {
    return QJsonParseError_Offset((QJsonParseError*)self);
}

void q_jsonparseerror_set_offset(void* self, int offset) {
    QJsonParseError_SetOffset((QJsonParseError*)self, offset);
}

int32_t q_jsonparseerror_error(void* self) {
    return QJsonParseError_Error((QJsonParseError*)self);
}

void q_jsonparseerror_set_error(void* self, int32_t error) {
    QJsonParseError_SetError((QJsonParseError*)self, error);
}

void q_jsonparseerror_delete(void* self) {
    QJsonParseError_Delete((QJsonParseError*)(self));
}

QJsonDocument* q_jsondocument_new() {
    return QJsonDocument_new();
}

QJsonDocument* q_jsondocument_new2(void* object) {
    return QJsonDocument_new2((QJsonObject*)object);
}

QJsonDocument* q_jsondocument_new3(void* array) {
    return QJsonDocument_new3((QJsonArray*)array);
}

QJsonDocument* q_jsondocument_new4(void* other) {
    return QJsonDocument_new4((QJsonDocument*)other);
}

void q_jsondocument_operator_assign(void* self, void* other) {
    QJsonDocument_OperatorAssign((QJsonDocument*)self, (QJsonDocument*)other);
}

void q_jsondocument_swap(void* self, void* other) {
    QJsonDocument_Swap((QJsonDocument*)self, (QJsonDocument*)other);
}

QJsonDocument* q_jsondocument_from_variant(void* variant) {
    return QJsonDocument_FromVariant((QVariant*)variant);
}

QVariant* q_jsondocument_to_variant(void* self) {
    return QJsonDocument_ToVariant((QJsonDocument*)self);
}

QJsonDocument* q_jsondocument_from_json(char* json) {
    return QJsonDocument_FromJson(qstring(json));
}

char* q_jsondocument_to_json(void* self) {
    libqt_string _str = QJsonDocument_ToJson((QJsonDocument*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_jsondocument_is_empty(void* self) {
    return QJsonDocument_IsEmpty((QJsonDocument*)self);
}

bool q_jsondocument_is_array(void* self) {
    return QJsonDocument_IsArray((QJsonDocument*)self);
}

bool q_jsondocument_is_object(void* self) {
    return QJsonDocument_IsObject((QJsonDocument*)self);
}

QJsonObject* q_jsondocument_object(void* self) {
    return QJsonDocument_Object((QJsonDocument*)self);
}

QJsonArray* q_jsondocument_array(void* self) {
    return QJsonDocument_Array((QJsonDocument*)self);
}

void q_jsondocument_set_object(void* self, void* object) {
    QJsonDocument_SetObject((QJsonDocument*)self, (QJsonObject*)object);
}

void q_jsondocument_set_array(void* self, void* array) {
    QJsonDocument_SetArray((QJsonDocument*)self, (QJsonArray*)array);
}

const QJsonValue* q_jsondocument_operator_subscript(void* self, const char* key) {
    return QJsonDocument_OperatorSubscript((QJsonDocument*)self, qstring(key));
}

const QJsonValue* q_jsondocument_operator_subscript4(void* self, int64_t i) {
    return QJsonDocument_OperatorSubscript4((QJsonDocument*)self, i);
}

bool q_jsondocument_is_null(void* self) {
    return QJsonDocument_IsNull((QJsonDocument*)self);
}

QJsonDocument* q_jsondocument_from_json2(char* json, void* error) {
    return QJsonDocument_FromJson2(qstring(json), (QJsonParseError*)error);
}

char* q_jsondocument_to_json1(void* self, int32_t format) {
    libqt_string _str = QJsonDocument_ToJson1((QJsonDocument*)self, format);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_jsondocument_delete(void* self) {
    QJsonDocument_Delete((QJsonDocument*)(self));
}
