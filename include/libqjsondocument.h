#pragma once
#ifndef SRCQT6C_LIBQJSONDOCUMENT_H
#define SRCQT6C_LIBQJSONDOCUMENT_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qjsonparseerror.html

/// q_jsonparseerror_new constructs a new QJsonParseError object.
///
/// @param other QJsonParseError*
QJsonParseError* q_jsonparseerror_new(void* other);

/// q_jsonparseerror_new2 constructs a new QJsonParseError object and invalidates the source QJsonParseError object.
///
/// @param other QJsonParseError*
QJsonParseError* q_jsonparseerror_new2(void* other);

/// q_jsonparseerror_copy_assign shallow copies `other` into `self`.
///
/// @param self QJsonParseError*
/// @param other QJsonParseError*
void q_jsonparseerror_copy_assign(void* self, void* other);

/// q_jsonparseerror_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QJsonParseError*
/// @param other QJsonParseError*
void q_jsonparseerror_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonparseerror.html#errorString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QJsonParseError*
const char* q_jsonparseerror_error_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonparseerror.html#offset-var)
///
/// @param self QJsonParseError*
int32_t q_jsonparseerror_offset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonparseerror.html#offset-var)
///
/// @param self QJsonParseError*
/// @param offset int
void q_jsonparseerror_set_offset(void* self, int offset);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonparseerror.html#error-var)
///
/// @param self QJsonParseError*
///
/// @return enum QJsonParseError__ParseError
int32_t q_jsonparseerror_error(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonparseerror.html#error-var)
///
/// @param self QJsonParseError*
/// @param error enum QJsonParseError__ParseError
void q_jsonparseerror_set_error(void* self, int32_t error);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonparseerror.html#dtor.QJsonParseError)
///
/// Delete this object from C++ memory.
///
/// @param self QJsonParseError*
void q_jsonparseerror_delete(void* self);

/// https://doc.qt.io/qt-6/qjsondocument.html

/// q_jsondocument_new constructs a new QJsonDocument object.
///
QJsonDocument* q_jsondocument_new();

/// q_jsondocument_new2 constructs a new QJsonDocument object.
///
/// @param object QJsonObject*
QJsonDocument* q_jsondocument_new2(void* object);

/// q_jsondocument_new3 constructs a new QJsonDocument object.
///
/// @param array QJsonArray*
QJsonDocument* q_jsondocument_new3(void* array);

/// q_jsondocument_new4 constructs a new QJsonDocument object.
///
/// @param other QJsonDocument*
QJsonDocument* q_jsondocument_new4(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#operator-eq)
///
/// @param self QJsonDocument*
/// @param other QJsonDocument*
void q_jsondocument_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#swap)
///
/// @param self QJsonDocument*
/// @param other QJsonDocument*
void q_jsondocument_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#fromVariant)
///
/// @param variant QVariant*
QJsonDocument* q_jsondocument_from_variant(void* variant);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#toVariant)
///
/// @param self QJsonDocument*
QVariant* q_jsondocument_to_variant(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#fromJson)
///
/// @param json const char*
QJsonDocument* q_jsondocument_from_json(const char* json);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#toJson)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QJsonDocument*
char* q_jsondocument_to_json(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#isEmpty)
///
/// @param self QJsonDocument*
bool q_jsondocument_is_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#isArray)
///
/// @param self QJsonDocument*
bool q_jsondocument_is_array(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#isObject)
///
/// @param self QJsonDocument*
bool q_jsondocument_is_object(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#object)
///
/// @param self QJsonDocument*
QJsonObject* q_jsondocument_object(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#array)
///
/// @param self QJsonDocument*
QJsonArray* q_jsondocument_array(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#setObject)
///
/// @param self QJsonDocument*
/// @param object QJsonObject*
void q_jsondocument_set_object(void* self, void* object);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#setArray)
///
/// @param self QJsonDocument*
/// @param array QJsonArray*
void q_jsondocument_set_array(void* self, void* array);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#operator-5b-5d)
///
/// @param self QJsonDocument*
/// @param key const char*
const QJsonValue* q_jsondocument_operator_subscript(void* self, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#operator-5b-5d)
///
/// @param self QJsonDocument*
/// @param i int64_t
const QJsonValue* q_jsondocument_operator_subscript4(void* self, int64_t i);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#isNull)
///
/// @param self QJsonDocument*
bool q_jsondocument_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#fromJson)
///
/// @param json const char*
/// @param error QJsonParseError*
QJsonDocument* q_jsondocument_from_json2(const char* json, void* error);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#toJson)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QJsonDocument*
/// @param format enum QJsonDocument__JsonFormat
char* q_jsondocument_to_json1(void* self, int32_t format);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#dtor.QJsonDocument)
///
/// Delete this object from C++ memory.
///
/// @param self QJsonDocument*
void q_jsondocument_delete(void* self);

/// https://doc.qt.io/qt-6/qjsondocument.html#types

typedef enum {
    QJSONPARSEERROR_PARSEERROR_NOERROR = 0,
    QJSONPARSEERROR_PARSEERROR_UNTERMINATEDOBJECT = 1,
    QJSONPARSEERROR_PARSEERROR_MISSINGNAMESEPARATOR = 2,
    QJSONPARSEERROR_PARSEERROR_UNTERMINATEDARRAY = 3,
    QJSONPARSEERROR_PARSEERROR_MISSINGVALUESEPARATOR = 4,
    QJSONPARSEERROR_PARSEERROR_ILLEGALVALUE = 5,
    QJSONPARSEERROR_PARSEERROR_TERMINATIONBYNUMBER = 6,
    QJSONPARSEERROR_PARSEERROR_ILLEGALNUMBER = 7,
    QJSONPARSEERROR_PARSEERROR_ILLEGALESCAPESEQUENCE = 8,
    QJSONPARSEERROR_PARSEERROR_ILLEGALUTF8STRING = 9,
    QJSONPARSEERROR_PARSEERROR_UNTERMINATEDSTRING = 10,
    QJSONPARSEERROR_PARSEERROR_MISSINGOBJECT = 11,
    QJSONPARSEERROR_PARSEERROR_DEEPNESTING = 12,
    QJSONPARSEERROR_PARSEERROR_DOCUMENTTOOLARGE = 13,
    QJSONPARSEERROR_PARSEERROR_GARBAGEATEND = 14
} QJsonParseError__ParseError;

typedef enum {
    QJSONDOCUMENT_JSONFORMAT_INDENTED = 0,
    QJSONDOCUMENT_JSONFORMAT_COMPACT = 1
} QJsonDocument__JsonFormat;

#endif
