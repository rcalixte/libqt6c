#pragma once
#ifndef QML_LIBQJSMANAGEDVALUE_H
#define QML_LIBQJSMANAGEDVALUE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html)

/// q_jsmanagedvalue_new constructs a new QJSManagedValue object.
///
QJSManagedValue* q_jsmanagedvalue_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html)

/// q_jsmanagedvalue_new2 constructs a new QJSManagedValue object.
///
/// @param value QJSValue*
/// @param engine QJSEngine*
///
QJSManagedValue* q_jsmanagedvalue_new2(void* value, void* engine);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html)

/// q_jsmanagedvalue_new3 constructs a new QJSManagedValue object.
///
/// @param value QJSPrimitiveValue*
/// @param engine QJSEngine*
///
QJSManagedValue* q_jsmanagedvalue_new3(void* value, void* engine);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html)

/// q_jsmanagedvalue_new4 constructs a new QJSManagedValue object.
///
/// @param variant QVariant*
/// @param engine QJSEngine*
///
QJSManagedValue* q_jsmanagedvalue_new4(void* variant, void* engine);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html)

/// q_jsmanagedvalue_new5 constructs a new QJSManagedValue object.
///
/// @param string const char*
/// @param engine QJSEngine*
///
QJSManagedValue* q_jsmanagedvalue_new5(const char* string, void* engine);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#equals)
///
/// @param self QJSManagedValue*
/// @param other QJSManagedValue*
///
bool q_jsmanagedvalue_equals(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#strictlyEquals)
///
/// @param self QJSManagedValue*
/// @param other QJSManagedValue*
///
bool q_jsmanagedvalue_strictly_equals(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#engine)
///
/// @param self QJSManagedValue*
///
QJSEngine* q_jsmanagedvalue_engine(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#prototype)
///
/// @param self QJSManagedValue*
///
QJSManagedValue* q_jsmanagedvalue_prototype(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#setPrototype)
///
/// @param self QJSManagedValue*
/// @param prototype QJSManagedValue*
///
void q_jsmanagedvalue_set_prototype(void* self, void* prototype);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#type)
///
/// @param self QJSManagedValue*
///
/// @return enum QJSManagedValue__Type
///
int32_t q_jsmanagedvalue_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#isUndefined)
///
/// @param self QJSManagedValue*
///
bool q_jsmanagedvalue_is_undefined(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#isBoolean)
///
/// @param self QJSManagedValue*
///
bool q_jsmanagedvalue_is_boolean(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#isNumber)
///
/// @param self QJSManagedValue*
///
bool q_jsmanagedvalue_is_number(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#isString)
///
/// @param self QJSManagedValue*
///
bool q_jsmanagedvalue_is_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#isObject)
///
/// @param self QJSManagedValue*
///
bool q_jsmanagedvalue_is_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#isSymbol)
///
/// @param self QJSManagedValue*
///
bool q_jsmanagedvalue_is_symbol(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#isFunction)
///
/// @param self QJSManagedValue*
///
bool q_jsmanagedvalue_is_function(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#isInteger)
///
/// @param self QJSManagedValue*
///
bool q_jsmanagedvalue_is_integer(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#isNull)
///
/// @param self QJSManagedValue*
///
bool q_jsmanagedvalue_is_null(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#isRegularExpression)
///
/// @param self QJSManagedValue*
///
bool q_jsmanagedvalue_is_regular_expression(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#isArray)
///
/// @param self QJSManagedValue*
///
bool q_jsmanagedvalue_is_array(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#isUrl)
///
/// @param self QJSManagedValue*
///
bool q_jsmanagedvalue_is_url(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#isVariant)
///
/// @param self QJSManagedValue*
///
bool q_jsmanagedvalue_is_variant(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#isQObject)
///
/// @param self QJSManagedValue*
///
bool q_jsmanagedvalue_is_q_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#isQMetaObject)
///
/// @param self QJSManagedValue*
///
bool q_jsmanagedvalue_is_q_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#isDate)
///
/// @param self QJSManagedValue*
///
bool q_jsmanagedvalue_is_date(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#isError)
///
/// @param self QJSManagedValue*
///
bool q_jsmanagedvalue_is_error(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#isJsMetaType)
///
/// @param self QJSManagedValue*
///
bool q_jsmanagedvalue_is_js_meta_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#toString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QJSManagedValue*
///
const char* q_jsmanagedvalue_to_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#toNumber)
///
/// @param self QJSManagedValue*
///
double q_jsmanagedvalue_to_number(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#toBoolean)
///
/// @param self QJSManagedValue*
///
bool q_jsmanagedvalue_to_boolean(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#toPrimitive)
///
/// @param self QJSManagedValue*
///
QJSPrimitiveValue* q_jsmanagedvalue_to_primitive(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#toJSValue)
///
/// @param self QJSManagedValue*
///
QJSValue* q_jsmanagedvalue_to_j_s_value(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#toVariant)
///
/// @param self QJSManagedValue*
///
QVariant* q_jsmanagedvalue_to_variant(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#toInteger)
///
/// @param self QJSManagedValue*
///
int32_t q_jsmanagedvalue_to_integer(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#toRegularExpression)
///
/// @param self QJSManagedValue*
///
QRegularExpression* q_jsmanagedvalue_to_regular_expression(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#toUrl)
///
/// @param self QJSManagedValue*
///
QUrl* q_jsmanagedvalue_to_url(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#toQObject)
///
/// @param self QJSManagedValue*
///
QObject* q_jsmanagedvalue_to_q_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#toQMetaObject)
///
/// @param self QJSManagedValue*
///
const QMetaObject* q_jsmanagedvalue_to_q_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#toDateTime)
///
/// @param self QJSManagedValue*
///
QDateTime* q_jsmanagedvalue_to_date_time(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#hasProperty)
///
/// @param self QJSManagedValue*
/// @param name const char*
///
bool q_jsmanagedvalue_has_property(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#hasOwnProperty)
///
/// @param self QJSManagedValue*
/// @param name const char*
///
bool q_jsmanagedvalue_has_own_property(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#property)
///
/// @param self QJSManagedValue*
/// @param name const char*
///
QJSValue* q_jsmanagedvalue_property(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#setProperty)
///
/// @param self QJSManagedValue*
/// @param name const char*
/// @param value QJSValue*
///
void q_jsmanagedvalue_set_property(void* self, const char* name, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#deleteProperty)
///
/// @param self QJSManagedValue*
/// @param name const char*
///
bool q_jsmanagedvalue_delete_property(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#hasProperty)
///
/// @param self QJSManagedValue*
/// @param arrayIndex uint32_t
///
bool q_jsmanagedvalue_has_property2(void* self, uint32_t arrayIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#hasOwnProperty)
///
/// @param self QJSManagedValue*
/// @param arrayIndex uint32_t
///
bool q_jsmanagedvalue_has_own_property2(void* self, uint32_t arrayIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#property)
///
/// @param self QJSManagedValue*
/// @param arrayIndex uint32_t
///
QJSValue* q_jsmanagedvalue_property2(void* self, uint32_t arrayIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#setProperty)
///
/// @param self QJSManagedValue*
/// @param arrayIndex uint32_t
/// @param value QJSValue*
///
void q_jsmanagedvalue_set_property2(void* self, uint32_t arrayIndex, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#deleteProperty)
///
/// @param self QJSManagedValue*
/// @param arrayIndex uint32_t
///
bool q_jsmanagedvalue_delete_property2(void* self, uint32_t arrayIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#call)
///
/// @param self QJSManagedValue*
///
QJSValue* q_jsmanagedvalue_call(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#callWithInstance)
///
/// @param self QJSManagedValue*
/// @param instance QJSValue*
///
QJSValue* q_jsmanagedvalue_call_with_instance(void* self, void* instance);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#callAsConstructor)
///
/// @param self QJSManagedValue*
///
QJSValue* q_jsmanagedvalue_call_as_constructor(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#jsMetaType)
///
/// @param self QJSManagedValue*
///
QJSManagedValue* q_jsmanagedvalue_js_meta_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#jsMetaMembers)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QJSManagedValue*
///
const char** q_jsmanagedvalue_js_meta_members(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#jsMetaInstantiate)
///
/// @param self QJSManagedValue*
///
QJSManagedValue* q_jsmanagedvalue_js_meta_instantiate(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#call)
///
/// @param self QJSManagedValue*
/// @param arguments libqt_list of QJSValue*
///
QJSValue* q_jsmanagedvalue_call1(void* self, libqt_list arguments);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#callWithInstance)
///
/// @param self QJSManagedValue*
/// @param instance QJSValue*
/// @param arguments libqt_list of QJSValue*
///
QJSValue* q_jsmanagedvalue_call_with_instance2(void* self, void* instance, libqt_list arguments);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#callAsConstructor)
///
/// @param self QJSManagedValue*
/// @param arguments libqt_list of QJSValue*
///
QJSValue* q_jsmanagedvalue_call_as_constructor1(void* self, libqt_list arguments);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#jsMetaInstantiate)
///
/// @param self QJSManagedValue*
/// @param values libqt_list of QJSValue*
///
QJSManagedValue* q_jsmanagedvalue_js_meta_instantiate1(void* self, libqt_list values);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#dtor.QJSManagedValue)
///
/// Delete this object from C++ memory.
///
/// @param self QJSManagedValue*
///
void q_jsmanagedvalue_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#public-types)

typedef enum {
    QJSMANAGEDVALUE_TYPE_UNDEFINED = 0,
    QJSMANAGEDVALUE_TYPE_BOOLEAN = 1,
    QJSMANAGEDVALUE_TYPE_NUMBER = 2,
    QJSMANAGEDVALUE_TYPE_STRING = 3,
    QJSMANAGEDVALUE_TYPE_OBJECT = 4,
    QJSMANAGEDVALUE_TYPE_SYMBOL = 5,
    QJSMANAGEDVALUE_TYPE_FUNCTION = 6
} QJSManagedValue__Type;

#endif
