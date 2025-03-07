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

QJsonParseError* q_jsonparseerror_new(void* other);
QJsonParseError* q_jsonparseerror_new2(void* other);
void q_jsonparseerror_copy_assign(void* self, void* other);
void q_jsonparseerror_move_assign(void* self, void* other);
const char* q_jsonparseerror_error_string(void* self);
void q_jsonparseerror_delete(void* self);

QJsonDocument* q_jsondocument_new();
QJsonDocument* q_jsondocument_new2(void* object);
QJsonDocument* q_jsondocument_new3(void* array);
QJsonDocument* q_jsondocument_new4(void* other);
void q_jsondocument_operator_assign(void* self, void* other);
void q_jsondocument_swap(void* self, void* other);
QJsonDocument* q_jsondocument_from_variant(void* variant);
QVariant* q_jsondocument_to_variant(void* self);
QJsonDocument* q_jsondocument_from_json(const char* json);
char* q_jsondocument_to_json(void* self);
bool q_jsondocument_is_empty(void* self);
bool q_jsondocument_is_array(void* self);
bool q_jsondocument_is_object(void* self);
QJsonObject* q_jsondocument_object(void* self);
QJsonArray* q_jsondocument_array(void* self);
void q_jsondocument_set_object(void* self, void* object);
void q_jsondocument_set_array(void* self, void* array);
QJsonValue* q_jsondocument_operator_subscript(void* self, const char* key);
QJsonValue* q_jsondocument_operator_subscript_with_qsizetype(void* self, int64_t i);
bool q_jsondocument_operator_equal(void* self, void* other);
bool q_jsondocument_operator_not_equal(void* self, void* other);
bool q_jsondocument_is_null(void* self);
QJsonDocument* q_jsondocument_from_json2(const char* json, void* errorVal);
char* q_jsondocument_to_json1(void* self, int64_t format);
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
