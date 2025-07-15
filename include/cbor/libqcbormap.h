#pragma once
#ifndef SRC_CBORQT6C_LIBQCBORMAP_H
#define SRC_CBORQT6C_LIBQCBORMAP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qcbormap.html

/// q_cbormap_new constructs a new QCborMap object.
///
///
QCborMap* q_cbormap_new();

/// q_cbormap_new2 constructs a new QCborMap object.
///
/// ``` QCborMap* other ```
QCborMap* q_cbormap_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#operator=)
///
/// ``` QCborMap* self, QCborMap* other ```
void q_cbormap_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#swap)
///
/// ``` QCborMap* self, QCborMap* other ```
void q_cbormap_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#toCborValue)
///
/// ``` QCborMap* self ```
QCborValue* q_cbormap_to_cbor_value(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#size)
///
/// ``` QCborMap* self ```
int64_t q_cbormap_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#isEmpty)
///
/// ``` QCborMap* self ```
bool q_cbormap_is_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#clear)
///
/// ``` QCborMap* self ```
void q_cbormap_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#keys)
///
/// ``` QCborMap* self ```
libqt_list /* of QCborValue* */ q_cbormap_keys(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#value)
///
/// ``` QCborMap* self, long long key ```
QCborValue* q_cbormap_value(void* self, long long key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#value)
///
/// ``` QCborMap* self, const char* key ```
QCborValue* q_cbormap_value3(void* self, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#value)
///
/// ``` QCborMap* self, QCborValue* key ```
QCborValue* q_cbormap_value4(void* self, void* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#operator[])
///
/// ``` QCborMap* self, long long key ```
const QCborValue* q_cbormap_operator_subscript(void* self, long long key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#operator[])
///
/// ``` QCborMap* self, const char* key ```
const QCborValue* q_cbormap_operator_subscript3(void* self, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#operator[])
///
/// ``` QCborMap* self, QCborValue* key ```
const QCborValue* q_cbormap_operator_subscript4(void* self, void* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#operator[])
///
/// ``` QCborMap* self, long long key ```
QCborValueRef* q_cbormap_operator_subscript5(void* self, long long key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#operator[])
///
/// ``` QCborMap* self, const char* key ```
QCborValueRef* q_cbormap_operator_subscript7(void* self, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#operator[])
///
/// ``` QCborMap* self, QCborValue* key ```
QCborValueRef* q_cbormap_operator_subscript8(void* self, void* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#take)
///
/// ``` QCborMap* self, long long key ```
QCborValue* q_cbormap_take(void* self, long long key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#take)
///
/// ``` QCborMap* self, const char* key ```
QCborValue* q_cbormap_take3(void* self, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#take)
///
/// ``` QCborMap* self, QCborValue* key ```
QCborValue* q_cbormap_take4(void* self, void* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#remove)
///
/// ``` QCborMap* self, long long key ```
void q_cbormap_remove(void* self, long long key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#remove)
///
/// ``` QCborMap* self, const char* key ```
void q_cbormap_remove3(void* self, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#remove)
///
/// ``` QCborMap* self, QCborValue* key ```
void q_cbormap_remove4(void* self, void* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#contains)
///
/// ``` QCborMap* self, long long key ```
bool q_cbormap_contains(void* self, long long key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#contains)
///
/// ``` QCborMap* self, const char* key ```
bool q_cbormap_contains3(void* self, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#contains)
///
/// ``` QCborMap* self, QCborValue* key ```
bool q_cbormap_contains4(void* self, void* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#compare)
///
/// ``` QCborMap* self, QCborMap* other ```
int32_t q_cbormap_compare(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#empty)
///
/// ``` QCborMap* self ```
bool q_cbormap_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#fromVariantMap)
///
/// ``` libqt_map /* of const char* to QVariant* */ mapVal ```
QCborMap* q_cbormap_from_variant_map(libqt_map /* of const char* to QVariant* */ mapVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#fromVariantHash)
///
/// ``` libqt_map /* of const char* to QVariant* */ hash ```
QCborMap* q_cbormap_from_variant_hash(libqt_map /* of const char* to QVariant* */ hash);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#fromJsonObject)
///
/// ``` QJsonObject* o ```
QCborMap* q_cbormap_from_json_object(void* o);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#toVariantMap)
///
/// ``` QCborMap* self ```
libqt_map /* of const char* to QVariant* */ q_cbormap_to_variant_map(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#toVariantHash)
///
/// ``` QCborMap* self ```
libqt_map /* of const char* to QVariant* */ q_cbormap_to_variant_hash(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#toJsonObject)
///
/// ``` QCborMap* self ```
QJsonObject* q_cbormap_to_json_object(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#dtor.QCborMap)
///
/// Delete this object from C++ memory.
///
/// ``` QCborMap* self ```
void q_cbormap_delete(void* self);

#endif
