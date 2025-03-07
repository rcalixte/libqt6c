#pragma once
#ifndef SRCQT6C_LIBQOBJECTDEFS_H
#define SRCQT6C_LIBQOBJECTDEFS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqmetaobject.h"
#include "libqmetatype.h"
#include "libqobject.h"
#include <string.h>

QGenericArgument* q_genericargument_new(void* other);
QGenericArgument* q_genericargument_new2(void* other);
QGenericArgument* q_genericargument_new3();
QGenericArgument* q_genericargument_new4(void* param1);
QGenericArgument* q_genericargument_new5(const char* aName);
QGenericArgument* q_genericargument_new6(const char* aName, void* aData);
void q_genericargument_copy_assign(void* self, void* other);
void q_genericargument_move_assign(void* self, void* other);
void* q_genericargument_data(void* self);
const char* q_genericargument_name(void* self);
void q_genericargument_delete(void* self);

QGenericReturnArgument* q_genericreturnargument_new(void* other);
QGenericReturnArgument* q_genericreturnargument_new2(void* other);
QGenericReturnArgument* q_genericreturnargument_new3();
QGenericReturnArgument* q_genericreturnargument_new4(void* param1);
QGenericReturnArgument* q_genericreturnargument_new5(const char* aName);
QGenericReturnArgument* q_genericreturnargument_new6(const char* aName, void* aData);
void q_genericreturnargument_copy_assign(void* self, void* other);
void q_genericreturnargument_move_assign(void* self, void* other);
void* q_genericreturnargument_data(void* self);
const char* q_genericreturnargument_name(void* self);
void q_genericreturnargument_delete(void* self);

QMetaObject* q_metaobject_new();
QMetaObject* q_metaobject_new2(void* param1);
const char* q_metaobject_class_name(void* self);
QMetaObject* q_metaobject_super_class(void* self);
bool q_metaobject_inherits(void* self, void* metaObject);
QObject* q_metaobject_cast(void* self, void* obj);
QObject* q_metaobject_cast_with_obj(void* self, void* obj);
const char* q_metaobject_tr(void* self, const char* s, const char* c);
QMetaType* q_metaobject_meta_type(void* self);
int32_t q_metaobject_method_offset(void* self);
int32_t q_metaobject_enumerator_offset(void* self);
int32_t q_metaobject_property_offset(void* self);
int32_t q_metaobject_class_info_offset(void* self);
int32_t q_metaobject_constructor_count(void* self);
int32_t q_metaobject_method_count(void* self);
int32_t q_metaobject_enumerator_count(void* self);
int32_t q_metaobject_property_count(void* self);
int32_t q_metaobject_class_info_count(void* self);
int32_t q_metaobject_index_of_constructor(void* self, const char* constructor);
int32_t q_metaobject_index_of_method(void* self, const char* method);
int32_t q_metaobject_index_of_signal(void* self, const char* signal);
int32_t q_metaobject_index_of_slot(void* self, const char* slot);
int32_t q_metaobject_index_of_enumerator(void* self, const char* name);
int32_t q_metaobject_index_of_property(void* self, const char* name);
int32_t q_metaobject_index_of_class_info(void* self, const char* name);
QMetaMethod* q_metaobject_constructor(void* self, int index);
QMetaMethod* q_metaobject_method(void* self, int index);
QMetaEnum* q_metaobject_enumerator(void* self, int index);
QMetaProperty* q_metaobject_property(void* self, int index);
QMetaClassInfo* q_metaobject_class_info(void* self, int index);
QMetaProperty* q_metaobject_user_property(void* self);
bool q_metaobject_check_connect_args(const char* signal, const char* method);
bool q_metaobject_check_connect_args2(void* signal, void* method);
char* q_metaobject_normalized_signature(const char* method);
char* q_metaobject_normalized_type(const char* typeVal);
QMetaObject__Connection* q_metaobject_connect(void* sender, int signal_index, void* receiver, int method_index);
bool q_metaobject_disconnect(void* sender, int signal_index, void* receiver, int method_index);
bool q_metaobject_disconnect_one(void* sender, int signal_index, void* receiver, int method_index);
void q_metaobject_connect_slots_by_name(void* o);
void q_metaobject_activate(void* sender, int signal_index, void* argv);
void q_metaobject_activate2(void* sender, void* param2, int local_signal_index, void* argv);
void q_metaobject_activate3(void* sender, int signal_offset, int local_signal_index, void* argv);
bool q_metaobject_invoke_method(void* obj, const char* member, int64_t param3, void* retVal);
bool q_metaobject_invoke_method2(void* obj, const char* member, void* retVal);
bool q_metaobject_invoke_method3(void* obj, const char* member, int64_t typeVal);
bool q_metaobject_invoke_method4(void* obj, const char* member);
QObject* q_metaobject_new_instance(void* self);
int32_t q_metaobject_static_metacall(void* self, int64_t param1, int param2, void* param3);
int32_t q_metaobject_metacall(void* param1, int64_t param2, int param3, void* param4);
const char* q_metaobject_tr3(void* self, const char* s, const char* c, int n);
QMetaObject__Connection* q_metaobject_connect5(void* sender, int signal_index, void* receiver, int method_index, int typeVal);
QMetaObject__Connection* q_metaobject_connect6(void* sender, int signal_index, void* receiver, int method_index, int typeVal, int* types);
bool q_metaobject_invoke_method5(void* obj, const char* member, int64_t param3, void* retVal, void* val0);
bool q_metaobject_invoke_method6(void* obj, const char* member, int64_t param3, void* retVal, void* val0, void* val1);
bool q_metaobject_invoke_method7(void* obj, const char* member, int64_t param3, void* retVal, void* val0, void* val1, void* val2);
bool q_metaobject_invoke_method8(void* obj, const char* member, int64_t param3, void* retVal, void* val0, void* val1, void* val2, void* val3);
bool q_metaobject_invoke_method9(void* obj, const char* member, int64_t param3, void* retVal, void* val0, void* val1, void* val2, void* val3, void* val4);
bool q_metaobject_invoke_method10(void* obj, const char* member, int64_t param3, void* retVal, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5);
bool q_metaobject_invoke_method11(void* obj, const char* member, int64_t param3, void* retVal, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6);
bool q_metaobject_invoke_method12(void* obj, const char* member, int64_t param3, void* retVal, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7);
bool q_metaobject_invoke_method13(void* obj, const char* member, int64_t param3, void* retVal, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8);
bool q_metaobject_invoke_method14(void* obj, const char* member, int64_t param3, void* retVal, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8, void* val9);
bool q_metaobject_invoke_method42(void* obj, const char* member, void* retVal, void* val0);
bool q_metaobject_invoke_method52(void* obj, const char* member, void* retVal, void* val0, void* val1);
bool q_metaobject_invoke_method62(void* obj, const char* member, void* retVal, void* val0, void* val1, void* val2);
bool q_metaobject_invoke_method72(void* obj, const char* member, void* retVal, void* val0, void* val1, void* val2, void* val3);
bool q_metaobject_invoke_method82(void* obj, const char* member, void* retVal, void* val0, void* val1, void* val2, void* val3, void* val4);
bool q_metaobject_invoke_method92(void* obj, const char* member, void* retVal, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5);
bool q_metaobject_invoke_method102(void* obj, const char* member, void* retVal, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6);
bool q_metaobject_invoke_method112(void* obj, const char* member, void* retVal, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7);
bool q_metaobject_invoke_method122(void* obj, const char* member, void* retVal, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8);
bool q_metaobject_invoke_method132(void* obj, const char* member, void* retVal, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8, void* val9);
bool q_metaobject_invoke_method43(void* obj, const char* member, int64_t typeVal, void* val0);
bool q_metaobject_invoke_method53(void* obj, const char* member, int64_t typeVal, void* val0, void* val1);
bool q_metaobject_invoke_method63(void* obj, const char* member, int64_t typeVal, void* val0, void* val1, void* val2);
bool q_metaobject_invoke_method73(void* obj, const char* member, int64_t typeVal, void* val0, void* val1, void* val2, void* val3);
bool q_metaobject_invoke_method83(void* obj, const char* member, int64_t typeVal, void* val0, void* val1, void* val2, void* val3, void* val4);
bool q_metaobject_invoke_method93(void* obj, const char* member, int64_t typeVal, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5);
bool q_metaobject_invoke_method103(void* obj, const char* member, int64_t typeVal, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6);
bool q_metaobject_invoke_method113(void* obj, const char* member, int64_t typeVal, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7);
bool q_metaobject_invoke_method123(void* obj, const char* member, int64_t typeVal, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8);
bool q_metaobject_invoke_method133(void* obj, const char* member, int64_t typeVal, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8, void* val9);
bool q_metaobject_invoke_method32(void* obj, const char* member, void* val0);
bool q_metaobject_invoke_method44(void* obj, const char* member, void* val0, void* val1);
bool q_metaobject_invoke_method54(void* obj, const char* member, void* val0, void* val1, void* val2);
bool q_metaobject_invoke_method64(void* obj, const char* member, void* val0, void* val1, void* val2, void* val3);
bool q_metaobject_invoke_method74(void* obj, const char* member, void* val0, void* val1, void* val2, void* val3, void* val4);
bool q_metaobject_invoke_method84(void* obj, const char* member, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5);
bool q_metaobject_invoke_method94(void* obj, const char* member, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6);
bool q_metaobject_invoke_method104(void* obj, const char* member, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7);
bool q_metaobject_invoke_method114(void* obj, const char* member, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8);
bool q_metaobject_invoke_method124(void* obj, const char* member, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8, void* val9);
QObject* q_metaobject_new_instance1(void* self, void* val0);
QObject* q_metaobject_new_instance2(void* self, void* val0, void* val1);
QObject* q_metaobject_new_instance3(void* self, void* val0, void* val1, void* val2);
QObject* q_metaobject_new_instance4(void* self, void* val0, void* val1, void* val2, void* val3);
QObject* q_metaobject_new_instance5(void* self, void* val0, void* val1, void* val2, void* val3, void* val4);
QObject* q_metaobject_new_instance6(void* self, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5);
QObject* q_metaobject_new_instance7(void* self, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6);
QObject* q_metaobject_new_instance8(void* self, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7);
QObject* q_metaobject_new_instance9(void* self, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8);
QObject* q_metaobject_new_instance10(void* self, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8, void* val9);
void q_metaobject_delete(void* self);

QMetaObject__Connection* q_metaobject__connection_new();
QMetaObject__Connection* q_metaobject__connection_new2(void* other);
void q_metaobject__connection_operator_assign(void* self, void* other);
void q_metaobject__connection_swap(void* self, void* other);
void q_metaobject__connection_delete(void* self);

QMetaObject__SuperData* q_metaobject__superdata_new();
QMetaObject__SuperData* q_metaobject__superdata_new2(void* mo);
QMetaObject__SuperData* q_metaobject__superdata_new3(void* param1);
QMetaObject* q_metaobject__superdata_operator_minus_greater(void* self);
QMetaObject* q_metaobject__superdata_to_const_q_meta_object_multiply(void* self);
void q_metaobject__superdata_operator_assign(void* self, void* param1);
void q_metaobject__superdata_delete(void* self);

QMetaObject__Data* q_metaobject__data_new();
QMetaObject__Data* q_metaobject__data_new2(void* param1);
void q_metaobject__data_operator_assign(void* self, void* param1);
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
    QMETAOBJECT_CALL_CUSTOMCALL = 9
} QMetaObject__Call;

#endif
