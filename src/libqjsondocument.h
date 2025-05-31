#pragma once
#ifndef SRCQT6C_LIBQJSONDOCUMENT_H
#define SRCQT6C_LIBQJSONDOCUMENT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqjsonarray.h"
#include "libqjsonobject.h"
#include "libqjsonvalue.h"
#include <string.h>
#include "libqvariant.h"

/// https://doc.qt.io/qt-6/qjsonparseerror.html

/// q_jsonparseerror_new constructs a new QJsonParseError object.
///
/// ``` QJsonParseError* other ```
QJsonParseError* q_jsonparseerror_new(void* other);

/// q_jsonparseerror_new2 constructs a new QJsonParseError object and invalidates the source QJsonParseError object.
///
/// ``` QJsonParseError* other ```
QJsonParseError* q_jsonparseerror_new2(void* other);

/// q_jsonparseerror_copy_assign shallow copies `other` into `self`.
///
/// ``` QJsonParseError* self, QJsonParseError* other ```
void q_jsonparseerror_copy_assign(void* self, void* other);

/// q_jsonparseerror_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QJsonParseError* self, QJsonParseError* other ```
void q_jsonparseerror_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonparseerror.html#errorString)
///
/// ``` QJsonParseError* self ```
const char* q_jsonparseerror_error_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonparseerror.html#dtor.QJsonParseError)
///
/// Delete this object from C++ memory.
///
/// ``` QJsonParseError* self ```
void q_jsonparseerror_delete(void* self);

/// https://doc.qt.io/qt-6/qjsondocument.html

/// q_jsondocument_new constructs a new QJsonDocument object.
///
///
QJsonDocument* q_jsondocument_new();

/// q_jsondocument_new2 constructs a new QJsonDocument object.
///
/// ``` QJsonObject* object ```
QJsonDocument* q_jsondocument_new2(void* object);

/// q_jsondocument_new3 constructs a new QJsonDocument object.
///
/// ``` QJsonArray* array ```
QJsonDocument* q_jsondocument_new3(void* array);

/// q_jsondocument_new4 constructs a new QJsonDocument object.
///
/// ``` QJsonDocument* other ```
QJsonDocument* q_jsondocument_new4(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#operator=)
///
/// ``` QJsonDocument* self, QJsonDocument* other ```
void q_jsondocument_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#swap)
///
/// ``` QJsonDocument* self, QJsonDocument* other ```
void q_jsondocument_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#fromVariant)
///
/// ``` QVariant* variant ```
QJsonDocument* q_jsondocument_from_variant(void* variant);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#toVariant)
///
/// ``` QJsonDocument* self ```
QVariant* q_jsondocument_to_variant(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#fromJson)
///
/// ``` const char* json ```
QJsonDocument* q_jsondocument_from_json(const char* json);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#toJson)
///
/// ``` QJsonDocument* self ```
char* q_jsondocument_to_json(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#isEmpty)
///
/// ``` QJsonDocument* self ```
bool q_jsondocument_is_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#isArray)
///
/// ``` QJsonDocument* self ```
bool q_jsondocument_is_array(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#isObject)
///
/// ``` QJsonDocument* self ```
bool q_jsondocument_is_object(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#object)
///
/// ``` QJsonDocument* self ```
QJsonObject* q_jsondocument_object(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#array)
///
/// ``` QJsonDocument* self ```
QJsonArray* q_jsondocument_array(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#setObject)
///
/// ``` QJsonDocument* self, QJsonObject* object ```
void q_jsondocument_set_object(void* self, void* object);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#setArray)
///
/// ``` QJsonDocument* self, QJsonArray* array ```
void q_jsondocument_set_array(void* self, void* array);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#operator[])
///
/// ``` QJsonDocument* self, const char* key ```
const QJsonValue* q_jsondocument_operator_subscript(void* self, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#operator[])
///
/// ``` QJsonDocument* self, int64_t i ```
const QJsonValue* q_jsondocument_operator_subscript_with_qsizetype(void* self, int64_t i);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#operator==)
///
/// ``` QJsonDocument* self, QJsonDocument* other ```
bool q_jsondocument_operator_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#operator!=)
///
/// ``` QJsonDocument* self, QJsonDocument* other ```
bool q_jsondocument_operator_not_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#isNull)
///
/// ``` QJsonDocument* self ```
bool q_jsondocument_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#fromJson)
///
/// ``` const char* json, QJsonParseError* errorVal ```
QJsonDocument* q_jsondocument_from_json2(const char* json, void* errorVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#toJson)
///
/// ``` QJsonDocument* self, enum QJsonDocument__JsonFormat format ```
char* q_jsondocument_to_json1(void* self, int64_t format);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsondocument.html#dtor.QJsonDocument)
///
/// Delete this object from C++ memory.
///
/// ``` QJsonDocument* self ```
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
