#pragma once
#ifndef QML_LIBQJSPRIMITIVEVALUE_H
#define QML_LIBQJSPRIMITIVEVALUE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qjsprimitiveundefined.html)

/// q_jsprimitiveundefined_new constructs a new QJSPrimitiveUndefined object.
///
/// @param other QJSPrimitiveUndefined*
///
QJSPrimitiveUndefined* q_jsprimitiveundefined_new(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsprimitiveundefined.html)

/// q_jsprimitiveundefined_new2 constructs a new QJSPrimitiveUndefined object and invalidates the source QJSPrimitiveUndefined object.
///
/// @param other QJSPrimitiveUndefined*
///
QJSPrimitiveUndefined* q_jsprimitiveundefined_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsprimitiveundefined.html)

/// q_jsprimitiveundefined_new3 constructs a new QJSPrimitiveUndefined object.
///
QJSPrimitiveUndefined* q_jsprimitiveundefined_new3();

/// [Upstream resources](https://doc.qt.io/qt-6/qjsprimitiveundefined.html)

/// q_jsprimitiveundefined_new4 constructs a new QJSPrimitiveUndefined object.
///
/// @param param1 QJSPrimitiveUndefined*
///
QJSPrimitiveUndefined* q_jsprimitiveundefined_new4(void* param1);

/// q_jsprimitiveundefined_copy_assign shallow copies `other` into `self`.
///
/// @param self QJSPrimitiveUndefined*
/// @param other QJSPrimitiveUndefined*
///
void q_jsprimitiveundefined_copy_assign(void* self, void* other);

/// q_jsprimitiveundefined_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QJSPrimitiveUndefined*
/// @param other QJSPrimitiveUndefined*
///
void q_jsprimitiveundefined_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsprimitiveundefined.html#dtor.QJSPrimitiveUndefined)
///
/// Delete this object from C++ memory.
///
/// @param self QJSPrimitiveUndefined*
///
void q_jsprimitiveundefined_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsprimitivenull.html)

/// q_jsprimitivenull_new constructs a new QJSPrimitiveNull object.
///
/// @param other QJSPrimitiveNull*
///
QJSPrimitiveNull* q_jsprimitivenull_new(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsprimitivenull.html)

/// q_jsprimitivenull_new2 constructs a new QJSPrimitiveNull object and invalidates the source QJSPrimitiveNull object.
///
/// @param other QJSPrimitiveNull*
///
QJSPrimitiveNull* q_jsprimitivenull_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsprimitivenull.html)

/// q_jsprimitivenull_new3 constructs a new QJSPrimitiveNull object.
///
QJSPrimitiveNull* q_jsprimitivenull_new3();

/// [Upstream resources](https://doc.qt.io/qt-6/qjsprimitivenull.html)

/// q_jsprimitivenull_new4 constructs a new QJSPrimitiveNull object.
///
/// @param param1 QJSPrimitiveNull*
///
QJSPrimitiveNull* q_jsprimitivenull_new4(void* param1);

/// q_jsprimitivenull_copy_assign shallow copies `other` into `self`.
///
/// @param self QJSPrimitiveNull*
/// @param other QJSPrimitiveNull*
///
void q_jsprimitivenull_copy_assign(void* self, void* other);

/// q_jsprimitivenull_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QJSPrimitiveNull*
/// @param other QJSPrimitiveNull*
///
void q_jsprimitivenull_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsprimitivenull.html#dtor.QJSPrimitiveNull)
///
/// Delete this object from C++ memory.
///
/// @param self QJSPrimitiveNull*
///
void q_jsprimitivenull_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsprimitivevalue.html)

/// q_jsprimitivevalue_new constructs a new QJSPrimitiveValue object.
///
QJSPrimitiveValue* q_jsprimitivevalue_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qjsprimitivevalue.html)

/// q_jsprimitivevalue_new2 constructs a new QJSPrimitiveValue object.
///
/// @param undefined QJSPrimitiveUndefined*
///
QJSPrimitiveValue* q_jsprimitivevalue_new2(void* undefined);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsprimitivevalue.html)

/// q_jsprimitivevalue_new3 constructs a new QJSPrimitiveValue object.
///
/// @param nullVal QJSPrimitiveNull*
///
QJSPrimitiveValue* q_jsprimitivevalue_new3(void* nullVal);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsprimitivevalue.html)

/// q_jsprimitivevalue_new4 constructs a new QJSPrimitiveValue object.
///
/// @param value bool
///
QJSPrimitiveValue* q_jsprimitivevalue_new4(bool value);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsprimitivevalue.html)

/// q_jsprimitivevalue_new5 constructs a new QJSPrimitiveValue object.
///
/// @param value int
///
QJSPrimitiveValue* q_jsprimitivevalue_new5(int value);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsprimitivevalue.html)

/// q_jsprimitivevalue_new6 constructs a new QJSPrimitiveValue object.
///
/// @param value double
///
QJSPrimitiveValue* q_jsprimitivevalue_new6(double value);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsprimitivevalue.html)

/// q_jsprimitivevalue_new7 constructs a new QJSPrimitiveValue object.
///
/// @param string const char*
///
QJSPrimitiveValue* q_jsprimitivevalue_new7(const char* string);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsprimitivevalue.html)

/// q_jsprimitivevalue_new8 constructs a new QJSPrimitiveValue object.
///
/// @param type QMetaType*
/// @param value void*
///
QJSPrimitiveValue* q_jsprimitivevalue_new8(void* type, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsprimitivevalue.html)

/// q_jsprimitivevalue_new9 constructs a new QJSPrimitiveValue object.
///
/// @param type QMetaType*
///
QJSPrimitiveValue* q_jsprimitivevalue_new9(void* type);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsprimitivevalue.html)

/// q_jsprimitivevalue_new10 constructs a new QJSPrimitiveValue object.
///
/// @param variant QVariant*
///
QJSPrimitiveValue* q_jsprimitivevalue_new10(void* variant);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsprimitivevalue.html)

/// q_jsprimitivevalue_new11 constructs a new QJSPrimitiveValue object.
///
/// @param param1 QJSPrimitiveValue*
///
QJSPrimitiveValue* q_jsprimitivevalue_new11(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsprimitivevalue.html#type)
///
/// @param self QJSPrimitiveValue*
///
/// @return enum QJSPrimitiveValue__Type
///
uint8_t q_jsprimitivevalue_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsprimitivevalue.html#metaType)
///
/// @param self QJSPrimitiveValue*
///
QMetaType* q_jsprimitivevalue_meta_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsprimitivevalue.html#data)
///
/// @param self QJSPrimitiveValue*
///
void* q_jsprimitivevalue_data(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsprimitivevalue.html#data)
///
/// @param self QJSPrimitiveValue*
///
const void* q_jsprimitivevalue_data2(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsprimitivevalue.html#constData)
///
/// @param self QJSPrimitiveValue*
///
const void* q_jsprimitivevalue_const_data(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsprimitivevalue.html#toBoolean)
///
/// @param self QJSPrimitiveValue*
///
bool q_jsprimitivevalue_to_boolean(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsprimitivevalue.html#toInteger)
///
/// @param self QJSPrimitiveValue*
///
int32_t q_jsprimitivevalue_to_integer(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsprimitivevalue.html#toDouble)
///
/// @param self QJSPrimitiveValue*
///
double q_jsprimitivevalue_to_double(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsprimitivevalue.html#toString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QJSPrimitiveValue*
///
const char* q_jsprimitivevalue_to_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsprimitivevalue.html#toVariant)
///
/// @param self QJSPrimitiveValue*
///
QVariant* q_jsprimitivevalue_to_variant(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsprimitivevalue.html#operator-2b-2b)
///
/// @param self QJSPrimitiveValue*
///
QJSPrimitiveValue* q_jsprimitivevalue_operator_plus_plus(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsprimitivevalue.html#operator-2b-2b)
///
/// @param self QJSPrimitiveValue*
/// @param param1 int
///
QJSPrimitiveValue* q_jsprimitivevalue_operator_plus_plus2(void* self, int param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsprimitivevalue.html#operator--)
///
/// @param self QJSPrimitiveValue*
///
QJSPrimitiveValue* q_jsprimitivevalue_operator_minus_minus(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsprimitivevalue.html#operator--)
///
/// @param self QJSPrimitiveValue*
/// @param param1 int
///
QJSPrimitiveValue* q_jsprimitivevalue_operator_minus_minus2(void* self, int param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsprimitivevalue.html#operator-2b)
///
/// @param self QJSPrimitiveValue*
///
QJSPrimitiveValue* q_jsprimitivevalue_operator_plus(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsprimitivevalue.html#operator-)
///
/// @param self QJSPrimitiveValue*
///
QJSPrimitiveValue* q_jsprimitivevalue_operator_minus(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsprimitivevalue.html#strictlyEquals)
///
/// @param self QJSPrimitiveValue*
/// @param other QJSPrimitiveValue*
///
bool q_jsprimitivevalue_strictly_equals(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsprimitivevalue.html#equals)
///
/// @param self QJSPrimitiveValue*
/// @param other QJSPrimitiveValue*
///
bool q_jsprimitivevalue_equals(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsprimitivevalue.html#dtor.QJSPrimitiveValue)
///
/// Delete this object from C++ memory.
///
/// @param self QJSPrimitiveValue*
///
void q_jsprimitivevalue_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsprimitivevalue.html#public-types)

typedef enum {
    QJSPRIMITIVEVALUE_TYPE_UNDEFINED = 0,
    QJSPRIMITIVEVALUE_TYPE_NULL = 1,
    QJSPRIMITIVEVALUE_TYPE_BOOLEAN = 2,
    QJSPRIMITIVEVALUE_TYPE_INTEGER = 3,
    QJSPRIMITIVEVALUE_TYPE_DOUBLE = 4,
    QJSPRIMITIVEVALUE_TYPE_STRING = 5
} QJSPrimitiveValue__Type;

#endif
