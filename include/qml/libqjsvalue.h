#pragma once
#ifndef QML_LIBQJSVALUE_H
#define QML_LIBQJSVALUE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html)

/// q_jsvalue_new constructs a new QJSValue object.
///
QJSValue* q_jsvalue_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html)

/// q_jsvalue_new2 constructs a new QJSValue object.
///
/// @param other QJSValue*
///
QJSValue* q_jsvalue_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html)

/// q_jsvalue_new3 constructs a new QJSValue object.
///
/// @param value bool
///
QJSValue* q_jsvalue_new3(bool value);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html)

/// q_jsvalue_new4 constructs a new QJSValue object.
///
/// @param value int
///
QJSValue* q_jsvalue_new4(int value);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html)

/// q_jsvalue_new5 constructs a new QJSValue object.
///
/// @param value uint32_t
///
QJSValue* q_jsvalue_new5(uint32_t value);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html)

/// q_jsvalue_new6 constructs a new QJSValue object.
///
/// @param value double
///
QJSValue* q_jsvalue_new6(double value);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html)

/// q_jsvalue_new7 constructs a new QJSValue object.
///
/// @param value const char*
///
QJSValue* q_jsvalue_new7(const char* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html)

/// q_jsvalue_new8 constructs a new QJSValue object.
///
/// @param value char*
///
QJSValue* q_jsvalue_new8(char* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html)

/// q_jsvalue_new9 constructs a new QJSValue object.
///
/// @param str const char*
///
QJSValue* q_jsvalue_new9(const char* str);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html)

/// q_jsvalue_new10 constructs a new QJSValue object.
///
/// @param value enum QJSValue__SpecialValue
///
QJSValue* q_jsvalue_new10(int32_t value);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#operator-eq)
///
/// @param self QJSValue*
/// @param other QJSValue*
///
void q_jsvalue_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#isBool)
///
/// @param self QJSValue*
///
bool q_jsvalue_is_bool(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#isNumber)
///
/// @param self QJSValue*
///
bool q_jsvalue_is_number(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#isNull)
///
/// @param self QJSValue*
///
bool q_jsvalue_is_null(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#isString)
///
/// @param self QJSValue*
///
bool q_jsvalue_is_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#isUndefined)
///
/// @param self QJSValue*
///
bool q_jsvalue_is_undefined(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#isVariant)
///
/// @param self QJSValue*
///
bool q_jsvalue_is_variant(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#isQObject)
///
/// @param self QJSValue*
///
bool q_jsvalue_is_q_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#isQMetaObject)
///
/// @param self QJSValue*
///
bool q_jsvalue_is_q_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#isObject)
///
/// @param self QJSValue*
///
bool q_jsvalue_is_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#isDate)
///
/// @param self QJSValue*
///
bool q_jsvalue_is_date(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#isRegExp)
///
/// @param self QJSValue*
///
bool q_jsvalue_is_reg_exp(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#isArray)
///
/// @param self QJSValue*
///
bool q_jsvalue_is_array(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#isError)
///
/// @param self QJSValue*
///
bool q_jsvalue_is_error(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#isUrl)
///
/// @param self QJSValue*
///
bool q_jsvalue_is_url(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#toString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QJSValue*
///
const char* q_jsvalue_to_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#toNumber)
///
/// @param self QJSValue*
///
double q_jsvalue_to_number(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#toInt)
///
/// @param self QJSValue*
///
int32_t q_jsvalue_to_int(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#toUInt)
///
/// @param self QJSValue*
///
uint32_t q_jsvalue_to_u_int(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#toBool)
///
/// @param self QJSValue*
///
bool q_jsvalue_to_bool(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#toVariant)
///
/// @param self QJSValue*
///
QVariant* q_jsvalue_to_variant(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#toVariant)
///
/// @param self QJSValue*
/// @param behavior enum QJSValue__ObjectConversionBehavior
///
QVariant* q_jsvalue_to_variant2(void* self, int32_t behavior);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#toPrimitive)
///
/// @param self QJSValue*
///
QJSPrimitiveValue* q_jsvalue_to_primitive(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#toQObject)
///
/// @param self QJSValue*
///
QObject* q_jsvalue_to_q_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#toQMetaObject)
///
/// @param self QJSValue*
///
const QMetaObject* q_jsvalue_to_q_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#toDateTime)
///
/// @param self QJSValue*
///
QDateTime* q_jsvalue_to_date_time(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#equals)
///
/// @param self QJSValue*
/// @param other QJSValue*
///
bool q_jsvalue_equals(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#strictlyEquals)
///
/// @param self QJSValue*
/// @param other QJSValue*
///
bool q_jsvalue_strictly_equals(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#prototype)
///
/// @param self QJSValue*
///
QJSValue* q_jsvalue_prototype(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#setPrototype)
///
/// @param self QJSValue*
/// @param prototype QJSValue*
///
void q_jsvalue_set_prototype(void* self, void* prototype);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#property)
///
/// @param self QJSValue*
/// @param name const char*
///
QJSValue* q_jsvalue_property(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#setProperty)
///
/// @param self QJSValue*
/// @param name const char*
/// @param value QJSValue*
///
void q_jsvalue_set_property(void* self, const char* name, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#hasProperty)
///
/// @param self QJSValue*
/// @param name const char*
///
bool q_jsvalue_has_property(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#hasOwnProperty)
///
/// @param self QJSValue*
/// @param name const char*
///
bool q_jsvalue_has_own_property(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#property)
///
/// @param self QJSValue*
/// @param arrayIndex uint32_t
///
QJSValue* q_jsvalue_property2(void* self, uint32_t arrayIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#setProperty)
///
/// @param self QJSValue*
/// @param arrayIndex uint32_t
/// @param value QJSValue*
///
void q_jsvalue_set_property2(void* self, uint32_t arrayIndex, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#deleteProperty)
///
/// @param self QJSValue*
/// @param name const char*
///
bool q_jsvalue_delete_property(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#isCallable)
///
/// @param self QJSValue*
///
bool q_jsvalue_is_callable(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#call)
///
/// @param self QJSValue*
///
QJSValue* q_jsvalue_call(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#callWithInstance)
///
/// @param self QJSValue*
/// @param instance QJSValue*
///
QJSValue* q_jsvalue_call_with_instance(void* self, void* instance);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#callAsConstructor)
///
/// @param self QJSValue*
///
QJSValue* q_jsvalue_call_as_constructor(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#errorType)
///
/// @param self QJSValue*
///
/// @return enum QJSValue__ErrorType
///
int32_t q_jsvalue_error_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#call)
///
/// @param self QJSValue*
/// @param args libqt_list of QJSValue*
///
QJSValue* q_jsvalue_call1(void* self, libqt_list args);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#callWithInstance)
///
/// @param self QJSValue*
/// @param instance QJSValue*
/// @param args libqt_list of QJSValue*
///
QJSValue* q_jsvalue_call_with_instance2(void* self, void* instance, libqt_list args);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#callAsConstructor)
///
/// @param self QJSValue*
/// @param args libqt_list of QJSValue*
///
QJSValue* q_jsvalue_call_as_constructor1(void* self, libqt_list args);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#dtor.QJSValue)
///
/// Delete this object from C++ memory.
///
/// @param self QJSValue*
///
void q_jsvalue_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#public-types)

typedef enum {
    QJSVALUE_SPECIALVALUE_NULLVALUE = 0,
    QJSVALUE_SPECIALVALUE_UNDEFINEDVALUE = 1
} QJSValue__SpecialValue;

/// [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#public-types)

typedef enum {
    QJSVALUE_ERRORTYPE_NOERROR = 0,
    QJSVALUE_ERRORTYPE_GENERICERROR = 1,
    QJSVALUE_ERRORTYPE_EVALERROR = 2,
    QJSVALUE_ERRORTYPE_RANGEERROR = 3,
    QJSVALUE_ERRORTYPE_REFERENCEERROR = 4,
    QJSVALUE_ERRORTYPE_SYNTAXERROR = 5,
    QJSVALUE_ERRORTYPE_TYPEERROR = 6,
    QJSVALUE_ERRORTYPE_URIERROR = 7
} QJSValue__ErrorType;

/// [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#public-types)

typedef enum {
    QJSVALUE_OBJECTCONVERSIONBEHAVIOR_CONVERTJSOBJECTS = 0,
    QJSVALUE_OBJECTCONVERSIONBEHAVIOR_RETAINJSOBJECTS = 1
} QJSValue__ObjectConversionBehavior;

#endif
