#pragma once
#ifndef QML_LIBQQMLPROPERTY_H
#define QML_LIBQQMLPROPERTY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html)

/// q_qmlproperty_new constructs a new QQmlProperty object.
///
QQmlProperty* q_qmlproperty_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html)

/// q_qmlproperty_new2 constructs a new QQmlProperty object.
///
/// @param param1 QObject*
///
QQmlProperty* q_qmlproperty_new2(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html)

/// q_qmlproperty_new3 constructs a new QQmlProperty object.
///
/// @param param1 QObject*
/// @param param2 QQmlContext*
///
QQmlProperty* q_qmlproperty_new3(void* param1, void* param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html)

/// q_qmlproperty_new4 constructs a new QQmlProperty object.
///
/// @param param1 QObject*
/// @param param2 QQmlEngine*
///
QQmlProperty* q_qmlproperty_new4(void* param1, void* param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html)

/// q_qmlproperty_new5 constructs a new QQmlProperty object.
///
/// @param param1 QObject*
/// @param param2 const char*
///
QQmlProperty* q_qmlproperty_new5(void* param1, const char* param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html)

/// q_qmlproperty_new6 constructs a new QQmlProperty object.
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QQmlContext*
///
QQmlProperty* q_qmlproperty_new6(void* param1, const char* param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html)

/// q_qmlproperty_new7 constructs a new QQmlProperty object.
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QQmlEngine*
///
QQmlProperty* q_qmlproperty_new7(void* param1, const char* param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html)

/// q_qmlproperty_new8 constructs a new QQmlProperty object.
///
/// @param param1 QQmlProperty*
///
QQmlProperty* q_qmlproperty_new8(const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#operator-eq)
///
/// @param self QQmlProperty*
/// @param param1 QQmlProperty*
///
void q_qmlproperty_operator_assign(void* self, const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#swap)
///
/// @param self QQmlProperty*
/// @param other QQmlProperty*
///
void q_qmlproperty_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#operator-eq-eq)
///
/// @param self const QQmlProperty*
/// @param param1 QQmlProperty*
///
bool q_qmlproperty_operator_equal(const void* self, const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#type)
///
/// @param self const QQmlProperty*
///
/// @return enum QQmlProperty__Type
///
int32_t q_qmlproperty_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#isValid)
///
/// @param self const QQmlProperty*
///
bool q_qmlproperty_is_valid(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#isProperty)
///
/// @param self const QQmlProperty*
///
bool q_qmlproperty_is_property(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#isSignalProperty)
///
/// @param self const QQmlProperty*
///
bool q_qmlproperty_is_signal_property(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#propertyType)
///
/// @param self const QQmlProperty*
///
int32_t q_qmlproperty_property_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#propertyMetaType)
///
/// @param self const QQmlProperty*
///
QMetaType* q_qmlproperty_property_meta_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#propertyTypeCategory)
///
/// @param self const QQmlProperty*
///
/// @return enum QQmlProperty__PropertyTypeCategory
///
int32_t q_qmlproperty_property_type_category(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#propertyTypeName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QQmlProperty*
///
const char* q_qmlproperty_property_type_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QQmlProperty*
///
const char* q_qmlproperty_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#read)
///
/// @param self const QQmlProperty*
///
QVariant* q_qmlproperty_read(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#read)
///
/// @param param1 QObject*
/// @param param2 const char*
///
QVariant* q_qmlproperty_read2(const void* param1, const char* param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#read)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QQmlContext*
///
QVariant* q_qmlproperty_read3(const void* param1, const char* param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#read)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QQmlEngine*
///
QVariant* q_qmlproperty_read4(const void* param1, const char* param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#write)
///
/// @param self const QQmlProperty*
/// @param param1 QVariant*
///
bool q_qmlproperty_write(const void* self, const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#write)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QVariant*
///
bool q_qmlproperty_write2(void* param1, const char* param2, const void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#write)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QVariant*
/// @param param4 QQmlContext*
///
bool q_qmlproperty_write3(void* param1, const char* param2, const void* param3, void* param4);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#write)
///
/// @param param1 QObject*
/// @param param2 const char*
/// @param param3 QVariant*
/// @param param4 QQmlEngine*
///
bool q_qmlproperty_write4(void* param1, const char* param2, const void* param3, void* param4);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#reset)
///
/// @param self const QQmlProperty*
///
bool q_qmlproperty_reset(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#hasNotifySignal)
///
/// @param self const QQmlProperty*
///
bool q_qmlproperty_has_notify_signal(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#needsNotifySignal)
///
/// @param self const QQmlProperty*
///
bool q_qmlproperty_needs_notify_signal(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#connectNotifySignal)
///
/// @param self const QQmlProperty*
/// @param dest QObject*
/// @param slot const char*
///
bool q_qmlproperty_connect_notify_signal(const void* self, void* dest, const char* slot);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#connectNotifySignal)
///
/// @param self const QQmlProperty*
/// @param dest QObject*
/// @param method int
///
bool q_qmlproperty_connect_notify_signal2(const void* self, void* dest, int method);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#isWritable)
///
/// @param self const QQmlProperty*
///
bool q_qmlproperty_is_writable(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#isBindable)
///
/// @param self const QQmlProperty*
///
bool q_qmlproperty_is_bindable(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#isDesignable)
///
/// @param self const QQmlProperty*
///
bool q_qmlproperty_is_designable(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#isResettable)
///
/// @param self const QQmlProperty*
///
bool q_qmlproperty_is_resettable(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#object)
///
/// @param self const QQmlProperty*
///
QObject* q_qmlproperty_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#index)
///
/// @param self const QQmlProperty*
///
int32_t q_qmlproperty_index(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#property)
///
/// @param self const QQmlProperty*
///
QMetaProperty* q_qmlproperty_property(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#method)
///
/// @param self const QQmlProperty*
///
QMetaMethod* q_qmlproperty_method(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#dtor.QQmlProperty)
///
/// Delete this object from C++ memory.
///
/// @param self QQmlProperty*
///
void q_qmlproperty_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty-h.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty-h.html#qHash)
///
/// @param key QQmlProperty*
/// @param seed size_t
///
size_t q_qqmlproperty_h_q_hash(const void* key, size_t seed);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#public-types)

typedef enum {
    QQMLPROPERTY_PROPERTYTYPECATEGORY_INVALIDCATEGORY = 0,
    QQMLPROPERTY_PROPERTYTYPECATEGORY_LIST = 1,
    QQMLPROPERTY_PROPERTYTYPECATEGORY_OBJECT = 2,
    QQMLPROPERTY_PROPERTYTYPECATEGORY_NORMAL = 3
} QQmlProperty__PropertyTypeCategory;

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlproperty.html#public-types)

typedef enum {
    QQMLPROPERTY_TYPE_INVALID = 0,
    QQMLPROPERTY_TYPE_PROPERTY = 1,
    QQMLPROPERTY_TYPE_SIGNALPROPERTY = 2
} QQmlProperty__Type;

#endif
