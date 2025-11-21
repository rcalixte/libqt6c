#pragma once
#ifndef SRC_QT6C_LIBQMETAOBJECT_H
#define SRC_QT6C_LIBQMETAOBJECT_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qmetamethod.html

/// q_metamethod_new constructs a new QMetaMethod object.
///
/// @param other QMetaMethod*
QMetaMethod* q_metamethod_new(void* other);

/// q_metamethod_new2 constructs a new QMetaMethod object and invalidates the source QMetaMethod object.
///
/// @param other QMetaMethod*
QMetaMethod* q_metamethod_new2(void* other);

/// q_metamethod_new3 constructs a new QMetaMethod object.
///
QMetaMethod* q_metamethod_new3();

/// q_metamethod_new4 constructs a new QMetaMethod object.
///
/// @param param1 QMetaMethod*
QMetaMethod* q_metamethod_new4(void* param1);

/// q_metamethod_copy_assign shallow copies `other` into `self`.
///
/// @param self QMetaMethod*
/// @param other QMetaMethod*
void q_metamethod_copy_assign(void* self, void* other);

/// q_metamethod_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QMetaMethod*
/// @param other QMetaMethod*
void q_metamethod_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#methodSignature)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QMetaMethod*
char* q_metamethod_method_signature(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QMetaMethod*
char* q_metamethod_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#typeName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QMetaMethod*
const char* q_metamethod_type_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#returnType)
///
/// @param self QMetaMethod*
int32_t q_metamethod_return_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#returnMetaType)
///
/// @param self QMetaMethod*
QMetaType* q_metamethod_return_meta_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#parameterCount)
///
/// @param self QMetaMethod*
int32_t q_metamethod_parameter_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#parameterType)
///
/// @param self QMetaMethod*
/// @param index int
int32_t q_metamethod_parameter_type(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#parameterMetaType)
///
/// @param self QMetaMethod*
/// @param index int
QMetaType* q_metamethod_parameter_meta_type(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#getParameterTypes)
///
/// @param self QMetaMethod*
/// @param types int*
void q_metamethod_get_parameter_types(void* self, int* types);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#parameterTypes)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QMetaMethod*
const char** q_metamethod_parameter_types(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#parameterTypeName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QMetaMethod*
/// @param index int
char* q_metamethod_parameter_type_name(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#parameterNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QMetaMethod*
const char** q_metamethod_parameter_names(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#tag)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QMetaMethod*
const char* q_metamethod_tag(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#access)
///
/// @param self QMetaMethod*
///
/// @return enum QMetaMethod__Access
int32_t q_metamethod_access(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#methodType)
///
/// @param self QMetaMethod*
///
/// @return enum QMetaMethod__MethodType
int32_t q_metamethod_method_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#attributes)
///
/// @param self QMetaMethod*
int32_t q_metamethod_attributes(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#methodIndex)
///
/// @param self QMetaMethod*
int32_t q_metamethod_method_index(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#relativeMethodIndex)
///
/// @param self QMetaMethod*
int32_t q_metamethod_relative_method_index(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#revision)
///
/// @param self QMetaMethod*
int32_t q_metamethod_revision(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#isConst)
///
/// @param self QMetaMethod*
bool q_metamethod_is_const(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#enclosingMetaObject)
///
/// @param self QMetaMethod*
const QMetaObject* q_metamethod_enclosing_meta_object(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self QMetaMethod*
/// @param object QObject*
/// @param connectionType enum Qt__ConnectionType
/// @param returnValue QGenericReturnArgument*
bool q_metamethod_invoke(void* self, void* object, int32_t connectionType, void* returnValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self QMetaMethod*
/// @param object QObject*
/// @param returnValue QGenericReturnArgument*
bool q_metamethod_invoke2(void* self, void* object, void* returnValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self QMetaMethod*
/// @param object QObject*
/// @param connectionType enum Qt__ConnectionType
/// @param val0 QGenericArgument*
bool q_metamethod_invoke3(void* self, void* object, int32_t connectionType, void* val0);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self QMetaMethod*
/// @param object QObject*
/// @param val0 QGenericArgument*
bool q_metamethod_invoke4(void* self, void* object, void* val0);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// @param self QMetaMethod*
/// @param gadget void*
/// @param returnValue QGenericReturnArgument*
bool q_metamethod_invoke_on_gadget(void* self, void* gadget, void* returnValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// @param self QMetaMethod*
/// @param gadget void*
/// @param val0 QGenericArgument*
bool q_metamethod_invoke_on_gadget2(void* self, void* gadget, void* val0);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#isValid)
///
/// @param self QMetaMethod*
bool q_metamethod_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self QMetaMethod*
/// @param object QObject*
/// @param connectionType enum Qt__ConnectionType
/// @param returnValue QGenericReturnArgument*
/// @param val0 QGenericArgument*
bool q_metamethod_invoke42(void* self, void* object, int32_t connectionType, void* returnValue, void* val0);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self QMetaMethod*
/// @param object QObject*
/// @param connectionType enum Qt__ConnectionType
/// @param returnValue QGenericReturnArgument*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
bool q_metamethod_invoke5(void* self, void* object, int32_t connectionType, void* returnValue, void* val0, void* val1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self QMetaMethod*
/// @param object QObject*
/// @param connectionType enum Qt__ConnectionType
/// @param returnValue QGenericReturnArgument*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
bool q_metamethod_invoke6(void* self, void* object, int32_t connectionType, void* returnValue, void* val0, void* val1, void* val2);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self QMetaMethod*
/// @param object QObject*
/// @param connectionType enum Qt__ConnectionType
/// @param returnValue QGenericReturnArgument*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
bool q_metamethod_invoke7(void* self, void* object, int32_t connectionType, void* returnValue, void* val0, void* val1, void* val2, void* val3);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self QMetaMethod*
/// @param object QObject*
/// @param connectionType enum Qt__ConnectionType
/// @param returnValue QGenericReturnArgument*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
bool q_metamethod_invoke8(void* self, void* object, int32_t connectionType, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self QMetaMethod*
/// @param object QObject*
/// @param connectionType enum Qt__ConnectionType
/// @param returnValue QGenericReturnArgument*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
/// @param val5 QGenericArgument*
bool q_metamethod_invoke9(void* self, void* object, int32_t connectionType, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self QMetaMethod*
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
bool q_metamethod_invoke10(void* self, void* object, int32_t connectionType, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self QMetaMethod*
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
bool q_metamethod_invoke11(void* self, void* object, int32_t connectionType, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self QMetaMethod*
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
bool q_metamethod_invoke12(void* self, void* object, int32_t connectionType, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self QMetaMethod*
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
bool q_metamethod_invoke13(void* self, void* object, int32_t connectionType, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8, void* val9);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self QMetaMethod*
/// @param object QObject*
/// @param returnValue QGenericReturnArgument*
/// @param val0 QGenericArgument*
bool q_metamethod_invoke32(void* self, void* object, void* returnValue, void* val0);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self QMetaMethod*
/// @param object QObject*
/// @param returnValue QGenericReturnArgument*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
bool q_metamethod_invoke43(void* self, void* object, void* returnValue, void* val0, void* val1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self QMetaMethod*
/// @param object QObject*
/// @param returnValue QGenericReturnArgument*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
bool q_metamethod_invoke52(void* self, void* object, void* returnValue, void* val0, void* val1, void* val2);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self QMetaMethod*
/// @param object QObject*
/// @param returnValue QGenericReturnArgument*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
bool q_metamethod_invoke62(void* self, void* object, void* returnValue, void* val0, void* val1, void* val2, void* val3);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self QMetaMethod*
/// @param object QObject*
/// @param returnValue QGenericReturnArgument*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
bool q_metamethod_invoke72(void* self, void* object, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self QMetaMethod*
/// @param object QObject*
/// @param returnValue QGenericReturnArgument*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
/// @param val5 QGenericArgument*
bool q_metamethod_invoke82(void* self, void* object, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self QMetaMethod*
/// @param object QObject*
/// @param returnValue QGenericReturnArgument*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
/// @param val5 QGenericArgument*
/// @param val6 QGenericArgument*
bool q_metamethod_invoke92(void* self, void* object, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self QMetaMethod*
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
bool q_metamethod_invoke102(void* self, void* object, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self QMetaMethod*
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
bool q_metamethod_invoke112(void* self, void* object, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self QMetaMethod*
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
bool q_metamethod_invoke122(void* self, void* object, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8, void* val9);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self QMetaMethod*
/// @param object QObject*
/// @param connectionType enum Qt__ConnectionType
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
bool q_metamethod_invoke44(void* self, void* object, int32_t connectionType, void* val0, void* val1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self QMetaMethod*
/// @param object QObject*
/// @param connectionType enum Qt__ConnectionType
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
bool q_metamethod_invoke53(void* self, void* object, int32_t connectionType, void* val0, void* val1, void* val2);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self QMetaMethod*
/// @param object QObject*
/// @param connectionType enum Qt__ConnectionType
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
bool q_metamethod_invoke63(void* self, void* object, int32_t connectionType, void* val0, void* val1, void* val2, void* val3);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self QMetaMethod*
/// @param object QObject*
/// @param connectionType enum Qt__ConnectionType
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
bool q_metamethod_invoke73(void* self, void* object, int32_t connectionType, void* val0, void* val1, void* val2, void* val3, void* val4);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self QMetaMethod*
/// @param object QObject*
/// @param connectionType enum Qt__ConnectionType
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
/// @param val5 QGenericArgument*
bool q_metamethod_invoke83(void* self, void* object, int32_t connectionType, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self QMetaMethod*
/// @param object QObject*
/// @param connectionType enum Qt__ConnectionType
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
/// @param val5 QGenericArgument*
/// @param val6 QGenericArgument*
bool q_metamethod_invoke93(void* self, void* object, int32_t connectionType, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self QMetaMethod*
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
bool q_metamethod_invoke103(void* self, void* object, int32_t connectionType, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self QMetaMethod*
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
bool q_metamethod_invoke113(void* self, void* object, int32_t connectionType, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self QMetaMethod*
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
bool q_metamethod_invoke123(void* self, void* object, int32_t connectionType, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8, void* val9);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self QMetaMethod*
/// @param object QObject*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
bool q_metamethod_invoke33(void* self, void* object, void* val0, void* val1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self QMetaMethod*
/// @param object QObject*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
bool q_metamethod_invoke45(void* self, void* object, void* val0, void* val1, void* val2);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self QMetaMethod*
/// @param object QObject*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
bool q_metamethod_invoke54(void* self, void* object, void* val0, void* val1, void* val2, void* val3);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self QMetaMethod*
/// @param object QObject*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
bool q_metamethod_invoke64(void* self, void* object, void* val0, void* val1, void* val2, void* val3, void* val4);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self QMetaMethod*
/// @param object QObject*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
/// @param val5 QGenericArgument*
bool q_metamethod_invoke74(void* self, void* object, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self QMetaMethod*
/// @param object QObject*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
/// @param val5 QGenericArgument*
/// @param val6 QGenericArgument*
bool q_metamethod_invoke84(void* self, void* object, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self QMetaMethod*
/// @param object QObject*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
/// @param val5 QGenericArgument*
/// @param val6 QGenericArgument*
/// @param val7 QGenericArgument*
bool q_metamethod_invoke94(void* self, void* object, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self QMetaMethod*
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
bool q_metamethod_invoke104(void* self, void* object, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// @param self QMetaMethod*
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
bool q_metamethod_invoke114(void* self, void* object, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8, void* val9);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// @param self QMetaMethod*
/// @param gadget void*
/// @param returnValue QGenericReturnArgument*
/// @param val0 QGenericArgument*
bool q_metamethod_invoke_on_gadget3(void* self, void* gadget, void* returnValue, void* val0);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// @param self QMetaMethod*
/// @param gadget void*
/// @param returnValue QGenericReturnArgument*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
bool q_metamethod_invoke_on_gadget4(void* self, void* gadget, void* returnValue, void* val0, void* val1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// @param self QMetaMethod*
/// @param gadget void*
/// @param returnValue QGenericReturnArgument*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
bool q_metamethod_invoke_on_gadget5(void* self, void* gadget, void* returnValue, void* val0, void* val1, void* val2);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// @param self QMetaMethod*
/// @param gadget void*
/// @param returnValue QGenericReturnArgument*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
bool q_metamethod_invoke_on_gadget6(void* self, void* gadget, void* returnValue, void* val0, void* val1, void* val2, void* val3);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// @param self QMetaMethod*
/// @param gadget void*
/// @param returnValue QGenericReturnArgument*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
bool q_metamethod_invoke_on_gadget7(void* self, void* gadget, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// @param self QMetaMethod*
/// @param gadget void*
/// @param returnValue QGenericReturnArgument*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
/// @param val5 QGenericArgument*
bool q_metamethod_invoke_on_gadget8(void* self, void* gadget, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// @param self QMetaMethod*
/// @param gadget void*
/// @param returnValue QGenericReturnArgument*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
/// @param val5 QGenericArgument*
/// @param val6 QGenericArgument*
bool q_metamethod_invoke_on_gadget9(void* self, void* gadget, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// @param self QMetaMethod*
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
bool q_metamethod_invoke_on_gadget10(void* self, void* gadget, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// @param self QMetaMethod*
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
bool q_metamethod_invoke_on_gadget11(void* self, void* gadget, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// @param self QMetaMethod*
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
bool q_metamethod_invoke_on_gadget12(void* self, void* gadget, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8, void* val9);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// @param self QMetaMethod*
/// @param gadget void*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
bool q_metamethod_invoke_on_gadget32(void* self, void* gadget, void* val0, void* val1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// @param self QMetaMethod*
/// @param gadget void*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
bool q_metamethod_invoke_on_gadget42(void* self, void* gadget, void* val0, void* val1, void* val2);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// @param self QMetaMethod*
/// @param gadget void*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
bool q_metamethod_invoke_on_gadget52(void* self, void* gadget, void* val0, void* val1, void* val2, void* val3);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// @param self QMetaMethod*
/// @param gadget void*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
bool q_metamethod_invoke_on_gadget62(void* self, void* gadget, void* val0, void* val1, void* val2, void* val3, void* val4);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// @param self QMetaMethod*
/// @param gadget void*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
/// @param val5 QGenericArgument*
bool q_metamethod_invoke_on_gadget72(void* self, void* gadget, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// @param self QMetaMethod*
/// @param gadget void*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
/// @param val5 QGenericArgument*
/// @param val6 QGenericArgument*
bool q_metamethod_invoke_on_gadget82(void* self, void* gadget, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// @param self QMetaMethod*
/// @param gadget void*
/// @param val0 QGenericArgument*
/// @param val1 QGenericArgument*
/// @param val2 QGenericArgument*
/// @param val3 QGenericArgument*
/// @param val4 QGenericArgument*
/// @param val5 QGenericArgument*
/// @param val6 QGenericArgument*
/// @param val7 QGenericArgument*
bool q_metamethod_invoke_on_gadget92(void* self, void* gadget, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// @param self QMetaMethod*
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
bool q_metamethod_invoke_on_gadget102(void* self, void* gadget, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// @param self QMetaMethod*
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
bool q_metamethod_invoke_on_gadget112(void* self, void* gadget, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8, void* val9);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#dtor.QMetaMethod)
///
/// Delete this object from C++ memory.
///
/// @param self QMetaMethod*
void q_metamethod_delete(void* self);

/// https://doc.qt.io/qt-6/qmetaenum.html

/// q_metaenum_new constructs a new QMetaEnum object.
///
/// @param other QMetaEnum*
QMetaEnum* q_metaenum_new(void* other);

/// q_metaenum_new2 constructs a new QMetaEnum object and invalidates the source QMetaEnum object.
///
/// @param other QMetaEnum*
QMetaEnum* q_metaenum_new2(void* other);

/// q_metaenum_new3 constructs a new QMetaEnum object.
///
QMetaEnum* q_metaenum_new3();

/// q_metaenum_new4 constructs a new QMetaEnum object.
///
/// @param param1 QMetaEnum*
QMetaEnum* q_metaenum_new4(void* param1);

/// q_metaenum_copy_assign shallow copies `other` into `self`.
///
/// @param self QMetaEnum*
/// @param other QMetaEnum*
void q_metaenum_copy_assign(void* self, void* other);

/// q_metaenum_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QMetaEnum*
/// @param other QMetaEnum*
void q_metaenum_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaenum.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QMetaEnum*
const char* q_metaenum_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaenum.html#enumName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QMetaEnum*
const char* q_metaenum_enum_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaenum.html#metaType)
///
/// @param self QMetaEnum*
QMetaType* q_metaenum_meta_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaenum.html#isFlag)
///
/// @param self QMetaEnum*
bool q_metaenum_is_flag(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaenum.html#isScoped)
///
/// @param self QMetaEnum*
bool q_metaenum_is_scoped(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaenum.html#keyCount)
///
/// @param self QMetaEnum*
int32_t q_metaenum_key_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaenum.html#key)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QMetaEnum*
/// @param index int
const char* q_metaenum_key(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaenum.html#value)
///
/// @param self QMetaEnum*
/// @param index int
int32_t q_metaenum_value(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaenum.html#scope)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QMetaEnum*
const char* q_metaenum_scope(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaenum.html#keyToValue)
///
/// @param self QMetaEnum*
/// @param key const char*
int32_t q_metaenum_key_to_value(void* self, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaenum.html#valueToKey)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QMetaEnum*
/// @param value int
const char* q_metaenum_value_to_key(void* self, int value);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaenum.html#keysToValue)
///
/// @param self QMetaEnum*
/// @param keys const char*
int32_t q_metaenum_keys_to_value(void* self, const char* keys);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaenum.html#valueToKeys)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QMetaEnum*
/// @param value int
char* q_metaenum_value_to_keys(void* self, int value);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaenum.html#enclosingMetaObject)
///
/// @param self QMetaEnum*
const QMetaObject* q_metaenum_enclosing_meta_object(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaenum.html#isValid)
///
/// @param self QMetaEnum*
bool q_metaenum_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaenum.html#keyToValue)
///
/// @param self QMetaEnum*
/// @param key const char*
/// @param ok bool*
int32_t q_metaenum_key_to_value2(void* self, const char* key, bool* ok);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaenum.html#keysToValue)
///
/// @param self QMetaEnum*
/// @param keys const char*
/// @param ok bool*
int32_t q_metaenum_keys_to_value2(void* self, const char* keys, bool* ok);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaenum.html#dtor.QMetaEnum)
///
/// Delete this object from C++ memory.
///
/// @param self QMetaEnum*
void q_metaenum_delete(void* self);

/// https://doc.qt.io/qt-6/qmetaproperty.html

/// q_metaproperty_new constructs a new QMetaProperty object.
///
/// @param other QMetaProperty*
QMetaProperty* q_metaproperty_new(void* other);

/// q_metaproperty_new2 constructs a new QMetaProperty object and invalidates the source QMetaProperty object.
///
/// @param other QMetaProperty*
QMetaProperty* q_metaproperty_new2(void* other);

/// q_metaproperty_new3 constructs a new QMetaProperty object.
///
QMetaProperty* q_metaproperty_new3();

/// q_metaproperty_copy_assign shallow copies `other` into `self`.
///
/// @param self QMetaProperty*
/// @param other QMetaProperty*
void q_metaproperty_copy_assign(void* self, void* other);

/// q_metaproperty_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QMetaProperty*
/// @param other QMetaProperty*
void q_metaproperty_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QMetaProperty*
const char* q_metaproperty_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#typeName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QMetaProperty*
const char* q_metaproperty_type_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#type)
///
/// @param self QMetaProperty*
///
/// @return enum QVariant__Type
int64_t q_metaproperty_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#userType)
///
/// @param self QMetaProperty*
int32_t q_metaproperty_user_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#typeId)
///
/// @param self QMetaProperty*
int32_t q_metaproperty_type_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#metaType)
///
/// @param self QMetaProperty*
QMetaType* q_metaproperty_meta_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#propertyIndex)
///
/// @param self QMetaProperty*
int32_t q_metaproperty_property_index(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#relativePropertyIndex)
///
/// @param self QMetaProperty*
int32_t q_metaproperty_relative_property_index(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#isReadable)
///
/// @param self QMetaProperty*
bool q_metaproperty_is_readable(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#isWritable)
///
/// @param self QMetaProperty*
bool q_metaproperty_is_writable(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#isResettable)
///
/// @param self QMetaProperty*
bool q_metaproperty_is_resettable(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#isDesignable)
///
/// @param self QMetaProperty*
bool q_metaproperty_is_designable(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#isScriptable)
///
/// @param self QMetaProperty*
bool q_metaproperty_is_scriptable(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#isStored)
///
/// @param self QMetaProperty*
bool q_metaproperty_is_stored(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#isUser)
///
/// @param self QMetaProperty*
bool q_metaproperty_is_user(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#isConstant)
///
/// @param self QMetaProperty*
bool q_metaproperty_is_constant(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#isFinal)
///
/// @param self QMetaProperty*
bool q_metaproperty_is_final(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#isRequired)
///
/// @param self QMetaProperty*
bool q_metaproperty_is_required(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#isBindable)
///
/// @param self QMetaProperty*
bool q_metaproperty_is_bindable(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#isFlagType)
///
/// @param self QMetaProperty*
bool q_metaproperty_is_flag_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#isEnumType)
///
/// @param self QMetaProperty*
bool q_metaproperty_is_enum_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#enumerator)
///
/// @param self QMetaProperty*
QMetaEnum* q_metaproperty_enumerator(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#hasNotifySignal)
///
/// @param self QMetaProperty*
bool q_metaproperty_has_notify_signal(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#notifySignal)
///
/// @param self QMetaProperty*
QMetaMethod* q_metaproperty_notify_signal(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#notifySignalIndex)
///
/// @param self QMetaProperty*
int32_t q_metaproperty_notify_signal_index(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#revision)
///
/// @param self QMetaProperty*
int32_t q_metaproperty_revision(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#read)
///
/// @param self QMetaProperty*
/// @param obj QObject*
QVariant* q_metaproperty_read(void* self, void* obj);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#write)
///
/// @param self QMetaProperty*
/// @param obj QObject*
/// @param value QVariant*
bool q_metaproperty_write(void* self, void* obj, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#reset)
///
/// @param self QMetaProperty*
/// @param obj QObject*
bool q_metaproperty_reset(void* self, void* obj);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#bindable)
///
/// @param self QMetaProperty*
/// @param object QObject*
QUntypedBindable* q_metaproperty_bindable(void* self, void* object);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#readOnGadget)
///
/// @param self QMetaProperty*
/// @param gadget void*
QVariant* q_metaproperty_read_on_gadget(void* self, void* gadget);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#writeOnGadget)
///
/// @param self QMetaProperty*
/// @param gadget void*
/// @param value QVariant*
bool q_metaproperty_write_on_gadget(void* self, void* gadget, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#resetOnGadget)
///
/// @param self QMetaProperty*
/// @param gadget void*
bool q_metaproperty_reset_on_gadget(void* self, void* gadget);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#hasStdCppSet)
///
/// @param self QMetaProperty*
bool q_metaproperty_has_std_cpp_set(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#isAlias)
///
/// @param self QMetaProperty*
bool q_metaproperty_is_alias(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#isValid)
///
/// @param self QMetaProperty*
bool q_metaproperty_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#enclosingMetaObject)
///
/// @param self QMetaProperty*
const QMetaObject* q_metaproperty_enclosing_meta_object(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#dtor.QMetaProperty)
///
/// Delete this object from C++ memory.
///
/// @param self QMetaProperty*
void q_metaproperty_delete(void* self);

/// https://doc.qt.io/qt-6/qmetaclassinfo.html

/// q_metaclassinfo_new constructs a new QMetaClassInfo object.
///
/// @param other QMetaClassInfo*
QMetaClassInfo* q_metaclassinfo_new(void* other);

/// q_metaclassinfo_new2 constructs a new QMetaClassInfo object and invalidates the source QMetaClassInfo object.
///
/// @param other QMetaClassInfo*
QMetaClassInfo* q_metaclassinfo_new2(void* other);

/// q_metaclassinfo_new3 constructs a new QMetaClassInfo object.
///
QMetaClassInfo* q_metaclassinfo_new3();

/// q_metaclassinfo_new4 constructs a new QMetaClassInfo object.
///
/// @param param1 QMetaClassInfo*
QMetaClassInfo* q_metaclassinfo_new4(void* param1);

/// q_metaclassinfo_copy_assign shallow copies `other` into `self`.
///
/// @param self QMetaClassInfo*
/// @param other QMetaClassInfo*
void q_metaclassinfo_copy_assign(void* self, void* other);

/// q_metaclassinfo_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QMetaClassInfo*
/// @param other QMetaClassInfo*
void q_metaclassinfo_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaclassinfo.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QMetaClassInfo*
const char* q_metaclassinfo_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaclassinfo.html#value)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QMetaClassInfo*
const char* q_metaclassinfo_value(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaclassinfo.html#enclosingMetaObject)
///
/// @param self QMetaClassInfo*
const QMetaObject* q_metaclassinfo_enclosing_meta_object(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaclassinfo.html#dtor.QMetaClassInfo)
///
/// Delete this object from C++ memory.
///
/// @param self QMetaClassInfo*
void q_metaclassinfo_delete(void* self);

/// https://doc.qt.io/qt-6/qmetaobject.html#types

typedef enum {
    QMETAMETHOD_ACCESS_PRIVATE = 0,
    QMETAMETHOD_ACCESS_PROTECTED = 1,
    QMETAMETHOD_ACCESS_PUBLIC = 2
} QMetaMethod__Access;

typedef enum {
    QMETAMETHOD_METHODTYPE_METHOD = 0,
    QMETAMETHOD_METHODTYPE_SIGNAL = 1,
    QMETAMETHOD_METHODTYPE_SLOT = 2,
    QMETAMETHOD_METHODTYPE_CONSTRUCTOR = 3
} QMetaMethod__MethodType;

typedef enum {
    QMETAMETHOD_ATTRIBUTES_COMPATIBILITY = 1,
    QMETAMETHOD_ATTRIBUTES_CLONED = 2,
    QMETAMETHOD_ATTRIBUTES_SCRIPTABLE = 4
} QMetaMethod__Attributes;

#endif
