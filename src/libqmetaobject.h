#pragma once
#ifndef LIBQMETAOBJECT_H
#define LIBQMETAOBJECT_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html)

/// q_metamethod_new constructs a new QMetaMethod object.
///
/// @param other QMetaMethod*
///
QMetaMethod* q_metamethod_new(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html)

/// q_metamethod_new2 constructs a new QMetaMethod object and invalidates the source QMetaMethod object.
///
/// @param other QMetaMethod*
///
QMetaMethod* q_metamethod_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html)

/// q_metamethod_new3 constructs a new QMetaMethod object.
///
QMetaMethod* q_metamethod_new3();

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html)

/// q_metamethod_new4 constructs a new QMetaMethod object.
///
/// @param param1 QMetaMethod*
///
QMetaMethod* q_metamethod_new4(const void* param1);

/// q_metamethod_copy_assign shallow copies `other` into `self`.
///
/// @param self QMetaMethod*
/// @param other QMetaMethod*
///
void q_metamethod_copy_assign(void* self, void* other);

/// q_metamethod_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QMetaMethod*
/// @param other QMetaMethod*
///
void q_metamethod_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#methodSignature)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QMetaMethod*
///
const char* q_metamethod_method_signature(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QMetaMethod*
///
const char* q_metamethod_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#typeName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QMetaMethod*
///
const char* q_metamethod_type_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#returnType)
///
/// @param self const QMetaMethod*
///
int32_t q_metamethod_return_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#returnMetaType)
///
/// @param self const QMetaMethod*
///
QMetaType* q_metamethod_return_meta_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#parameterCount)
///
/// @param self const QMetaMethod*
///
int32_t q_metamethod_parameter_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#parameterType)
///
/// @param self const QMetaMethod*
/// @param index int
///
int32_t q_metamethod_parameter_type(const void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#parameterMetaType)
///
/// @param self const QMetaMethod*
/// @param index int
///
QMetaType* q_metamethod_parameter_meta_type(const void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#getParameterTypes)
///
/// @param self const QMetaMethod*
/// @param types int*
///
void q_metamethod_get_parameter_types(const void* self, int* types);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#parameterTypes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QMetaMethod*
///
const char** q_metamethod_parameter_types(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#parameterTypeName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QMetaMethod*
/// @param index int
///
const char* q_metamethod_parameter_type_name(const void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#parameterNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QMetaMethod*
///
const char** q_metamethod_parameter_names(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#tag)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QMetaMethod*
///
const char* q_metamethod_tag(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#access)
///
/// @param self const QMetaMethod*
///
/// @return enum QMetaMethod__Access
///
int32_t q_metamethod_access(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#methodType)
///
/// @param self const QMetaMethod*
///
/// @return enum QMetaMethod__MethodType
///
int32_t q_metamethod_method_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#attributes)
///
/// @param self const QMetaMethod*
///
int32_t q_metamethod_attributes(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#methodIndex)
///
/// @param self const QMetaMethod*
///
int32_t q_metamethod_method_index(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#relativeMethodIndex)
///
/// @param self const QMetaMethod*
///
int32_t q_metamethod_relative_method_index(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#revision)
///
/// @param self const QMetaMethod*
///
int32_t q_metamethod_revision(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#isConst)
///
/// @param self const QMetaMethod*
///
bool q_metamethod_is_const(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#enclosingMetaObject)
///
/// @param self const QMetaMethod*
///
const QMetaObject* q_metamethod_enclosing_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self const QMetaMethod*
/// @param object QObject*
/// @param connectionType enum Qt__ConnectionType
/// @param returnValue QGenericReturnArgument*
///
bool q_metamethod_invoke(const void* self, void* object, int32_t connectionType, void* returnValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self const QMetaMethod*
/// @param object QObject*
/// @param returnValue QGenericReturnArgument*
///
bool q_metamethod_invoke2(const void* self, void* object, void* returnValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self const QMetaMethod*
/// @param object QObject*
/// @param connectionType enum Qt__ConnectionType
/// @param val0 QGenericArgument*
///
bool q_metamethod_invoke3(const void* self, void* object, int32_t connectionType, void* val0);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self const QMetaMethod*
/// @param object QObject*
/// @param val0 QGenericArgument*
///
bool q_metamethod_invoke4(const void* self, void* object, void* val0);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// @param self const QMetaMethod*
/// @param gadget void*
/// @param returnValue QGenericReturnArgument*
///
bool q_metamethod_invoke_on_gadget(const void* self, void* gadget, void* returnValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// @param self const QMetaMethod*
/// @param gadget void*
/// @param val0 QGenericArgument*
///
bool q_metamethod_invoke_on_gadget2(const void* self, void* gadget, void* val0);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#isValid)
///
/// @param self const QMetaMethod*
///
bool q_metamethod_is_valid(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self const QMetaMethod*
/// @param object QObject*
/// @param connectionType enum Qt__ConnectionType
/// @param returnValue QGenericReturnArgument*
/// @param val0 QGenericArgument*
///
bool q_metamethod_invoke42(const void* self, void* object, int32_t connectionType, void* returnValue, void* val0);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self const QMetaMethod*
/// @param object QObject*
/// @param connectionType enum Qt__ConnectionType
/// @param returnValue QGenericReturnArgument*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
///
bool q_metamethod_invoke5(const void* self, void* object, int32_t connectionType, void* returnValue, void* val0, void* val1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self const QMetaMethod*
/// @param object QObject*
/// @param connectionType enum Qt__ConnectionType
/// @param returnValue QGenericReturnArgument*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
///
bool q_metamethod_invoke6(const void* self, void* object, int32_t connectionType, void* returnValue, void* val0, void* val1, void* val2);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self const QMetaMethod*
/// @param object QObject*
/// @param connectionType enum Qt__ConnectionType
/// @param returnValue QGenericReturnArgument*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
///
bool q_metamethod_invoke7(const void* self, void* object, int32_t connectionType, void* returnValue, void* val0, void* val1, void* val2, void* val3);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self const QMetaMethod*
/// @param object QObject*
/// @param connectionType enum Qt__ConnectionType
/// @param returnValue QGenericReturnArgument*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
///
bool q_metamethod_invoke8(const void* self, void* object, int32_t connectionType, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self const QMetaMethod*
/// @param object QObject*
/// @param connectionType enum Qt__ConnectionType
/// @param returnValue QGenericReturnArgument*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
/// @param val5 QGenericArgument*
///
bool q_metamethod_invoke9(const void* self, void* object, int32_t connectionType, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self const QMetaMethod*
/// @param object QObject*
/// @param connectionType enum Qt__ConnectionType
/// @param returnValue QGenericReturnArgument*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
/// @param val5 QGenericArgument*
/// @param val6 QGenericArgument*
///
bool q_metamethod_invoke10(const void* self, void* object, int32_t connectionType, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self const QMetaMethod*
/// @param object QObject*
/// @param connectionType enum Qt__ConnectionType
/// @param returnValue QGenericReturnArgument*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
/// @param val5 QGenericArgument*
/// @param val6 QGenericArgument*
/// @param val7 QGenericArgument*
///
bool q_metamethod_invoke11(const void* self, void* object, int32_t connectionType, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self const QMetaMethod*
/// @param object QObject*
/// @param connectionType enum Qt__ConnectionType
/// @param returnValue QGenericReturnArgument*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
/// @param val5 QGenericArgument*
/// @param val6 QGenericArgument*
/// @param val7 QGenericArgument*
/// @param val8 QGenericArgument*
///
bool q_metamethod_invoke12(const void* self, void* object, int32_t connectionType, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self const QMetaMethod*
/// @param object QObject*
/// @param connectionType enum Qt__ConnectionType
/// @param returnValue QGenericReturnArgument*
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
///
bool q_metamethod_invoke13(const void* self, void* object, int32_t connectionType, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8, void* val9);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self const QMetaMethod*
/// @param object QObject*
/// @param returnValue QGenericReturnArgument*
/// @param val0 QGenericArgument*
///
bool q_metamethod_invoke32(const void* self, void* object, void* returnValue, void* val0);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self const QMetaMethod*
/// @param object QObject*
/// @param returnValue QGenericReturnArgument*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
///
bool q_metamethod_invoke43(const void* self, void* object, void* returnValue, void* val0, void* val1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self const QMetaMethod*
/// @param object QObject*
/// @param returnValue QGenericReturnArgument*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
///
bool q_metamethod_invoke52(const void* self, void* object, void* returnValue, void* val0, void* val1, void* val2);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self const QMetaMethod*
/// @param object QObject*
/// @param returnValue QGenericReturnArgument*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
///
bool q_metamethod_invoke62(const void* self, void* object, void* returnValue, void* val0, void* val1, void* val2, void* val3);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self const QMetaMethod*
/// @param object QObject*
/// @param returnValue QGenericReturnArgument*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
///
bool q_metamethod_invoke72(const void* self, void* object, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self const QMetaMethod*
/// @param object QObject*
/// @param returnValue QGenericReturnArgument*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
/// @param val5 QGenericArgument*
///
bool q_metamethod_invoke82(const void* self, void* object, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self const QMetaMethod*
/// @param object QObject*
/// @param returnValue QGenericReturnArgument*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
/// @param val5 QGenericArgument*
/// @param val6 QGenericArgument*
///
bool q_metamethod_invoke92(const void* self, void* object, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self const QMetaMethod*
/// @param object QObject*
/// @param returnValue QGenericReturnArgument*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
/// @param val5 QGenericArgument*
/// @param val6 QGenericArgument*
/// @param val7 QGenericArgument*
///
bool q_metamethod_invoke102(const void* self, void* object, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self const QMetaMethod*
/// @param object QObject*
/// @param returnValue QGenericReturnArgument*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
/// @param val5 QGenericArgument*
/// @param val6 QGenericArgument*
/// @param val7 QGenericArgument*
/// @param val8 QGenericArgument*
///
bool q_metamethod_invoke112(const void* self, void* object, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self const QMetaMethod*
/// @param object QObject*
/// @param returnValue QGenericReturnArgument*
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
///
bool q_metamethod_invoke122(const void* self, void* object, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8, void* val9);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self const QMetaMethod*
/// @param object QObject*
/// @param connectionType enum Qt__ConnectionType
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
///
bool q_metamethod_invoke44(const void* self, void* object, int32_t connectionType, void* val0, void* val1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self const QMetaMethod*
/// @param object QObject*
/// @param connectionType enum Qt__ConnectionType
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
///
bool q_metamethod_invoke53(const void* self, void* object, int32_t connectionType, void* val0, void* val1, void* val2);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self const QMetaMethod*
/// @param object QObject*
/// @param connectionType enum Qt__ConnectionType
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
///
bool q_metamethod_invoke63(const void* self, void* object, int32_t connectionType, void* val0, void* val1, void* val2, void* val3);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self const QMetaMethod*
/// @param object QObject*
/// @param connectionType enum Qt__ConnectionType
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
///
bool q_metamethod_invoke73(const void* self, void* object, int32_t connectionType, void* val0, void* val1, void* val2, void* val3, void* val4);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self const QMetaMethod*
/// @param object QObject*
/// @param connectionType enum Qt__ConnectionType
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
/// @param val5 QGenericArgument*
///
bool q_metamethod_invoke83(const void* self, void* object, int32_t connectionType, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self const QMetaMethod*
/// @param object QObject*
/// @param connectionType enum Qt__ConnectionType
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
/// @param val5 QGenericArgument*
/// @param val6 QGenericArgument*
///
bool q_metamethod_invoke93(const void* self, void* object, int32_t connectionType, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self const QMetaMethod*
/// @param object QObject*
/// @param connectionType enum Qt__ConnectionType
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
/// @param val5 QGenericArgument*
/// @param val6 QGenericArgument*
/// @param val7 QGenericArgument*
///
bool q_metamethod_invoke103(const void* self, void* object, int32_t connectionType, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self const QMetaMethod*
/// @param object QObject*
/// @param connectionType enum Qt__ConnectionType
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
/// @param val5 QGenericArgument*
/// @param val6 QGenericArgument*
/// @param val7 QGenericArgument*
/// @param val8 QGenericArgument*
///
bool q_metamethod_invoke113(const void* self, void* object, int32_t connectionType, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self const QMetaMethod*
/// @param object QObject*
/// @param connectionType enum Qt__ConnectionType
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
///
bool q_metamethod_invoke123(const void* self, void* object, int32_t connectionType, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8, void* val9);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self const QMetaMethod*
/// @param object QObject*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
///
bool q_metamethod_invoke33(const void* self, void* object, void* val0, void* val1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self const QMetaMethod*
/// @param object QObject*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
///
bool q_metamethod_invoke45(const void* self, void* object, void* val0, void* val1, void* val2);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self const QMetaMethod*
/// @param object QObject*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
///
bool q_metamethod_invoke54(const void* self, void* object, void* val0, void* val1, void* val2, void* val3);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self const QMetaMethod*
/// @param object QObject*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
///
bool q_metamethod_invoke64(const void* self, void* object, void* val0, void* val1, void* val2, void* val3, void* val4);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self const QMetaMethod*
/// @param object QObject*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
/// @param val5 QGenericArgument*
///
bool q_metamethod_invoke74(const void* self, void* object, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self const QMetaMethod*
/// @param object QObject*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
/// @param val5 QGenericArgument*
/// @param val6 QGenericArgument*
///
bool q_metamethod_invoke84(const void* self, void* object, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self const QMetaMethod*
/// @param object QObject*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
/// @param val5 QGenericArgument*
/// @param val6 QGenericArgument*
/// @param val7 QGenericArgument*
///
bool q_metamethod_invoke94(const void* self, void* object, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self const QMetaMethod*
/// @param object QObject*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
/// @param val5 QGenericArgument*
/// @param val6 QGenericArgument*
/// @param val7 QGenericArgument*
/// @param val8 QGenericArgument*
///
bool q_metamethod_invoke104(const void* self, void* object, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self const QMetaMethod*
/// @param object QObject*
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
///
bool q_metamethod_invoke114(const void* self, void* object, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8, void* val9);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// @param self const QMetaMethod*
/// @param gadget void*
/// @param returnValue QGenericReturnArgument*
/// @param val0 QGenericArgument*
///
bool q_metamethod_invoke_on_gadget3(const void* self, void* gadget, void* returnValue, void* val0);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// @param self const QMetaMethod*
/// @param gadget void*
/// @param returnValue QGenericReturnArgument*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
///
bool q_metamethod_invoke_on_gadget4(const void* self, void* gadget, void* returnValue, void* val0, void* val1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// @param self const QMetaMethod*
/// @param gadget void*
/// @param returnValue QGenericReturnArgument*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
///
bool q_metamethod_invoke_on_gadget5(const void* self, void* gadget, void* returnValue, void* val0, void* val1, void* val2);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// @param self const QMetaMethod*
/// @param gadget void*
/// @param returnValue QGenericReturnArgument*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
///
bool q_metamethod_invoke_on_gadget6(const void* self, void* gadget, void* returnValue, void* val0, void* val1, void* val2, void* val3);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// @param self const QMetaMethod*
/// @param gadget void*
/// @param returnValue QGenericReturnArgument*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
///
bool q_metamethod_invoke_on_gadget7(const void* self, void* gadget, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// @param self const QMetaMethod*
/// @param gadget void*
/// @param returnValue QGenericReturnArgument*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
/// @param val5 QGenericArgument*
///
bool q_metamethod_invoke_on_gadget8(const void* self, void* gadget, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// @param self const QMetaMethod*
/// @param gadget void*
/// @param returnValue QGenericReturnArgument*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
/// @param val5 QGenericArgument*
/// @param val6 QGenericArgument*
///
bool q_metamethod_invoke_on_gadget9(const void* self, void* gadget, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// @param self const QMetaMethod*
/// @param gadget void*
/// @param returnValue QGenericReturnArgument*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
/// @param val5 QGenericArgument*
/// @param val6 QGenericArgument*
/// @param val7 QGenericArgument*
///
bool q_metamethod_invoke_on_gadget10(const void* self, void* gadget, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// @param self const QMetaMethod*
/// @param gadget void*
/// @param returnValue QGenericReturnArgument*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
/// @param val5 QGenericArgument*
/// @param val6 QGenericArgument*
/// @param val7 QGenericArgument*
/// @param val8 QGenericArgument*
///
bool q_metamethod_invoke_on_gadget11(const void* self, void* gadget, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// @param self const QMetaMethod*
/// @param gadget void*
/// @param returnValue QGenericReturnArgument*
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
///
bool q_metamethod_invoke_on_gadget12(const void* self, void* gadget, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8, void* val9);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// @param self const QMetaMethod*
/// @param gadget void*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
///
bool q_metamethod_invoke_on_gadget32(const void* self, void* gadget, void* val0, void* val1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// @param self const QMetaMethod*
/// @param gadget void*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
///
bool q_metamethod_invoke_on_gadget42(const void* self, void* gadget, void* val0, void* val1, void* val2);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// @param self const QMetaMethod*
/// @param gadget void*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
///
bool q_metamethod_invoke_on_gadget52(const void* self, void* gadget, void* val0, void* val1, void* val2, void* val3);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// @param self const QMetaMethod*
/// @param gadget void*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
///
bool q_metamethod_invoke_on_gadget62(const void* self, void* gadget, void* val0, void* val1, void* val2, void* val3, void* val4);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// @param self const QMetaMethod*
/// @param gadget void*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
/// @param val5 QGenericArgument*
///
bool q_metamethod_invoke_on_gadget72(const void* self, void* gadget, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// @param self const QMetaMethod*
/// @param gadget void*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
/// @param val5 QGenericArgument*
/// @param val6 QGenericArgument*
///
bool q_metamethod_invoke_on_gadget82(const void* self, void* gadget, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// @param self const QMetaMethod*
/// @param gadget void*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
/// @param val5 QGenericArgument*
/// @param val6 QGenericArgument*
/// @param val7 QGenericArgument*
///
bool q_metamethod_invoke_on_gadget92(const void* self, void* gadget, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// @param self const QMetaMethod*
/// @param gadget void*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
/// @param val5 QGenericArgument*
/// @param val6 QGenericArgument*
/// @param val7 QGenericArgument*
/// @param val8 QGenericArgument*
///
bool q_metamethod_invoke_on_gadget102(const void* self, void* gadget, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// @param self const QMetaMethod*
/// @param gadget void*
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
///
bool q_metamethod_invoke_on_gadget112(const void* self, void* gadget, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8, void* val9);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetamethod.html#dtor.QMetaMethod)
///
/// Delete this object from C++ memory.
///
/// @param self QMetaMethod*
///
void q_metamethod_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaenum.html)

/// q_metaenum_new constructs a new QMetaEnum object.
///
/// @param other QMetaEnum*
///
QMetaEnum* q_metaenum_new(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaenum.html)

/// q_metaenum_new2 constructs a new QMetaEnum object and invalidates the source QMetaEnum object.
///
/// @param other QMetaEnum*
///
QMetaEnum* q_metaenum_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaenum.html)

/// q_metaenum_new3 constructs a new QMetaEnum object.
///
QMetaEnum* q_metaenum_new3();

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaenum.html)

/// q_metaenum_new4 constructs a new QMetaEnum object.
///
/// @param param1 QMetaEnum*
///
QMetaEnum* q_metaenum_new4(const void* param1);

/// q_metaenum_copy_assign shallow copies `other` into `self`.
///
/// @param self QMetaEnum*
/// @param other QMetaEnum*
///
void q_metaenum_copy_assign(void* self, void* other);

/// q_metaenum_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QMetaEnum*
/// @param other QMetaEnum*
///
void q_metaenum_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaenum.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QMetaEnum*
///
const char* q_metaenum_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaenum.html#enumName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QMetaEnum*
///
const char* q_metaenum_enum_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaenum.html#metaType)
///
/// @param self const QMetaEnum*
///
QMetaType* q_metaenum_meta_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaenum.html#isFlag)
///
/// @param self const QMetaEnum*
///
bool q_metaenum_is_flag(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaenum.html#isScoped)
///
/// @param self const QMetaEnum*
///
bool q_metaenum_is_scoped(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaenum.html#keyCount)
///
/// @param self const QMetaEnum*
///
int32_t q_metaenum_key_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaenum.html#key)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QMetaEnum*
/// @param index int
///
const char* q_metaenum_key(const void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaenum.html#value)
///
/// @param self const QMetaEnum*
/// @param index int
///
int32_t q_metaenum_value(const void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaenum.html#scope)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QMetaEnum*
///
const char* q_metaenum_scope(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaenum.html#keyToValue)
///
/// @param self const QMetaEnum*
/// @param key const char*
///
int32_t q_metaenum_key_to_value(const void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaenum.html#valueToKey)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QMetaEnum*
/// @param value int
///
const char* q_metaenum_value_to_key(const void* self, int value);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaenum.html#keysToValue)
///
/// @param self const QMetaEnum*
/// @param keys const char*
///
int32_t q_metaenum_keys_to_value(const void* self, const char* keys);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaenum.html#valueToKeys)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QMetaEnum*
/// @param value int
///
const char* q_metaenum_value_to_keys(const void* self, int value);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaenum.html#enclosingMetaObject)
///
/// @param self const QMetaEnum*
///
const QMetaObject* q_metaenum_enclosing_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaenum.html#isValid)
///
/// @param self const QMetaEnum*
///
bool q_metaenum_is_valid(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaenum.html#keyToValue)
///
/// @param self const QMetaEnum*
/// @param key const char*
/// @param ok bool*
///
int32_t q_metaenum_key_to_value2(const void* self, const char* key, bool* ok);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaenum.html#keysToValue)
///
/// @param self const QMetaEnum*
/// @param keys const char*
/// @param ok bool*
///
int32_t q_metaenum_keys_to_value2(const void* self, const char* keys, bool* ok);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaenum.html#dtor.QMetaEnum)
///
/// Delete this object from C++ memory.
///
/// @param self QMetaEnum*
///
void q_metaenum_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html)

/// q_metaproperty_new constructs a new QMetaProperty object.
///
/// @param other QMetaProperty*
///
QMetaProperty* q_metaproperty_new(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html)

/// q_metaproperty_new2 constructs a new QMetaProperty object and invalidates the source QMetaProperty object.
///
/// @param other QMetaProperty*
///
QMetaProperty* q_metaproperty_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html)

/// q_metaproperty_new3 constructs a new QMetaProperty object.
///
QMetaProperty* q_metaproperty_new3();

/// q_metaproperty_copy_assign shallow copies `other` into `self`.
///
/// @param self QMetaProperty*
/// @param other QMetaProperty*
///
void q_metaproperty_copy_assign(void* self, void* other);

/// q_metaproperty_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QMetaProperty*
/// @param other QMetaProperty*
///
void q_metaproperty_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QMetaProperty*
///
const char* q_metaproperty_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#typeName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QMetaProperty*
///
const char* q_metaproperty_type_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#type)
///
/// @param self const QMetaProperty*
///
/// @return enum QVariant__Type
///
int32_t q_metaproperty_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#userType)
///
/// @param self const QMetaProperty*
///
int32_t q_metaproperty_user_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#typeId)
///
/// @param self const QMetaProperty*
///
int32_t q_metaproperty_type_id(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#metaType)
///
/// @param self const QMetaProperty*
///
QMetaType* q_metaproperty_meta_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#propertyIndex)
///
/// @param self const QMetaProperty*
///
int32_t q_metaproperty_property_index(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#relativePropertyIndex)
///
/// @param self const QMetaProperty*
///
int32_t q_metaproperty_relative_property_index(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#isReadable)
///
/// @param self const QMetaProperty*
///
bool q_metaproperty_is_readable(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#isWritable)
///
/// @param self const QMetaProperty*
///
bool q_metaproperty_is_writable(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#isResettable)
///
/// @param self const QMetaProperty*
///
bool q_metaproperty_is_resettable(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#isDesignable)
///
/// @param self const QMetaProperty*
///
bool q_metaproperty_is_designable(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#isScriptable)
///
/// @param self const QMetaProperty*
///
bool q_metaproperty_is_scriptable(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#isStored)
///
/// @param self const QMetaProperty*
///
bool q_metaproperty_is_stored(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#isUser)
///
/// @param self const QMetaProperty*
///
bool q_metaproperty_is_user(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#isConstant)
///
/// @param self const QMetaProperty*
///
bool q_metaproperty_is_constant(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#isFinal)
///
/// @param self const QMetaProperty*
///
bool q_metaproperty_is_final(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#isRequired)
///
/// @param self const QMetaProperty*
///
bool q_metaproperty_is_required(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#isBindable)
///
/// @param self const QMetaProperty*
///
bool q_metaproperty_is_bindable(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#isFlagType)
///
/// @param self const QMetaProperty*
///
bool q_metaproperty_is_flag_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#isEnumType)
///
/// @param self const QMetaProperty*
///
bool q_metaproperty_is_enum_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#enumerator)
///
/// @param self const QMetaProperty*
///
QMetaEnum* q_metaproperty_enumerator(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#hasNotifySignal)
///
/// @param self const QMetaProperty*
///
bool q_metaproperty_has_notify_signal(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#notifySignal)
///
/// @param self const QMetaProperty*
///
QMetaMethod* q_metaproperty_notify_signal(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#notifySignalIndex)
///
/// @param self const QMetaProperty*
///
int32_t q_metaproperty_notify_signal_index(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#revision)
///
/// @param self const QMetaProperty*
///
int32_t q_metaproperty_revision(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#read)
///
/// @param self const QMetaProperty*
/// @param obj QObject*
///
QVariant* q_metaproperty_read(const void* self, const void* obj);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#write)
///
/// @param self const QMetaProperty*
/// @param obj QObject*
/// @param value QVariant*
///
bool q_metaproperty_write(const void* self, void* obj, const void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#reset)
///
/// @param self const QMetaProperty*
/// @param obj QObject*
///
bool q_metaproperty_reset(const void* self, void* obj);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#bindable)
///
/// @param self const QMetaProperty*
/// @param object QObject*
///
QUntypedBindable* q_metaproperty_bindable(const void* self, void* object);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#readOnGadget)
///
/// @param self const QMetaProperty*
/// @param gadget void*
///
QVariant* q_metaproperty_read_on_gadget(const void* self, void* gadget);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#writeOnGadget)
///
/// @param self const QMetaProperty*
/// @param gadget void*
/// @param value QVariant*
///
bool q_metaproperty_write_on_gadget(const void* self, void* gadget, const void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#resetOnGadget)
///
/// @param self const QMetaProperty*
/// @param gadget void*
///
bool q_metaproperty_reset_on_gadget(const void* self, void* gadget);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#hasStdCppSet)
///
/// @param self const QMetaProperty*
///
bool q_metaproperty_has_std_cpp_set(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#isAlias)
///
/// @param self const QMetaProperty*
///
bool q_metaproperty_is_alias(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#isValid)
///
/// @param self const QMetaProperty*
///
bool q_metaproperty_is_valid(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#enclosingMetaObject)
///
/// @param self const QMetaProperty*
///
const QMetaObject* q_metaproperty_enclosing_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaproperty.html#dtor.QMetaProperty)
///
/// Delete this object from C++ memory.
///
/// @param self QMetaProperty*
///
void q_metaproperty_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaclassinfo.html)

/// q_metaclassinfo_new constructs a new QMetaClassInfo object.
///
/// @param other QMetaClassInfo*
///
QMetaClassInfo* q_metaclassinfo_new(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaclassinfo.html)

/// q_metaclassinfo_new2 constructs a new QMetaClassInfo object and invalidates the source QMetaClassInfo object.
///
/// @param other QMetaClassInfo*
///
QMetaClassInfo* q_metaclassinfo_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaclassinfo.html)

/// q_metaclassinfo_new3 constructs a new QMetaClassInfo object.
///
QMetaClassInfo* q_metaclassinfo_new3();

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaclassinfo.html)

/// q_metaclassinfo_new4 constructs a new QMetaClassInfo object.
///
/// @param param1 QMetaClassInfo*
///
QMetaClassInfo* q_metaclassinfo_new4(const void* param1);

/// q_metaclassinfo_copy_assign shallow copies `other` into `self`.
///
/// @param self QMetaClassInfo*
/// @param other QMetaClassInfo*
///
void q_metaclassinfo_copy_assign(void* self, void* other);

/// q_metaclassinfo_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QMetaClassInfo*
/// @param other QMetaClassInfo*
///
void q_metaclassinfo_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaclassinfo.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QMetaClassInfo*
///
const char* q_metaclassinfo_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaclassinfo.html#value)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QMetaClassInfo*
///
const char* q_metaclassinfo_value(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaclassinfo.html#enclosingMetaObject)
///
/// @param self const QMetaClassInfo*
///
const QMetaObject* q_metaclassinfo_enclosing_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaclassinfo.html#dtor.QMetaClassInfo)
///
/// Delete this object from C++ memory.
///
/// @param self QMetaClassInfo*
///
void q_metaclassinfo_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#public-types)

typedef enum {
    QMETAMETHOD_ACCESS_PRIVATE = 0,
    QMETAMETHOD_ACCESS_PROTECTED = 1,
    QMETAMETHOD_ACCESS_PUBLIC = 2
} QMetaMethod__Access;

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#public-types)

typedef enum {
    QMETAMETHOD_METHODTYPE_METHOD = 0,
    QMETAMETHOD_METHODTYPE_SIGNAL = 1,
    QMETAMETHOD_METHODTYPE_SLOT = 2,
    QMETAMETHOD_METHODTYPE_CONSTRUCTOR = 3
} QMetaMethod__MethodType;

/// [Upstream resources](https://doc.qt.io/qt-6/qmetaobject.html#public-types)

typedef enum {
    QMETAMETHOD_ATTRIBUTES_COMPATIBILITY = 1,
    QMETAMETHOD_ATTRIBUTES_CLONED = 2,
    QMETAMETHOD_ATTRIBUTES_SCRIPTABLE = 4
} QMetaMethod__Attributes;

#endif
