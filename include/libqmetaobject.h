#pragma once
#ifndef SRCQT6C_LIBQMETAOBJECT_H
#define SRCQT6C_LIBQMETAOBJECT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqobjectdefs.h"
#include "libqmetatype.h"
#include "libqobject.h"
#include "libqproperty.h"
#include "libqvariant.h"

/// https://doc.qt.io/qt-6/qmetamethod.html

/// q_metamethod_new constructs a new QMetaMethod object.
///
/// ``` QMetaMethod* other ```
QMetaMethod* q_metamethod_new(void* other);

/// q_metamethod_new2 constructs a new QMetaMethod object and invalidates the source QMetaMethod object.
///
/// ``` QMetaMethod* other ```
QMetaMethod* q_metamethod_new2(void* other);

/// q_metamethod_new3 constructs a new QMetaMethod object.
///
///
QMetaMethod* q_metamethod_new3();

/// q_metamethod_new4 constructs a new QMetaMethod object.
///
/// ``` QMetaMethod* param1 ```
QMetaMethod* q_metamethod_new4(void* param1);

/// q_metamethod_copy_assign shallow copies `other` into `self`.
///
/// ``` QMetaMethod* self, QMetaMethod* other ```
void q_metamethod_copy_assign(void* self, void* other);

/// q_metamethod_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QMetaMethod* self, QMetaMethod* other ```
void q_metamethod_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#methodSignature)
///
/// ``` QMetaMethod* self ```
char* q_metamethod_method_signature(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#name)
///
/// ``` QMetaMethod* self ```
char* q_metamethod_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#typeName)
///
/// ``` QMetaMethod* self ```
const char* q_metamethod_type_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#returnType)
///
/// ``` QMetaMethod* self ```
int32_t q_metamethod_return_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#returnMetaType)
///
/// ``` QMetaMethod* self ```
QMetaType* q_metamethod_return_meta_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#parameterCount)
///
/// ``` QMetaMethod* self ```
int32_t q_metamethod_parameter_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#parameterType)
///
/// ``` QMetaMethod* self, int index ```
int32_t q_metamethod_parameter_type(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#parameterMetaType)
///
/// ``` QMetaMethod* self, int index ```
QMetaType* q_metamethod_parameter_meta_type(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#getParameterTypes)
///
/// ``` QMetaMethod* self, int* types ```
void q_metamethod_get_parameter_types(void* self, int* types);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#parameterTypes)
///
/// ``` QMetaMethod* self ```
const char** q_metamethod_parameter_types(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#parameterTypeName)
///
/// ``` QMetaMethod* self, int index ```
char* q_metamethod_parameter_type_name(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#parameterNames)
///
/// ``` QMetaMethod* self ```
const char** q_metamethod_parameter_names(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#tag)
///
/// ``` QMetaMethod* self ```
const char* q_metamethod_tag(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#access)
///
/// ``` QMetaMethod* self ```
int64_t q_metamethod_access(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#methodType)
///
/// ``` QMetaMethod* self ```
int64_t q_metamethod_method_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#attributes)
///
/// ``` QMetaMethod* self ```
int32_t q_metamethod_attributes(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#methodIndex)
///
/// ``` QMetaMethod* self ```
int32_t q_metamethod_method_index(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#relativeMethodIndex)
///
/// ``` QMetaMethod* self ```
int32_t q_metamethod_relative_method_index(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#revision)
///
/// ``` QMetaMethod* self ```
int32_t q_metamethod_revision(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#isConst)
///
/// ``` QMetaMethod* self ```
bool q_metamethod_is_const(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#enclosingMetaObject)
///
/// ``` QMetaMethod* self ```
QMetaObject* q_metamethod_enclosing_meta_object(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, enum Qt__ConnectionType connectionType, QGenericReturnArgument* returnValue ```
bool q_metamethod_invoke(void* self, void* object, int64_t connectionType, void* returnValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue ```
bool q_metamethod_invoke2(void* self, void* object, void* returnValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, enum Qt__ConnectionType connectionType ```
bool q_metamethod_invoke3(void* self, void* object, int64_t connectionType);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object ```
bool q_metamethod_invoke_with_object(void* self, void* object);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// ``` QMetaMethod* self, void* gadget, QGenericReturnArgument* returnValue ```
bool q_metamethod_invoke_on_gadget(void* self, void* gadget, void* returnValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// ``` QMetaMethod* self, void* gadget ```
bool q_metamethod_invoke_on_gadget_with_gadget(void* self, void* gadget);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#isValid)
///
/// ``` QMetaMethod* self ```
bool q_metamethod_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, enum Qt__ConnectionType connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0 ```
bool q_metamethod_invoke4(void* self, void* object, int64_t connectionType, void* returnValue, void* val0);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, enum Qt__ConnectionType connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1 ```
bool q_metamethod_invoke5(void* self, void* object, int64_t connectionType, void* returnValue, void* val0, void* val1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, enum Qt__ConnectionType connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2 ```
bool q_metamethod_invoke6(void* self, void* object, int64_t connectionType, void* returnValue, void* val0, void* val1, void* val2);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, enum Qt__ConnectionType connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3 ```
bool q_metamethod_invoke7(void* self, void* object, int64_t connectionType, void* returnValue, void* val0, void* val1, void* val2, void* val3);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, enum Qt__ConnectionType connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4 ```
bool q_metamethod_invoke8(void* self, void* object, int64_t connectionType, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, enum Qt__ConnectionType connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5 ```
bool q_metamethod_invoke9(void* self, void* object, int64_t connectionType, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, enum Qt__ConnectionType connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6 ```
bool q_metamethod_invoke10(void* self, void* object, int64_t connectionType, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, enum Qt__ConnectionType connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7 ```
bool q_metamethod_invoke11(void* self, void* object, int64_t connectionType, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, enum Qt__ConnectionType connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8 ```
bool q_metamethod_invoke12(void* self, void* object, int64_t connectionType, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, enum Qt__ConnectionType connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9 ```
bool q_metamethod_invoke13(void* self, void* object, int64_t connectionType, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8, void* val9);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0 ```
bool q_metamethod_invoke32(void* self, void* object, void* returnValue, void* val0);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1 ```
bool q_metamethod_invoke42(void* self, void* object, void* returnValue, void* val0, void* val1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2 ```
bool q_metamethod_invoke52(void* self, void* object, void* returnValue, void* val0, void* val1, void* val2);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3 ```
bool q_metamethod_invoke62(void* self, void* object, void* returnValue, void* val0, void* val1, void* val2, void* val3);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4 ```
bool q_metamethod_invoke72(void* self, void* object, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5 ```
bool q_metamethod_invoke82(void* self, void* object, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6 ```
bool q_metamethod_invoke92(void* self, void* object, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7 ```
bool q_metamethod_invoke102(void* self, void* object, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8 ```
bool q_metamethod_invoke112(void* self, void* object, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9 ```
bool q_metamethod_invoke122(void* self, void* object, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8, void* val9);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, enum Qt__ConnectionType connectionType, QGenericArgument* val0 ```
bool q_metamethod_invoke33(void* self, void* object, int64_t connectionType, void* val0);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, enum Qt__ConnectionType connectionType, QGenericArgument* val0, QGenericArgument* val1 ```
bool q_metamethod_invoke43(void* self, void* object, int64_t connectionType, void* val0, void* val1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, enum Qt__ConnectionType connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2 ```
bool q_metamethod_invoke53(void* self, void* object, int64_t connectionType, void* val0, void* val1, void* val2);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, enum Qt__ConnectionType connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3 ```
bool q_metamethod_invoke63(void* self, void* object, int64_t connectionType, void* val0, void* val1, void* val2, void* val3);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, enum Qt__ConnectionType connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4 ```
bool q_metamethod_invoke73(void* self, void* object, int64_t connectionType, void* val0, void* val1, void* val2, void* val3, void* val4);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, enum Qt__ConnectionType connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5 ```
bool q_metamethod_invoke83(void* self, void* object, int64_t connectionType, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, enum Qt__ConnectionType connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6 ```
bool q_metamethod_invoke93(void* self, void* object, int64_t connectionType, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, enum Qt__ConnectionType connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7 ```
bool q_metamethod_invoke103(void* self, void* object, int64_t connectionType, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, enum Qt__ConnectionType connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8 ```
bool q_metamethod_invoke113(void* self, void* object, int64_t connectionType, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, enum Qt__ConnectionType connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9 ```
bool q_metamethod_invoke123(void* self, void* object, int64_t connectionType, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8, void* val9);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, QGenericArgument* val0 ```
bool q_metamethod_invoke22(void* self, void* object, void* val0);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1 ```
bool q_metamethod_invoke34(void* self, void* object, void* val0, void* val1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2 ```
bool q_metamethod_invoke44(void* self, void* object, void* val0, void* val1, void* val2);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3 ```
bool q_metamethod_invoke54(void* self, void* object, void* val0, void* val1, void* val2, void* val3);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4 ```
bool q_metamethod_invoke64(void* self, void* object, void* val0, void* val1, void* val2, void* val3, void* val4);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5 ```
bool q_metamethod_invoke74(void* self, void* object, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6 ```
bool q_metamethod_invoke84(void* self, void* object, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7 ```
bool q_metamethod_invoke94(void* self, void* object, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8 ```
bool q_metamethod_invoke104(void* self, void* object, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9 ```
bool q_metamethod_invoke114(void* self, void* object, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8, void* val9);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// ``` QMetaMethod* self, void* gadget, QGenericReturnArgument* returnValue, QGenericArgument* val0 ```
bool q_metamethod_invoke_on_gadget3(void* self, void* gadget, void* returnValue, void* val0);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// ``` QMetaMethod* self, void* gadget, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1 ```
bool q_metamethod_invoke_on_gadget4(void* self, void* gadget, void* returnValue, void* val0, void* val1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// ``` QMetaMethod* self, void* gadget, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2 ```
bool q_metamethod_invoke_on_gadget5(void* self, void* gadget, void* returnValue, void* val0, void* val1, void* val2);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// ``` QMetaMethod* self, void* gadget, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3 ```
bool q_metamethod_invoke_on_gadget6(void* self, void* gadget, void* returnValue, void* val0, void* val1, void* val2, void* val3);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// ``` QMetaMethod* self, void* gadget, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4 ```
bool q_metamethod_invoke_on_gadget7(void* self, void* gadget, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// ``` QMetaMethod* self, void* gadget, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5 ```
bool q_metamethod_invoke_on_gadget8(void* self, void* gadget, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// ``` QMetaMethod* self, void* gadget, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6 ```
bool q_metamethod_invoke_on_gadget9(void* self, void* gadget, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// ``` QMetaMethod* self, void* gadget, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7 ```
bool q_metamethod_invoke_on_gadget10(void* self, void* gadget, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// ``` QMetaMethod* self, void* gadget, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8 ```
bool q_metamethod_invoke_on_gadget11(void* self, void* gadget, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// ``` QMetaMethod* self, void* gadget, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9 ```
bool q_metamethod_invoke_on_gadget12(void* self, void* gadget, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8, void* val9);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// ``` QMetaMethod* self, void* gadget, QGenericArgument* val0 ```
bool q_metamethod_invoke_on_gadget2(void* self, void* gadget, void* val0);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// ``` QMetaMethod* self, void* gadget, QGenericArgument* val0, QGenericArgument* val1 ```
bool q_metamethod_invoke_on_gadget32(void* self, void* gadget, void* val0, void* val1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// ``` QMetaMethod* self, void* gadget, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2 ```
bool q_metamethod_invoke_on_gadget42(void* self, void* gadget, void* val0, void* val1, void* val2);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// ``` QMetaMethod* self, void* gadget, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3 ```
bool q_metamethod_invoke_on_gadget52(void* self, void* gadget, void* val0, void* val1, void* val2, void* val3);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// ``` QMetaMethod* self, void* gadget, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4 ```
bool q_metamethod_invoke_on_gadget62(void* self, void* gadget, void* val0, void* val1, void* val2, void* val3, void* val4);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// ``` QMetaMethod* self, void* gadget, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5 ```
bool q_metamethod_invoke_on_gadget72(void* self, void* gadget, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// ``` QMetaMethod* self, void* gadget, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6 ```
bool q_metamethod_invoke_on_gadget82(void* self, void* gadget, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// ``` QMetaMethod* self, void* gadget, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7 ```
bool q_metamethod_invoke_on_gadget92(void* self, void* gadget, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// ``` QMetaMethod* self, void* gadget, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8 ```
bool q_metamethod_invoke_on_gadget102(void* self, void* gadget, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// ``` QMetaMethod* self, void* gadget, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9 ```
bool q_metamethod_invoke_on_gadget112(void* self, void* gadget, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8, void* val9);

/// Delete this object from C++ memory.
///
/// ``` QMetaMethod* self ```
void q_metamethod_delete(void* self);

/// https://doc.qt.io/qt-6/qmetaenum.html

/// q_metaenum_new constructs a new QMetaEnum object.
///
/// ``` QMetaEnum* other ```
QMetaEnum* q_metaenum_new(void* other);

/// q_metaenum_new2 constructs a new QMetaEnum object and invalidates the source QMetaEnum object.
///
/// ``` QMetaEnum* other ```
QMetaEnum* q_metaenum_new2(void* other);

/// q_metaenum_new3 constructs a new QMetaEnum object.
///
///
QMetaEnum* q_metaenum_new3();

/// q_metaenum_new4 constructs a new QMetaEnum object.
///
/// ``` QMetaEnum* param1 ```
QMetaEnum* q_metaenum_new4(void* param1);

/// q_metaenum_copy_assign shallow copies `other` into `self`.
///
/// ``` QMetaEnum* self, QMetaEnum* other ```
void q_metaenum_copy_assign(void* self, void* other);

/// q_metaenum_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QMetaEnum* self, QMetaEnum* other ```
void q_metaenum_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaenum.html#name)
///
/// ``` QMetaEnum* self ```
const char* q_metaenum_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaenum.html#enumName)
///
/// ``` QMetaEnum* self ```
const char* q_metaenum_enum_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaenum.html#isFlag)
///
/// ``` QMetaEnum* self ```
bool q_metaenum_is_flag(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaenum.html#isScoped)
///
/// ``` QMetaEnum* self ```
bool q_metaenum_is_scoped(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaenum.html#keyCount)
///
/// ``` QMetaEnum* self ```
int32_t q_metaenum_key_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaenum.html#key)
///
/// ``` QMetaEnum* self, int index ```
const char* q_metaenum_key(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaenum.html#value)
///
/// ``` QMetaEnum* self, int index ```
int32_t q_metaenum_value(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaenum.html#scope)
///
/// ``` QMetaEnum* self ```
const char* q_metaenum_scope(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaenum.html#keyToValue)
///
/// ``` QMetaEnum* self, const char* key ```
int32_t q_metaenum_key_to_value(void* self, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaenum.html#valueToKey)
///
/// ``` QMetaEnum* self, int value ```
const char* q_metaenum_value_to_key(void* self, int value);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaenum.html#keysToValue)
///
/// ``` QMetaEnum* self, const char* keys ```
int32_t q_metaenum_keys_to_value(void* self, const char* keys);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaenum.html#valueToKeys)
///
/// ``` QMetaEnum* self, int value ```
char* q_metaenum_value_to_keys(void* self, int value);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaenum.html#enclosingMetaObject)
///
/// ``` QMetaEnum* self ```
QMetaObject* q_metaenum_enclosing_meta_object(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaenum.html#isValid)
///
/// ``` QMetaEnum* self ```
bool q_metaenum_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaenum.html#keyToValue)
///
/// ``` QMetaEnum* self, const char* key, bool* ok ```
int32_t q_metaenum_key_to_value2(void* self, const char* key, bool* ok);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaenum.html#keysToValue)
///
/// ``` QMetaEnum* self, const char* keys, bool* ok ```
int32_t q_metaenum_keys_to_value2(void* self, const char* keys, bool* ok);

/// Delete this object from C++ memory.
///
/// ``` QMetaEnum* self ```
void q_metaenum_delete(void* self);

/// https://doc.qt.io/qt-6/qmetaproperty.html

/// q_metaproperty_new constructs a new QMetaProperty object.
///
/// ``` QMetaProperty* other ```
QMetaProperty* q_metaproperty_new(void* other);

/// q_metaproperty_new2 constructs a new QMetaProperty object and invalidates the source QMetaProperty object.
///
/// ``` QMetaProperty* other ```
QMetaProperty* q_metaproperty_new2(void* other);

/// q_metaproperty_new3 constructs a new QMetaProperty object.
///
///
QMetaProperty* q_metaproperty_new3();

/// q_metaproperty_copy_assign shallow copies `other` into `self`.
///
/// ``` QMetaProperty* self, QMetaProperty* other ```
void q_metaproperty_copy_assign(void* self, void* other);

/// q_metaproperty_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QMetaProperty* self, QMetaProperty* other ```
void q_metaproperty_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#name)
///
/// ``` QMetaProperty* self ```
const char* q_metaproperty_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#typeName)
///
/// ``` QMetaProperty* self ```
const char* q_metaproperty_type_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#type)
///
/// ``` QMetaProperty* self ```
int64_t q_metaproperty_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#userType)
///
/// ``` QMetaProperty* self ```
int32_t q_metaproperty_user_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#typeId)
///
/// ``` QMetaProperty* self ```
int32_t q_metaproperty_type_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#metaType)
///
/// ``` QMetaProperty* self ```
QMetaType* q_metaproperty_meta_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#propertyIndex)
///
/// ``` QMetaProperty* self ```
int32_t q_metaproperty_property_index(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#relativePropertyIndex)
///
/// ``` QMetaProperty* self ```
int32_t q_metaproperty_relative_property_index(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#isReadable)
///
/// ``` QMetaProperty* self ```
bool q_metaproperty_is_readable(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#isWritable)
///
/// ``` QMetaProperty* self ```
bool q_metaproperty_is_writable(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#isResettable)
///
/// ``` QMetaProperty* self ```
bool q_metaproperty_is_resettable(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#isDesignable)
///
/// ``` QMetaProperty* self ```
bool q_metaproperty_is_designable(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#isScriptable)
///
/// ``` QMetaProperty* self ```
bool q_metaproperty_is_scriptable(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#isStored)
///
/// ``` QMetaProperty* self ```
bool q_metaproperty_is_stored(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#isUser)
///
/// ``` QMetaProperty* self ```
bool q_metaproperty_is_user(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#isConstant)
///
/// ``` QMetaProperty* self ```
bool q_metaproperty_is_constant(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#isFinal)
///
/// ``` QMetaProperty* self ```
bool q_metaproperty_is_final(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#isRequired)
///
/// ``` QMetaProperty* self ```
bool q_metaproperty_is_required(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#isBindable)
///
/// ``` QMetaProperty* self ```
bool q_metaproperty_is_bindable(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#isFlagType)
///
/// ``` QMetaProperty* self ```
bool q_metaproperty_is_flag_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#isEnumType)
///
/// ``` QMetaProperty* self ```
bool q_metaproperty_is_enum_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#enumerator)
///
/// ``` QMetaProperty* self ```
QMetaEnum* q_metaproperty_enumerator(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#hasNotifySignal)
///
/// ``` QMetaProperty* self ```
bool q_metaproperty_has_notify_signal(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#notifySignal)
///
/// ``` QMetaProperty* self ```
QMetaMethod* q_metaproperty_notify_signal(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#notifySignalIndex)
///
/// ``` QMetaProperty* self ```
int32_t q_metaproperty_notify_signal_index(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#revision)
///
/// ``` QMetaProperty* self ```
int32_t q_metaproperty_revision(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#read)
///
/// ``` QMetaProperty* self, QObject* obj ```
QVariant* q_metaproperty_read(void* self, void* obj);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#write)
///
/// ``` QMetaProperty* self, QObject* obj, QVariant* value ```
bool q_metaproperty_write(void* self, void* obj, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#reset)
///
/// ``` QMetaProperty* self, QObject* obj ```
bool q_metaproperty_reset(void* self, void* obj);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#bindable)
///
/// ``` QMetaProperty* self, QObject* object ```
QUntypedBindable* q_metaproperty_bindable(void* self, void* object);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#readOnGadget)
///
/// ``` QMetaProperty* self, void* gadget ```
QVariant* q_metaproperty_read_on_gadget(void* self, void* gadget);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#writeOnGadget)
///
/// ``` QMetaProperty* self, void* gadget, QVariant* value ```
bool q_metaproperty_write_on_gadget(void* self, void* gadget, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#resetOnGadget)
///
/// ``` QMetaProperty* self, void* gadget ```
bool q_metaproperty_reset_on_gadget(void* self, void* gadget);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#hasStdCppSet)
///
/// ``` QMetaProperty* self ```
bool q_metaproperty_has_std_cpp_set(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#isAlias)
///
/// ``` QMetaProperty* self ```
bool q_metaproperty_is_alias(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#isValid)
///
/// ``` QMetaProperty* self ```
bool q_metaproperty_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#enclosingMetaObject)
///
/// ``` QMetaProperty* self ```
QMetaObject* q_metaproperty_enclosing_meta_object(void* self);

/// Delete this object from C++ memory.
///
/// ``` QMetaProperty* self ```
void q_metaproperty_delete(void* self);

/// https://doc.qt.io/qt-6/qmetaclassinfo.html

/// q_metaclassinfo_new constructs a new QMetaClassInfo object.
///
/// ``` QMetaClassInfo* other ```
QMetaClassInfo* q_metaclassinfo_new(void* other);

/// q_metaclassinfo_new2 constructs a new QMetaClassInfo object and invalidates the source QMetaClassInfo object.
///
/// ``` QMetaClassInfo* other ```
QMetaClassInfo* q_metaclassinfo_new2(void* other);

/// q_metaclassinfo_new3 constructs a new QMetaClassInfo object.
///
///
QMetaClassInfo* q_metaclassinfo_new3();

/// q_metaclassinfo_copy_assign shallow copies `other` into `self`.
///
/// ``` QMetaClassInfo* self, QMetaClassInfo* other ```
void q_metaclassinfo_copy_assign(void* self, void* other);

/// q_metaclassinfo_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QMetaClassInfo* self, QMetaClassInfo* other ```
void q_metaclassinfo_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaclassinfo.html#name)
///
/// ``` QMetaClassInfo* self ```
const char* q_metaclassinfo_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaclassinfo.html#value)
///
/// ``` QMetaClassInfo* self ```
const char* q_metaclassinfo_value(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaclassinfo.html#enclosingMetaObject)
///
/// ``` QMetaClassInfo* self ```
QMetaObject* q_metaclassinfo_enclosing_meta_object(void* self);

/// Delete this object from C++ memory.
///
/// ``` QMetaClassInfo* self ```
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
