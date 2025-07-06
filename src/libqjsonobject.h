#pragma once
#ifndef SRCQT6C_LIBQJSONOBJECT_H
#define SRCQT6C_LIBQJSONOBJECT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qjsonobject.html

/// q_jsonobject_new constructs a new QJsonObject object.
///
///
QJsonObject* q_jsonobject_new();

/// q_jsonobject_new2 constructs a new QJsonObject object.
///
/// ``` QJsonObject* other ```
QJsonObject* q_jsonobject_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#operator=)
///
/// ``` QJsonObject* self, QJsonObject* other ```
void q_jsonobject_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#swap)
///
/// ``` QJsonObject* self, QJsonObject* other ```
void q_jsonobject_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#fromVariantMap)
///
/// ``` libqt_map /* of const char* to QVariant* */ mapVal ```
QJsonObject* q_jsonobject_from_variant_map(libqt_map /* of const char* to QVariant* */ mapVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#toVariantMap)
///
/// ``` QJsonObject* self ```
libqt_map /* of const char* to QVariant* */ q_jsonobject_to_variant_map(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#fromVariantHash)
///
/// ``` libqt_map /* of const char* to QVariant* */ mapVal ```
QJsonObject* q_jsonobject_from_variant_hash(libqt_map /* of const char* to QVariant* */ mapVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#toVariantHash)
///
/// ``` QJsonObject* self ```
libqt_map /* of const char* to QVariant* */ q_jsonobject_to_variant_hash(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#keys)
///
/// ``` QJsonObject* self ```
const char** q_jsonobject_keys(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#size)
///
/// ``` QJsonObject* self ```
int64_t q_jsonobject_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#count)
///
/// ``` QJsonObject* self ```
int64_t q_jsonobject_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#length)
///
/// ``` QJsonObject* self ```
int64_t q_jsonobject_length(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#isEmpty)
///
/// ``` QJsonObject* self ```
bool q_jsonobject_is_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#value)
///
/// ``` QJsonObject* self, const char* key ```
QJsonValue* q_jsonobject_value(void* self, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#operator[])
///
/// ``` QJsonObject* self, const char* key ```
QJsonValue* q_jsonobject_operator_subscript(void* self, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#operator[])
///
/// ``` QJsonObject* self, const char* key ```
QJsonValueRef* q_jsonobject_operator_subscript_with_key(void* self, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#remove)
///
/// ``` QJsonObject* self, const char* key ```
void q_jsonobject_remove(void* self, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#take)
///
/// ``` QJsonObject* self, const char* key ```
QJsonValue* q_jsonobject_take(void* self, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#contains)
///
/// ``` QJsonObject* self, const char* key ```
bool q_jsonobject_contains(void* self, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#empty)
///
/// ``` QJsonObject* self ```
bool q_jsonobject_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#dtor.QJsonObject)
///
/// Delete this object from C++ memory.
///
/// ``` QJsonObject* self ```
void q_jsonobject_delete(void* self);

#endif
