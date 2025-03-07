#include "libqobjectdefs.hpp"
#include "libqmetatype.hpp"
#include "libqobject.hpp"
#include "libqproperty.hpp"
#include "libqvariant.hpp"
#include "libqmetaobject.hpp"
#include "libqmetaobject.h"

/// https://doc.qt.io/qt-6/qmetamethod.html

/// q_metamethod_new constructs a new QMetaMethod object.
///
/// ``` QMetaMethod* other ```
QMetaMethod* q_metamethod_new(void* other) {
    return QMetaMethod_new((QMetaMethod*)other);
}

/// q_metamethod_new2 constructs a new QMetaMethod object and invalidates the source QMetaMethod object.
///
/// ``` QMetaMethod* other ```
QMetaMethod* q_metamethod_new2(void* other) {
    return QMetaMethod_new2((QMetaMethod*)other);
}

/// q_metamethod_new3 constructs a new QMetaMethod object.
///
///
QMetaMethod* q_metamethod_new3() {
    return QMetaMethod_new3();
}

/// q_metamethod_new4 constructs a new QMetaMethod object.
///
/// ``` QMetaMethod* param1 ```
QMetaMethod* q_metamethod_new4(void* param1) {
    return QMetaMethod_new4((QMetaMethod*)param1);
}

/// q_metamethod_copy_assign shallow copies `other` into `self`.
///
/// ``` QMetaMethod* self, QMetaMethod* other ```
void q_metamethod_copy_assign(void* self, void* other) {
    QMetaMethod_CopyAssign((QMetaMethod*)self, (QMetaMethod*)other);
}

/// q_metamethod_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QMetaMethod* self, QMetaMethod* other ```
void q_metamethod_move_assign(void* self, void* other) {
    QMetaMethod_MoveAssign((QMetaMethod*)self, (QMetaMethod*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#methodSignature)
///
/// ``` QMetaMethod* self ```
char* q_metamethod_method_signature(void* self) {
    libqt_string _str = QMetaMethod_MethodSignature((QMetaMethod*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#name)
///
/// ``` QMetaMethod* self ```
char* q_metamethod_name(void* self) {
    libqt_string _str = QMetaMethod_Name((QMetaMethod*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#typeName)
///
/// ``` QMetaMethod* self ```
const char* q_metamethod_type_name(void* self) {
    return QMetaMethod_TypeName((QMetaMethod*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#returnType)
///
/// ``` QMetaMethod* self ```
int32_t q_metamethod_return_type(void* self) {
    return QMetaMethod_ReturnType((QMetaMethod*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#returnMetaType)
///
/// ``` QMetaMethod* self ```
QMetaType* q_metamethod_return_meta_type(void* self) {
    return QMetaMethod_ReturnMetaType((QMetaMethod*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#parameterCount)
///
/// ``` QMetaMethod* self ```
int32_t q_metamethod_parameter_count(void* self) {
    return QMetaMethod_ParameterCount((QMetaMethod*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#parameterType)
///
/// ``` QMetaMethod* self, int index ```
int32_t q_metamethod_parameter_type(void* self, int index) {
    return QMetaMethod_ParameterType((QMetaMethod*)self, index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#parameterMetaType)
///
/// ``` QMetaMethod* self, int index ```
QMetaType* q_metamethod_parameter_meta_type(void* self, int index) {
    return QMetaMethod_ParameterMetaType((QMetaMethod*)self, index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#getParameterTypes)
///
/// ``` QMetaMethod* self, int* types ```
void q_metamethod_get_parameter_types(void* self, int* types) {
    QMetaMethod_GetParameterTypes((QMetaMethod*)self, types);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#parameterTypes)
///
/// ``` QMetaMethod* self ```
const char** q_metamethod_parameter_types(void* self) {
    libqt_list _arr = QMetaMethod_ParameterTypes((QMetaMethod*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#parameterTypeName)
///
/// ``` QMetaMethod* self, int index ```
char* q_metamethod_parameter_type_name(void* self, int index) {
    libqt_string _str = QMetaMethod_ParameterTypeName((QMetaMethod*)self, index);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#parameterNames)
///
/// ``` QMetaMethod* self ```
const char** q_metamethod_parameter_names(void* self) {
    libqt_list _arr = QMetaMethod_ParameterNames((QMetaMethod*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#tag)
///
/// ``` QMetaMethod* self ```
const char* q_metamethod_tag(void* self) {
    return QMetaMethod_Tag((QMetaMethod*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#access)
///
/// ``` QMetaMethod* self ```
int64_t q_metamethod_access(void* self) {
    return QMetaMethod_Access((QMetaMethod*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#methodType)
///
/// ``` QMetaMethod* self ```
int64_t q_metamethod_method_type(void* self) {
    return QMetaMethod_MethodType((QMetaMethod*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#attributes)
///
/// ``` QMetaMethod* self ```
int32_t q_metamethod_attributes(void* self) {
    return QMetaMethod_Attributes((QMetaMethod*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#methodIndex)
///
/// ``` QMetaMethod* self ```
int32_t q_metamethod_method_index(void* self) {
    return QMetaMethod_MethodIndex((QMetaMethod*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#relativeMethodIndex)
///
/// ``` QMetaMethod* self ```
int32_t q_metamethod_relative_method_index(void* self) {
    return QMetaMethod_RelativeMethodIndex((QMetaMethod*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#revision)
///
/// ``` QMetaMethod* self ```
int32_t q_metamethod_revision(void* self) {
    return QMetaMethod_Revision((QMetaMethod*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#isConst)
///
/// ``` QMetaMethod* self ```
bool q_metamethod_is_const(void* self) {
    return QMetaMethod_IsConst((QMetaMethod*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#enclosingMetaObject)
///
/// ``` QMetaMethod* self ```
QMetaObject* q_metamethod_enclosing_meta_object(void* self) {
    return QMetaMethod_EnclosingMetaObject((QMetaMethod*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, enum Qt__ConnectionType connectionType, QGenericReturnArgument* returnValue ```
bool q_metamethod_invoke(void* self, void* object, int64_t connectionType, void* returnValue) {
    return QMetaMethod_Invoke((QMetaMethod*)self, (QObject*)object, connectionType, (QGenericReturnArgument*)returnValue);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue ```
bool q_metamethod_invoke2(void* self, void* object, void* returnValue) {
    return QMetaMethod_Invoke2((QMetaMethod*)self, (QObject*)object, (QGenericReturnArgument*)returnValue);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, enum Qt__ConnectionType connectionType ```
bool q_metamethod_invoke3(void* self, void* object, int64_t connectionType) {
    return QMetaMethod_Invoke3((QMetaMethod*)self, (QObject*)object, connectionType);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object ```
bool q_metamethod_invoke_with_object(void* self, void* object) {
    return QMetaMethod_InvokeWithObject((QMetaMethod*)self, (QObject*)object);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// ``` QMetaMethod* self, void* gadget, QGenericReturnArgument* returnValue ```
bool q_metamethod_invoke_on_gadget(void* self, void* gadget, void* returnValue) {
    return QMetaMethod_InvokeOnGadget((QMetaMethod*)self, gadget, (QGenericReturnArgument*)returnValue);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// ``` QMetaMethod* self, void* gadget ```
bool q_metamethod_invoke_on_gadget_with_gadget(void* self, void* gadget) {
    return QMetaMethod_InvokeOnGadgetWithGadget((QMetaMethod*)self, gadget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#isValid)
///
/// ``` QMetaMethod* self ```
bool q_metamethod_is_valid(void* self) {
    return QMetaMethod_IsValid((QMetaMethod*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, enum Qt__ConnectionType connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0 ```
bool q_metamethod_invoke4(void* self, void* object, int64_t connectionType, void* returnValue, void* val0) {
    return QMetaMethod_Invoke4((QMetaMethod*)self, (QObject*)object, connectionType, (QGenericReturnArgument*)returnValue, (QGenericArgument*)val0);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, enum Qt__ConnectionType connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1 ```
bool q_metamethod_invoke5(void* self, void* object, int64_t connectionType, void* returnValue, void* val0, void* val1) {
    return QMetaMethod_Invoke5((QMetaMethod*)self, (QObject*)object, connectionType, (QGenericReturnArgument*)returnValue, (QGenericArgument*)val0, (QGenericArgument*)val1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, enum Qt__ConnectionType connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2 ```
bool q_metamethod_invoke6(void* self, void* object, int64_t connectionType, void* returnValue, void* val0, void* val1, void* val2) {
    return QMetaMethod_Invoke6((QMetaMethod*)self, (QObject*)object, connectionType, (QGenericReturnArgument*)returnValue, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, enum Qt__ConnectionType connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3 ```
bool q_metamethod_invoke7(void* self, void* object, int64_t connectionType, void* returnValue, void* val0, void* val1, void* val2, void* val3) {
    return QMetaMethod_Invoke7((QMetaMethod*)self, (QObject*)object, connectionType, (QGenericReturnArgument*)returnValue, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, enum Qt__ConnectionType connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4 ```
bool q_metamethod_invoke8(void* self, void* object, int64_t connectionType, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4) {
    return QMetaMethod_Invoke8((QMetaMethod*)self, (QObject*)object, connectionType, (QGenericReturnArgument*)returnValue, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, enum Qt__ConnectionType connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5 ```
bool q_metamethod_invoke9(void* self, void* object, int64_t connectionType, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5) {
    return QMetaMethod_Invoke9((QMetaMethod*)self, (QObject*)object, connectionType, (QGenericReturnArgument*)returnValue, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, enum Qt__ConnectionType connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6 ```
bool q_metamethod_invoke10(void* self, void* object, int64_t connectionType, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6) {
    return QMetaMethod_Invoke10((QMetaMethod*)self, (QObject*)object, connectionType, (QGenericReturnArgument*)returnValue, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5, (QGenericArgument*)val6);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, enum Qt__ConnectionType connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7 ```
bool q_metamethod_invoke11(void* self, void* object, int64_t connectionType, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7) {
    return QMetaMethod_Invoke11((QMetaMethod*)self, (QObject*)object, connectionType, (QGenericReturnArgument*)returnValue, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5, (QGenericArgument*)val6, (QGenericArgument*)val7);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, enum Qt__ConnectionType connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8 ```
bool q_metamethod_invoke12(void* self, void* object, int64_t connectionType, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8) {
    return QMetaMethod_Invoke12((QMetaMethod*)self, (QObject*)object, connectionType, (QGenericReturnArgument*)returnValue, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5, (QGenericArgument*)val6, (QGenericArgument*)val7, (QGenericArgument*)val8);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, enum Qt__ConnectionType connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9 ```
bool q_metamethod_invoke13(void* self, void* object, int64_t connectionType, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8, void* val9) {
    return QMetaMethod_Invoke13((QMetaMethod*)self, (QObject*)object, connectionType, (QGenericReturnArgument*)returnValue, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5, (QGenericArgument*)val6, (QGenericArgument*)val7, (QGenericArgument*)val8, (QGenericArgument*)val9);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0 ```
bool q_metamethod_invoke32(void* self, void* object, void* returnValue, void* val0) {
    return QMetaMethod_Invoke32((QMetaMethod*)self, (QObject*)object, (QGenericReturnArgument*)returnValue, (QGenericArgument*)val0);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1 ```
bool q_metamethod_invoke42(void* self, void* object, void* returnValue, void* val0, void* val1) {
    return QMetaMethod_Invoke42((QMetaMethod*)self, (QObject*)object, (QGenericReturnArgument*)returnValue, (QGenericArgument*)val0, (QGenericArgument*)val1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2 ```
bool q_metamethod_invoke52(void* self, void* object, void* returnValue, void* val0, void* val1, void* val2) {
    return QMetaMethod_Invoke52((QMetaMethod*)self, (QObject*)object, (QGenericReturnArgument*)returnValue, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3 ```
bool q_metamethod_invoke62(void* self, void* object, void* returnValue, void* val0, void* val1, void* val2, void* val3) {
    return QMetaMethod_Invoke62((QMetaMethod*)self, (QObject*)object, (QGenericReturnArgument*)returnValue, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4 ```
bool q_metamethod_invoke72(void* self, void* object, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4) {
    return QMetaMethod_Invoke72((QMetaMethod*)self, (QObject*)object, (QGenericReturnArgument*)returnValue, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5 ```
bool q_metamethod_invoke82(void* self, void* object, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5) {
    return QMetaMethod_Invoke82((QMetaMethod*)self, (QObject*)object, (QGenericReturnArgument*)returnValue, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6 ```
bool q_metamethod_invoke92(void* self, void* object, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6) {
    return QMetaMethod_Invoke92((QMetaMethod*)self, (QObject*)object, (QGenericReturnArgument*)returnValue, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5, (QGenericArgument*)val6);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7 ```
bool q_metamethod_invoke102(void* self, void* object, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7) {
    return QMetaMethod_Invoke102((QMetaMethod*)self, (QObject*)object, (QGenericReturnArgument*)returnValue, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5, (QGenericArgument*)val6, (QGenericArgument*)val7);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8 ```
bool q_metamethod_invoke112(void* self, void* object, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8) {
    return QMetaMethod_Invoke112((QMetaMethod*)self, (QObject*)object, (QGenericReturnArgument*)returnValue, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5, (QGenericArgument*)val6, (QGenericArgument*)val7, (QGenericArgument*)val8);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9 ```
bool q_metamethod_invoke122(void* self, void* object, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8, void* val9) {
    return QMetaMethod_Invoke122((QMetaMethod*)self, (QObject*)object, (QGenericReturnArgument*)returnValue, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5, (QGenericArgument*)val6, (QGenericArgument*)val7, (QGenericArgument*)val8, (QGenericArgument*)val9);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, enum Qt__ConnectionType connectionType, QGenericArgument* val0 ```
bool q_metamethod_invoke33(void* self, void* object, int64_t connectionType, void* val0) {
    return QMetaMethod_Invoke33((QMetaMethod*)self, (QObject*)object, connectionType, (QGenericArgument*)val0);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, enum Qt__ConnectionType connectionType, QGenericArgument* val0, QGenericArgument* val1 ```
bool q_metamethod_invoke43(void* self, void* object, int64_t connectionType, void* val0, void* val1) {
    return QMetaMethod_Invoke43((QMetaMethod*)self, (QObject*)object, connectionType, (QGenericArgument*)val0, (QGenericArgument*)val1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, enum Qt__ConnectionType connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2 ```
bool q_metamethod_invoke53(void* self, void* object, int64_t connectionType, void* val0, void* val1, void* val2) {
    return QMetaMethod_Invoke53((QMetaMethod*)self, (QObject*)object, connectionType, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, enum Qt__ConnectionType connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3 ```
bool q_metamethod_invoke63(void* self, void* object, int64_t connectionType, void* val0, void* val1, void* val2, void* val3) {
    return QMetaMethod_Invoke63((QMetaMethod*)self, (QObject*)object, connectionType, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, enum Qt__ConnectionType connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4 ```
bool q_metamethod_invoke73(void* self, void* object, int64_t connectionType, void* val0, void* val1, void* val2, void* val3, void* val4) {
    return QMetaMethod_Invoke73((QMetaMethod*)self, (QObject*)object, connectionType, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, enum Qt__ConnectionType connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5 ```
bool q_metamethod_invoke83(void* self, void* object, int64_t connectionType, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5) {
    return QMetaMethod_Invoke83((QMetaMethod*)self, (QObject*)object, connectionType, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, enum Qt__ConnectionType connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6 ```
bool q_metamethod_invoke93(void* self, void* object, int64_t connectionType, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6) {
    return QMetaMethod_Invoke93((QMetaMethod*)self, (QObject*)object, connectionType, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5, (QGenericArgument*)val6);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, enum Qt__ConnectionType connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7 ```
bool q_metamethod_invoke103(void* self, void* object, int64_t connectionType, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7) {
    return QMetaMethod_Invoke103((QMetaMethod*)self, (QObject*)object, connectionType, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5, (QGenericArgument*)val6, (QGenericArgument*)val7);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, enum Qt__ConnectionType connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8 ```
bool q_metamethod_invoke113(void* self, void* object, int64_t connectionType, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8) {
    return QMetaMethod_Invoke113((QMetaMethod*)self, (QObject*)object, connectionType, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5, (QGenericArgument*)val6, (QGenericArgument*)val7, (QGenericArgument*)val8);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, enum Qt__ConnectionType connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9 ```
bool q_metamethod_invoke123(void* self, void* object, int64_t connectionType, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8, void* val9) {
    return QMetaMethod_Invoke123((QMetaMethod*)self, (QObject*)object, connectionType, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5, (QGenericArgument*)val6, (QGenericArgument*)val7, (QGenericArgument*)val8, (QGenericArgument*)val9);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, QGenericArgument* val0 ```
bool q_metamethod_invoke22(void* self, void* object, void* val0) {
    return QMetaMethod_Invoke22((QMetaMethod*)self, (QObject*)object, (QGenericArgument*)val0);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1 ```
bool q_metamethod_invoke34(void* self, void* object, void* val0, void* val1) {
    return QMetaMethod_Invoke34((QMetaMethod*)self, (QObject*)object, (QGenericArgument*)val0, (QGenericArgument*)val1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2 ```
bool q_metamethod_invoke44(void* self, void* object, void* val0, void* val1, void* val2) {
    return QMetaMethod_Invoke44((QMetaMethod*)self, (QObject*)object, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3 ```
bool q_metamethod_invoke54(void* self, void* object, void* val0, void* val1, void* val2, void* val3) {
    return QMetaMethod_Invoke54((QMetaMethod*)self, (QObject*)object, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4 ```
bool q_metamethod_invoke64(void* self, void* object, void* val0, void* val1, void* val2, void* val3, void* val4) {
    return QMetaMethod_Invoke64((QMetaMethod*)self, (QObject*)object, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5 ```
bool q_metamethod_invoke74(void* self, void* object, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5) {
    return QMetaMethod_Invoke74((QMetaMethod*)self, (QObject*)object, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6 ```
bool q_metamethod_invoke84(void* self, void* object, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6) {
    return QMetaMethod_Invoke84((QMetaMethod*)self, (QObject*)object, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5, (QGenericArgument*)val6);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7 ```
bool q_metamethod_invoke94(void* self, void* object, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7) {
    return QMetaMethod_Invoke94((QMetaMethod*)self, (QObject*)object, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5, (QGenericArgument*)val6, (QGenericArgument*)val7);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8 ```
bool q_metamethod_invoke104(void* self, void* object, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8) {
    return QMetaMethod_Invoke104((QMetaMethod*)self, (QObject*)object, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5, (QGenericArgument*)val6, (QGenericArgument*)val7, (QGenericArgument*)val8);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invoke)
///
/// ``` QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9 ```
bool q_metamethod_invoke114(void* self, void* object, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8, void* val9) {
    return QMetaMethod_Invoke114((QMetaMethod*)self, (QObject*)object, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5, (QGenericArgument*)val6, (QGenericArgument*)val7, (QGenericArgument*)val8, (QGenericArgument*)val9);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// ``` QMetaMethod* self, void* gadget, QGenericReturnArgument* returnValue, QGenericArgument* val0 ```
bool q_metamethod_invoke_on_gadget3(void* self, void* gadget, void* returnValue, void* val0) {
    return QMetaMethod_InvokeOnGadget3((QMetaMethod*)self, gadget, (QGenericReturnArgument*)returnValue, (QGenericArgument*)val0);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// ``` QMetaMethod* self, void* gadget, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1 ```
bool q_metamethod_invoke_on_gadget4(void* self, void* gadget, void* returnValue, void* val0, void* val1) {
    return QMetaMethod_InvokeOnGadget4((QMetaMethod*)self, gadget, (QGenericReturnArgument*)returnValue, (QGenericArgument*)val0, (QGenericArgument*)val1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// ``` QMetaMethod* self, void* gadget, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2 ```
bool q_metamethod_invoke_on_gadget5(void* self, void* gadget, void* returnValue, void* val0, void* val1, void* val2) {
    return QMetaMethod_InvokeOnGadget5((QMetaMethod*)self, gadget, (QGenericReturnArgument*)returnValue, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// ``` QMetaMethod* self, void* gadget, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3 ```
bool q_metamethod_invoke_on_gadget6(void* self, void* gadget, void* returnValue, void* val0, void* val1, void* val2, void* val3) {
    return QMetaMethod_InvokeOnGadget6((QMetaMethod*)self, gadget, (QGenericReturnArgument*)returnValue, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// ``` QMetaMethod* self, void* gadget, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4 ```
bool q_metamethod_invoke_on_gadget7(void* self, void* gadget, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4) {
    return QMetaMethod_InvokeOnGadget7((QMetaMethod*)self, gadget, (QGenericReturnArgument*)returnValue, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// ``` QMetaMethod* self, void* gadget, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5 ```
bool q_metamethod_invoke_on_gadget8(void* self, void* gadget, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5) {
    return QMetaMethod_InvokeOnGadget8((QMetaMethod*)self, gadget, (QGenericReturnArgument*)returnValue, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// ``` QMetaMethod* self, void* gadget, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6 ```
bool q_metamethod_invoke_on_gadget9(void* self, void* gadget, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6) {
    return QMetaMethod_InvokeOnGadget9((QMetaMethod*)self, gadget, (QGenericReturnArgument*)returnValue, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5, (QGenericArgument*)val6);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// ``` QMetaMethod* self, void* gadget, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7 ```
bool q_metamethod_invoke_on_gadget10(void* self, void* gadget, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7) {
    return QMetaMethod_InvokeOnGadget10((QMetaMethod*)self, gadget, (QGenericReturnArgument*)returnValue, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5, (QGenericArgument*)val6, (QGenericArgument*)val7);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// ``` QMetaMethod* self, void* gadget, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8 ```
bool q_metamethod_invoke_on_gadget11(void* self, void* gadget, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8) {
    return QMetaMethod_InvokeOnGadget11((QMetaMethod*)self, gadget, (QGenericReturnArgument*)returnValue, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5, (QGenericArgument*)val6, (QGenericArgument*)val7, (QGenericArgument*)val8);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// ``` QMetaMethod* self, void* gadget, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9 ```
bool q_metamethod_invoke_on_gadget12(void* self, void* gadget, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8, void* val9) {
    return QMetaMethod_InvokeOnGadget12((QMetaMethod*)self, gadget, (QGenericReturnArgument*)returnValue, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5, (QGenericArgument*)val6, (QGenericArgument*)val7, (QGenericArgument*)val8, (QGenericArgument*)val9);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// ``` QMetaMethod* self, void* gadget, QGenericArgument* val0 ```
bool q_metamethod_invoke_on_gadget2(void* self, void* gadget, void* val0) {
    return QMetaMethod_InvokeOnGadget2((QMetaMethod*)self, gadget, (QGenericArgument*)val0);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// ``` QMetaMethod* self, void* gadget, QGenericArgument* val0, QGenericArgument* val1 ```
bool q_metamethod_invoke_on_gadget32(void* self, void* gadget, void* val0, void* val1) {
    return QMetaMethod_InvokeOnGadget32((QMetaMethod*)self, gadget, (QGenericArgument*)val0, (QGenericArgument*)val1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// ``` QMetaMethod* self, void* gadget, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2 ```
bool q_metamethod_invoke_on_gadget42(void* self, void* gadget, void* val0, void* val1, void* val2) {
    return QMetaMethod_InvokeOnGadget42((QMetaMethod*)self, gadget, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// ``` QMetaMethod* self, void* gadget, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3 ```
bool q_metamethod_invoke_on_gadget52(void* self, void* gadget, void* val0, void* val1, void* val2, void* val3) {
    return QMetaMethod_InvokeOnGadget52((QMetaMethod*)self, gadget, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// ``` QMetaMethod* self, void* gadget, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4 ```
bool q_metamethod_invoke_on_gadget62(void* self, void* gadget, void* val0, void* val1, void* val2, void* val3, void* val4) {
    return QMetaMethod_InvokeOnGadget62((QMetaMethod*)self, gadget, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// ``` QMetaMethod* self, void* gadget, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5 ```
bool q_metamethod_invoke_on_gadget72(void* self, void* gadget, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5) {
    return QMetaMethod_InvokeOnGadget72((QMetaMethod*)self, gadget, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// ``` QMetaMethod* self, void* gadget, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6 ```
bool q_metamethod_invoke_on_gadget82(void* self, void* gadget, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6) {
    return QMetaMethod_InvokeOnGadget82((QMetaMethod*)self, gadget, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5, (QGenericArgument*)val6);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// ``` QMetaMethod* self, void* gadget, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7 ```
bool q_metamethod_invoke_on_gadget92(void* self, void* gadget, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7) {
    return QMetaMethod_InvokeOnGadget92((QMetaMethod*)self, gadget, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5, (QGenericArgument*)val6, (QGenericArgument*)val7);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// ``` QMetaMethod* self, void* gadget, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8 ```
bool q_metamethod_invoke_on_gadget102(void* self, void* gadget, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8) {
    return QMetaMethod_InvokeOnGadget102((QMetaMethod*)self, gadget, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5, (QGenericArgument*)val6, (QGenericArgument*)val7, (QGenericArgument*)val8);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetamethod.html#invokeOnGadget)
///
/// ``` QMetaMethod* self, void* gadget, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9 ```
bool q_metamethod_invoke_on_gadget112(void* self, void* gadget, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8, void* val9) {
    return QMetaMethod_InvokeOnGadget112((QMetaMethod*)self, gadget, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5, (QGenericArgument*)val6, (QGenericArgument*)val7, (QGenericArgument*)val8, (QGenericArgument*)val9);
}

/// Delete this object from C++ memory.
///
/// ``` QMetaMethod* self ```
void q_metamethod_delete(void* self) {
    QMetaMethod_Delete((QMetaMethod*)(self));
}

/// https://doc.qt.io/qt-6/qmetaenum.html

/// q_metaenum_new constructs a new QMetaEnum object.
///
/// ``` QMetaEnum* other ```
QMetaEnum* q_metaenum_new(void* other) {
    return QMetaEnum_new((QMetaEnum*)other);
}

/// q_metaenum_new2 constructs a new QMetaEnum object and invalidates the source QMetaEnum object.
///
/// ``` QMetaEnum* other ```
QMetaEnum* q_metaenum_new2(void* other) {
    return QMetaEnum_new2((QMetaEnum*)other);
}

/// q_metaenum_new3 constructs a new QMetaEnum object.
///
///
QMetaEnum* q_metaenum_new3() {
    return QMetaEnum_new3();
}

/// q_metaenum_new4 constructs a new QMetaEnum object.
///
/// ``` QMetaEnum* param1 ```
QMetaEnum* q_metaenum_new4(void* param1) {
    return QMetaEnum_new4((QMetaEnum*)param1);
}

/// q_metaenum_copy_assign shallow copies `other` into `self`.
///
/// ``` QMetaEnum* self, QMetaEnum* other ```
void q_metaenum_copy_assign(void* self, void* other) {
    QMetaEnum_CopyAssign((QMetaEnum*)self, (QMetaEnum*)other);
}

/// q_metaenum_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QMetaEnum* self, QMetaEnum* other ```
void q_metaenum_move_assign(void* self, void* other) {
    QMetaEnum_MoveAssign((QMetaEnum*)self, (QMetaEnum*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaenum.html#name)
///
/// ``` QMetaEnum* self ```
const char* q_metaenum_name(void* self) {
    return QMetaEnum_Name((QMetaEnum*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaenum.html#enumName)
///
/// ``` QMetaEnum* self ```
const char* q_metaenum_enum_name(void* self) {
    return QMetaEnum_EnumName((QMetaEnum*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaenum.html#isFlag)
///
/// ``` QMetaEnum* self ```
bool q_metaenum_is_flag(void* self) {
    return QMetaEnum_IsFlag((QMetaEnum*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaenum.html#isScoped)
///
/// ``` QMetaEnum* self ```
bool q_metaenum_is_scoped(void* self) {
    return QMetaEnum_IsScoped((QMetaEnum*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaenum.html#keyCount)
///
/// ``` QMetaEnum* self ```
int32_t q_metaenum_key_count(void* self) {
    return QMetaEnum_KeyCount((QMetaEnum*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaenum.html#key)
///
/// ``` QMetaEnum* self, int index ```
const char* q_metaenum_key(void* self, int index) {
    return QMetaEnum_Key((QMetaEnum*)self, index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaenum.html#value)
///
/// ``` QMetaEnum* self, int index ```
int32_t q_metaenum_value(void* self, int index) {
    return QMetaEnum_Value((QMetaEnum*)self, index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaenum.html#scope)
///
/// ``` QMetaEnum* self ```
const char* q_metaenum_scope(void* self) {
    return QMetaEnum_Scope((QMetaEnum*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaenum.html#keyToValue)
///
/// ``` QMetaEnum* self, const char* key ```
int32_t q_metaenum_key_to_value(void* self, const char* key) {
    return QMetaEnum_KeyToValue((QMetaEnum*)self, key);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaenum.html#valueToKey)
///
/// ``` QMetaEnum* self, int value ```
const char* q_metaenum_value_to_key(void* self, int value) {
    return QMetaEnum_ValueToKey((QMetaEnum*)self, value);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaenum.html#keysToValue)
///
/// ``` QMetaEnum* self, const char* keys ```
int32_t q_metaenum_keys_to_value(void* self, const char* keys) {
    return QMetaEnum_KeysToValue((QMetaEnum*)self, keys);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaenum.html#valueToKeys)
///
/// ``` QMetaEnum* self, int value ```
char* q_metaenum_value_to_keys(void* self, int value) {
    libqt_string _str = QMetaEnum_ValueToKeys((QMetaEnum*)self, value);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaenum.html#enclosingMetaObject)
///
/// ``` QMetaEnum* self ```
QMetaObject* q_metaenum_enclosing_meta_object(void* self) {
    return QMetaEnum_EnclosingMetaObject((QMetaEnum*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaenum.html#isValid)
///
/// ``` QMetaEnum* self ```
bool q_metaenum_is_valid(void* self) {
    return QMetaEnum_IsValid((QMetaEnum*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaenum.html#keyToValue)
///
/// ``` QMetaEnum* self, const char* key, bool* ok ```
int32_t q_metaenum_key_to_value2(void* self, const char* key, bool* ok) {
    return QMetaEnum_KeyToValue2((QMetaEnum*)self, key, (bool*)ok);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaenum.html#keysToValue)
///
/// ``` QMetaEnum* self, const char* keys, bool* ok ```
int32_t q_metaenum_keys_to_value2(void* self, const char* keys, bool* ok) {
    return QMetaEnum_KeysToValue2((QMetaEnum*)self, keys, (bool*)ok);
}

/// Delete this object from C++ memory.
///
/// ``` QMetaEnum* self ```
void q_metaenum_delete(void* self) {
    QMetaEnum_Delete((QMetaEnum*)(self));
}

/// https://doc.qt.io/qt-6/qmetaproperty.html

/// q_metaproperty_new constructs a new QMetaProperty object.
///
/// ``` QMetaProperty* other ```
QMetaProperty* q_metaproperty_new(void* other) {
    return QMetaProperty_new((QMetaProperty*)other);
}

/// q_metaproperty_new2 constructs a new QMetaProperty object and invalidates the source QMetaProperty object.
///
/// ``` QMetaProperty* other ```
QMetaProperty* q_metaproperty_new2(void* other) {
    return QMetaProperty_new2((QMetaProperty*)other);
}

/// q_metaproperty_new3 constructs a new QMetaProperty object.
///
///
QMetaProperty* q_metaproperty_new3() {
    return QMetaProperty_new3();
}

/// q_metaproperty_copy_assign shallow copies `other` into `self`.
///
/// ``` QMetaProperty* self, QMetaProperty* other ```
void q_metaproperty_copy_assign(void* self, void* other) {
    QMetaProperty_CopyAssign((QMetaProperty*)self, (QMetaProperty*)other);
}

/// q_metaproperty_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QMetaProperty* self, QMetaProperty* other ```
void q_metaproperty_move_assign(void* self, void* other) {
    QMetaProperty_MoveAssign((QMetaProperty*)self, (QMetaProperty*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#name)
///
/// ``` QMetaProperty* self ```
const char* q_metaproperty_name(void* self) {
    return QMetaProperty_Name((QMetaProperty*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#typeName)
///
/// ``` QMetaProperty* self ```
const char* q_metaproperty_type_name(void* self) {
    return QMetaProperty_TypeName((QMetaProperty*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#type)
///
/// ``` QMetaProperty* self ```
int64_t q_metaproperty_type(void* self) {
    return QMetaProperty_Type((QMetaProperty*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#userType)
///
/// ``` QMetaProperty* self ```
int32_t q_metaproperty_user_type(void* self) {
    return QMetaProperty_UserType((QMetaProperty*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#typeId)
///
/// ``` QMetaProperty* self ```
int32_t q_metaproperty_type_id(void* self) {
    return QMetaProperty_TypeId((QMetaProperty*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#metaType)
///
/// ``` QMetaProperty* self ```
QMetaType* q_metaproperty_meta_type(void* self) {
    return QMetaProperty_MetaType((QMetaProperty*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#propertyIndex)
///
/// ``` QMetaProperty* self ```
int32_t q_metaproperty_property_index(void* self) {
    return QMetaProperty_PropertyIndex((QMetaProperty*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#relativePropertyIndex)
///
/// ``` QMetaProperty* self ```
int32_t q_metaproperty_relative_property_index(void* self) {
    return QMetaProperty_RelativePropertyIndex((QMetaProperty*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#isReadable)
///
/// ``` QMetaProperty* self ```
bool q_metaproperty_is_readable(void* self) {
    return QMetaProperty_IsReadable((QMetaProperty*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#isWritable)
///
/// ``` QMetaProperty* self ```
bool q_metaproperty_is_writable(void* self) {
    return QMetaProperty_IsWritable((QMetaProperty*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#isResettable)
///
/// ``` QMetaProperty* self ```
bool q_metaproperty_is_resettable(void* self) {
    return QMetaProperty_IsResettable((QMetaProperty*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#isDesignable)
///
/// ``` QMetaProperty* self ```
bool q_metaproperty_is_designable(void* self) {
    return QMetaProperty_IsDesignable((QMetaProperty*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#isScriptable)
///
/// ``` QMetaProperty* self ```
bool q_metaproperty_is_scriptable(void* self) {
    return QMetaProperty_IsScriptable((QMetaProperty*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#isStored)
///
/// ``` QMetaProperty* self ```
bool q_metaproperty_is_stored(void* self) {
    return QMetaProperty_IsStored((QMetaProperty*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#isUser)
///
/// ``` QMetaProperty* self ```
bool q_metaproperty_is_user(void* self) {
    return QMetaProperty_IsUser((QMetaProperty*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#isConstant)
///
/// ``` QMetaProperty* self ```
bool q_metaproperty_is_constant(void* self) {
    return QMetaProperty_IsConstant((QMetaProperty*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#isFinal)
///
/// ``` QMetaProperty* self ```
bool q_metaproperty_is_final(void* self) {
    return QMetaProperty_IsFinal((QMetaProperty*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#isRequired)
///
/// ``` QMetaProperty* self ```
bool q_metaproperty_is_required(void* self) {
    return QMetaProperty_IsRequired((QMetaProperty*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#isBindable)
///
/// ``` QMetaProperty* self ```
bool q_metaproperty_is_bindable(void* self) {
    return QMetaProperty_IsBindable((QMetaProperty*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#isFlagType)
///
/// ``` QMetaProperty* self ```
bool q_metaproperty_is_flag_type(void* self) {
    return QMetaProperty_IsFlagType((QMetaProperty*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#isEnumType)
///
/// ``` QMetaProperty* self ```
bool q_metaproperty_is_enum_type(void* self) {
    return QMetaProperty_IsEnumType((QMetaProperty*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#enumerator)
///
/// ``` QMetaProperty* self ```
QMetaEnum* q_metaproperty_enumerator(void* self) {
    return QMetaProperty_Enumerator((QMetaProperty*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#hasNotifySignal)
///
/// ``` QMetaProperty* self ```
bool q_metaproperty_has_notify_signal(void* self) {
    return QMetaProperty_HasNotifySignal((QMetaProperty*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#notifySignal)
///
/// ``` QMetaProperty* self ```
QMetaMethod* q_metaproperty_notify_signal(void* self) {
    return QMetaProperty_NotifySignal((QMetaProperty*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#notifySignalIndex)
///
/// ``` QMetaProperty* self ```
int32_t q_metaproperty_notify_signal_index(void* self) {
    return QMetaProperty_NotifySignalIndex((QMetaProperty*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#revision)
///
/// ``` QMetaProperty* self ```
int32_t q_metaproperty_revision(void* self) {
    return QMetaProperty_Revision((QMetaProperty*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#read)
///
/// ``` QMetaProperty* self, QObject* obj ```
QVariant* q_metaproperty_read(void* self, void* obj) {
    return QMetaProperty_Read((QMetaProperty*)self, (QObject*)obj);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#write)
///
/// ``` QMetaProperty* self, QObject* obj, QVariant* value ```
bool q_metaproperty_write(void* self, void* obj, void* value) {
    return QMetaProperty_Write((QMetaProperty*)self, (QObject*)obj, (QVariant*)value);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#reset)
///
/// ``` QMetaProperty* self, QObject* obj ```
bool q_metaproperty_reset(void* self, void* obj) {
    return QMetaProperty_Reset((QMetaProperty*)self, (QObject*)obj);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#bindable)
///
/// ``` QMetaProperty* self, QObject* object ```
QUntypedBindable* q_metaproperty_bindable(void* self, void* object) {
    return QMetaProperty_Bindable((QMetaProperty*)self, (QObject*)object);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#readOnGadget)
///
/// ``` QMetaProperty* self, void* gadget ```
QVariant* q_metaproperty_read_on_gadget(void* self, void* gadget) {
    return QMetaProperty_ReadOnGadget((QMetaProperty*)self, gadget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#writeOnGadget)
///
/// ``` QMetaProperty* self, void* gadget, QVariant* value ```
bool q_metaproperty_write_on_gadget(void* self, void* gadget, void* value) {
    return QMetaProperty_WriteOnGadget((QMetaProperty*)self, gadget, (QVariant*)value);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#resetOnGadget)
///
/// ``` QMetaProperty* self, void* gadget ```
bool q_metaproperty_reset_on_gadget(void* self, void* gadget) {
    return QMetaProperty_ResetOnGadget((QMetaProperty*)self, gadget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#hasStdCppSet)
///
/// ``` QMetaProperty* self ```
bool q_metaproperty_has_std_cpp_set(void* self) {
    return QMetaProperty_HasStdCppSet((QMetaProperty*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#isAlias)
///
/// ``` QMetaProperty* self ```
bool q_metaproperty_is_alias(void* self) {
    return QMetaProperty_IsAlias((QMetaProperty*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#isValid)
///
/// ``` QMetaProperty* self ```
bool q_metaproperty_is_valid(void* self) {
    return QMetaProperty_IsValid((QMetaProperty*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaproperty.html#enclosingMetaObject)
///
/// ``` QMetaProperty* self ```
QMetaObject* q_metaproperty_enclosing_meta_object(void* self) {
    return QMetaProperty_EnclosingMetaObject((QMetaProperty*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QMetaProperty* self ```
void q_metaproperty_delete(void* self) {
    QMetaProperty_Delete((QMetaProperty*)(self));
}

/// https://doc.qt.io/qt-6/qmetaclassinfo.html

/// q_metaclassinfo_new constructs a new QMetaClassInfo object.
///
/// ``` QMetaClassInfo* other ```
QMetaClassInfo* q_metaclassinfo_new(void* other) {
    return QMetaClassInfo_new((QMetaClassInfo*)other);
}

/// q_metaclassinfo_new2 constructs a new QMetaClassInfo object and invalidates the source QMetaClassInfo object.
///
/// ``` QMetaClassInfo* other ```
QMetaClassInfo* q_metaclassinfo_new2(void* other) {
    return QMetaClassInfo_new2((QMetaClassInfo*)other);
}

/// q_metaclassinfo_new3 constructs a new QMetaClassInfo object.
///
///
QMetaClassInfo* q_metaclassinfo_new3() {
    return QMetaClassInfo_new3();
}

/// q_metaclassinfo_copy_assign shallow copies `other` into `self`.
///
/// ``` QMetaClassInfo* self, QMetaClassInfo* other ```
void q_metaclassinfo_copy_assign(void* self, void* other) {
    QMetaClassInfo_CopyAssign((QMetaClassInfo*)self, (QMetaClassInfo*)other);
}

/// q_metaclassinfo_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QMetaClassInfo* self, QMetaClassInfo* other ```
void q_metaclassinfo_move_assign(void* self, void* other) {
    QMetaClassInfo_MoveAssign((QMetaClassInfo*)self, (QMetaClassInfo*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaclassinfo.html#name)
///
/// ``` QMetaClassInfo* self ```
const char* q_metaclassinfo_name(void* self) {
    return QMetaClassInfo_Name((QMetaClassInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaclassinfo.html#value)
///
/// ``` QMetaClassInfo* self ```
const char* q_metaclassinfo_value(void* self) {
    return QMetaClassInfo_Value((QMetaClassInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmetaclassinfo.html#enclosingMetaObject)
///
/// ``` QMetaClassInfo* self ```
QMetaObject* q_metaclassinfo_enclosing_meta_object(void* self) {
    return QMetaClassInfo_EnclosingMetaObject((QMetaClassInfo*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QMetaClassInfo* self ```
void q_metaclassinfo_delete(void* self) {
    QMetaClassInfo_Delete((QMetaClassInfo*)(self));
}