#include "libqmetaobject.hpp"
#include "libqmetatype.hpp"
#include "libqobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobjectdefs.h"

const char* q_qobjectdefs_q_flag_location(const char* method) {
    return qobjectdefs_QFlagLocation(method);
}

QGenericArgument* q_genericargument_new(const void* other) {
    return QGenericArgument_New((QGenericArgument*)other);
}

QGenericArgument* q_genericargument_new2(void* other) {
    return QGenericArgument_New2((QGenericArgument*)other);
}

QGenericArgument* q_genericargument_new3() {
    return QGenericArgument_New3();
}

QGenericArgument* q_genericargument_new4(const void* param1) {
    return QGenericArgument_New4((QGenericArgument*)param1);
}

QGenericArgument* q_genericargument_new5(const char* aName) {
    return QGenericArgument_New5(aName);
}

QGenericArgument* q_genericargument_new6(const char* aName, void* aData) {
    return QGenericArgument_New6(aName, aData);
}

void q_genericargument_copy_assign(void* self, void* other) {
    QGenericArgument_CopyAssign((QGenericArgument*)self, (QGenericArgument*)other);
}

void q_genericargument_move_assign(void* self, void* other) {
    QGenericArgument_MoveAssign((QGenericArgument*)self, (QGenericArgument*)other);
}

void* q_genericargument_data(const void* self) {
    return QGenericArgument_Data((QGenericArgument*)self);
}

const char* q_genericargument_name(const void* self) {
    return QGenericArgument_Name((QGenericArgument*)self);
}

void q_genericargument_delete(void* self) {
    QGenericArgument_Delete((QGenericArgument*)(self));
}

QGenericReturnArgument* q_genericreturnargument_new(const void* other) {
    return QGenericReturnArgument_New((QGenericReturnArgument*)other);
}

QGenericReturnArgument* q_genericreturnargument_new2(void* other) {
    return QGenericReturnArgument_New2((QGenericReturnArgument*)other);
}

QGenericReturnArgument* q_genericreturnargument_new3() {
    return QGenericReturnArgument_New3();
}

QGenericReturnArgument* q_genericreturnargument_new4(const void* param1) {
    return QGenericReturnArgument_New4((QGenericReturnArgument*)param1);
}

QGenericReturnArgument* q_genericreturnargument_new5(const char* aName) {
    return QGenericReturnArgument_New5(aName);
}

QGenericReturnArgument* q_genericreturnargument_new6(const char* aName, void* aData) {
    return QGenericReturnArgument_New6(aName, aData);
}

void q_genericreturnargument_copy_assign(void* self, void* other) {
    QGenericReturnArgument_CopyAssign((QGenericReturnArgument*)self, (QGenericReturnArgument*)other);
}

void q_genericreturnargument_move_assign(void* self, void* other) {
    QGenericReturnArgument_MoveAssign((QGenericReturnArgument*)self, (QGenericReturnArgument*)other);
}

void* q_genericreturnargument_data(const void* self) {
    return QGenericArgument_Data((QGenericArgument*)self);
}

const char* q_genericreturnargument_name(const void* self) {
    return QGenericArgument_Name((QGenericArgument*)self);
}

void q_genericreturnargument_delete(void* self) {
    QGenericReturnArgument_Delete((QGenericReturnArgument*)(self));
}

const char* q_metamethodargument_name(const void* self) {
    return QMetaMethodArgument_Name((QMetaMethodArgument*)self);
}

void q_metamethodargument_set_name(void* self, const char* name) {
    QMetaMethodArgument_SetName((QMetaMethodArgument*)self, name);
}

void q_metamethodargument_delete(void* self) {
    QMetaMethodArgument_Delete((QMetaMethodArgument*)(self));
}

const char* q_metamethodreturnargument_name(const void* self) {
    return QMetaMethodReturnArgument_Name((QMetaMethodReturnArgument*)self);
}

void q_metamethodreturnargument_set_name(void* self, const char* name) {
    QMetaMethodReturnArgument_SetName((QMetaMethodReturnArgument*)self, name);
}

void q_metamethodreturnargument_delete(void* self) {
    QMetaMethodReturnArgument_Delete((QMetaMethodReturnArgument*)(self));
}

QMetaObject* q_metaobject_new() {
    return QMetaObject_New();
}

QMetaObject* q_metaobject_new2(const void* param1) {
    return QMetaObject_New2((QMetaObject*)param1);
}

const char* q_metaobject_class_name(const void* self) {
    return QMetaObject_ClassName((QMetaObject*)self);
}

const QMetaObject* q_metaobject_super_class(const void* self) {
    return QMetaObject_SuperClass((QMetaObject*)self);
}

bool q_metaobject_inherits(const void* self, const void* metaObject) {
    return QMetaObject_Inherits((QMetaObject*)self, (QMetaObject*)metaObject);
}

QObject* q_metaobject_cast(const void* self, void* obj) {
    return QMetaObject_Cast((QMetaObject*)self, (QObject*)obj);
}

const QObject* q_metaobject_cast2(const void* self, const void* obj) {
    return QMetaObject_Cast2((QMetaObject*)self, (QObject*)obj);
}

const char* q_metaobject_tr(const void* self, const char* s, const char* c) {
    libqt_string _str = QMetaObject_Tr((QMetaObject*)self, s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QMetaType* q_metaobject_meta_type(const void* self) {
    return QMetaObject_MetaType((QMetaObject*)self);
}

int32_t q_metaobject_method_offset(const void* self) {
    return QMetaObject_MethodOffset((QMetaObject*)self);
}

int32_t q_metaobject_enumerator_offset(const void* self) {
    return QMetaObject_EnumeratorOffset((QMetaObject*)self);
}

int32_t q_metaobject_property_offset(const void* self) {
    return QMetaObject_PropertyOffset((QMetaObject*)self);
}

int32_t q_metaobject_class_info_offset(const void* self) {
    return QMetaObject_ClassInfoOffset((QMetaObject*)self);
}

int32_t q_metaobject_constructor_count(const void* self) {
    return QMetaObject_ConstructorCount((QMetaObject*)self);
}

int32_t q_metaobject_method_count(const void* self) {
    return QMetaObject_MethodCount((QMetaObject*)self);
}

int32_t q_metaobject_enumerator_count(const void* self) {
    return QMetaObject_EnumeratorCount((QMetaObject*)self);
}

int32_t q_metaobject_property_count(const void* self) {
    return QMetaObject_PropertyCount((QMetaObject*)self);
}

int32_t q_metaobject_class_info_count(const void* self) {
    return QMetaObject_ClassInfoCount((QMetaObject*)self);
}

int32_t q_metaobject_index_of_constructor(const void* self, const char* constructor) {
    return QMetaObject_IndexOfConstructor((QMetaObject*)self, constructor);
}

int32_t q_metaobject_index_of_method(const void* self, const char* method) {
    return QMetaObject_IndexOfMethod((QMetaObject*)self, method);
}

int32_t q_metaobject_index_of_signal(const void* self, const char* signal) {
    return QMetaObject_IndexOfSignal((QMetaObject*)self, signal);
}

int32_t q_metaobject_index_of_slot(const void* self, const char* slot) {
    return QMetaObject_IndexOfSlot((QMetaObject*)self, slot);
}

int32_t q_metaobject_index_of_enumerator(const void* self, const char* name) {
    return QMetaObject_IndexOfEnumerator((QMetaObject*)self, name);
}

int32_t q_metaobject_index_of_property(const void* self, const char* name) {
    return QMetaObject_IndexOfProperty((QMetaObject*)self, name);
}

int32_t q_metaobject_index_of_class_info(const void* self, const char* name) {
    return QMetaObject_IndexOfClassInfo((QMetaObject*)self, name);
}

QMetaMethod* q_metaobject_constructor(const void* self, int index) {
    return QMetaObject_Constructor((QMetaObject*)self, index);
}

QMetaMethod* q_metaobject_method(const void* self, int index) {
    return QMetaObject_Method((QMetaObject*)self, index);
}

QMetaEnum* q_metaobject_enumerator(const void* self, int index) {
    return QMetaObject_Enumerator((QMetaObject*)self, index);
}

QMetaProperty* q_metaobject_property(const void* self, int index) {
    return QMetaObject_Property((QMetaObject*)self, index);
}

QMetaClassInfo* q_metaobject_class_info(const void* self, int index) {
    return QMetaObject_ClassInfo((QMetaObject*)self, index);
}

QMetaProperty* q_metaobject_user_property(const void* self) {
    return QMetaObject_UserProperty((QMetaObject*)self);
}

bool q_metaobject_check_connect_args(const char* signal, const char* method) {
    return QMetaObject_CheckConnectArgs(signal, method);
}

bool q_metaobject_check_connect_args2(const void* signal, const void* method) {
    return QMetaObject_CheckConnectArgs2((QMetaMethod*)signal, (QMetaMethod*)method);
}

const char* q_metaobject_normalized_signature(const char* method) {
    libqt_string _str = QMetaObject_NormalizedSignature(method);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_metaobject_normalized_type(const char* type) {
    libqt_string _str = QMetaObject_NormalizedType(type);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QMetaObject__Connection* q_metaobject_connect(const void* sender, int signal_index, const void* receiver, int method_index) {
    return QMetaObject_Connect((QObject*)sender, signal_index, (QObject*)receiver, method_index);
}

bool q_metaobject_disconnect(const void* sender, int signal_index, const void* receiver, int method_index) {
    return QMetaObject_Disconnect((QObject*)sender, signal_index, (QObject*)receiver, method_index);
}

bool q_metaobject_disconnect_one(const void* sender, int signal_index, const void* receiver, int method_index) {
    return QMetaObject_DisconnectOne((QObject*)sender, signal_index, (QObject*)receiver, method_index);
}

void q_metaobject_connect_slots_by_name(void* o) {
    QMetaObject_ConnectSlotsByName((QObject*)o);
}

void q_metaobject_activate(void* sender, int signal_index, void* argv) {
    QMetaObject_Activate((QObject*)sender, signal_index, argv);
}

void q_metaobject_activate2(void* sender, const void* param2, int local_signal_index, void* argv) {
    QMetaObject_Activate2((QObject*)sender, (QMetaObject*)param2, local_signal_index, argv);
}

void q_metaobject_activate3(void* sender, int signal_offset, int local_signal_index, void* argv) {
    QMetaObject_Activate3((QObject*)sender, signal_offset, local_signal_index, argv);
}

bool q_metaobject_invoke_method(void* obj, const char* member, int32_t param3, void* ret) {
    return QMetaObject_InvokeMethod((QObject*)obj, member, param3, (QGenericReturnArgument*)ret);
}

bool q_metaobject_invoke_method2(void* obj, const char* member, void* ret) {
    return QMetaObject_InvokeMethod2((QObject*)obj, member, (QGenericReturnArgument*)ret);
}

bool q_metaobject_invoke_method3(void* obj, const char* member, int32_t type, void* val0) {
    return QMetaObject_InvokeMethod3((QObject*)obj, member, type, (QGenericArgument*)val0);
}

bool q_metaobject_invoke_method4(void* obj, const char* member, void* val0) {
    return QMetaObject_InvokeMethod4((QObject*)obj, member, (QGenericArgument*)val0);
}

QObject* q_metaobject_new_instance(const void* self, void* val0) {
    return QMetaObject_NewInstance((QMetaObject*)self, (QGenericArgument*)val0);
}

int32_t q_metaobject_static_metacall(const void* self, int32_t param1, int param2, void* param3) {
    return QMetaObject_StaticMetacall((QMetaObject*)self, param1, param2, param3);
}

int32_t q_metaobject_metacall(void* param1, int32_t param2, int param3, void* param4) {
    return QMetaObject_Metacall((QObject*)param1, param2, param3, param4);
}

QMetaObject__Data* q_metaobject_d(const void* self) {
    return QMetaObject_D((QMetaObject*)self);
}

void q_metaobject_set_d(void* self, void* d) {
    QMetaObject_SetD((QMetaObject*)self, (QMetaObject__Data*)d);
}

void q_metaobject_operator_assign(void* self, const void* param1) {
    QMetaObject_OperatorAssign((QMetaObject*)self, (QMetaObject*)param1);
}

const char* q_metaobject_tr3(const void* self, const char* s, const char* c, int n) {
    libqt_string _str = QMetaObject_Tr3((QMetaObject*)self, s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QMetaObject__Connection* q_metaobject_connect5(const void* sender, int signal_index, const void* receiver, int method_index, int type) {
    return QMetaObject_Connect5((QObject*)sender, signal_index, (QObject*)receiver, method_index, type);
}

QMetaObject__Connection* q_metaobject_connect6(const void* sender, int signal_index, const void* receiver, int method_index, int type, int* types) {
    return QMetaObject_Connect6((QObject*)sender, signal_index, (QObject*)receiver, method_index, type, types);
}

bool q_metaobject_invoke_method5(void* obj, const char* member, int32_t param3, void* ret, void* val0) {
    return QMetaObject_InvokeMethod5((QObject*)obj, member, param3, (QGenericReturnArgument*)ret, (QGenericArgument*)val0);
}

bool q_metaobject_invoke_method6(void* obj, const char* member, int32_t param3, void* ret, void* val0, void* val1) {
    return QMetaObject_InvokeMethod6((QObject*)obj, member, param3, (QGenericReturnArgument*)ret, (QGenericArgument*)val0, (QGenericArgument*)val1);
}

bool q_metaobject_invoke_method7(void* obj, const char* member, int32_t param3, void* ret, void* val0, void* val1, void* val2) {
    return QMetaObject_InvokeMethod7((QObject*)obj, member, param3, (QGenericReturnArgument*)ret, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2);
}

bool q_metaobject_invoke_method8(void* obj, const char* member, int32_t param3, void* ret, void* val0, void* val1, void* val2, void* val3) {
    return QMetaObject_InvokeMethod8((QObject*)obj, member, param3, (QGenericReturnArgument*)ret, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3);
}

bool q_metaobject_invoke_method9(void* obj, const char* member, int32_t param3, void* ret, void* val0, void* val1, void* val2, void* val3, void* val4) {
    return QMetaObject_InvokeMethod9((QObject*)obj, member, param3, (QGenericReturnArgument*)ret, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4);
}

bool q_metaobject_invoke_method10(void* obj, const char* member, int32_t param3, void* ret, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5) {
    return QMetaObject_InvokeMethod10((QObject*)obj, member, param3, (QGenericReturnArgument*)ret, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5);
}

bool q_metaobject_invoke_method11(void* obj, const char* member, int32_t param3, void* ret, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6) {
    return QMetaObject_InvokeMethod11((QObject*)obj, member, param3, (QGenericReturnArgument*)ret, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5, (QGenericArgument*)val6);
}

bool q_metaobject_invoke_method12(void* obj, const char* member, int32_t param3, void* ret, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7) {
    return QMetaObject_InvokeMethod12((QObject*)obj, member, param3, (QGenericReturnArgument*)ret, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5, (QGenericArgument*)val6, (QGenericArgument*)val7);
}

bool q_metaobject_invoke_method13(void* obj, const char* member, int32_t param3, void* ret, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8) {
    return QMetaObject_InvokeMethod13((QObject*)obj, member, param3, (QGenericReturnArgument*)ret, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5, (QGenericArgument*)val6, (QGenericArgument*)val7, (QGenericArgument*)val8);
}

bool q_metaobject_invoke_method14(void* obj, const char* member, int32_t param3, void* ret, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8, void* val9) {
    return QMetaObject_InvokeMethod14((QObject*)obj, member, param3, (QGenericReturnArgument*)ret, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5, (QGenericArgument*)val6, (QGenericArgument*)val7, (QGenericArgument*)val8, (QGenericArgument*)val9);
}

bool q_metaobject_invoke_method42(void* obj, const char* member, void* ret, void* val0) {
    return QMetaObject_InvokeMethod42((QObject*)obj, member, (QGenericReturnArgument*)ret, (QGenericArgument*)val0);
}

bool q_metaobject_invoke_method52(void* obj, const char* member, void* ret, void* val0, void* val1) {
    return QMetaObject_InvokeMethod52((QObject*)obj, member, (QGenericReturnArgument*)ret, (QGenericArgument*)val0, (QGenericArgument*)val1);
}

bool q_metaobject_invoke_method62(void* obj, const char* member, void* ret, void* val0, void* val1, void* val2) {
    return QMetaObject_InvokeMethod62((QObject*)obj, member, (QGenericReturnArgument*)ret, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2);
}

bool q_metaobject_invoke_method72(void* obj, const char* member, void* ret, void* val0, void* val1, void* val2, void* val3) {
    return QMetaObject_InvokeMethod72((QObject*)obj, member, (QGenericReturnArgument*)ret, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3);
}

bool q_metaobject_invoke_method82(void* obj, const char* member, void* ret, void* val0, void* val1, void* val2, void* val3, void* val4) {
    return QMetaObject_InvokeMethod82((QObject*)obj, member, (QGenericReturnArgument*)ret, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4);
}

bool q_metaobject_invoke_method92(void* obj, const char* member, void* ret, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5) {
    return QMetaObject_InvokeMethod92((QObject*)obj, member, (QGenericReturnArgument*)ret, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5);
}

bool q_metaobject_invoke_method102(void* obj, const char* member, void* ret, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6) {
    return QMetaObject_InvokeMethod102((QObject*)obj, member, (QGenericReturnArgument*)ret, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5, (QGenericArgument*)val6);
}

bool q_metaobject_invoke_method112(void* obj, const char* member, void* ret, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7) {
    return QMetaObject_InvokeMethod112((QObject*)obj, member, (QGenericReturnArgument*)ret, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5, (QGenericArgument*)val6, (QGenericArgument*)val7);
}

bool q_metaobject_invoke_method122(void* obj, const char* member, void* ret, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8) {
    return QMetaObject_InvokeMethod122((QObject*)obj, member, (QGenericReturnArgument*)ret, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5, (QGenericArgument*)val6, (QGenericArgument*)val7, (QGenericArgument*)val8);
}

bool q_metaobject_invoke_method132(void* obj, const char* member, void* ret, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8, void* val9) {
    return QMetaObject_InvokeMethod132((QObject*)obj, member, (QGenericReturnArgument*)ret, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5, (QGenericArgument*)val6, (QGenericArgument*)val7, (QGenericArgument*)val8, (QGenericArgument*)val9);
}

bool q_metaobject_invoke_method53(void* obj, const char* member, int32_t type, void* val0, void* val1) {
    return QMetaObject_InvokeMethod53((QObject*)obj, member, type, (QGenericArgument*)val0, (QGenericArgument*)val1);
}

bool q_metaobject_invoke_method63(void* obj, const char* member, int32_t type, void* val0, void* val1, void* val2) {
    return QMetaObject_InvokeMethod63((QObject*)obj, member, type, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2);
}

bool q_metaobject_invoke_method73(void* obj, const char* member, int32_t type, void* val0, void* val1, void* val2, void* val3) {
    return QMetaObject_InvokeMethod73((QObject*)obj, member, type, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3);
}

bool q_metaobject_invoke_method83(void* obj, const char* member, int32_t type, void* val0, void* val1, void* val2, void* val3, void* val4) {
    return QMetaObject_InvokeMethod83((QObject*)obj, member, type, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4);
}

bool q_metaobject_invoke_method93(void* obj, const char* member, int32_t type, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5) {
    return QMetaObject_InvokeMethod93((QObject*)obj, member, type, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5);
}

bool q_metaobject_invoke_method103(void* obj, const char* member, int32_t type, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6) {
    return QMetaObject_InvokeMethod103((QObject*)obj, member, type, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5, (QGenericArgument*)val6);
}

bool q_metaobject_invoke_method113(void* obj, const char* member, int32_t type, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7) {
    return QMetaObject_InvokeMethod113((QObject*)obj, member, type, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5, (QGenericArgument*)val6, (QGenericArgument*)val7);
}

bool q_metaobject_invoke_method123(void* obj, const char* member, int32_t type, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8) {
    return QMetaObject_InvokeMethod123((QObject*)obj, member, type, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5, (QGenericArgument*)val6, (QGenericArgument*)val7, (QGenericArgument*)val8);
}

bool q_metaobject_invoke_method133(void* obj, const char* member, int32_t type, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8, void* val9) {
    return QMetaObject_InvokeMethod133((QObject*)obj, member, type, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5, (QGenericArgument*)val6, (QGenericArgument*)val7, (QGenericArgument*)val8, (QGenericArgument*)val9);
}

bool q_metaobject_invoke_method43(void* obj, const char* member, void* val0, void* val1) {
    return QMetaObject_InvokeMethod43((QObject*)obj, member, (QGenericArgument*)val0, (QGenericArgument*)val1);
}

bool q_metaobject_invoke_method54(void* obj, const char* member, void* val0, void* val1, void* val2) {
    return QMetaObject_InvokeMethod54((QObject*)obj, member, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2);
}

bool q_metaobject_invoke_method64(void* obj, const char* member, void* val0, void* val1, void* val2, void* val3) {
    return QMetaObject_InvokeMethod64((QObject*)obj, member, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3);
}

bool q_metaobject_invoke_method74(void* obj, const char* member, void* val0, void* val1, void* val2, void* val3, void* val4) {
    return QMetaObject_InvokeMethod74((QObject*)obj, member, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4);
}

bool q_metaobject_invoke_method84(void* obj, const char* member, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5) {
    return QMetaObject_InvokeMethod84((QObject*)obj, member, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5);
}

bool q_metaobject_invoke_method94(void* obj, const char* member, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6) {
    return QMetaObject_InvokeMethod94((QObject*)obj, member, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5, (QGenericArgument*)val6);
}

bool q_metaobject_invoke_method104(void* obj, const char* member, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7) {
    return QMetaObject_InvokeMethod104((QObject*)obj, member, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5, (QGenericArgument*)val6, (QGenericArgument*)val7);
}

bool q_metaobject_invoke_method114(void* obj, const char* member, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8) {
    return QMetaObject_InvokeMethod114((QObject*)obj, member, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5, (QGenericArgument*)val6, (QGenericArgument*)val7, (QGenericArgument*)val8);
}

bool q_metaobject_invoke_method124(void* obj, const char* member, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8, void* val9) {
    return QMetaObject_InvokeMethod124((QObject*)obj, member, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5, (QGenericArgument*)val6, (QGenericArgument*)val7, (QGenericArgument*)val8, (QGenericArgument*)val9);
}

QObject* q_metaobject_new_instance2(const void* self, void* val0, void* val1) {
    return QMetaObject_NewInstance2((QMetaObject*)self, (QGenericArgument*)val0, (QGenericArgument*)val1);
}

QObject* q_metaobject_new_instance3(const void* self, void* val0, void* val1, void* val2) {
    return QMetaObject_NewInstance3((QMetaObject*)self, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2);
}

QObject* q_metaobject_new_instance4(const void* self, void* val0, void* val1, void* val2, void* val3) {
    return QMetaObject_NewInstance4((QMetaObject*)self, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3);
}

QObject* q_metaobject_new_instance5(const void* self, void* val0, void* val1, void* val2, void* val3, void* val4) {
    return QMetaObject_NewInstance5((QMetaObject*)self, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4);
}

QObject* q_metaobject_new_instance6(const void* self, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5) {
    return QMetaObject_NewInstance6((QMetaObject*)self, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5);
}

QObject* q_metaobject_new_instance7(const void* self, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6) {
    return QMetaObject_NewInstance7((QMetaObject*)self, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5, (QGenericArgument*)val6);
}

QObject* q_metaobject_new_instance8(const void* self, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7) {
    return QMetaObject_NewInstance8((QMetaObject*)self, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5, (QGenericArgument*)val6, (QGenericArgument*)val7);
}

QObject* q_metaobject_new_instance9(const void* self, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8) {
    return QMetaObject_NewInstance9((QMetaObject*)self, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5, (QGenericArgument*)val6, (QGenericArgument*)val7, (QGenericArgument*)val8);
}

QObject* q_metaobject_new_instance10(const void* self, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8, void* val9) {
    return QMetaObject_NewInstance10((QMetaObject*)self, (QGenericArgument*)val0, (QGenericArgument*)val1, (QGenericArgument*)val2, (QGenericArgument*)val3, (QGenericArgument*)val4, (QGenericArgument*)val5, (QGenericArgument*)val6, (QGenericArgument*)val7, (QGenericArgument*)val8, (QGenericArgument*)val9);
}

void q_metaobject_delete(void* self) {
    QMetaObject_Delete((QMetaObject*)(self));
}

QMetaObject__Connection* q_metaobject__connection_new() {
    return QMetaObject__Connection_New();
}

QMetaObject__Connection* q_metaobject__connection_new2(const void* other) {
    return QMetaObject__Connection_New2((QMetaObject__Connection*)other);
}

void q_metaobject__connection_operator_assign(void* self, const void* other) {
    QMetaObject__Connection_OperatorAssign((QMetaObject__Connection*)self, (QMetaObject__Connection*)other);
}

void q_metaobject__connection_swap(void* self, void* other) {
    QMetaObject__Connection_Swap((QMetaObject__Connection*)self, (QMetaObject__Connection*)other);
}

void q_metaobject__connection_delete(void* self) {
    QMetaObject__Connection_Delete((QMetaObject__Connection*)(self));
}

QMetaObject__SuperData* q_metaobject__superdata_new() {
    return QMetaObject__SuperData_New();
}

QMetaObject__SuperData* q_metaobject__superdata_new2(const void* mo) {
    return QMetaObject__SuperData_New2((QMetaObject*)mo);
}

QMetaObject__SuperData* q_metaobject__superdata_new3(QMetaObject* (*g)()) {
    return QMetaObject__SuperData_New3((intptr_t)g);
}

QMetaObject__SuperData* q_metaobject__superdata_new4(const void* param1) {
    return QMetaObject__SuperData_New4((QMetaObject__SuperData*)param1);
}

const QMetaObject* q_metaobject__superdata_direct(const void* self) {
    return QMetaObject__SuperData_Direct((QMetaObject__SuperData*)self);
}

void q_metaobject__superdata_set_direct(void* self, const void* direct) {
    QMetaObject__SuperData_SetDirect((QMetaObject__SuperData*)self, (QMetaObject*)direct);
}

const QMetaObject* q_metaobject__superdata_operator_minus_greater(const void* self) {
    return QMetaObject__SuperData_OperatorMinusGreater((QMetaObject__SuperData*)self);
}

const QMetaObject* q_metaobject__superdata_to_const_q_meta_object_multiply(const void* self) {
    return QMetaObject__SuperData_ToConstQMetaObjectMultiply((QMetaObject__SuperData*)self);
}

void q_metaobject__superdata_operator_assign(void* self, const void* param1) {
    QMetaObject__SuperData_OperatorAssign((QMetaObject__SuperData*)self, (QMetaObject__SuperData*)param1);
}

void q_metaobject__superdata_delete(void* self) {
    QMetaObject__SuperData_Delete((QMetaObject__SuperData*)(self));
}

QMetaObject__Data* q_metaobject__data_new() {
    return QMetaObject__Data_New();
}

QMetaObject__Data* q_metaobject__data_new2(const void* param1) {
    return QMetaObject__Data_New2((QMetaObject__Data*)param1);
}

QMetaObject__SuperData* q_metaobject__data_superdata(const void* self) {
    return QMetaObject__Data_Superdata((QMetaObject__Data*)self);
}

void q_metaobject__data_set_superdata(void* self, void* superdata) {
    QMetaObject__Data_SetSuperdata((QMetaObject__Data*)self, (QMetaObject__SuperData*)superdata);
}

const uint32_t* q_metaobject__data_stringdata(const void* self) {
    return (uint32_t*)QMetaObject__Data_Stringdata((QMetaObject__Data*)self);
}

void q_metaobject__data_set_stringdata(void* self, uint32_t* stringdata) {
    QMetaObject__Data_SetStringdata((QMetaObject__Data*)self, stringdata);
}

const uint32_t* q_metaobject__data_data(const void* self) {
    return (uint32_t*)QMetaObject__Data_Data((QMetaObject__Data*)self);
}

void q_metaobject__data_set_data(void* self, uint32_t* data) {
    QMetaObject__Data_SetData((QMetaObject__Data*)self, data);
}

const QMetaObject__SuperData* q_metaobject__data_related_meta_objects(const void* self) {
    return QMetaObject__Data_RelatedMetaObjects((QMetaObject__Data*)self);
}

void q_metaobject__data_set_related_meta_objects(void* self, const void* relatedMetaObjects) {
    QMetaObject__Data_SetRelatedMetaObjects((QMetaObject__Data*)self, (QMetaObject__SuperData*)relatedMetaObjects);
}

void q_metaobject__data_operator_assign(void* self, const void* param1) {
    QMetaObject__Data_OperatorAssign((QMetaObject__Data*)self, (QMetaObject__Data*)param1);
}

void q_metaobject__data_delete(void* self) {
    QMetaObject__Data_Delete((QMetaObject__Data*)(self));
}
