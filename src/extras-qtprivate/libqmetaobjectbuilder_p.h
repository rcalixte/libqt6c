#pragma once
#ifndef EXTRAS_QTPRIVATE_LIBQMETAOBJECTBUILDER_P_H
#define EXTRAS_QTPRIVATE_LIBQMETAOBJECTBUILDER_P_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html)

/// q_metaobjectbuilder_new constructs a new QMetaObjectBuilder object.
///
QMetaObjectBuilder* q_metaobjectbuilder_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html)

/// q_metaobjectbuilder_new2 constructs a new QMetaObjectBuilder object.
///
/// @param prototype QMetaObject*
///
QMetaObjectBuilder* q_metaobjectbuilder_new2(const void* prototype);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html)

/// q_metaobjectbuilder_new3 constructs a new QMetaObjectBuilder object.
///
/// @param prototype QMetaObject*
/// @param members flag of enum QMetaObjectBuilder__AddMember
///
QMetaObjectBuilder* q_metaobjectbuilder_new3(const void* prototype, int32_t members);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#className)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QMetaObjectBuilder*
///
const char* q_metaobjectbuilder_class_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#setClassName)
///
/// @param self QMetaObjectBuilder*
/// @param name const char*
///
void q_metaobjectbuilder_set_class_name(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#superClass)
///
/// @param self const QMetaObjectBuilder*
///
const QMetaObject* q_metaobjectbuilder_super_class(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#setSuperClass)
///
/// @param self QMetaObjectBuilder*
/// @param meta QMetaObject*
///
void q_metaobjectbuilder_set_super_class(void* self, const void* meta);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#setFlags)
///
/// @param self QMetaObjectBuilder*
/// @param flags MetaObjectFlag
///
void q_metaobjectbuilder_set_flags(void* self, int32_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#methodCount)
///
/// @param self const QMetaObjectBuilder*
///
int32_t q_metaobjectbuilder_method_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#constructorCount)
///
/// @param self const QMetaObjectBuilder*
///
int32_t q_metaobjectbuilder_constructor_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#propertyCount)
///
/// @param self const QMetaObjectBuilder*
///
int32_t q_metaobjectbuilder_property_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#enumeratorCount)
///
/// @param self const QMetaObjectBuilder*
///
int32_t q_metaobjectbuilder_enumerator_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#classInfoCount)
///
/// @param self const QMetaObjectBuilder*
///
int32_t q_metaobjectbuilder_class_info_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#relatedMetaObjectCount)
///
/// @param self const QMetaObjectBuilder*
///
int32_t q_metaobjectbuilder_related_meta_object_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#addMethod)
///
/// @param self QMetaObjectBuilder*
/// @param signature const char*
///
QMetaMethodBuilder* q_metaobjectbuilder_add_method(void* self, const char* signature);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#addMethod)
///
/// @param self QMetaObjectBuilder*
/// @param signature const char*
/// @param returnType const char*
///
QMetaMethodBuilder* q_metaobjectbuilder_add_method2(void* self, const char* signature, const char* returnType);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#addMethod)
///
/// @param self QMetaObjectBuilder*
/// @param prototype QMetaMethod*
///
QMetaMethodBuilder* q_metaobjectbuilder_add_method3(void* self, const void* prototype);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#addSlot)
///
/// @param self QMetaObjectBuilder*
/// @param signature const char*
///
QMetaMethodBuilder* q_metaobjectbuilder_add_slot(void* self, const char* signature);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#addSignal)
///
/// @param self QMetaObjectBuilder*
/// @param signature const char*
///
QMetaMethodBuilder* q_metaobjectbuilder_add_signal(void* self, const char* signature);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#addConstructor)
///
/// @param self QMetaObjectBuilder*
/// @param signature const char*
///
QMetaMethodBuilder* q_metaobjectbuilder_add_constructor(void* self, const char* signature);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#addConstructor)
///
/// @param self QMetaObjectBuilder*
/// @param prototype QMetaMethod*
///
QMetaMethodBuilder* q_metaobjectbuilder_add_constructor2(void* self, const void* prototype);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#addProperty)
///
/// @param self QMetaObjectBuilder*
/// @param name const char*
/// @param type const char*
///
QMetaPropertyBuilder* q_metaobjectbuilder_add_property(void* self, const char* name, const char* type);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#addProperty)
///
/// @param self QMetaObjectBuilder*
/// @param name const char*
/// @param type const char*
/// @param metaType QMetaType*
///
QMetaPropertyBuilder* q_metaobjectbuilder_add_property2(void* self, const char* name, const char* type, void* metaType);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#addProperty)
///
/// @param self QMetaObjectBuilder*
/// @param prototype QMetaProperty*
///
QMetaPropertyBuilder* q_metaobjectbuilder_add_property3(void* self, const void* prototype);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#addEnumerator)
///
/// @param self QMetaObjectBuilder*
/// @param name const char*
///
QMetaEnumBuilder* q_metaobjectbuilder_add_enumerator(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#addEnumerator)
///
/// @param self QMetaObjectBuilder*
/// @param prototype QMetaEnum*
///
QMetaEnumBuilder* q_metaobjectbuilder_add_enumerator2(void* self, const void* prototype);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#addClassInfo)
///
/// @param self QMetaObjectBuilder*
/// @param name const char*
/// @param value const char*
///
int32_t q_metaobjectbuilder_add_class_info(void* self, const char* name, const char* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#addRelatedMetaObject)
///
/// @param self QMetaObjectBuilder*
/// @param meta QMetaObject*
///
int32_t q_metaobjectbuilder_add_related_meta_object(void* self, const void* meta);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#addMetaObject)
///
/// @param self QMetaObjectBuilder*
/// @param prototype QMetaObject*
///
void q_metaobjectbuilder_add_meta_object(void* self, const void* prototype);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#method)
///
/// @param self const QMetaObjectBuilder*
/// @param index int
///
QMetaMethodBuilder* q_metaobjectbuilder_method(const void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#constructor)
///
/// @param self const QMetaObjectBuilder*
/// @param index int
///
QMetaMethodBuilder* q_metaobjectbuilder_constructor(const void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#property)
///
/// @param self const QMetaObjectBuilder*
/// @param index int
///
QMetaPropertyBuilder* q_metaobjectbuilder_property(const void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#enumerator)
///
/// @param self const QMetaObjectBuilder*
/// @param index int
///
QMetaEnumBuilder* q_metaobjectbuilder_enumerator(const void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#relatedMetaObject)
///
/// @param self const QMetaObjectBuilder*
/// @param index int
///
const QMetaObject* q_metaobjectbuilder_related_meta_object(const void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#classInfoName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QMetaObjectBuilder*
/// @param index int
///
const char* q_metaobjectbuilder_class_info_name(const void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#classInfoValue)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QMetaObjectBuilder*
/// @param index int
///
const char* q_metaobjectbuilder_class_info_value(const void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#removeMethod)
///
/// @param self QMetaObjectBuilder*
/// @param index int
///
void q_metaobjectbuilder_remove_method(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#removeConstructor)
///
/// @param self QMetaObjectBuilder*
/// @param index int
///
void q_metaobjectbuilder_remove_constructor(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#removeProperty)
///
/// @param self QMetaObjectBuilder*
/// @param index int
///
void q_metaobjectbuilder_remove_property(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#removeEnumerator)
///
/// @param self QMetaObjectBuilder*
/// @param index int
///
void q_metaobjectbuilder_remove_enumerator(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#removeClassInfo)
///
/// @param self QMetaObjectBuilder*
/// @param index int
///
void q_metaobjectbuilder_remove_class_info(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#removeRelatedMetaObject)
///
/// @param self QMetaObjectBuilder*
/// @param index int
///
void q_metaobjectbuilder_remove_related_meta_object(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#indexOfMethod)
///
/// @param self QMetaObjectBuilder*
/// @param signature const char*
///
int32_t q_metaobjectbuilder_index_of_method(void* self, const char* signature);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#indexOfSignal)
///
/// @param self QMetaObjectBuilder*
/// @param signature const char*
///
int32_t q_metaobjectbuilder_index_of_signal(void* self, const char* signature);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#indexOfSlot)
///
/// @param self QMetaObjectBuilder*
/// @param signature const char*
///
int32_t q_metaobjectbuilder_index_of_slot(void* self, const char* signature);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#indexOfConstructor)
///
/// @param self QMetaObjectBuilder*
/// @param signature const char*
///
int32_t q_metaobjectbuilder_index_of_constructor(void* self, const char* signature);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#indexOfProperty)
///
/// @param self QMetaObjectBuilder*
/// @param name const char*
///
int32_t q_metaobjectbuilder_index_of_property(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#indexOfEnumerator)
///
/// @param self QMetaObjectBuilder*
/// @param name const char*
///
int32_t q_metaobjectbuilder_index_of_enumerator(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#indexOfClassInfo)
///
/// @param self QMetaObjectBuilder*
/// @param name const char*
///
int32_t q_metaobjectbuilder_index_of_class_info(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#staticMetacallFunction)
///
/// @param self const QMetaObjectBuilder*
///
/// @return void (*QMetaObjectBuilder__StaticMetacallFunction)(void* funcparam1, int32_t funcparam2, int funcparam3, void* funcparam4)
///
QMetaObjectBuilder__StaticMetacallFunction q_metaobjectbuilder_static_metacall_function(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#setStaticMetacallFunction)
///
/// @param self QMetaObjectBuilder*
/// @param value void func(QObject* param1, enum QMetaObject__Call param2, int param3, void* param4)
///
void q_metaobjectbuilder_set_static_metacall_function(void* self, void (*value)(void* funcparam1, int32_t funcparam2, int funcparam3, void* funcparam4));

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#toMetaObject)
///
/// @param self const QMetaObjectBuilder*
///
QMetaObject* q_metaobjectbuilder_to_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#addProperty)
///
/// @param self QMetaObjectBuilder*
/// @param name const char*
/// @param type const char*
/// @param notifierId int
///
QMetaPropertyBuilder* q_metaobjectbuilder_add_property32(void* self, const char* name, const char* type, int notifierId);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#addProperty)
///
/// @param self QMetaObjectBuilder*
/// @param name const char*
/// @param type const char*
/// @param metaType QMetaType*
/// @param notifierId int
///
QMetaPropertyBuilder* q_metaobjectbuilder_add_property4(void* self, const char* name, const char* type, void* metaType, int notifierId);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#addMetaObject)
///
/// @param self QMetaObjectBuilder*
/// @param prototype QMetaObject*
/// @param members flag of enum QMetaObjectBuilder__AddMember
///
void q_metaobjectbuilder_add_meta_object2(void* self, const void* prototype, int32_t members);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder.html#dtor.QMetaObjectBuilder)
///
/// Delete this object from C++ memory.
///
/// @param self QMetaObjectBuilder*
///
void q_metaobjectbuilder_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethodbuilder.html)

/// q_metamethodbuilder_new constructs a new QMetaMethodBuilder object.
///
/// @param other QMetaMethodBuilder*
///
QMetaMethodBuilder* q_metamethodbuilder_new(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethodbuilder.html)

/// q_metamethodbuilder_new2 constructs a new QMetaMethodBuilder object and invalidates the source QMetaMethodBuilder object.
///
/// @param other QMetaMethodBuilder*
///
QMetaMethodBuilder* q_metamethodbuilder_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethodbuilder.html)

/// q_metamethodbuilder_new3 constructs a new QMetaMethodBuilder object.
///
QMetaMethodBuilder* q_metamethodbuilder_new3();

/// q_metamethodbuilder_copy_assign shallow copies `other` into `self`.
///
/// @param self QMetaMethodBuilder*
/// @param other QMetaMethodBuilder*
///
void q_metamethodbuilder_copy_assign(void* self, void* other);

/// q_metamethodbuilder_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QMetaMethodBuilder*
/// @param other QMetaMethodBuilder*
///
void q_metamethodbuilder_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethodbuilder.html#index)
///
/// @param self const QMetaMethodBuilder*
///
int32_t q_metamethodbuilder_index(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethodbuilder.html#methodType)
///
/// @param self const QMetaMethodBuilder*
///
/// @return enum QMetaMethod__MethodType
///
int32_t q_metamethodbuilder_method_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethodbuilder.html#signature)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QMetaMethodBuilder*
///
const char* q_metamethodbuilder_signature(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethodbuilder.html#returnType)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QMetaMethodBuilder*
///
const char* q_metamethodbuilder_return_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethodbuilder.html#setReturnType)
///
/// @param self QMetaMethodBuilder*
/// @param value const char*
///
void q_metamethodbuilder_set_return_type(void* self, const char* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethodbuilder.html#parameterNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QMetaMethodBuilder*
///
const char** q_metamethodbuilder_parameter_names(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethodbuilder.html#setParameterNames)
///
/// @param self QMetaMethodBuilder*
/// @param value const char**
///
void q_metamethodbuilder_set_parameter_names(void* self, const char* value[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethodbuilder.html#tag)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QMetaMethodBuilder*
///
const char* q_metamethodbuilder_tag(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethodbuilder.html#setTag)
///
/// @param self QMetaMethodBuilder*
/// @param value const char*
///
void q_metamethodbuilder_set_tag(void* self, const char* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethodbuilder.html#access)
///
/// @param self const QMetaMethodBuilder*
///
/// @return enum QMetaMethod__Access
///
int32_t q_metamethodbuilder_access(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethodbuilder.html#setAccess)
///
/// @param self QMetaMethodBuilder*
/// @param value enum QMetaMethod__Access
///
void q_metamethodbuilder_set_access(void* self, int32_t value);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethodbuilder.html#attributes)
///
/// @param self const QMetaMethodBuilder*
///
int32_t q_metamethodbuilder_attributes(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethodbuilder.html#setAttributes)
///
/// @param self QMetaMethodBuilder*
/// @param value int
///
void q_metamethodbuilder_set_attributes(void* self, int value);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethodbuilder.html#setConst)
///
/// @param self QMetaMethodBuilder*
///
void q_metamethodbuilder_set_const(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethodbuilder.html#revision)
///
/// @param self const QMetaMethodBuilder*
///
int32_t q_metamethodbuilder_revision(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethodbuilder.html#setRevision)
///
/// @param self QMetaMethodBuilder*
/// @param revision int
///
void q_metamethodbuilder_set_revision(void* self, int revision);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethodbuilder.html#setConst)
///
/// @param self QMetaMethodBuilder*
/// @param methodIsConst bool
///
void q_metamethodbuilder_set_const1(void* self, bool methodIsConst);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethodbuilder.html#dtor.QMetaMethodBuilder)
///
/// Delete this object from C++ memory.
///
/// @param self QMetaMethodBuilder*
///
void q_metamethodbuilder_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html)

/// q_metapropertybuilder_new constructs a new QMetaPropertyBuilder object.
///
/// @param other QMetaPropertyBuilder*
///
QMetaPropertyBuilder* q_metapropertybuilder_new(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html)

/// q_metapropertybuilder_new2 constructs a new QMetaPropertyBuilder object and invalidates the source QMetaPropertyBuilder object.
///
/// @param other QMetaPropertyBuilder*
///
QMetaPropertyBuilder* q_metapropertybuilder_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html)

/// q_metapropertybuilder_new3 constructs a new QMetaPropertyBuilder object.
///
QMetaPropertyBuilder* q_metapropertybuilder_new3();

/// q_metapropertybuilder_copy_assign shallow copies `other` into `self`.
///
/// @param self QMetaPropertyBuilder*
/// @param other QMetaPropertyBuilder*
///
void q_metapropertybuilder_copy_assign(void* self, void* other);

/// q_metapropertybuilder_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QMetaPropertyBuilder*
/// @param other QMetaPropertyBuilder*
///
void q_metapropertybuilder_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#index)
///
/// @param self const QMetaPropertyBuilder*
///
int32_t q_metapropertybuilder_index(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QMetaPropertyBuilder*
///
const char* q_metapropertybuilder_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#type)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QMetaPropertyBuilder*
///
const char* q_metapropertybuilder_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#hasNotifySignal)
///
/// @param self const QMetaPropertyBuilder*
///
bool q_metapropertybuilder_has_notify_signal(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#notifySignal)
///
/// @param self const QMetaPropertyBuilder*
///
QMetaMethodBuilder* q_metapropertybuilder_notify_signal(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#setNotifySignal)
///
/// @param self QMetaPropertyBuilder*
/// @param value QMetaMethodBuilder*
///
void q_metapropertybuilder_set_notify_signal(void* self, const void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#removeNotifySignal)
///
/// @param self QMetaPropertyBuilder*
///
void q_metapropertybuilder_remove_notify_signal(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#isReadable)
///
/// @param self const QMetaPropertyBuilder*
///
bool q_metapropertybuilder_is_readable(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#isWritable)
///
/// @param self const QMetaPropertyBuilder*
///
bool q_metapropertybuilder_is_writable(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#isResettable)
///
/// @param self const QMetaPropertyBuilder*
///
bool q_metapropertybuilder_is_resettable(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#isDesignable)
///
/// @param self const QMetaPropertyBuilder*
///
bool q_metapropertybuilder_is_designable(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#isScriptable)
///
/// @param self const QMetaPropertyBuilder*
///
bool q_metapropertybuilder_is_scriptable(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#isStored)
///
/// @param self const QMetaPropertyBuilder*
///
bool q_metapropertybuilder_is_stored(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#isUser)
///
/// @param self const QMetaPropertyBuilder*
///
bool q_metapropertybuilder_is_user(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#hasStdCppSet)
///
/// @param self const QMetaPropertyBuilder*
///
bool q_metapropertybuilder_has_std_cpp_set(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#isEnumOrFlag)
///
/// @param self const QMetaPropertyBuilder*
///
bool q_metapropertybuilder_is_enum_or_flag(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#isConstant)
///
/// @param self const QMetaPropertyBuilder*
///
bool q_metapropertybuilder_is_constant(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#isFinal)
///
/// @param self const QMetaPropertyBuilder*
///
bool q_metapropertybuilder_is_final(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#isAlias)
///
/// @param self const QMetaPropertyBuilder*
///
bool q_metapropertybuilder_is_alias(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#isBindable)
///
/// @param self const QMetaPropertyBuilder*
///
bool q_metapropertybuilder_is_bindable(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#setReadable)
///
/// @param self QMetaPropertyBuilder*
/// @param value bool
///
void q_metapropertybuilder_set_readable(void* self, bool value);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#setWritable)
///
/// @param self QMetaPropertyBuilder*
/// @param value bool
///
void q_metapropertybuilder_set_writable(void* self, bool value);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#setResettable)
///
/// @param self QMetaPropertyBuilder*
/// @param value bool
///
void q_metapropertybuilder_set_resettable(void* self, bool value);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#setDesignable)
///
/// @param self QMetaPropertyBuilder*
/// @param value bool
///
void q_metapropertybuilder_set_designable(void* self, bool value);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#setScriptable)
///
/// @param self QMetaPropertyBuilder*
/// @param value bool
///
void q_metapropertybuilder_set_scriptable(void* self, bool value);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#setStored)
///
/// @param self QMetaPropertyBuilder*
/// @param value bool
///
void q_metapropertybuilder_set_stored(void* self, bool value);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#setUser)
///
/// @param self QMetaPropertyBuilder*
/// @param value bool
///
void q_metapropertybuilder_set_user(void* self, bool value);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#setStdCppSet)
///
/// @param self QMetaPropertyBuilder*
/// @param value bool
///
void q_metapropertybuilder_set_std_cpp_set(void* self, bool value);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#setEnumOrFlag)
///
/// @param self QMetaPropertyBuilder*
/// @param value bool
///
void q_metapropertybuilder_set_enum_or_flag(void* self, bool value);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#setConstant)
///
/// @param self QMetaPropertyBuilder*
/// @param value bool
///
void q_metapropertybuilder_set_constant(void* self, bool value);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#setFinal)
///
/// @param self QMetaPropertyBuilder*
/// @param value bool
///
void q_metapropertybuilder_set_final(void* self, bool value);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#setAlias)
///
/// @param self QMetaPropertyBuilder*
/// @param value bool
///
void q_metapropertybuilder_set_alias(void* self, bool value);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#setBindable)
///
/// @param self QMetaPropertyBuilder*
/// @param value bool
///
void q_metapropertybuilder_set_bindable(void* self, bool value);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#revision)
///
/// @param self const QMetaPropertyBuilder*
///
int32_t q_metapropertybuilder_revision(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#setRevision)
///
/// @param self QMetaPropertyBuilder*
/// @param revision int
///
void q_metapropertybuilder_set_revision(void* self, int revision);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetapropertybuilder.html#dtor.QMetaPropertyBuilder)
///
/// Delete this object from C++ memory.
///
/// @param self QMetaPropertyBuilder*
///
void q_metapropertybuilder_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaenumbuilder.html)

/// q_metaenumbuilder_new constructs a new QMetaEnumBuilder object.
///
/// @param other QMetaEnumBuilder*
///
QMetaEnumBuilder* q_metaenumbuilder_new(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaenumbuilder.html)

/// q_metaenumbuilder_new2 constructs a new QMetaEnumBuilder object and invalidates the source QMetaEnumBuilder object.
///
/// @param other QMetaEnumBuilder*
///
QMetaEnumBuilder* q_metaenumbuilder_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaenumbuilder.html)

/// q_metaenumbuilder_new3 constructs a new QMetaEnumBuilder object.
///
QMetaEnumBuilder* q_metaenumbuilder_new3();

/// q_metaenumbuilder_copy_assign shallow copies `other` into `self`.
///
/// @param self QMetaEnumBuilder*
/// @param other QMetaEnumBuilder*
///
void q_metaenumbuilder_copy_assign(void* self, void* other);

/// q_metaenumbuilder_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QMetaEnumBuilder*
/// @param other QMetaEnumBuilder*
///
void q_metaenumbuilder_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaenumbuilder.html#index)
///
/// @param self const QMetaEnumBuilder*
///
int32_t q_metaenumbuilder_index(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaenumbuilder.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QMetaEnumBuilder*
///
const char* q_metaenumbuilder_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaenumbuilder.html#enumName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QMetaEnumBuilder*
///
const char* q_metaenumbuilder_enum_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaenumbuilder.html#setEnumName)
///
/// @param self QMetaEnumBuilder*
/// @param alias const char*
///
void q_metaenumbuilder_set_enum_name(void* self, const char* alias);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaenumbuilder.html#metaType)
///
/// @param self const QMetaEnumBuilder*
///
QMetaType* q_metaenumbuilder_meta_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaenumbuilder.html#setMetaType)
///
/// @param self QMetaEnumBuilder*
/// @param metaType QMetaType*
///
void q_metaenumbuilder_set_meta_type(void* self, void* metaType);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaenumbuilder.html#isFlag)
///
/// @param self const QMetaEnumBuilder*
///
bool q_metaenumbuilder_is_flag(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaenumbuilder.html#setIsFlag)
///
/// @param self QMetaEnumBuilder*
/// @param value bool
///
void q_metaenumbuilder_set_is_flag(void* self, bool value);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaenumbuilder.html#isScoped)
///
/// @param self const QMetaEnumBuilder*
///
bool q_metaenumbuilder_is_scoped(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaenumbuilder.html#setIsScoped)
///
/// @param self QMetaEnumBuilder*
/// @param value bool
///
void q_metaenumbuilder_set_is_scoped(void* self, bool value);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaenumbuilder.html#keyCount)
///
/// @param self const QMetaEnumBuilder*
///
int32_t q_metaenumbuilder_key_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaenumbuilder.html#key)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QMetaEnumBuilder*
/// @param index int
///
const char* q_metaenumbuilder_key(const void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaenumbuilder.html#value)
///
/// @param self const QMetaEnumBuilder*
/// @param index int
///
int32_t q_metaenumbuilder_value(const void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaenumbuilder.html#addKey)
///
/// @param self QMetaEnumBuilder*
/// @param name const char*
/// @param value int
///
int32_t q_metaenumbuilder_add_key(void* self, const char* name, int value);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaenumbuilder.html#removeKey)
///
/// @param self QMetaEnumBuilder*
/// @param index int
///
void q_metaenumbuilder_remove_key(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaenumbuilder.html#dtor.QMetaEnumBuilder)
///
/// Delete this object from C++ memory.
///
/// @param self QMetaEnumBuilder*
///
void q_metaenumbuilder_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetastringtable.html)

/// q_metastringtable_new constructs a new QMetaStringTable object.
///
/// @param className const char*
///
QMetaStringTable* q_metastringtable_new(const char* className);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetastringtable.html#enter)
///
/// @param self QMetaStringTable*
/// @param value const char*
///
int32_t q_metastringtable_enter(void* self, const char* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetastringtable.html#preferredAlignment)
///
int32_t q_metastringtable_preferred_alignment();

/// [Upstream resources](https://doc.qt.io/qt-6/qmetastringtable.html#blobSize)
///
/// @param self const QMetaStringTable*
///
int32_t q_metastringtable_blob_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetastringtable.html#writeBlob)
///
/// @param self const QMetaStringTable*
/// @param out char*
///
void q_metastringtable_write_blob(const void* self, char* out);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetastringtable.html#dtor.QMetaStringTable)
///
/// Delete this object from C++ memory.
///
/// @param self QMetaStringTable*
///
void q_metastringtable_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaobjectbuilder-p.html#public-types)

typedef enum {
    QMETAOBJECTBUILDER_ADDMEMBER_CLASSNAME = 1,
    QMETAOBJECTBUILDER_ADDMEMBER_SUPERCLASS = 2,
    QMETAOBJECTBUILDER_ADDMEMBER_METHODS = 4,
    QMETAOBJECTBUILDER_ADDMEMBER_SIGNALS = 8,
    QMETAOBJECTBUILDER_ADDMEMBER_SLOTS = 16,
    QMETAOBJECTBUILDER_ADDMEMBER_CONSTRUCTORS = 32,
    QMETAOBJECTBUILDER_ADDMEMBER_PROPERTIES = 64,
    QMETAOBJECTBUILDER_ADDMEMBER_ENUMERATORS = 128,
    QMETAOBJECTBUILDER_ADDMEMBER_CLASSINFOS = 256,
    QMETAOBJECTBUILDER_ADDMEMBER_RELATEDMETAOBJECTS = 512,
    QMETAOBJECTBUILDER_ADDMEMBER_STATICMETACALL = 1024,
    QMETAOBJECTBUILDER_ADDMEMBER_PUBLICMETHODS = 2048,
    QMETAOBJECTBUILDER_ADDMEMBER_PROTECTEDMETHODS = 4096,
    QMETAOBJECTBUILDER_ADDMEMBER_PRIVATEMETHODS = 8192,
    QMETAOBJECTBUILDER_ADDMEMBER_ALLMEMBERS = 2147483647,
    QMETAOBJECTBUILDER_ADDMEMBER_ALLPRIMARYMEMBERS = 2147482620
} QMetaObjectBuilder__AddMember;

#endif
