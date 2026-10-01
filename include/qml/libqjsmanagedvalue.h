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
QJSManagedValue* q_jsmanagedvalue_new3(const void* value, void* engine);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html)

/// q_jsmanagedvalue_new4 constructs a new QJSManagedValue object.
///
/// @param variant QVariant*
/// @param engine QJSEngine*
///
QJSManagedValue* q_jsmanagedvalue_new4(const void* variant, void* engine);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html)

/// q_jsmanagedvalue_new5 constructs a new QJSManagedValue object.
///
/// @param string const char*
/// @param engine QJSEngine*
///
QJSManagedValue* q_jsmanagedvalue_new5(const char* string, void* engine);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#equals)
///
/// @param self const QJSManagedValue*
/// @param other QJSManagedValue*
///
bool q_jsmanagedvalue_equals(const void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#strictlyEquals)
///
/// @param self const QJSManagedValue*
/// @param other QJSManagedValue*
///
bool q_jsmanagedvalue_strictly_equals(const void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#engine)
///
/// @param self const QJSManagedValue*
///
QJSEngine* q_jsmanagedvalue_engine(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#prototype)
///
/// @param self const QJSManagedValue*
///
QJSManagedValue* q_jsmanagedvalue_prototype(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#setPrototype)
///
/// @param self QJSManagedValue*
/// @param prototype QJSManagedValue*
///
void q_jsmanagedvalue_set_prototype(void* self, const void* prototype);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#type)
///
/// @param self const QJSManagedValue*
///
/// @return enum QJSManagedValue__Type
///
int32_t q_jsmanagedvalue_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#isUndefined)
///
/// @param self const QJSManagedValue*
///
bool q_jsmanagedvalue_is_undefined(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#isBoolean)
///
/// @param self const QJSManagedValue*
///
bool q_jsmanagedvalue_is_boolean(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#isNumber)
///
/// @param self const QJSManagedValue*
///
bool q_jsmanagedvalue_is_number(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#isString)
///
/// @param self const QJSManagedValue*
///
bool q_jsmanagedvalue_is_string(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#isObject)
///
/// @param self const QJSManagedValue*
///
bool q_jsmanagedvalue_is_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#isSymbol)
///
/// @param self const QJSManagedValue*
///
bool q_jsmanagedvalue_is_symbol(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#isFunction)
///
/// @param self const QJSManagedValue*
///
bool q_jsmanagedvalue_is_function(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#isInteger)
///
/// @param self const QJSManagedValue*
///
bool q_jsmanagedvalue_is_integer(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#isNull)
///
/// @param self const QJSManagedValue*
///
bool q_jsmanagedvalue_is_null(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#isRegularExpression)
///
/// @param self const QJSManagedValue*
///
bool q_jsmanagedvalue_is_regular_expression(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#isArray)
///
/// @param self const QJSManagedValue*
///
bool q_jsmanagedvalue_is_array(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#isUrl)
///
/// @param self const QJSManagedValue*
///
bool q_jsmanagedvalue_is_url(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#isVariant)
///
/// @param self const QJSManagedValue*
///
bool q_jsmanagedvalue_is_variant(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#isQObject)
///
/// @param self const QJSManagedValue*
///
bool q_jsmanagedvalue_is_q_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#isQMetaObject)
///
/// @param self const QJSManagedValue*
///
bool q_jsmanagedvalue_is_q_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#isDate)
///
/// @param self const QJSManagedValue*
///
bool q_jsmanagedvalue_is_date(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#isError)
///
/// @param self const QJSManagedValue*
///
bool q_jsmanagedvalue_is_error(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#isJsMetaType)
///
/// @param self const QJSManagedValue*
///
bool q_jsmanagedvalue_is_js_meta_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#toString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QJSManagedValue*
///
const char* q_jsmanagedvalue_to_string(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#toNumber)
///
/// @param self const QJSManagedValue*
///
double q_jsmanagedvalue_to_number(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#toBoolean)
///
/// @param self const QJSManagedValue*
///
bool q_jsmanagedvalue_to_boolean(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#toPrimitive)
///
/// @param self const QJSManagedValue*
///
QJSPrimitiveValue* q_jsmanagedvalue_to_primitive(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#toJSValue)
///
/// @param self const QJSManagedValue*
///
QJSValue* q_jsmanagedvalue_to_j_s_value(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#toVariant)
///
/// @param self const QJSManagedValue*
///
QVariant* q_jsmanagedvalue_to_variant(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#toInteger)
///
/// @param self const QJSManagedValue*
///
int32_t q_jsmanagedvalue_to_integer(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#toRegularExpression)
///
/// @param self const QJSManagedValue*
///
QRegularExpression* q_jsmanagedvalue_to_regular_expression(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#toUrl)
///
/// @param self const QJSManagedValue*
///
QUrl* q_jsmanagedvalue_to_url(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#toQObject)
///
/// @param self const QJSManagedValue*
///
QObject* q_jsmanagedvalue_to_q_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#toQMetaObject)
///
/// @param self const QJSManagedValue*
///
const QMetaObject* q_jsmanagedvalue_to_q_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#toDateTime)
///
/// @param self const QJSManagedValue*
///
QDateTime* q_jsmanagedvalue_to_date_time(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#hasProperty)
///
/// @param self const QJSManagedValue*
/// @param name const char*
///
bool q_jsmanagedvalue_has_property(const void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#hasOwnProperty)
///
/// @param self const QJSManagedValue*
/// @param name const char*
///
bool q_jsmanagedvalue_has_own_property(const void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#property)
///
/// @param self const QJSManagedValue*
/// @param name const char*
///
QJSValue* q_jsmanagedvalue_property(const void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#setProperty)
///
/// @param self QJSManagedValue*
/// @param name const char*
/// @param value QJSValue*
///
void q_jsmanagedvalue_set_property(void* self, const char* name, const void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#deleteProperty)
///
/// @param self QJSManagedValue*
/// @param name const char*
///
bool q_jsmanagedvalue_delete_property(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#hasProperty)
///
/// @param self const QJSManagedValue*
/// @param arrayIndex uint32_t
///
bool q_jsmanagedvalue_has_property2(const void* self, uint32_t arrayIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#hasOwnProperty)
///
/// @param self const QJSManagedValue*
/// @param arrayIndex uint32_t
///
bool q_jsmanagedvalue_has_own_property2(const void* self, uint32_t arrayIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#property)
///
/// @param self const QJSManagedValue*
/// @param arrayIndex uint32_t
///
QJSValue* q_jsmanagedvalue_property2(const void* self, uint32_t arrayIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#setProperty)
///
/// @param self QJSManagedValue*
/// @param arrayIndex uint32_t
/// @param value QJSValue*
///
void q_jsmanagedvalue_set_property2(void* self, uint32_t arrayIndex, const void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#deleteProperty)
///
/// @param self QJSManagedValue*
/// @param arrayIndex uint32_t
///
bool q_jsmanagedvalue_delete_property2(void* self, uint32_t arrayIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#call)
///
/// @param self const QJSManagedValue*
///
QJSValue* q_jsmanagedvalue_call(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#callWithInstance)
///
/// @param self const QJSManagedValue*
/// @param instance QJSValue*
///
QJSValue* q_jsmanagedvalue_call_with_instance(const void* self, const void* instance);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#callAsConstructor)
///
/// @param self const QJSManagedValue*
///
QJSValue* q_jsmanagedvalue_call_as_constructor(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#jsMetaType)
///
/// @param self const QJSManagedValue*
///
QJSManagedValue* q_jsmanagedvalue_js_meta_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#jsMetaMembers)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QJSManagedValue*
///
const char** q_jsmanagedvalue_js_meta_members(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#jsMetaInstantiate)
///
/// @param self const QJSManagedValue*
///
QJSManagedValue* q_jsmanagedvalue_js_meta_instantiate(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#call)
///
/// @param self const QJSManagedValue*
/// @param arguments libqt_list of QJSValue*
///
QJSValue* q_jsmanagedvalue_call1(const void* self, libqt_list arguments);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#callWithInstance)
///
/// @param self const QJSManagedValue*
/// @param instance QJSValue*
/// @param arguments libqt_list of QJSValue*
///
QJSValue* q_jsmanagedvalue_call_with_instance2(const void* self, const void* instance, libqt_list arguments);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#callAsConstructor)
///
/// @param self const QJSManagedValue*
/// @param arguments libqt_list of QJSValue*
///
QJSValue* q_jsmanagedvalue_call_as_constructor1(const void* self, libqt_list arguments);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#jsMetaInstantiate)
///
/// @param self const QJSManagedValue*
/// @param values libqt_list of QJSValue*
///
QJSManagedValue* q_jsmanagedvalue_js_meta_instantiate1(const void* self, libqt_list values);

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
