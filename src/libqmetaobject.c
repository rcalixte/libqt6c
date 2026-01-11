#include "libqobjectdefs.hpp"
#include "libqmetatype.hpp"
#include "libqobject.hpp"
#include "libqproperty.hpp"
#include "libqvariant.hpp"
#include "libqmetaobject.hpp"
#include "libqmetaobject.h"

QMetaMethod* q_metamethod_new(void* other) {
    return QMetaMethod_new((QMetaMethod*)other);
}

QMetaMethod* q_metamethod_new2(void* other) {
    return QMetaMethod_new2((QMetaMethod*)other);
}

QMetaMethod* q_metamethod_new3() {
    return QMetaMethod_new3();
}

QMetaMethod* q_metamethod_new4(void* param1) {
    return QMetaMethod_new4((QMetaMethod*)param1);
}

void q_metamethod_copy_assign(void* self, void* other) {
    QMetaMethod_CopyAssign((QMetaMethod*)self, (QMetaMethod*)other);
}

void q_metamethod_move_assign(void* self, void* other) {
    QMetaMethod_MoveAssign((QMetaMethod*)self, (QMetaMethod*)other);
}

char* q_metamethod_method_signature(void* self) {
    libqt_string _str = QMetaMethod_MethodSignature((QMetaMethod*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_metamethod_name(void* self) {
    libqt_string _str = QMetaMethod_Name((QMetaMethod*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_metamethod_type_name(void* self) {
    return QMetaMethod_TypeName((QMetaMethod*)self);
}

int32_t q_metamethod_return_type(void* self) {
    return QMetaMethod_ReturnType((QMetaMethod*)self);
}

QMetaType* q_metamethod_return_meta_type(void* self) {
    return QMetaMethod_ReturnMetaType((QMetaMethod*)self);
}

int32_t q_metamethod_parameter_count(void* self) {
    return QMetaMethod_ParameterCount((QMetaMethod*)self);
}

int32_t q_metamethod_parameter_type(void* self, int index) {
    return QMetaMethod_ParameterType((QMetaMethod*)self, index);
}

QMetaType* q_metamethod_parameter_meta_type(void* self, int index) {
    return QMetaMethod_ParameterMetaType((QMetaMethod*)self, index);
}

void q_metamethod_get_parameter_types(void* self, int* types) {
    QMetaMethod_GetParameterTypes((QMetaMethod*)self, types);
}

const char** q_metamethod_parameter_types(void* self) {
    libqt_list _arr = QMetaMethod_ParameterTypes((QMetaMethod*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_metamethod_parameter_types");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

char* q_metamethod_parameter_type_name(void* self, int index) {
    libqt_string _str = QMetaMethod_ParameterTypeName((QMetaMethod*)self, index);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** q_metamethod_parameter_names(void* self) {
    libqt_list _arr = QMetaMethod_ParameterNames((QMetaMethod*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_metamethod_parameter_names");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

const char* q_metamethod_tag(void* self) {
    return QMetaMethod_Tag((QMetaMethod*)self);
}

int32_t q_metamethod_access(void* self) {
    return QMetaMethod_Access((QMetaMethod*)self);
}

int32_t q_metamethod_method_type(void* self) {
    return QMetaMethod_MethodType((QMetaMethod*)self);
}

int32_t q_metamethod_attributes(void* self) {
    return QMetaMethod_Attributes((QMetaMethod*)self);
}

int32_t q_metamethod_method_index(void* self) {
    return QMetaMethod_MethodIndex((QMetaMethod*)self);
}

int32_t q_metamethod_relative_method_index(void* self) {
    return QMetaMethod_RelativeMethodIndex((QMetaMethod*)self);
}

int32_t q_metamethod_revision(void* self) {
    return QMetaMethod_Revision((QMetaMethod*)self);
}

bool q_metamethod_is_const(void* self) {
    return QMetaMethod_IsConst((QMetaMethod*)self);
}

const QMetaObject* q_metamethod_enclosing_meta_object(void* self) {
    return QMetaMethod_EnclosingMetaObject((QMetaMethod*)self);
}

bool q_metamethod_invoke(void* self, void* object, int32_t connectionType, void* returnValue) {
    return QMetaMethod_Invoke((QMetaMethod*)self, (QObject*)object, connectionType, (QGenericReturnArgument*)returnValue);
}

bool q_metamethod_invoke2(void* self, void* object, void* returnValue) {
    return QMetaMethod_Invoke2((QMetaMethod*)self, (QObject*)object, (QGenericReturnArgument*)returnValue);
}

bool q_metamethod_invoke3(void* self, void* object, int32_t connectionType, void* val0) {
    return QMetaMethod_Invoke3((QMetaMethod*)self, (QObject*)object, connectionType, (QGenericArgument*)val0);
}

bool q_metamethod_invoke4(void* self, void* object, void* val0) {
    return QMetaMethod_Invoke4((QMetaMethod*)self, (QObject*)object, (QGenericArgument*)val0);
}

bool q_metamethod_invoke_on_gadget(void* self, void* gadget, void* returnValue) {
    return QMetaMethod_InvokeOnGadget((QMetaMethod*)self, gadget, (QGenericReturnArgument*)returnValue);
}

bool q_metamethod_invoke_on_gadget2(void* self, void* gadget, void* val0) {
    return QMetaMethod_InvokeOnGadget2((QMetaMethod*)self, gadget, (QGenericArgument*)val0);
}

bool q_metamethod_is_valid(void* self) {
    return QMetaMethod_IsValid((QMetaMethod*)self);
}

bool q_metamethod_invoke42(void* self, void* object, int32_t connectionType, void* returnValue, void* val0) {
    return QMetaMethod_Invoke42((QMetaMethod*)self, (QObject*)object, connectionType, (QGenericReturnArgument*)returnValue, (QGenericArgument*)val0);
}

bool q_metamethod_invoke5(void* self, void* object, int32_t connectionType, void* returnValue, void* val0, void* val1) {
    return QMetaMethod_Invoke5((QMetaMethod*)self, (QObject*)object, connectionType, (QGenericReturnArgument*)returnValue, (QGenericArgument*)val0, (QGenericArgument*)val1);
}

bool q_metamethod_invoke6(void* self, void* object, int32_t connectionType, void* returnValue, void* val0, void* val1, void* val2) {
    return QMetaMethod_Invoke6((QMetaMethod*)self, (QObject*)object, connectionType, (QGenericReturnArgument*)returnValue, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2);
}

bool q_metamethod_invoke7(void* self, void* object, int32_t connectionType, void* returnValue, void* val0, void* val1, void* val2, void* val3) {
    return QMetaMethod_Invoke7((QMetaMethod*)self, (QObject*)object, connectionType, (QGenericReturnArgument*)returnValue, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3);
}

bool q_metamethod_invoke8(void* self, void* object, int32_t connectionType, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4) {
    return QMetaMethod_Invoke8((QMetaMethod*)self, (QObject*)object, connectionType, (QGenericReturnArgument*)returnValue, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4);
}

bool q_metamethod_invoke9(void* self, void* object, int32_t connectionType, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5) {
    return QMetaMethod_Invoke9((QMetaMethod*)self, (QObject*)object, connectionType, (QGenericReturnArgument*)returnValue, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5);
}

bool q_metamethod_invoke10(void* self, void* object, int32_t connectionType, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6) {
    return QMetaMethod_Invoke10((QMetaMethod*)self, (QObject*)object, connectionType, (QGenericReturnArgument*)returnValue, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5, (QGenericArgument*)val6);
}

bool q_metamethod_invoke11(void* self, void* object, int32_t connectionType, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7) {
    return QMetaMethod_Invoke11((QMetaMethod*)self, (QObject*)object, connectionType, (QGenericReturnArgument*)returnValue, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5, (QGenericArgument*)val6, (QGenericArgument*)val7);
}

bool q_metamethod_invoke12(void* self, void* object, int32_t connectionType, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8) {
    return QMetaMethod_Invoke12((QMetaMethod*)self, (QObject*)object, connectionType, (QGenericReturnArgument*)returnValue, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5, (QGenericArgument*)val6, (QGenericArgument*)val7, (QGenericArgument*)val8);
}

bool q_metamethod_invoke13(void* self, void* object, int32_t connectionType, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8, void* val9) {
    return QMetaMethod_Invoke13((QMetaMethod*)self, (QObject*)object, connectionType, (QGenericReturnArgument*)returnValue, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5, (QGenericArgument*)val6, (QGenericArgument*)val7, (QGenericArgument*)val8, (QGenericArgument*)val9);
}

bool q_metamethod_invoke32(void* self, void* object, void* returnValue, void* val0) {
    return QMetaMethod_Invoke32((QMetaMethod*)self, (QObject*)object, (QGenericReturnArgument*)returnValue, (QGenericArgument*)val0);
}

bool q_metamethod_invoke43(void* self, void* object, void* returnValue, void* val0, void* val1) {
    return QMetaMethod_Invoke43((QMetaMethod*)self, (QObject*)object, (QGenericReturnArgument*)returnValue, (QGenericArgument*)val0, (QGenericArgument*)val1);
}

bool q_metamethod_invoke52(void* self, void* object, void* returnValue, void* val0, void* val1, void* val2) {
    return QMetaMethod_Invoke52((QMetaMethod*)self, (QObject*)object, (QGenericReturnArgument*)returnValue, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2);
}

bool q_metamethod_invoke62(void* self, void* object, void* returnValue, void* val0, void* val1, void* val2, void* val3) {
    return QMetaMethod_Invoke62((QMetaMethod*)self, (QObject*)object, (QGenericReturnArgument*)returnValue, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3);
}

bool q_metamethod_invoke72(void* self, void* object, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4) {
    return QMetaMethod_Invoke72((QMetaMethod*)self, (QObject*)object, (QGenericReturnArgument*)returnValue, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4);
}

bool q_metamethod_invoke82(void* self, void* object, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5) {
    return QMetaMethod_Invoke82((QMetaMethod*)self, (QObject*)object, (QGenericReturnArgument*)returnValue, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5);
}

bool q_metamethod_invoke92(void* self, void* object, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6) {
    return QMetaMethod_Invoke92((QMetaMethod*)self, (QObject*)object, (QGenericReturnArgument*)returnValue, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5, (QGenericArgument*)val6);
}

bool q_metamethod_invoke102(void* self, void* object, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7) {
    return QMetaMethod_Invoke102((QMetaMethod*)self, (QObject*)object, (QGenericReturnArgument*)returnValue, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5, (QGenericArgument*)val6, (QGenericArgument*)val7);
}

bool q_metamethod_invoke112(void* self, void* object, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8) {
    return QMetaMethod_Invoke112((QMetaMethod*)self, (QObject*)object, (QGenericReturnArgument*)returnValue, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5, (QGenericArgument*)val6, (QGenericArgument*)val7, (QGenericArgument*)val8);
}

bool q_metamethod_invoke122(void* self, void* object, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8, void* val9) {
    return QMetaMethod_Invoke122((QMetaMethod*)self, (QObject*)object, (QGenericReturnArgument*)returnValue, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5, (QGenericArgument*)val6, (QGenericArgument*)val7, (QGenericArgument*)val8, (QGenericArgument*)val9);
}

bool q_metamethod_invoke44(void* self, void* object, int32_t connectionType, void* val0, void* val1) {
    return QMetaMethod_Invoke44((QMetaMethod*)self, (QObject*)object, connectionType, (QGenericArgument*)val0, (QGenericArgument*)val1);
}

bool q_metamethod_invoke53(void* self, void* object, int32_t connectionType, void* val0, void* val1, void* val2) {
    return QMetaMethod_Invoke53((QMetaMethod*)self, (QObject*)object, connectionType, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2);
}

bool q_metamethod_invoke63(void* self, void* object, int32_t connectionType, void* val0, void* val1, void* val2, void* val3) {
    return QMetaMethod_Invoke63((QMetaMethod*)self, (QObject*)object, connectionType, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3);
}

bool q_metamethod_invoke73(void* self, void* object, int32_t connectionType, void* val0, void* val1, void* val2, void* val3, void* val4) {
    return QMetaMethod_Invoke73((QMetaMethod*)self, (QObject*)object, connectionType, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4);
}

bool q_metamethod_invoke83(void* self, void* object, int32_t connectionType, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5) {
    return QMetaMethod_Invoke83((QMetaMethod*)self, (QObject*)object, connectionType, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5);
}

bool q_metamethod_invoke93(void* self, void* object, int32_t connectionType, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6) {
    return QMetaMethod_Invoke93((QMetaMethod*)self, (QObject*)object, connectionType, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5, (QGenericArgument*)val6);
}

bool q_metamethod_invoke103(void* self, void* object, int32_t connectionType, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7) {
    return QMetaMethod_Invoke103((QMetaMethod*)self, (QObject*)object, connectionType, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5, (QGenericArgument*)val6, (QGenericArgument*)val7);
}

bool q_metamethod_invoke113(void* self, void* object, int32_t connectionType, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8) {
    return QMetaMethod_Invoke113((QMetaMethod*)self, (QObject*)object, connectionType, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5, (QGenericArgument*)val6, (QGenericArgument*)val7, (QGenericArgument*)val8);
}

bool q_metamethod_invoke123(void* self, void* object, int32_t connectionType, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8, void* val9) {
    return QMetaMethod_Invoke123((QMetaMethod*)self, (QObject*)object, connectionType, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5, (QGenericArgument*)val6, (QGenericArgument*)val7, (QGenericArgument*)val8, (QGenericArgument*)val9);
}

bool q_metamethod_invoke33(void* self, void* object, void* val0, void* val1) {
    return QMetaMethod_Invoke33((QMetaMethod*)self, (QObject*)object, (QGenericArgument*)val0, (QGenericArgument*)val1);
}

bool q_metamethod_invoke45(void* self, void* object, void* val0, void* val1, void* val2) {
    return QMetaMethod_Invoke45((QMetaMethod*)self, (QObject*)object, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2);
}

bool q_metamethod_invoke54(void* self, void* object, void* val0, void* val1, void* val2, void* val3) {
    return QMetaMethod_Invoke54((QMetaMethod*)self, (QObject*)object, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3);
}

bool q_metamethod_invoke64(void* self, void* object, void* val0, void* val1, void* val2, void* val3, void* val4) {
    return QMetaMethod_Invoke64((QMetaMethod*)self, (QObject*)object, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4);
}

bool q_metamethod_invoke74(void* self, void* object, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5) {
    return QMetaMethod_Invoke74((QMetaMethod*)self, (QObject*)object, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5);
}

bool q_metamethod_invoke84(void* self, void* object, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6) {
    return QMetaMethod_Invoke84((QMetaMethod*)self, (QObject*)object, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5, (QGenericArgument*)val6);
}

bool q_metamethod_invoke94(void* self, void* object, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7) {
    return QMetaMethod_Invoke94((QMetaMethod*)self, (QObject*)object, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5, (QGenericArgument*)val6, (QGenericArgument*)val7);
}

bool q_metamethod_invoke104(void* self, void* object, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8) {
    return QMetaMethod_Invoke104((QMetaMethod*)self, (QObject*)object, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5, (QGenericArgument*)val6, (QGenericArgument*)val7, (QGenericArgument*)val8);
}

bool q_metamethod_invoke114(void* self, void* object, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8, void* val9) {
    return QMetaMethod_Invoke114((QMetaMethod*)self, (QObject*)object, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5, (QGenericArgument*)val6, (QGenericArgument*)val7, (QGenericArgument*)val8, (QGenericArgument*)val9);
}

bool q_metamethod_invoke_on_gadget3(void* self, void* gadget, void* returnValue, void* val0) {
    return QMetaMethod_InvokeOnGadget3((QMetaMethod*)self, gadget, (QGenericReturnArgument*)returnValue, (QGenericArgument*)val0);
}

bool q_metamethod_invoke_on_gadget4(void* self, void* gadget, void* returnValue, void* val0, void* val1) {
    return QMetaMethod_InvokeOnGadget4((QMetaMethod*)self, gadget, (QGenericReturnArgument*)returnValue, (QGenericArgument*)val0, (QGenericArgument*)val1);
}

bool q_metamethod_invoke_on_gadget5(void* self, void* gadget, void* returnValue, void* val0, void* val1, void* val2) {
    return QMetaMethod_InvokeOnGadget5((QMetaMethod*)self, gadget, (QGenericReturnArgument*)returnValue, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2);
}

bool q_metamethod_invoke_on_gadget6(void* self, void* gadget, void* returnValue, void* val0, void* val1, void* val2, void* val3) {
    return QMetaMethod_InvokeOnGadget6((QMetaMethod*)self, gadget, (QGenericReturnArgument*)returnValue, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3);
}

bool q_metamethod_invoke_on_gadget7(void* self, void* gadget, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4) {
    return QMetaMethod_InvokeOnGadget7((QMetaMethod*)self, gadget, (QGenericReturnArgument*)returnValue, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4);
}

bool q_metamethod_invoke_on_gadget8(void* self, void* gadget, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5) {
    return QMetaMethod_InvokeOnGadget8((QMetaMethod*)self, gadget, (QGenericReturnArgument*)returnValue, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5);
}

bool q_metamethod_invoke_on_gadget9(void* self, void* gadget, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6) {
    return QMetaMethod_InvokeOnGadget9((QMetaMethod*)self, gadget, (QGenericReturnArgument*)returnValue, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5, (QGenericArgument*)val6);
}

bool q_metamethod_invoke_on_gadget10(void* self, void* gadget, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7) {
    return QMetaMethod_InvokeOnGadget10((QMetaMethod*)self, gadget, (QGenericReturnArgument*)returnValue, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5, (QGenericArgument*)val6, (QGenericArgument*)val7);
}

bool q_metamethod_invoke_on_gadget11(void* self, void* gadget, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8) {
    return QMetaMethod_InvokeOnGadget11((QMetaMethod*)self, gadget, (QGenericReturnArgument*)returnValue, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5, (QGenericArgument*)val6, (QGenericArgument*)val7, (QGenericArgument*)val8);
}

bool q_metamethod_invoke_on_gadget12(void* self, void* gadget, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8, void* val9) {
    return QMetaMethod_InvokeOnGadget12((QMetaMethod*)self, gadget, (QGenericReturnArgument*)returnValue, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5, (QGenericArgument*)val6, (QGenericArgument*)val7, (QGenericArgument*)val8, (QGenericArgument*)val9);
}

bool q_metamethod_invoke_on_gadget32(void* self, void* gadget, void* val0, void* val1) {
    return QMetaMethod_InvokeOnGadget32((QMetaMethod*)self, gadget, (QGenericArgument*)val0, (QGenericArgument*)val1);
}

bool q_metamethod_invoke_on_gadget42(void* self, void* gadget, void* val0, void* val1, void* val2) {
    return QMetaMethod_InvokeOnGadget42((QMetaMethod*)self, gadget, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2);
}

bool q_metamethod_invoke_on_gadget52(void* self, void* gadget, void* val0, void* val1, void* val2, void* val3) {
    return QMetaMethod_InvokeOnGadget52((QMetaMethod*)self, gadget, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3);
}

bool q_metamethod_invoke_on_gadget62(void* self, void* gadget, void* val0, void* val1, void* val2, void* val3, void* val4) {
    return QMetaMethod_InvokeOnGadget62((QMetaMethod*)self, gadget, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4);
}

bool q_metamethod_invoke_on_gadget72(void* self, void* gadget, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5) {
    return QMetaMethod_InvokeOnGadget72((QMetaMethod*)self, gadget, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5);
}

bool q_metamethod_invoke_on_gadget82(void* self, void* gadget, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6) {
    return QMetaMethod_InvokeOnGadget82((QMetaMethod*)self, gadget, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5, (QGenericArgument*)val6);
}

bool q_metamethod_invoke_on_gadget92(void* self, void* gadget, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7) {
    return QMetaMethod_InvokeOnGadget92((QMetaMethod*)self, gadget, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5, (QGenericArgument*)val6, (QGenericArgument*)val7);
}

bool q_metamethod_invoke_on_gadget102(void* self, void* gadget, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8) {
    return QMetaMethod_InvokeOnGadget102((QMetaMethod*)self, gadget, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5, (QGenericArgument*)val6, (QGenericArgument*)val7, (QGenericArgument*)val8);
}

bool q_metamethod_invoke_on_gadget112(void* self, void* gadget, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8, void* val9) {
    return QMetaMethod_InvokeOnGadget112((QMetaMethod*)self, gadget, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5, (QGenericArgument*)val6, (QGenericArgument*)val7, (QGenericArgument*)val8, (QGenericArgument*)val9);
}

void q_metamethod_delete(void* self) {
    QMetaMethod_Delete((QMetaMethod*)(self));
}

QMetaEnum* q_metaenum_new(void* other) {
    return QMetaEnum_new((QMetaEnum*)other);
}

QMetaEnum* q_metaenum_new2(void* other) {
    return QMetaEnum_new2((QMetaEnum*)other);
}

QMetaEnum* q_metaenum_new3() {
    return QMetaEnum_new3();
}

QMetaEnum* q_metaenum_new4(void* param1) {
    return QMetaEnum_new4((QMetaEnum*)param1);
}

void q_metaenum_copy_assign(void* self, void* other) {
    QMetaEnum_CopyAssign((QMetaEnum*)self, (QMetaEnum*)other);
}

void q_metaenum_move_assign(void* self, void* other) {
    QMetaEnum_MoveAssign((QMetaEnum*)self, (QMetaEnum*)other);
}

const char* q_metaenum_name(void* self) {
    return QMetaEnum_Name((QMetaEnum*)self);
}

const char* q_metaenum_enum_name(void* self) {
    return QMetaEnum_EnumName((QMetaEnum*)self);
}

QMetaType* q_metaenum_meta_type(void* self) {
    return QMetaEnum_MetaType((QMetaEnum*)self);
}

bool q_metaenum_is_flag(void* self) {
    return QMetaEnum_IsFlag((QMetaEnum*)self);
}

bool q_metaenum_is_scoped(void* self) {
    return QMetaEnum_IsScoped((QMetaEnum*)self);
}

int32_t q_metaenum_key_count(void* self) {
    return QMetaEnum_KeyCount((QMetaEnum*)self);
}

const char* q_metaenum_key(void* self, int index) {
    return QMetaEnum_Key((QMetaEnum*)self, index);
}

int32_t q_metaenum_value(void* self, int index) {
    return QMetaEnum_Value((QMetaEnum*)self, index);
}

const char* q_metaenum_scope(void* self) {
    return QMetaEnum_Scope((QMetaEnum*)self);
}

int32_t q_metaenum_key_to_value(void* self, const char* key) {
    return QMetaEnum_KeyToValue((QMetaEnum*)self, key);
}

const char* q_metaenum_value_to_key(void* self, int value) {
    return QMetaEnum_ValueToKey((QMetaEnum*)self, value);
}

int32_t q_metaenum_keys_to_value(void* self, const char* keys) {
    return QMetaEnum_KeysToValue((QMetaEnum*)self, keys);
}

char* q_metaenum_value_to_keys(void* self, int value) {
    libqt_string _str = QMetaEnum_ValueToKeys((QMetaEnum*)self, value);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const QMetaObject* q_metaenum_enclosing_meta_object(void* self) {
    return QMetaEnum_EnclosingMetaObject((QMetaEnum*)self);
}

bool q_metaenum_is_valid(void* self) {
    return QMetaEnum_IsValid((QMetaEnum*)self);
}

int32_t q_metaenum_key_to_value2(void* self, const char* key, bool* ok) {
    return QMetaEnum_KeyToValue2((QMetaEnum*)self, key, (bool*)ok);
}

int32_t q_metaenum_keys_to_value2(void* self, const char* keys, bool* ok) {
    return QMetaEnum_KeysToValue2((QMetaEnum*)self, keys, (bool*)ok);
}

void q_metaenum_delete(void* self) {
    QMetaEnum_Delete((QMetaEnum*)(self));
}

QMetaProperty* q_metaproperty_new(void* other) {
    return QMetaProperty_new((QMetaProperty*)other);
}

QMetaProperty* q_metaproperty_new2(void* other) {
    return QMetaProperty_new2((QMetaProperty*)other);
}

QMetaProperty* q_metaproperty_new3() {
    return QMetaProperty_new3();
}

void q_metaproperty_copy_assign(void* self, void* other) {
    QMetaProperty_CopyAssign((QMetaProperty*)self, (QMetaProperty*)other);
}

void q_metaproperty_move_assign(void* self, void* other) {
    QMetaProperty_MoveAssign((QMetaProperty*)self, (QMetaProperty*)other);
}

const char* q_metaproperty_name(void* self) {
    return QMetaProperty_Name((QMetaProperty*)self);
}

const char* q_metaproperty_type_name(void* self) {
    return QMetaProperty_TypeName((QMetaProperty*)self);
}

int64_t q_metaproperty_type(void* self) {
    return QMetaProperty_Type((QMetaProperty*)self);
}

int32_t q_metaproperty_user_type(void* self) {
    return QMetaProperty_UserType((QMetaProperty*)self);
}

int32_t q_metaproperty_type_id(void* self) {
    return QMetaProperty_TypeId((QMetaProperty*)self);
}

QMetaType* q_metaproperty_meta_type(void* self) {
    return QMetaProperty_MetaType((QMetaProperty*)self);
}

int32_t q_metaproperty_property_index(void* self) {
    return QMetaProperty_PropertyIndex((QMetaProperty*)self);
}

int32_t q_metaproperty_relative_property_index(void* self) {
    return QMetaProperty_RelativePropertyIndex((QMetaProperty*)self);
}

bool q_metaproperty_is_readable(void* self) {
    return QMetaProperty_IsReadable((QMetaProperty*)self);
}

bool q_metaproperty_is_writable(void* self) {
    return QMetaProperty_IsWritable((QMetaProperty*)self);
}

bool q_metaproperty_is_resettable(void* self) {
    return QMetaProperty_IsResettable((QMetaProperty*)self);
}

bool q_metaproperty_is_designable(void* self) {
    return QMetaProperty_IsDesignable((QMetaProperty*)self);
}

bool q_metaproperty_is_scriptable(void* self) {
    return QMetaProperty_IsScriptable((QMetaProperty*)self);
}

bool q_metaproperty_is_stored(void* self) {
    return QMetaProperty_IsStored((QMetaProperty*)self);
}

bool q_metaproperty_is_user(void* self) {
    return QMetaProperty_IsUser((QMetaProperty*)self);
}

bool q_metaproperty_is_constant(void* self) {
    return QMetaProperty_IsConstant((QMetaProperty*)self);
}

bool q_metaproperty_is_final(void* self) {
    return QMetaProperty_IsFinal((QMetaProperty*)self);
}

bool q_metaproperty_is_required(void* self) {
    return QMetaProperty_IsRequired((QMetaProperty*)self);
}

bool q_metaproperty_is_bindable(void* self) {
    return QMetaProperty_IsBindable((QMetaProperty*)self);
}

bool q_metaproperty_is_flag_type(void* self) {
    return QMetaProperty_IsFlagType((QMetaProperty*)self);
}

bool q_metaproperty_is_enum_type(void* self) {
    return QMetaProperty_IsEnumType((QMetaProperty*)self);
}

QMetaEnum* q_metaproperty_enumerator(void* self) {
    return QMetaProperty_Enumerator((QMetaProperty*)self);
}

bool q_metaproperty_has_notify_signal(void* self) {
    return QMetaProperty_HasNotifySignal((QMetaProperty*)self);
}

QMetaMethod* q_metaproperty_notify_signal(void* self) {
    return QMetaProperty_NotifySignal((QMetaProperty*)self);
}

int32_t q_metaproperty_notify_signal_index(void* self) {
    return QMetaProperty_NotifySignalIndex((QMetaProperty*)self);
}

int32_t q_metaproperty_revision(void* self) {
    return QMetaProperty_Revision((QMetaProperty*)self);
}

QVariant* q_metaproperty_read(void* self, void* obj) {
    return QMetaProperty_Read((QMetaProperty*)self, (QObject*)obj);
}

bool q_metaproperty_write(void* self, void* obj, void* value) {
    return QMetaProperty_Write((QMetaProperty*)self, (QObject*)obj, (QVariant*)value);
}

bool q_metaproperty_reset(void* self, void* obj) {
    return QMetaProperty_Reset((QMetaProperty*)self, (QObject*)obj);
}

QUntypedBindable* q_metaproperty_bindable(void* self, void* object) {
    return QMetaProperty_Bindable((QMetaProperty*)self, (QObject*)object);
}

QVariant* q_metaproperty_read_on_gadget(void* self, void* gadget) {
    return QMetaProperty_ReadOnGadget((QMetaProperty*)self, gadget);
}

bool q_metaproperty_write_on_gadget(void* self, void* gadget, void* value) {
    return QMetaProperty_WriteOnGadget((QMetaProperty*)self, gadget, (QVariant*)value);
}

bool q_metaproperty_reset_on_gadget(void* self, void* gadget) {
    return QMetaProperty_ResetOnGadget((QMetaProperty*)self, gadget);
}

bool q_metaproperty_has_std_cpp_set(void* self) {
    return QMetaProperty_HasStdCppSet((QMetaProperty*)self);
}

bool q_metaproperty_is_alias(void* self) {
    return QMetaProperty_IsAlias((QMetaProperty*)self);
}

bool q_metaproperty_is_valid(void* self) {
    return QMetaProperty_IsValid((QMetaProperty*)self);
}

const QMetaObject* q_metaproperty_enclosing_meta_object(void* self) {
    return QMetaProperty_EnclosingMetaObject((QMetaProperty*)self);
}

void q_metaproperty_delete(void* self) {
    QMetaProperty_Delete((QMetaProperty*)(self));
}

QMetaClassInfo* q_metaclassinfo_new(void* other) {
    return QMetaClassInfo_new((QMetaClassInfo*)other);
}

QMetaClassInfo* q_metaclassinfo_new2(void* other) {
    return QMetaClassInfo_new2((QMetaClassInfo*)other);
}

QMetaClassInfo* q_metaclassinfo_new3() {
    return QMetaClassInfo_new3();
}

QMetaClassInfo* q_metaclassinfo_new4(void* param1) {
    return QMetaClassInfo_new4((QMetaClassInfo*)param1);
}

void q_metaclassinfo_copy_assign(void* self, void* other) {
    QMetaClassInfo_CopyAssign((QMetaClassInfo*)self, (QMetaClassInfo*)other);
}

void q_metaclassinfo_move_assign(void* self, void* other) {
    QMetaClassInfo_MoveAssign((QMetaClassInfo*)self, (QMetaClassInfo*)other);
}

const char* q_metaclassinfo_name(void* self) {
    return QMetaClassInfo_Name((QMetaClassInfo*)self);
}

const char* q_metaclassinfo_value(void* self) {
    return QMetaClassInfo_Value((QMetaClassInfo*)self);
}

const QMetaObject* q_metaclassinfo_enclosing_meta_object(void* self) {
    return QMetaClassInfo_EnclosingMetaObject((QMetaClassInfo*)self);
}

void q_metaclassinfo_delete(void* self) {
    QMetaClassInfo_Delete((QMetaClassInfo*)(self));
}
