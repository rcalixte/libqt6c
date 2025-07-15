#pragma once
#ifndef SRCQT6C_LIBQOBJECTDEFS_H
#define SRCQT6C_LIBQOBJECTDEFS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qgenericargument.html

/// q_genericargument_new constructs a new QGenericArgument object.
///
/// ``` QGenericArgument* other ```
QGenericArgument* q_genericargument_new(void* other);

/// q_genericargument_new2 constructs a new QGenericArgument object and invalidates the source QGenericArgument object.
///
/// ``` QGenericArgument* other ```
QGenericArgument* q_genericargument_new2(void* other);

/// q_genericargument_new3 constructs a new QGenericArgument object.
///
///
QGenericArgument* q_genericargument_new3();

/// q_genericargument_new4 constructs a new QGenericArgument object.
///
/// ``` QGenericArgument* param1 ```
QGenericArgument* q_genericargument_new4(void* param1);

/// q_genericargument_new5 constructs a new QGenericArgument object.
///
/// ``` const char* aName ```
QGenericArgument* q_genericargument_new5(const char* aName);

/// q_genericargument_new6 constructs a new QGenericArgument object.
///
/// ``` const char* aName, void* aData ```
QGenericArgument* q_genericargument_new6(const char* aName, void* aData);

/// q_genericargument_copy_assign shallow copies `other` into `self`.
///
/// ``` QGenericArgument* self, QGenericArgument* other ```
void q_genericargument_copy_assign(void* self, void* other);

/// q_genericargument_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QGenericArgument* self, QGenericArgument* other ```
void q_genericargument_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qgenericargument.html#data)
///
/// ``` QGenericArgument* self ```
void* q_genericargument_data(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgenericargument.html#name)
///
/// ``` QGenericArgument* self ```
const char* q_genericargument_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgenericargument.html#dtor.QGenericArgument)
///
/// Delete this object from C++ memory.
///
/// ``` QGenericArgument* self ```
void q_genericargument_delete(void* self);

/// https://doc.qt.io/qt-6/qgenericreturnargument.html

/// q_genericreturnargument_new constructs a new QGenericReturnArgument object.
///
/// ``` QGenericReturnArgument* other ```
QGenericReturnArgument* q_genericreturnargument_new(void* other);

/// q_genericreturnargument_new2 constructs a new QGenericReturnArgument object and invalidates the source QGenericReturnArgument object.
///
/// ``` QGenericReturnArgument* other ```
QGenericReturnArgument* q_genericreturnargument_new2(void* other);

/// q_genericreturnargument_new3 constructs a new QGenericReturnArgument object.
///
///
QGenericReturnArgument* q_genericreturnargument_new3();

/// q_genericreturnargument_new4 constructs a new QGenericReturnArgument object.
///
/// ``` QGenericReturnArgument* param1 ```
QGenericReturnArgument* q_genericreturnargument_new4(void* param1);

/// q_genericreturnargument_new5 constructs a new QGenericReturnArgument object.
///
/// ``` const char* aName ```
QGenericReturnArgument* q_genericreturnargument_new5(const char* aName);

/// q_genericreturnargument_new6 constructs a new QGenericReturnArgument object.
///
/// ``` const char* aName, void* aData ```
QGenericReturnArgument* q_genericreturnargument_new6(const char* aName, void* aData);

/// q_genericreturnargument_copy_assign shallow copies `other` into `self`.
///
/// ``` QGenericReturnArgument* self, QGenericReturnArgument* other ```
void q_genericreturnargument_copy_assign(void* self, void* other);

/// q_genericreturnargument_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QGenericReturnArgument* self, QGenericReturnArgument* other ```
void q_genericreturnargument_move_assign(void* self, void* other);

/// Inherited from QGenericArgument
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgenericargument.html#data)
///
/// ``` QGenericReturnArgument* self ```
void* q_genericreturnargument_data(void* self);

/// Inherited from QGenericArgument
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgenericargument.html#name)
///
/// ``` QGenericReturnArgument* self ```
const char* q_genericreturnargument_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgenericreturnargument.html#dtor.QGenericReturnArgument)
///
/// Delete this object from C++ memory.
///
/// ``` QGenericReturnArgument* self ```
void q_genericreturnargument_delete(void* self);

/// https://doc.qt.io/qt-6/qmetaobject.html

/// q_metaobject_new constructs a new QMetaObject object.
///
///
QMetaObject* q_metaobject_new();

/// q_metaobject_new2 constructs a new QMetaObject object.
///
/// ``` QMetaObject* param1 ```
QMetaObject* q_metaobject_new2(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#className)
///
/// ``` QMetaObject* self ```
const char* q_metaobject_class_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#superClass)
///
/// ``` QMetaObject* self ```
const QMetaObject* q_metaobject_super_class(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#inherits)
///
/// ``` QMetaObject* self, QMetaObject* metaObject ```
bool q_metaobject_inherits(void* self, void* metaObject);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#cast)
///
/// ``` QMetaObject* self, QObject* obj ```
QObject* q_metaobject_cast(void* self, void* obj);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#cast)
///
/// ``` QMetaObject* self, QObject* obj ```
const QObject* q_metaobject_cast2(void* self, void* obj);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_metaobject_tr(void* self, const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#metaType)
///
/// ``` QMetaObject* self ```
QMetaType* q_metaobject_meta_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#methodOffset)
///
/// ``` QMetaObject* self ```
int32_t q_metaobject_method_offset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#enumeratorOffset)
///
/// ``` QMetaObject* self ```
int32_t q_metaobject_enumerator_offset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#propertyOffset)
///
/// ``` QMetaObject* self ```
int32_t q_metaobject_property_offset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#classInfoOffset)
///
/// ``` QMetaObject* self ```
int32_t q_metaobject_class_info_offset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#constructorCount)
///
/// ``` QMetaObject* self ```
int32_t q_metaobject_constructor_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#methodCount)
///
/// ``` QMetaObject* self ```
int32_t q_metaobject_method_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#enumeratorCount)
///
/// ``` QMetaObject* self ```
int32_t q_metaobject_enumerator_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#propertyCount)
///
/// ``` QMetaObject* self ```
int32_t q_metaobject_property_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#classInfoCount)
///
/// ``` QMetaObject* self ```
int32_t q_metaobject_class_info_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#indexOfConstructor)
///
/// ``` QMetaObject* self, const char* constructor ```
int32_t q_metaobject_index_of_constructor(void* self, const char* constructor);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#indexOfMethod)
///
/// ``` QMetaObject* self, const char* method ```
int32_t q_metaobject_index_of_method(void* self, const char* method);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#indexOfSignal)
///
/// ``` QMetaObject* self, const char* signal ```
int32_t q_metaobject_index_of_signal(void* self, const char* signal);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#indexOfSlot)
///
/// ``` QMetaObject* self, const char* slot ```
int32_t q_metaobject_index_of_slot(void* self, const char* slot);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#indexOfEnumerator)
///
/// ``` QMetaObject* self, const char* name ```
int32_t q_metaobject_index_of_enumerator(void* self, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#indexOfProperty)
///
/// ``` QMetaObject* self, const char* name ```
int32_t q_metaobject_index_of_property(void* self, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#indexOfClassInfo)
///
/// ``` QMetaObject* self, const char* name ```
int32_t q_metaobject_index_of_class_info(void* self, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#constructor)
///
/// ``` QMetaObject* self, int index ```
QMetaMethod* q_metaobject_constructor(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#method)
///
/// ``` QMetaObject* self, int index ```
QMetaMethod* q_metaobject_method(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#enumerator)
///
/// ``` QMetaObject* self, int index ```
QMetaEnum* q_metaobject_enumerator(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#property)
///
/// ``` QMetaObject* self, int index ```
QMetaProperty* q_metaobject_property(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#classInfo)
///
/// ``` QMetaObject* self, int index ```
QMetaClassInfo* q_metaobject_class_info(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#userProperty)
///
/// ``` QMetaObject* self ```
QMetaProperty* q_metaobject_user_property(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#checkConnectArgs)
///
/// ``` const char* signal, const char* method ```
bool q_metaobject_check_connect_args(const char* signal, const char* method);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#checkConnectArgs)
///
/// ``` QMetaMethod* signal, QMetaMethod* method ```
bool q_metaobject_check_connect_args2(void* signal, void* method);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#normalizedSignature)
///
/// ``` const char* method ```
char* q_metaobject_normalized_signature(const char* method);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#normalizedType)
///
/// ``` const char* typeVal ```
char* q_metaobject_normalized_type(const char* typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#connect)
///
/// ``` QObject* sender, int signal_index, QObject* receiver, int method_index ```
QMetaObject__Connection* q_metaobject_connect(void* sender, int signal_index, void* receiver, int method_index);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#disconnect)
///
/// ``` QObject* sender, int signal_index, QObject* receiver, int method_index ```
bool q_metaobject_disconnect(void* sender, int signal_index, void* receiver, int method_index);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#disconnectOne)
///
/// ``` QObject* sender, int signal_index, QObject* receiver, int method_index ```
bool q_metaobject_disconnect_one(void* sender, int signal_index, void* receiver, int method_index);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#connectSlotsByName)
///
/// ``` QObject* o ```
void q_metaobject_connect_slots_by_name(void* o);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#activate)
///
/// ``` QObject* sender, int signal_index, void* argv ```
void q_metaobject_activate(void* sender, int signal_index, void* argv);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#activate)
///
/// ``` QObject* sender, QMetaObject* param2, int local_signal_index, void* argv ```
void q_metaobject_activate2(void* sender, void* param2, int local_signal_index, void* argv);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#activate)
///
/// ``` QObject* sender, int signal_offset, int local_signal_index, void* argv ```
void q_metaobject_activate3(void* sender, int signal_offset, int local_signal_index, void* argv);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// ``` QObject* obj, const char* member, enum Qt__ConnectionType param3, QGenericReturnArgument* retVal ```
bool q_metaobject_invoke_method(void* obj, const char* member, int64_t param3, void* retVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// ``` QObject* obj, const char* member, QGenericReturnArgument* retVal ```
bool q_metaobject_invoke_method2(void* obj, const char* member, void* retVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// ``` QObject* obj, const char* member, enum Qt__ConnectionType typeVal, QGenericArgument* val0 ```
bool q_metaobject_invoke_method3(void* obj, const char* member, int64_t typeVal, void* val0);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// ``` QObject* obj, const char* member, QGenericArgument* val0 ```
bool q_metaobject_invoke_method4(void* obj, const char* member, void* val0);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#newInstance)
///
/// ``` QMetaObject* self, QGenericArgument* val0 ```
QObject* q_metaobject_new_instance(void* self, void* val0);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#static_metacall)
///
/// ``` QMetaObject* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_metaobject_static_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#metacall)
///
/// ``` QObject* param1, enum QMetaObject__Call param2, int param3, void* param4 ```
int32_t q_metaobject_metacall(void* param1, int64_t param2, int param3, void* param4);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_metaobject_tr3(void* self, const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#connect)
///
/// ``` QObject* sender, int signal_index, QObject* receiver, int method_index, int typeVal ```
QMetaObject__Connection* q_metaobject_connect5(void* sender, int signal_index, void* receiver, int method_index, int typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#connect)
///
/// ``` QObject* sender, int signal_index, QObject* receiver, int method_index, int typeVal, int* types ```
QMetaObject__Connection* q_metaobject_connect6(void* sender, int signal_index, void* receiver, int method_index, int typeVal, int* types);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// ``` QObject* obj, const char* member, enum Qt__ConnectionType param3, QGenericReturnArgument* retVal, QGenericArgument* val0 ```
bool q_metaobject_invoke_method5(void* obj, const char* member, int64_t param3, void* retVal, void* val0);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// ``` QObject* obj, const char* member, enum Qt__ConnectionType param3, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1 ```
bool q_metaobject_invoke_method6(void* obj, const char* member, int64_t param3, void* retVal, void* val0, void* val1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// ``` QObject* obj, const char* member, enum Qt__ConnectionType param3, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2 ```
bool q_metaobject_invoke_method7(void* obj, const char* member, int64_t param3, void* retVal, void* val0, void* val1, void* val2);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// ``` QObject* obj, const char* member, enum Qt__ConnectionType param3, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3 ```
bool q_metaobject_invoke_method8(void* obj, const char* member, int64_t param3, void* retVal, void* val0, void* val1, void* val2, void* val3);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// ``` QObject* obj, const char* member, enum Qt__ConnectionType param3, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4 ```
bool q_metaobject_invoke_method9(void* obj, const char* member, int64_t param3, void* retVal, void* val0, void* val1, void* val2, void* val3, void* val4);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// ``` QObject* obj, const char* member, enum Qt__ConnectionType param3, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5 ```
bool q_metaobject_invoke_method10(void* obj, const char* member, int64_t param3, void* retVal, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// ``` QObject* obj, const char* member, enum Qt__ConnectionType param3, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6 ```
bool q_metaobject_invoke_method11(void* obj, const char* member, int64_t param3, void* retVal, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// ``` QObject* obj, const char* member, enum Qt__ConnectionType param3, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7 ```
bool q_metaobject_invoke_method12(void* obj, const char* member, int64_t param3, void* retVal, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// ``` QObject* obj, const char* member, enum Qt__ConnectionType param3, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8 ```
bool q_metaobject_invoke_method13(void* obj, const char* member, int64_t param3, void* retVal, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// ``` QObject* obj, const char* member, enum Qt__ConnectionType param3, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9 ```
bool q_metaobject_invoke_method14(void* obj, const char* member, int64_t param3, void* retVal, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8, void* val9);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// ``` QObject* obj, const char* member, QGenericReturnArgument* retVal, QGenericArgument* val0 ```
bool q_metaobject_invoke_method42(void* obj, const char* member, void* retVal, void* val0);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// ``` QObject* obj, const char* member, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1 ```
bool q_metaobject_invoke_method52(void* obj, const char* member, void* retVal, void* val0, void* val1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// ``` QObject* obj, const char* member, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2 ```
bool q_metaobject_invoke_method62(void* obj, const char* member, void* retVal, void* val0, void* val1, void* val2);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// ``` QObject* obj, const char* member, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3 ```
bool q_metaobject_invoke_method72(void* obj, const char* member, void* retVal, void* val0, void* val1, void* val2, void* val3);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// ``` QObject* obj, const char* member, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4 ```
bool q_metaobject_invoke_method82(void* obj, const char* member, void* retVal, void* val0, void* val1, void* val2, void* val3, void* val4);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// ``` QObject* obj, const char* member, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5 ```
bool q_metaobject_invoke_method92(void* obj, const char* member, void* retVal, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// ``` QObject* obj, const char* member, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6 ```
bool q_metaobject_invoke_method102(void* obj, const char* member, void* retVal, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// ``` QObject* obj, const char* member, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7 ```
bool q_metaobject_invoke_method112(void* obj, const char* member, void* retVal, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// ``` QObject* obj, const char* member, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8 ```
bool q_metaobject_invoke_method122(void* obj, const char* member, void* retVal, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// ``` QObject* obj, const char* member, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9 ```
bool q_metaobject_invoke_method132(void* obj, const char* member, void* retVal, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8, void* val9);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// ``` QObject* obj, const char* member, enum Qt__ConnectionType typeVal, QGenericArgument* val0, QGenericArgument* val1 ```
bool q_metaobject_invoke_method53(void* obj, const char* member, int64_t typeVal, void* val0, void* val1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// ``` QObject* obj, const char* member, enum Qt__ConnectionType typeVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2 ```
bool q_metaobject_invoke_method63(void* obj, const char* member, int64_t typeVal, void* val0, void* val1, void* val2);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// ``` QObject* obj, const char* member, enum Qt__ConnectionType typeVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3 ```
bool q_metaobject_invoke_method73(void* obj, const char* member, int64_t typeVal, void* val0, void* val1, void* val2, void* val3);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// ``` QObject* obj, const char* member, enum Qt__ConnectionType typeVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4 ```
bool q_metaobject_invoke_method83(void* obj, const char* member, int64_t typeVal, void* val0, void* val1, void* val2, void* val3, void* val4);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// ``` QObject* obj, const char* member, enum Qt__ConnectionType typeVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5 ```
bool q_metaobject_invoke_method93(void* obj, const char* member, int64_t typeVal, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// ``` QObject* obj, const char* member, enum Qt__ConnectionType typeVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6 ```
bool q_metaobject_invoke_method103(void* obj, const char* member, int64_t typeVal, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// ``` QObject* obj, const char* member, enum Qt__ConnectionType typeVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7 ```
bool q_metaobject_invoke_method113(void* obj, const char* member, int64_t typeVal, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// ``` QObject* obj, const char* member, enum Qt__ConnectionType typeVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8 ```
bool q_metaobject_invoke_method123(void* obj, const char* member, int64_t typeVal, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// ``` QObject* obj, const char* member, enum Qt__ConnectionType typeVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9 ```
bool q_metaobject_invoke_method133(void* obj, const char* member, int64_t typeVal, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8, void* val9);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// ``` QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1 ```
bool q_metaobject_invoke_method43(void* obj, const char* member, void* val0, void* val1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// ``` QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2 ```
bool q_metaobject_invoke_method54(void* obj, const char* member, void* val0, void* val1, void* val2);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// ``` QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3 ```
bool q_metaobject_invoke_method64(void* obj, const char* member, void* val0, void* val1, void* val2, void* val3);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// ``` QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4 ```
bool q_metaobject_invoke_method74(void* obj, const char* member, void* val0, void* val1, void* val2, void* val3, void* val4);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// ``` QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5 ```
bool q_metaobject_invoke_method84(void* obj, const char* member, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// ``` QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6 ```
bool q_metaobject_invoke_method94(void* obj, const char* member, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// ``` QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7 ```
bool q_metaobject_invoke_method104(void* obj, const char* member, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// ``` QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8 ```
bool q_metaobject_invoke_method114(void* obj, const char* member, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#invokeMethod)
///
/// ``` QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9 ```
bool q_metaobject_invoke_method124(void* obj, const char* member, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8, void* val9);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#newInstance)
///
/// ``` QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1 ```
QObject* q_metaobject_new_instance2(void* self, void* val0, void* val1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#newInstance)
///
/// ``` QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2 ```
QObject* q_metaobject_new_instance3(void* self, void* val0, void* val1, void* val2);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#newInstance)
///
/// ``` QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3 ```
QObject* q_metaobject_new_instance4(void* self, void* val0, void* val1, void* val2, void* val3);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#newInstance)
///
/// ``` QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4 ```
QObject* q_metaobject_new_instance5(void* self, void* val0, void* val1, void* val2, void* val3, void* val4);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#newInstance)
///
/// ``` QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5 ```
QObject* q_metaobject_new_instance6(void* self, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#newInstance)
///
/// ``` QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6 ```
QObject* q_metaobject_new_instance7(void* self, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#newInstance)
///
/// ``` QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7 ```
QObject* q_metaobject_new_instance8(void* self, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#newInstance)
///
/// ``` QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8 ```
QObject* q_metaobject_new_instance9(void* self, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#newInstance)
///
/// ``` QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9 ```
QObject* q_metaobject_new_instance10(void* self, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8, void* val9);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject.html#dtor.QMetaObject)
///
/// Delete this object from C++ memory.
///
/// ``` QMetaObject* self ```
void q_metaobject_delete(void* self);

/// https://doc.qt.io/qt-6/qmetaobject-connection.html

/// q_metaobject__connection_new constructs a new QMetaObject::Connection object.
///
///
QMetaObject__Connection* q_metaobject__connection_new();

/// q_metaobject__connection_new2 constructs a new QMetaObject::Connection object.
///
/// ``` QMetaObject__Connection* other ```
QMetaObject__Connection* q_metaobject__connection_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject__connection.html#operator=)
///
/// ``` QMetaObject__Connection* self, QMetaObject__Connection* other ```
void q_metaobject__connection_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject__connection.html#swap)
///
/// ``` QMetaObject__Connection* self, QMetaObject__Connection* other ```
void q_metaobject__connection_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject::connection.html#dtor.QMetaObject::Connection)
///
/// Delete this object from C++ memory.
///
/// ``` QMetaObject__Connection* self ```
void q_metaobject__connection_delete(void* self);

/// https://doc.qt.io/qt-6/qmetaobject-superdata.html

/// q_metaobject__superdata_new constructs a new QMetaObject::SuperData object.
///
///
QMetaObject__SuperData* q_metaobject__superdata_new();

/// q_metaobject__superdata_new2 constructs a new QMetaObject::SuperData object.
///
/// ``` QMetaObject* mo ```
QMetaObject__SuperData* q_metaobject__superdata_new2(void* mo);

/// q_metaobject__superdata_new3 constructs a new QMetaObject::SuperData object.
///
/// ``` QMetaObject__SuperData* param1 ```
QMetaObject__SuperData* q_metaobject__superdata_new3(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject__superdata.html#operator->)
///
/// ``` QMetaObject__SuperData* self ```
const QMetaObject* q_metaobject__superdata_operator_minus_greater(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject__superdata.html#operator const QMetaObject *)
///
/// ``` QMetaObject__SuperData* self ```
const QMetaObject* q_metaobject__superdata_to_const_q_meta_object_multiply(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject__superdata.html#operator=)
///
/// ``` QMetaObject__SuperData* self, QMetaObject__SuperData* param1 ```
void q_metaobject__superdata_operator_assign(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject::superdata.html#dtor.QMetaObject::SuperData)
///
/// Delete this object from C++ memory.
///
/// ``` QMetaObject__SuperData* self ```
void q_metaobject__superdata_delete(void* self);

/// https://doc.qt.io/qt-6/qmetaobject-data.html

/// q_metaobject__data_new constructs a new QMetaObject::Data object.
///
///
QMetaObject__Data* q_metaobject__data_new();

/// q_metaobject__data_new2 constructs a new QMetaObject::Data object.
///
/// ``` QMetaObject__Data* param1 ```
QMetaObject__Data* q_metaobject__data_new2(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject__data.html#operator=)
///
/// ``` QMetaObject__Data* self, QMetaObject__Data* param1 ```
void q_metaobject__data_operator_assign(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaobject::data.html#dtor.QMetaObject::Data)
///
/// Delete this object from C++ memory.
///
/// ``` QMetaObject__Data* self ```
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
