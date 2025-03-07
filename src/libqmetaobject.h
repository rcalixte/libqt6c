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

QMetaMethod* q_metamethod_new(void* other);
QMetaMethod* q_metamethod_new2(void* other);
QMetaMethod* q_metamethod_new3();
QMetaMethod* q_metamethod_new4(void* param1);
void q_metamethod_copy_assign(void* self, void* other);
void q_metamethod_move_assign(void* self, void* other);
char* q_metamethod_method_signature(void* self);
char* q_metamethod_name(void* self);
const char* q_metamethod_type_name(void* self);
int32_t q_metamethod_return_type(void* self);
QMetaType* q_metamethod_return_meta_type(void* self);
int32_t q_metamethod_parameter_count(void* self);
int32_t q_metamethod_parameter_type(void* self, int index);
QMetaType* q_metamethod_parameter_meta_type(void* self, int index);
void q_metamethod_get_parameter_types(void* self, int* types);
const char** q_metamethod_parameter_types(void* self);
char* q_metamethod_parameter_type_name(void* self, int index);
const char** q_metamethod_parameter_names(void* self);
const char* q_metamethod_tag(void* self);
int64_t q_metamethod_access(void* self);
int64_t q_metamethod_method_type(void* self);
int32_t q_metamethod_attributes(void* self);
int32_t q_metamethod_method_index(void* self);
int32_t q_metamethod_relative_method_index(void* self);
int32_t q_metamethod_revision(void* self);
bool q_metamethod_is_const(void* self);
QMetaObject* q_metamethod_enclosing_meta_object(void* self);
bool q_metamethod_invoke(void* self, void* object, int64_t connectionType, void* returnValue);
bool q_metamethod_invoke2(void* self, void* object, void* returnValue);
bool q_metamethod_invoke3(void* self, void* object, int64_t connectionType);
bool q_metamethod_invoke_with_object(void* self, void* object);
bool q_metamethod_invoke_on_gadget(void* self, void* gadget, void* returnValue);
bool q_metamethod_invoke_on_gadget_with_gadget(void* self, void* gadget);
bool q_metamethod_is_valid(void* self);
bool q_metamethod_invoke4(void* self, void* object, int64_t connectionType, void* returnValue, void* val0);
bool q_metamethod_invoke5(void* self, void* object, int64_t connectionType, void* returnValue, void* val0, void* val1);
bool q_metamethod_invoke6(void* self, void* object, int64_t connectionType, void* returnValue, void* val0, void* val1, void* val2);
bool q_metamethod_invoke7(void* self, void* object, int64_t connectionType, void* returnValue, void* val0, void* val1, void* val2, void* val3);
bool q_metamethod_invoke8(void* self, void* object, int64_t connectionType, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4);
bool q_metamethod_invoke9(void* self, void* object, int64_t connectionType, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5);
bool q_metamethod_invoke10(void* self, void* object, int64_t connectionType, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6);
bool q_metamethod_invoke11(void* self, void* object, int64_t connectionType, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7);
bool q_metamethod_invoke12(void* self, void* object, int64_t connectionType, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8);
bool q_metamethod_invoke13(void* self, void* object, int64_t connectionType, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8, void* val9);
bool q_metamethod_invoke32(void* self, void* object, void* returnValue, void* val0);
bool q_metamethod_invoke42(void* self, void* object, void* returnValue, void* val0, void* val1);
bool q_metamethod_invoke52(void* self, void* object, void* returnValue, void* val0, void* val1, void* val2);
bool q_metamethod_invoke62(void* self, void* object, void* returnValue, void* val0, void* val1, void* val2, void* val3);
bool q_metamethod_invoke72(void* self, void* object, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4);
bool q_metamethod_invoke82(void* self, void* object, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5);
bool q_metamethod_invoke92(void* self, void* object, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6);
bool q_metamethod_invoke102(void* self, void* object, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7);
bool q_metamethod_invoke112(void* self, void* object, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8);
bool q_metamethod_invoke122(void* self, void* object, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8, void* val9);
bool q_metamethod_invoke33(void* self, void* object, int64_t connectionType, void* val0);
bool q_metamethod_invoke43(void* self, void* object, int64_t connectionType, void* val0, void* val1);
bool q_metamethod_invoke53(void* self, void* object, int64_t connectionType, void* val0, void* val1, void* val2);
bool q_metamethod_invoke63(void* self, void* object, int64_t connectionType, void* val0, void* val1, void* val2, void* val3);
bool q_metamethod_invoke73(void* self, void* object, int64_t connectionType, void* val0, void* val1, void* val2, void* val3, void* val4);
bool q_metamethod_invoke83(void* self, void* object, int64_t connectionType, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5);
bool q_metamethod_invoke93(void* self, void* object, int64_t connectionType, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6);
bool q_metamethod_invoke103(void* self, void* object, int64_t connectionType, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7);
bool q_metamethod_invoke113(void* self, void* object, int64_t connectionType, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8);
bool q_metamethod_invoke123(void* self, void* object, int64_t connectionType, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8, void* val9);
bool q_metamethod_invoke22(void* self, void* object, void* val0);
bool q_metamethod_invoke34(void* self, void* object, void* val0, void* val1);
bool q_metamethod_invoke44(void* self, void* object, void* val0, void* val1, void* val2);
bool q_metamethod_invoke54(void* self, void* object, void* val0, void* val1, void* val2, void* val3);
bool q_metamethod_invoke64(void* self, void* object, void* val0, void* val1, void* val2, void* val3, void* val4);
bool q_metamethod_invoke74(void* self, void* object, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5);
bool q_metamethod_invoke84(void* self, void* object, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6);
bool q_metamethod_invoke94(void* self, void* object, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7);
bool q_metamethod_invoke104(void* self, void* object, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8);
bool q_metamethod_invoke114(void* self, void* object, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8, void* val9);
bool q_metamethod_invoke_on_gadget3(void* self, void* gadget, void* returnValue, void* val0);
bool q_metamethod_invoke_on_gadget4(void* self, void* gadget, void* returnValue, void* val0, void* val1);
bool q_metamethod_invoke_on_gadget5(void* self, void* gadget, void* returnValue, void* val0, void* val1, void* val2);
bool q_metamethod_invoke_on_gadget6(void* self, void* gadget, void* returnValue, void* val0, void* val1, void* val2, void* val3);
bool q_metamethod_invoke_on_gadget7(void* self, void* gadget, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4);
bool q_metamethod_invoke_on_gadget8(void* self, void* gadget, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5);
bool q_metamethod_invoke_on_gadget9(void* self, void* gadget, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6);
bool q_metamethod_invoke_on_gadget10(void* self, void* gadget, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7);
bool q_metamethod_invoke_on_gadget11(void* self, void* gadget, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8);
bool q_metamethod_invoke_on_gadget12(void* self, void* gadget, void* returnValue, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8, void* val9);
bool q_metamethod_invoke_on_gadget2(void* self, void* gadget, void* val0);
bool q_metamethod_invoke_on_gadget32(void* self, void* gadget, void* val0, void* val1);
bool q_metamethod_invoke_on_gadget42(void* self, void* gadget, void* val0, void* val1, void* val2);
bool q_metamethod_invoke_on_gadget52(void* self, void* gadget, void* val0, void* val1, void* val2, void* val3);
bool q_metamethod_invoke_on_gadget62(void* self, void* gadget, void* val0, void* val1, void* val2, void* val3, void* val4);
bool q_metamethod_invoke_on_gadget72(void* self, void* gadget, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5);
bool q_metamethod_invoke_on_gadget82(void* self, void* gadget, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6);
bool q_metamethod_invoke_on_gadget92(void* self, void* gadget, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7);
bool q_metamethod_invoke_on_gadget102(void* self, void* gadget, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8);
bool q_metamethod_invoke_on_gadget112(void* self, void* gadget, void* val0, void* val1, void* val2, void* val3, void* val4, void* val5, void* val6, void* val7, void* val8, void* val9);
void q_metamethod_delete(void* self);

QMetaEnum* q_metaenum_new(void* other);
QMetaEnum* q_metaenum_new2(void* other);
QMetaEnum* q_metaenum_new3();
QMetaEnum* q_metaenum_new4(void* param1);
void q_metaenum_copy_assign(void* self, void* other);
void q_metaenum_move_assign(void* self, void* other);
const char* q_metaenum_name(void* self);
const char* q_metaenum_enum_name(void* self);
bool q_metaenum_is_flag(void* self);
bool q_metaenum_is_scoped(void* self);
int32_t q_metaenum_key_count(void* self);
const char* q_metaenum_key(void* self, int index);
int32_t q_metaenum_value(void* self, int index);
const char* q_metaenum_scope(void* self);
int32_t q_metaenum_key_to_value(void* self, const char* key);
const char* q_metaenum_value_to_key(void* self, int value);
int32_t q_metaenum_keys_to_value(void* self, const char* keys);
char* q_metaenum_value_to_keys(void* self, int value);
QMetaObject* q_metaenum_enclosing_meta_object(void* self);
bool q_metaenum_is_valid(void* self);
int32_t q_metaenum_key_to_value2(void* self, const char* key, bool* ok);
int32_t q_metaenum_keys_to_value2(void* self, const char* keys, bool* ok);
void q_metaenum_delete(void* self);

QMetaProperty* q_metaproperty_new(void* other);
QMetaProperty* q_metaproperty_new2(void* other);
QMetaProperty* q_metaproperty_new3();
void q_metaproperty_copy_assign(void* self, void* other);
void q_metaproperty_move_assign(void* self, void* other);
const char* q_metaproperty_name(void* self);
const char* q_metaproperty_type_name(void* self);
int64_t q_metaproperty_type(void* self);
int32_t q_metaproperty_user_type(void* self);
int32_t q_metaproperty_type_id(void* self);
QMetaType* q_metaproperty_meta_type(void* self);
int32_t q_metaproperty_property_index(void* self);
int32_t q_metaproperty_relative_property_index(void* self);
bool q_metaproperty_is_readable(void* self);
bool q_metaproperty_is_writable(void* self);
bool q_metaproperty_is_resettable(void* self);
bool q_metaproperty_is_designable(void* self);
bool q_metaproperty_is_scriptable(void* self);
bool q_metaproperty_is_stored(void* self);
bool q_metaproperty_is_user(void* self);
bool q_metaproperty_is_constant(void* self);
bool q_metaproperty_is_final(void* self);
bool q_metaproperty_is_required(void* self);
bool q_metaproperty_is_bindable(void* self);
bool q_metaproperty_is_flag_type(void* self);
bool q_metaproperty_is_enum_type(void* self);
QMetaEnum* q_metaproperty_enumerator(void* self);
bool q_metaproperty_has_notify_signal(void* self);
QMetaMethod* q_metaproperty_notify_signal(void* self);
int32_t q_metaproperty_notify_signal_index(void* self);
int32_t q_metaproperty_revision(void* self);
QVariant* q_metaproperty_read(void* self, void* obj);
bool q_metaproperty_write(void* self, void* obj, void* value);
bool q_metaproperty_reset(void* self, void* obj);
QUntypedBindable* q_metaproperty_bindable(void* self, void* object);
QVariant* q_metaproperty_read_on_gadget(void* self, void* gadget);
bool q_metaproperty_write_on_gadget(void* self, void* gadget, void* value);
bool q_metaproperty_reset_on_gadget(void* self, void* gadget);
bool q_metaproperty_has_std_cpp_set(void* self);
bool q_metaproperty_is_alias(void* self);
bool q_metaproperty_is_valid(void* self);
QMetaObject* q_metaproperty_enclosing_meta_object(void* self);
void q_metaproperty_delete(void* self);

QMetaClassInfo* q_metaclassinfo_new(void* other);
QMetaClassInfo* q_metaclassinfo_new2(void* other);
QMetaClassInfo* q_metaclassinfo_new3();
void q_metaclassinfo_copy_assign(void* self, void* other);
void q_metaclassinfo_move_assign(void* self, void* other);
const char* q_metaclassinfo_name(void* self);
const char* q_metaclassinfo_value(void* self);
QMetaObject* q_metaclassinfo_enclosing_meta_object(void* self);
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
