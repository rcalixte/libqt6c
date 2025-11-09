#pragma once
#ifndef SRCQT6C_LIBQOBJECTDEFS_H
#define SRCQT6C_LIBQOBJECTDEFS_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qgenericargument.html

/// q_genericargument_new constructs a new QGenericArgument object.
///
/// @param other QGenericArgument*
QGenericArgument* q_genericargument_new(void* other);

/// q_genericargument_new2 constructs a new QGenericArgument object and invalidates the source QGenericArgument object.
///
/// @param other QGenericArgument*
QGenericArgument* q_genericargument_new2(void* other);

/// q_genericargument_new3 constructs a new QGenericArgument object.
///
QGenericArgument* q_genericargument_new3();

/// q_genericargument_new4 constructs a new QGenericArgument object.
///
/// @param param1 QGenericArgument*
QGenericArgument* q_genericargument_new4(void* param1);

/// q_genericargument_new5 constructs a new QGenericArgument object.
///
/// @param aName const char*
QGenericArgument* q_genericargument_new5(const char* aName);

/// q_genericargument_new6 constructs a new QGenericArgument object.
///
/// @param aName const char*
/// @param aData void*
QGenericArgument* q_genericargument_new6(const char* aName, void* aData);

/// q_genericargument_copy_assign shallow copies `other` into `self`.
///
/// @param self QGenericArgument*
/// @param other QGenericArgument*
void q_genericargument_copy_assign(void* self, void* other);

/// q_genericargument_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QGenericArgument*
/// @param other QGenericArgument*
void q_genericargument_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qgenericargument.html#data)
///
/// @param self QGenericArgument*
void* q_genericargument_data(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgenericargument.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QGenericArgument*
const char* q_genericargument_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgenericargument.html#dtor.QGenericArgument)
///
/// Delete this object from C++ memory.
///
/// @param self QGenericArgument*
void q_genericargument_delete(void* self);

/// https://doc.qt.io/qt-6/qgenericreturnargument.html

/// q_genericreturnargument_new constructs a new QGenericReturnArgument object.
///
/// @param other QGenericReturnArgument*
QGenericReturnArgument* q_genericreturnargument_new(void* other);

/// q_genericreturnargument_new2 constructs a new QGenericReturnArgument object and invalidates the source QGenericReturnArgument object.
///
/// @param other QGenericReturnArgument*
QGenericReturnArgument* q_genericreturnargument_new2(void* other);

/// q_genericreturnargument_new3 constructs a new QGenericReturnArgument object.
///
QGenericReturnArgument* q_genericreturnargument_new3();

/// q_genericreturnargument_new4 constructs a new QGenericReturnArgument object.
///
/// @param param1 QGenericReturnArgument*
QGenericReturnArgument* q_genericreturnargument_new4(void* param1);

/// q_genericreturnargument_new5 constructs a new QGenericReturnArgument object.
///
/// @param aName const char*
QGenericReturnArgument* q_genericreturnargument_new5(const char* aName);

/// q_genericreturnargument_new6 constructs a new QGenericReturnArgument object.
///
/// @param aName const char*
/// @param aData void*
QGenericReturnArgument* q_genericreturnargument_new6(const char* aName, void* aData);

/// q_genericreturnargument_copy_assign shallow copies `other` into `self`.
///
/// @param self QGenericReturnArgument*
/// @param other QGenericReturnArgument*
void q_genericreturnargument_copy_assign(void* self, void* other);

/// q_genericreturnargument_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QGenericReturnArgument*
/// @param other QGenericReturnArgument*
void q_genericreturnargument_move_assign(void* self, void* other);

/// Inherited from QGenericArgument
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgenericargument.html#data)
///
/// @param self QGenericReturnArgument*
void* q_genericreturnargument_data(void* self);

/// Inherited from QGenericArgument
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgenericargument.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QGenericReturnArgument*
const char* q_genericreturnargument_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgenericreturnargument.html#dtor.QGenericReturnArgument)
///
/// Delete this object from C++ memory.
///
/// @param self QGenericReturnArgument*
void q_genericreturnargument_delete(void* self);

/// https://doc.qt.io/qt-6/qmetamethodargument.html

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethodargument.html#name-var)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QMetaMethodArgument*
const char* q_metamethodargument_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethodargument.html#name-var)
///
/// @param self QMetaMethodArgument*
/// @param name const char*
void q_metamethodargument_set_name(void* self, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethodargument.html#dtor.QMetaMethodArgument)
///
/// Delete this object from C++ memory.
///
/// @param self QMetaMethodArgument*
void q_metamethodargument_delete(void* self);

/// https://doc.qt.io/qt-6/qmetamethodreturnargument.html

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethodreturnargument.html#name-var)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QMetaMethodReturnArgument*
const char* q_metamethodreturnargument_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethodreturnargument.html#name-var)
///
/// @param self QMetaMethodReturnArgument*
/// @param name const char*
void q_metamethodreturnargument_set_name(void* self, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethodreturnargument.html#dtor.QMetaMethodReturnArgument)
///
/// Delete this object from C++ memory.
///
/// @param self QMetaMethodReturnArgument*
void q_metamethodreturnargument_delete(void* self);

/// https://doc.qt.io/qt-6/qmetaobject.html

/// q_metaobject_new constructs a new QMetaObject object.
///
QMetaObject* q_metaobject_new();

/// q_metaobject_new2 constructs a new QMetaObject object.
///
/// @param param1 QMetaObject*
QMetaObject* q_metaobject_new2(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#className)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QMetaObject*
const char* q_metaobject_class_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#superClass)
///
/// @param self QMetaObject*
const QMetaObject* q_metaobject_super_class(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#inherits)
///
/// @param self QMetaObject*
/// @param metaObject QMetaObject*
bool q_metaobject_inherits(void* self, void* metaObject);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#cast)
///
/// @param self QMetaObject*
/// @param obj QObject*
QObject* q_metaobject_cast(void* self, void* obj);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#cast)
///
/// @param self QMetaObject*
/// @param obj QObject*
const QObject* q_metaobject_cast2(void* self, void* obj);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QMetaObject*
/// @param s const char*
/// @param c const char*
const char* q_metaobject_tr(void* self, const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#metaType)
///
/// @param self QMetaObject*
QMetaType* q_metaobject_meta_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#methodOffset)
///
/// @param self QMetaObject*
int32_t q_metaobject_method_offset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#enumeratorOffset)
///
/// @param self QMetaObject*
int32_t q_metaobject_enumerator_offset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#propertyOffset)
///
/// @param self QMetaObject*
int32_t q_metaobject_property_offset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#classInfoOffset)
///
/// @param self QMetaObject*
int32_t q_metaobject_class_info_offset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#constructorCount)
///
/// @param self QMetaObject*
int32_t q_metaobject_constructor_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#methodCount)
///
/// @param self QMetaObject*
int32_t q_metaobject_method_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#enumeratorCount)
///
/// @param self QMetaObject*
int32_t q_metaobject_enumerator_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#propertyCount)
///
/// @param self QMetaObject*
int32_t q_metaobject_property_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#classInfoCount)
///
/// @param self QMetaObject*
int32_t q_metaobject_class_info_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#indexOfConstructor)
///
/// @param self QMetaObject*
/// @param constructor const char*
int32_t q_metaobject_index_of_constructor(void* self, const char* constructor);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#indexOfMethod)
///
/// @param self QMetaObject*
/// @param method const char*
int32_t q_metaobject_index_of_method(void* self, const char* method);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#indexOfSignal)
///
/// @param self QMetaObject*
/// @param signal const char*
int32_t q_metaobject_index_of_signal(void* self, const char* signal);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#indexOfSlot)
///
/// @param self QMetaObject*
/// @param slot const char*
int32_t q_metaobject_index_of_slot(void* self, const char* slot);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#indexOfEnumerator)
///
/// @param self QMetaObject*
/// @param name const char*
int32_t q_metaobject_index_of_enumerator(void* self, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#indexOfProperty)
///
/// @param self QMetaObject*
/// @param name const char*
int32_t q_metaobject_index_of_property(void* self, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#indexOfClassInfo)
///
/// @param self QMetaObject*
/// @param name const char*
int32_t q_metaobject_index_of_class_info(void* self, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#constructor)
///
/// @param self QMetaObject*
/// @param index int
QMetaMethod* q_metaobject_constructor(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#method)
///
/// @param self QMetaObject*
/// @param index int
QMetaMethod* q_metaobject_method(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#enumerator)
///
/// @param self QMetaObject*
/// @param index int
QMetaEnum* q_metaobject_enumerator(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#property)
///
/// @param self QMetaObject*
/// @param index int
QMetaProperty* q_metaobject_property(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#classInfo)
///
/// @param self QMetaObject*
/// @param index int
QMetaClassInfo* q_metaobject_class_info(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#userProperty)
///
/// @param self QMetaObject*
QMetaProperty* q_metaobject_user_property(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#checkConnectArgs)
///
/// @param signal const char*
/// @param method const char*
bool q_metaobject_check_connect_args(const char* signal, const char* method);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#checkConnectArgs)
///
/// @param signal QMetaMethod*
/// @param method QMetaMethod*
bool q_metaobject_check_connect_args2(void* signal, void* method);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#normalizedSignature)
///
/// Caller is responsible for freeing the returned memory
///
/// @param method const char*
char* q_metaobject_normalized_signature(const char* method);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#normalizedType)
///
/// Caller is responsible for freeing the returned memory
///
/// @param type const char*
char* q_metaobject_normalized_type(const char* type);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#connect)
///
/// @param sender QObject*
/// @param signal_index int
/// @param receiver QObject*
/// @param method_index int
QMetaObject__Connection* q_metaobject_connect(void* sender, int signal_index, void* receiver, int method_index);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal_index int
/// @param receiver QObject*
/// @param method_index int
bool q_metaobject_disconnect(void* sender, int signal_index, void* receiver, int method_index);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#disconnectOne)
///
/// @param sender QObject*
/// @param signal_index int
/// @param receiver QObject*
/// @param method_index int
bool q_metaobject_disconnect_one(void* sender, int signal_index, void* receiver, int method_index);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#connectSlotsByName)
///
/// @param o QObject*
void q_metaobject_connect_slots_by_name(void* o);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#activate)
///
/// @param sender QObject*
/// @param signal_index int
/// @param argv void*
void q_metaobject_activate(void* sender, int signal_index, void* argv);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#activate)
///
/// @param sender QObject*
/// @param param2 QMetaObject*
/// @param local_signal_index int
/// @param argv void*
void q_metaobject_activate2(void* sender, void* param2, int local_signal_index, void* argv);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#activate)
///
/// @param sender QObject*
/// @param signal_offset int
/// @param local_signal_index int
/// @param argv void*
void q_metaobject_activate3(void* sender, int signal_offset, int local_signal_index, void* argv);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// @param obj QObject*
/// @param member const char*
/// @param param3 enum Qt__ConnectionType
/// @param retVal QGenericReturnArgument*
bool q_metaobject_invoke_method(void* obj, const char* member, int32_t param3, void* retVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// @param obj QObject*
/// @param member const char*
/// @param retVal QGenericReturnArgument*
bool q_metaobject_invoke_method2(void* obj, const char* member, void* retVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// @param obj QObject*
/// @param member const char*
/// @param type enum Qt__ConnectionType
/// @param val0 QGenericArgument*
bool q_metaobject_invoke_method3(void* obj, const char* member, int32_t type, void* val0);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// @param obj QObject*
/// @param member const char*
/// @param val0 QGenericArgument*
bool q_metaobject_invoke_method4(void* obj, const char* member, void* val0);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#newInstance)
///
/// @param self QMetaObject*
/// @param val0 QGenericArgument*
QObject* q_metaobject_new_instance(void* self, void* val0);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#static_metacall)
///
/// @param self QMetaObject*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_metaobject_static_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#metacall)
///
/// @param param1 QObject*
/// @param param2 enum QMetaObject__Call
/// @param param3 int
/// @param param4 void*
int32_t q_metaobject_metacall(void* param1, int32_t param2, int param3, void* param4);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#d-var)
///
/// @param self QMetaObject*
QMetaObject__Data* q_metaobject_d(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#d-var)
///
/// @param self QMetaObject*
/// @param d QMetaObject__Data*
void q_metaobject_set_d(void* self, void* d);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QMetaObject*
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_metaobject_tr3(void* self, const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#connect)
///
/// @param sender QObject*
/// @param signal_index int
/// @param receiver QObject*
/// @param method_index int
/// @param type int
QMetaObject__Connection* q_metaobject_connect5(void* sender, int signal_index, void* receiver, int method_index, int type);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#connect)
///
/// @param sender QObject*
/// @param signal_index int
/// @param receiver QObject*
/// @param method_index int
/// @param type int
/// @param types int*
QMetaObject__Connection* q_metaobject_connect6(void* sender, int signal_index, void* receiver, int method_index, int type, int* types);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// @param obj QObject*
/// @param member const char*
/// @param param3 enum Qt__ConnectionType
/// @param retVal QGenericReturnArgument*
/// @param val0 QGenericArgument*
bool q_metaobject_invoke_method5(void* obj, const char* member, int32_t param3, void* retVal, void* val0);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// @param obj QObject*
/// @param member const char*
/// @param param3 enum Qt__ConnectionType
/// @param retVal QGenericReturnArgument*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
bool q_metaobject_invoke_method6(void* obj, const char* member, int32_t param3, void* retVal, void* val0, void* val1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// @param obj QObject*
/// @param member const char*
/// @param param3 enum Qt__ConnectionType
/// @param retVal QGenericReturnArgument*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
bool q_metaobject_invoke_method7(void* obj, const char* member, int32_t param3, void* retVal, void* val0, void* val1, void* val2);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// @param obj QObject*
/// @param member const char*
/// @param param3 enum Qt__ConnectionType
/// @param retVal QGenericReturnArgument*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
bool q_metaobject_invoke_method8(void* obj, const char* member, int32_t param3, void* retVal, void* val0, void* val1, void* val2, void* val3);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// @param obj QObject*
/// @param member const char*
/// @param param3 enum Qt__ConnectionType
/// @param retVal QGenericReturnArgument*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
bool q_metaobject_invoke_method9(void* obj, const char* member, int32_t param3, void* retVal, void* val0, void* val1, void* val2, void* val3, void* val4);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// @param obj QObject*
/// @param member const char*
/// @param param3 enum Qt__ConnectionType
/// @param retVal QGenericReturnArgument*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
/// @param val5 QGenericArgument*
bool q_metaobject_invoke_method10(void* obj, const char* member, int32_t param3, void* retVal, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// @param obj QObject*
/// @param member const char*
/// @param param3 enum Qt__ConnectionType
/// @param retVal QGenericReturnArgument*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
/// @param val5 QGenericArgument*
/// @param val6 QGenericArgument*
bool q_metaobject_invoke_method11(void* obj, const char* member, int32_t param3, void* retVal, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// @param obj QObject*
/// @param member const char*
/// @param param3 enum Qt__ConnectionType
/// @param retVal QGenericReturnArgument*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
/// @param val5 QGenericArgument*
/// @param val6 QGenericArgument*
/// @param val7 QGenericArgument*
bool q_metaobject_invoke_method12(void* obj, const char* member, int32_t param3, void* retVal, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// @param obj QObject*
/// @param member const char*
/// @param param3 enum Qt__ConnectionType
/// @param retVal QGenericReturnArgument*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
/// @param val5 QGenericArgument*
/// @param val6 QGenericArgument*
/// @param val7 QGenericArgument*
/// @param val8 QGenericArgument*
bool q_metaobject_invoke_method13(void* obj, const char* member, int32_t param3, void* retVal, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// @param obj QObject*
/// @param member const char*
/// @param param3 enum Qt__ConnectionType
/// @param retVal QGenericReturnArgument*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
/// @param val5 QGenericArgument*
/// @param val6 QGenericArgument*
/// @param val7 QGenericArgument*
/// @param val8 QGenericArgument*
/// @param val9 QGenericArgument*
bool q_metaobject_invoke_method14(void* obj, const char* member, int32_t param3, void* retVal, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8, void* val9);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// @param obj QObject*
/// @param member const char*
/// @param retVal QGenericReturnArgument*
/// @param val0 QGenericArgument*
bool q_metaobject_invoke_method42(void* obj, const char* member, void* retVal, void* val0);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// @param obj QObject*
/// @param member const char*
/// @param retVal QGenericReturnArgument*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
bool q_metaobject_invoke_method52(void* obj, const char* member, void* retVal, void* val0, void* val1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// @param obj QObject*
/// @param member const char*
/// @param retVal QGenericReturnArgument*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
bool q_metaobject_invoke_method62(void* obj, const char* member, void* retVal, void* val0, void* val1, void* val2);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// @param obj QObject*
/// @param member const char*
/// @param retVal QGenericReturnArgument*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
bool q_metaobject_invoke_method72(void* obj, const char* member, void* retVal, void* val0, void* val1, void* val2, void* val3);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// @param obj QObject*
/// @param member const char*
/// @param retVal QGenericReturnArgument*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
bool q_metaobject_invoke_method82(void* obj, const char* member, void* retVal, void* val0, void* val1, void* val2, void* val3, void* val4);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// @param obj QObject*
/// @param member const char*
/// @param retVal QGenericReturnArgument*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
/// @param val5 QGenericArgument*
bool q_metaobject_invoke_method92(void* obj, const char* member, void* retVal, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// @param obj QObject*
/// @param member const char*
/// @param retVal QGenericReturnArgument*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
/// @param val5 QGenericArgument*
/// @param val6 QGenericArgument*
bool q_metaobject_invoke_method102(void* obj, const char* member, void* retVal, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// @param obj QObject*
/// @param member const char*
/// @param retVal QGenericReturnArgument*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
/// @param val5 QGenericArgument*
/// @param val6 QGenericArgument*
/// @param val7 QGenericArgument*
bool q_metaobject_invoke_method112(void* obj, const char* member, void* retVal, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// @param obj QObject*
/// @param member const char*
/// @param retVal QGenericReturnArgument*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
/// @param val5 QGenericArgument*
/// @param val6 QGenericArgument*
/// @param val7 QGenericArgument*
/// @param val8 QGenericArgument*
bool q_metaobject_invoke_method122(void* obj, const char* member, void* retVal, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// @param obj QObject*
/// @param member const char*
/// @param retVal QGenericReturnArgument*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
/// @param val5 QGenericArgument*
/// @param val6 QGenericArgument*
/// @param val7 QGenericArgument*
/// @param val8 QGenericArgument*
/// @param val9 QGenericArgument*
bool q_metaobject_invoke_method132(void* obj, const char* member, void* retVal, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8, void* val9);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// @param obj QObject*
/// @param member const char*
/// @param type enum Qt__ConnectionType
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
bool q_metaobject_invoke_method53(void* obj, const char* member, int32_t type, void* val0, void* val1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// @param obj QObject*
/// @param member const char*
/// @param type enum Qt__ConnectionType
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
bool q_metaobject_invoke_method63(void* obj, const char* member, int32_t type, void* val0, void* val1, void* val2);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// @param obj QObject*
/// @param member const char*
/// @param type enum Qt__ConnectionType
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
bool q_metaobject_invoke_method73(void* obj, const char* member, int32_t type, void* val0, void* val1, void* val2, void* val3);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// @param obj QObject*
/// @param member const char*
/// @param type enum Qt__ConnectionType
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
bool q_metaobject_invoke_method83(void* obj, const char* member, int32_t type, void* val0, void* val1, void* val2, void* val3, void* val4);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// @param obj QObject*
/// @param member const char*
/// @param type enum Qt__ConnectionType
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
/// @param val5 QGenericArgument*
bool q_metaobject_invoke_method93(void* obj, const char* member, int32_t type, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// @param obj QObject*
/// @param member const char*
/// @param type enum Qt__ConnectionType
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
/// @param val5 QGenericArgument*
/// @param val6 QGenericArgument*
bool q_metaobject_invoke_method103(void* obj, const char* member, int32_t type, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// @param obj QObject*
/// @param member const char*
/// @param type enum Qt__ConnectionType
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
/// @param val5 QGenericArgument*
/// @param val6 QGenericArgument*
/// @param val7 QGenericArgument*
bool q_metaobject_invoke_method113(void* obj, const char* member, int32_t type, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// @param obj QObject*
/// @param member const char*
/// @param type enum Qt__ConnectionType
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
/// @param val5 QGenericArgument*
/// @param val6 QGenericArgument*
/// @param val7 QGenericArgument*
/// @param val8 QGenericArgument*
bool q_metaobject_invoke_method123(void* obj, const char* member, int32_t type, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// @param obj QObject*
/// @param member const char*
/// @param type enum Qt__ConnectionType
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
/// @param val5 QGenericArgument*
/// @param val6 QGenericArgument*
/// @param val7 QGenericArgument*
/// @param val8 QGenericArgument*
/// @param val9 QGenericArgument*
bool q_metaobject_invoke_method133(void* obj, const char* member, int32_t type, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8, void* val9);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// @param obj QObject*
/// @param member const char*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
bool q_metaobject_invoke_method43(void* obj, const char* member, void* val0, void* val1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// @param obj QObject*
/// @param member const char*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
bool q_metaobject_invoke_method54(void* obj, const char* member, void* val0, void* val1, void* val2);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// @param obj QObject*
/// @param member const char*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
bool q_metaobject_invoke_method64(void* obj, const char* member, void* val0, void* val1, void* val2, void* val3);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// @param obj QObject*
/// @param member const char*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
bool q_metaobject_invoke_method74(void* obj, const char* member, void* val0, void* val1, void* val2, void* val3, void* val4);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// @param obj QObject*
/// @param member const char*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
/// @param val5 QGenericArgument*
bool q_metaobject_invoke_method84(void* obj, const char* member, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// @param obj QObject*
/// @param member const char*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
/// @param val5 QGenericArgument*
/// @param val6 QGenericArgument*
bool q_metaobject_invoke_method94(void* obj, const char* member, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// @param obj QObject*
/// @param member const char*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
/// @param val5 QGenericArgument*
/// @param val6 QGenericArgument*
/// @param val7 QGenericArgument*
bool q_metaobject_invoke_method104(void* obj, const char* member, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// @param obj QObject*
/// @param member const char*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
/// @param val5 QGenericArgument*
/// @param val6 QGenericArgument*
/// @param val7 QGenericArgument*
/// @param val8 QGenericArgument*
bool q_metaobject_invoke_method114(void* obj, const char* member, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// @param obj QObject*
/// @param member const char*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
/// @param val5 QGenericArgument*
/// @param val6 QGenericArgument*
/// @param val7 QGenericArgument*
/// @param val8 QGenericArgument*
/// @param val9 QGenericArgument*
bool q_metaobject_invoke_method124(void* obj, const char* member, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8, void* val9);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#newInstance)
///
/// @param self QMetaObject*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
QObject* q_metaobject_new_instance2(void* self, void* val0, void* val1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#newInstance)
///
/// @param self QMetaObject*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
QObject* q_metaobject_new_instance3(void* self, void* val0, void* val1, void* val2);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#newInstance)
///
/// @param self QMetaObject*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
QObject* q_metaobject_new_instance4(void* self, void* val0, void* val1, void* val2, void* val3);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#newInstance)
///
/// @param self QMetaObject*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
QObject* q_metaobject_new_instance5(void* self, void* val0, void* val1, void* val2, void* val3, void* val4);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#newInstance)
///
/// @param self QMetaObject*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
/// @param val5 QGenericArgument*
QObject* q_metaobject_new_instance6(void* self, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#newInstance)
///
/// @param self QMetaObject*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
/// @param val5 QGenericArgument*
/// @param val6 QGenericArgument*
QObject* q_metaobject_new_instance7(void* self, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#newInstance)
///
/// @param self QMetaObject*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
/// @param val5 QGenericArgument*
/// @param val6 QGenericArgument*
/// @param val7 QGenericArgument*
QObject* q_metaobject_new_instance8(void* self, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#newInstance)
///
/// @param self QMetaObject*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
/// @param val5 QGenericArgument*
/// @param val6 QGenericArgument*
/// @param val7 QGenericArgument*
/// @param val8 QGenericArgument*
QObject* q_metaobject_new_instance9(void* self, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#newInstance)
///
/// @param self QMetaObject*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
/// @param val5 QGenericArgument*
/// @param val6 QGenericArgument*
/// @param val7 QGenericArgument*
/// @param val8 QGenericArgument*
/// @param val9 QGenericArgument*
QObject* q_metaobject_new_instance10(void* self, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8, void* val9);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#dtor.QMetaObject)
///
/// Delete this object from C++ memory.
///
/// @param self QMetaObject*
void q_metaobject_delete(void* self);

/// https://doc.qt.io/qt-6/qmetaobject-connection.html

/// q_metaobject__connection_new constructs a new QMetaObject::Connection object.
///
QMetaObject__Connection* q_metaobject__connection_new();

/// q_metaobject__connection_new2 constructs a new QMetaObject::Connection object.
///
/// @param other QMetaObject__Connection*
QMetaObject__Connection* q_metaobject__connection_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject-connection.html#operator-eq)
///
/// @param self QMetaObject__Connection*
/// @param other QMetaObject__Connection*
void q_metaobject__connection_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject-connection.html#swap)
///
/// @param self QMetaObject__Connection*
/// @param other QMetaObject__Connection*
void q_metaobject__connection_swap(void* self, void* other);

/// Delete this object from C++ memory.
///
/// @param self QMetaObject__Connection*
void q_metaobject__connection_delete(void* self);

/// https://doc.qt.io/qt-6/qmetaobject-superdata.html

/// q_metaobject__superdata_new constructs a new QMetaObject::SuperData object.
///
QMetaObject__SuperData* q_metaobject__superdata_new();

/// q_metaobject__superdata_new2 constructs a new QMetaObject::SuperData object.
///
/// @param mo QMetaObject*
QMetaObject__SuperData* q_metaobject__superdata_new2(void* mo);

/// q_metaobject__superdata_new3 constructs a new QMetaObject::SuperData object.
///
/// @param param1 QMetaObject__SuperData*
QMetaObject__SuperData* q_metaobject__superdata_new3(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject-superdata.html#direct-var)
///
/// @param self QMetaObject__SuperData*
const QMetaObject* q_metaobject__superdata_direct(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject-superdata.html#direct-var)
///
/// @param self QMetaObject__SuperData*
/// @param direct QMetaObject*
void q_metaobject__superdata_set_direct(void* self, void* direct);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject-superdata.html#operator--gt)
///
/// @param self QMetaObject__SuperData*
const QMetaObject* q_metaobject__superdata_operator_minus_greater(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject-superdata.html#operator-2a)
///
/// @param self QMetaObject__SuperData*
const QMetaObject* q_metaobject__superdata_to_const_q_meta_object_multiply(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject-superdata.html#operator-eq)
///
/// @param self QMetaObject__SuperData*
/// @param param1 QMetaObject__SuperData*
void q_metaobject__superdata_operator_assign(void* self, void* param1);

/// Delete this object from C++ memory.
///
/// @param self QMetaObject__SuperData*
void q_metaobject__superdata_delete(void* self);

/// https://doc.qt.io/qt-6/qmetaobject-data.html

/// q_metaobject__data_new constructs a new QMetaObject::Data object.
///
QMetaObject__Data* q_metaobject__data_new();

/// q_metaobject__data_new2 constructs a new QMetaObject::Data object.
///
/// @param param1 QMetaObject__Data*
QMetaObject__Data* q_metaobject__data_new2(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject-data.html#superdata-var)
///
/// @param self QMetaObject__Data*
QMetaObject__SuperData* q_metaobject__data_superdata(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject-data.html#superdata-var)
///
/// @param self QMetaObject__Data*
/// @param superdata QMetaObject__SuperData*
void q_metaobject__data_set_superdata(void* self, void* superdata);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject-data.html#stringdata-var)
///
/// @param self QMetaObject__Data*
const uint32_t* q_metaobject__data_stringdata(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject-data.html#stringdata-var)
///
/// @param self QMetaObject__Data*
/// @param stringdata uint32_t*
void q_metaobject__data_set_stringdata(void* self, uint32_t* stringdata);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject-data.html#data-var)
///
/// @param self QMetaObject__Data*
const uint32_t* q_metaobject__data_data(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject-data.html#data-var)
///
/// @param self QMetaObject__Data*
/// @param data uint32_t*
void q_metaobject__data_set_data(void* self, uint32_t* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject-data.html#relatedMetaObjects-var)
///
/// @param self QMetaObject__Data*
const QMetaObject__SuperData* q_metaobject__data_related_meta_objects(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject-data.html#relatedMetaObjects-var)
///
/// @param self QMetaObject__Data*
/// @param relatedMetaObjects QMetaObject__SuperData*
void q_metaobject__data_set_related_meta_objects(void* self, void* relatedMetaObjects);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject-data.html#operator-eq)
///
/// @param self QMetaObject__Data*
/// @param param1 QMetaObject__Data*
void q_metaobject__data_operator_assign(void* self, void* param1);

/// Delete this object from C++ memory.
///
/// @param self QMetaObject__Data*
void q_metaobject__data_delete(void* self);

/// https://doc.qt.io/qt-6/qobjectdefs.html#types

typedef enum {
    QMETAOBJECT_CALL_INVOKEMETAMETHOD = 0,
    QMETAOBJECT_CALL_READPROPERTY = 1,
    QMETAOBJECT_CALL_WRITEPROPERTY = 2,
    QMETAOBJECT_CALL_RESETPROPERTY = 3,
    QMETAOBJECT_CALL_CREATEINSTANCE = 4,
    QMETAOBJECT_CALL_INDEXOFMETHOD = 5,
    QMETAOBJECT_CALL_REGISTERPROPERTYMETATYPE = 6,
    QMETAOBJECT_CALL_REGISTERMETHODARGUMENTMETATYPE = 7,
    QMETAOBJECT_CALL_BINDABLEPROPERTY = 8,
    QMETAOBJECT_CALL_CUSTOMCALL = 9,
    QMETAOBJECT_CALL_CONSTRUCTINPLACE = 10
} QMetaObject__Call;

#endif
