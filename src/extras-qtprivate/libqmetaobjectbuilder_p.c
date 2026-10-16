#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqmetatype.hpp"
#include "libqmetaobjectbuilder_p.hpp"
#include "libqmetaobjectbuilder_p.h"

QMetaObjectBuilder* q_metaobjectbuilder_new() {
    return QMetaObjectBuilder_New();
}

QMetaObjectBuilder* q_metaobjectbuilder_new2(const void* prototype) {
    return QMetaObjectBuilder_New2((QMetaObject*)prototype);
}

QMetaObjectBuilder* q_metaobjectbuilder_new3(const void* prototype, int32_t members) {
    return QMetaObjectBuilder_New3((QMetaObject*)prototype, members);
}

const char* q_metaobjectbuilder_class_name(const void* self) {
    libqt_string _str = QMetaObjectBuilder_ClassName((QMetaObjectBuilder*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_metaobjectbuilder_set_class_name(void* self, const char* name) {
    QMetaObjectBuilder_SetClassName((QMetaObjectBuilder*)self, qstring(name));
}

const QMetaObject* q_metaobjectbuilder_super_class(const void* self) {
    return QMetaObjectBuilder_SuperClass((QMetaObjectBuilder*)self);
}

void q_metaobjectbuilder_set_super_class(void* self, const void* meta) {
    QMetaObjectBuilder_SetSuperClass((QMetaObjectBuilder*)self, (QMetaObject*)meta);
}

void q_metaobjectbuilder_set_flags(void* self, int32_t flags) {
    QMetaObjectBuilder_SetFlags((QMetaObjectBuilder*)self, flags);
}

int32_t q_metaobjectbuilder_method_count(const void* self) {
    return QMetaObjectBuilder_MethodCount((QMetaObjectBuilder*)self);
}

int32_t q_metaobjectbuilder_constructor_count(const void* self) {
    return QMetaObjectBuilder_ConstructorCount((QMetaObjectBuilder*)self);
}

int32_t q_metaobjectbuilder_property_count(const void* self) {
    return QMetaObjectBuilder_PropertyCount((QMetaObjectBuilder*)self);
}

int32_t q_metaobjectbuilder_enumerator_count(const void* self) {
    return QMetaObjectBuilder_EnumeratorCount((QMetaObjectBuilder*)self);
}

int32_t q_metaobjectbuilder_class_info_count(const void* self) {
    return QMetaObjectBuilder_ClassInfoCount((QMetaObjectBuilder*)self);
}

int32_t q_metaobjectbuilder_related_meta_object_count(const void* self) {
    return QMetaObjectBuilder_RelatedMetaObjectCount((QMetaObjectBuilder*)self);
}

QMetaMethodBuilder* q_metaobjectbuilder_add_method(void* self, const char* signature) {
    return QMetaObjectBuilder_AddMethod((QMetaObjectBuilder*)self, qstring(signature));
}

QMetaMethodBuilder* q_metaobjectbuilder_add_method2(void* self, const char* signature, const char* returnType) {
    return QMetaObjectBuilder_AddMethod2((QMetaObjectBuilder*)self, qstring(signature), qstring(returnType));
}

QMetaMethodBuilder* q_metaobjectbuilder_add_method3(void* self, const void* prototype) {
    return QMetaObjectBuilder_AddMethod3((QMetaObjectBuilder*)self, (QMetaMethod*)prototype);
}

QMetaMethodBuilder* q_metaobjectbuilder_add_slot(void* self, const char* signature) {
    return QMetaObjectBuilder_AddSlot((QMetaObjectBuilder*)self, qstring(signature));
}

QMetaMethodBuilder* q_metaobjectbuilder_add_signal(void* self, const char* signature) {
    return QMetaObjectBuilder_AddSignal((QMetaObjectBuilder*)self, qstring(signature));
}

QMetaMethodBuilder* q_metaobjectbuilder_add_constructor(void* self, const char* signature) {
    return QMetaObjectBuilder_AddConstructor((QMetaObjectBuilder*)self, qstring(signature));
}

QMetaMethodBuilder* q_metaobjectbuilder_add_constructor2(void* self, const void* prototype) {
    return QMetaObjectBuilder_AddConstructor2((QMetaObjectBuilder*)self, (QMetaMethod*)prototype);
}

QMetaPropertyBuilder* q_metaobjectbuilder_add_property(void* self, const char* name, const char* type) {
    return QMetaObjectBuilder_AddProperty((QMetaObjectBuilder*)self, qstring(name), qstring(type));
}

QMetaPropertyBuilder* q_metaobjectbuilder_add_property2(void* self, const char* name, const char* type, void* metaType) {
    return QMetaObjectBuilder_AddProperty2((QMetaObjectBuilder*)self, qstring(name), qstring(type), (QMetaType*)metaType);
}

QMetaPropertyBuilder* q_metaobjectbuilder_add_property3(void* self, const void* prototype) {
    return QMetaObjectBuilder_AddProperty3((QMetaObjectBuilder*)self, (QMetaProperty*)prototype);
}

QMetaEnumBuilder* q_metaobjectbuilder_add_enumerator(void* self, const char* name) {
    return QMetaObjectBuilder_AddEnumerator((QMetaObjectBuilder*)self, qstring(name));
}

QMetaEnumBuilder* q_metaobjectbuilder_add_enumerator2(void* self, const void* prototype) {
    return QMetaObjectBuilder_AddEnumerator2((QMetaObjectBuilder*)self, (QMetaEnum*)prototype);
}

int32_t q_metaobjectbuilder_add_class_info(void* self, const char* name, const char* value) {
    return QMetaObjectBuilder_AddClassInfo((QMetaObjectBuilder*)self, qstring(name), qstring(value));
}

int32_t q_metaobjectbuilder_add_related_meta_object(void* self, const void* meta) {
    return QMetaObjectBuilder_AddRelatedMetaObject((QMetaObjectBuilder*)self, (QMetaObject*)meta);
}

void q_metaobjectbuilder_add_meta_object(void* self, const void* prototype) {
    QMetaObjectBuilder_AddMetaObject((QMetaObjectBuilder*)self, (QMetaObject*)prototype);
}

QMetaMethodBuilder* q_metaobjectbuilder_method(const void* self, int index) {
    return QMetaObjectBuilder_Method((QMetaObjectBuilder*)self, index);
}

QMetaMethodBuilder* q_metaobjectbuilder_constructor(const void* self, int index) {
    return QMetaObjectBuilder_Constructor((QMetaObjectBuilder*)self, index);
}

QMetaPropertyBuilder* q_metaobjectbuilder_property(const void* self, int index) {
    return QMetaObjectBuilder_Property((QMetaObjectBuilder*)self, index);
}

QMetaEnumBuilder* q_metaobjectbuilder_enumerator(const void* self, int index) {
    return QMetaObjectBuilder_Enumerator((QMetaObjectBuilder*)self, index);
}

const QMetaObject* q_metaobjectbuilder_related_meta_object(const void* self, int index) {
    return QMetaObjectBuilder_RelatedMetaObject((QMetaObjectBuilder*)self, index);
}

const char* q_metaobjectbuilder_class_info_name(const void* self, int index) {
    libqt_string _str = QMetaObjectBuilder_ClassInfoName((QMetaObjectBuilder*)self, index);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_metaobjectbuilder_class_info_value(const void* self, int index) {
    libqt_string _str = QMetaObjectBuilder_ClassInfoValue((QMetaObjectBuilder*)self, index);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_metaobjectbuilder_remove_method(void* self, int index) {
    QMetaObjectBuilder_RemoveMethod((QMetaObjectBuilder*)self, index);
}

void q_metaobjectbuilder_remove_constructor(void* self, int index) {
    QMetaObjectBuilder_RemoveConstructor((QMetaObjectBuilder*)self, index);
}

void q_metaobjectbuilder_remove_property(void* self, int index) {
    QMetaObjectBuilder_RemoveProperty((QMetaObjectBuilder*)self, index);
}

void q_metaobjectbuilder_remove_enumerator(void* self, int index) {
    QMetaObjectBuilder_RemoveEnumerator((QMetaObjectBuilder*)self, index);
}

void q_metaobjectbuilder_remove_class_info(void* self, int index) {
    QMetaObjectBuilder_RemoveClassInfo((QMetaObjectBuilder*)self, index);
}

void q_metaobjectbuilder_remove_related_meta_object(void* self, int index) {
    QMetaObjectBuilder_RemoveRelatedMetaObject((QMetaObjectBuilder*)self, index);
}

int32_t q_metaobjectbuilder_index_of_method(void* self, const char* signature) {
    return QMetaObjectBuilder_IndexOfMethod((QMetaObjectBuilder*)self, qstring(signature));
}

int32_t q_metaobjectbuilder_index_of_signal(void* self, const char* signature) {
    return QMetaObjectBuilder_IndexOfSignal((QMetaObjectBuilder*)self, qstring(signature));
}

int32_t q_metaobjectbuilder_index_of_slot(void* self, const char* signature) {
    return QMetaObjectBuilder_IndexOfSlot((QMetaObjectBuilder*)self, qstring(signature));
}

int32_t q_metaobjectbuilder_index_of_constructor(void* self, const char* signature) {
    return QMetaObjectBuilder_IndexOfConstructor((QMetaObjectBuilder*)self, qstring(signature));
}

int32_t q_metaobjectbuilder_index_of_property(void* self, const char* name) {
    return QMetaObjectBuilder_IndexOfProperty((QMetaObjectBuilder*)self, qstring(name));
}

int32_t q_metaobjectbuilder_index_of_enumerator(void* self, const char* name) {
    return QMetaObjectBuilder_IndexOfEnumerator((QMetaObjectBuilder*)self, qstring(name));
}

int32_t q_metaobjectbuilder_index_of_class_info(void* self, const char* name) {
    return QMetaObjectBuilder_IndexOfClassInfo((QMetaObjectBuilder*)self, qstring(name));
}

QMetaObjectBuilder__StaticMetacallFunction q_metaobjectbuilder_static_metacall_function(const void* self) {
    return (QMetaObjectBuilder__StaticMetacallFunction)QMetaObjectBuilder_StaticMetacallFunction((QMetaObjectBuilder*)self);
}

void q_metaobjectbuilder_set_static_metacall_function(void* self, void (*value)(void* funcparam1, int32_t funcparam2, int funcparam3, void* funcparam4)) {
    QMetaObjectBuilder_SetStaticMetacallFunction((QMetaObjectBuilder*)self, (intptr_t)value);
}

QMetaObject* q_metaobjectbuilder_to_meta_object(const void* self) {
    return QMetaObjectBuilder_ToMetaObject((QMetaObjectBuilder*)self);
}

QMetaPropertyBuilder* q_metaobjectbuilder_add_property32(void* self, const char* name, const char* type, int notifierId) {
    return QMetaObjectBuilder_AddProperty32((QMetaObjectBuilder*)self, qstring(name), qstring(type), notifierId);
}

QMetaPropertyBuilder* q_metaobjectbuilder_add_property4(void* self, const char* name, const char* type, void* metaType, int notifierId) {
    return QMetaObjectBuilder_AddProperty4((QMetaObjectBuilder*)self, qstring(name), qstring(type), (QMetaType*)metaType, notifierId);
}

void q_metaobjectbuilder_add_meta_object2(void* self, const void* prototype, int32_t members) {
    QMetaObjectBuilder_AddMetaObject2((QMetaObjectBuilder*)self, (QMetaObject*)prototype, members);
}

void q_metaobjectbuilder_delete(void* self) {
    QMetaObjectBuilder_Delete((QMetaObjectBuilder*)(self));
}

QMetaMethodBuilder* q_metamethodbuilder_new(const void* other) {
    return QMetaMethodBuilder_New((QMetaMethodBuilder*)other);
}

QMetaMethodBuilder* q_metamethodbuilder_new2(void* other) {
    return QMetaMethodBuilder_New2((QMetaMethodBuilder*)other);
}

QMetaMethodBuilder* q_metamethodbuilder_new3() {
    return QMetaMethodBuilder_New3();
}

void q_metamethodbuilder_copy_assign(void* self, void* other) {
    QMetaMethodBuilder_CopyAssign((QMetaMethodBuilder*)self, (QMetaMethodBuilder*)other);
}

void q_metamethodbuilder_move_assign(void* self, void* other) {
    QMetaMethodBuilder_MoveAssign((QMetaMethodBuilder*)self, (QMetaMethodBuilder*)other);
}

int32_t q_metamethodbuilder_index(const void* self) {
    return QMetaMethodBuilder_Index((QMetaMethodBuilder*)self);
}

int32_t q_metamethodbuilder_method_type(const void* self) {
    return QMetaMethodBuilder_MethodType((QMetaMethodBuilder*)self);
}

const char* q_metamethodbuilder_signature(const void* self) {
    libqt_string _str = QMetaMethodBuilder_Signature((QMetaMethodBuilder*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_metamethodbuilder_return_type(const void* self) {
    libqt_string _str = QMetaMethodBuilder_ReturnType((QMetaMethodBuilder*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_metamethodbuilder_set_return_type(void* self, const char* value) {
    QMetaMethodBuilder_SetReturnType((QMetaMethodBuilder*)self, qstring(value));
}

const char** q_metamethodbuilder_parameter_names(const void* self) {
    libqt_list _arr = QMetaMethodBuilder_ParameterNames((QMetaMethodBuilder*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_metamethodbuilder_parameter_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

void q_metamethodbuilder_set_parameter_names(void* self, const char* value[static 1]) {
    size_t value_len = libqt_strv_length(value);
    libqt_string* value_qstr = (libqt_string*)malloc(value_len * sizeof(libqt_string));
    if (value_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_metamethodbuilder_set_parameter_names\n");
        abort();
    }
    for (size_t i = 0; i < value_len; ++i)
        value_qstr[i] = qstring(value[i]);
    libqt_list value_list = qlist(value_qstr, value_len);
    QMetaMethodBuilder_SetParameterNames((QMetaMethodBuilder*)self, value_list);
    free(value_qstr);
}

const char* q_metamethodbuilder_tag(const void* self) {
    libqt_string _str = QMetaMethodBuilder_Tag((QMetaMethodBuilder*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_metamethodbuilder_set_tag(void* self, const char* value) {
    QMetaMethodBuilder_SetTag((QMetaMethodBuilder*)self, qstring(value));
}

int32_t q_metamethodbuilder_access(const void* self) {
    return QMetaMethodBuilder_Access((QMetaMethodBuilder*)self);
}

void q_metamethodbuilder_set_access(void* self, int32_t value) {
    QMetaMethodBuilder_SetAccess((QMetaMethodBuilder*)self, value);
}

int32_t q_metamethodbuilder_attributes(const void* self) {
    return QMetaMethodBuilder_Attributes((QMetaMethodBuilder*)self);
}

void q_metamethodbuilder_set_attributes(void* self, int value) {
    QMetaMethodBuilder_SetAttributes((QMetaMethodBuilder*)self, value);
}

void q_metamethodbuilder_set_const(void* self) {
    QMetaMethodBuilder_SetConst((QMetaMethodBuilder*)self);
}

int32_t q_metamethodbuilder_revision(const void* self) {
    return QMetaMethodBuilder_Revision((QMetaMethodBuilder*)self);
}

void q_metamethodbuilder_set_revision(void* self, int revision) {
    QMetaMethodBuilder_SetRevision((QMetaMethodBuilder*)self, revision);
}

void q_metamethodbuilder_set_const1(void* self, bool methodIsConst) {
    QMetaMethodBuilder_SetConst1((QMetaMethodBuilder*)self, methodIsConst);
}

void q_metamethodbuilder_delete(void* self) {
    QMetaMethodBuilder_Delete((QMetaMethodBuilder*)(self));
}

QMetaPropertyBuilder* q_metapropertybuilder_new(const void* other) {
    return QMetaPropertyBuilder_New((QMetaPropertyBuilder*)other);
}

QMetaPropertyBuilder* q_metapropertybuilder_new2(void* other) {
    return QMetaPropertyBuilder_New2((QMetaPropertyBuilder*)other);
}

QMetaPropertyBuilder* q_metapropertybuilder_new3() {
    return QMetaPropertyBuilder_New3();
}

void q_metapropertybuilder_copy_assign(void* self, void* other) {
    QMetaPropertyBuilder_CopyAssign((QMetaPropertyBuilder*)self, (QMetaPropertyBuilder*)other);
}

void q_metapropertybuilder_move_assign(void* self, void* other) {
    QMetaPropertyBuilder_MoveAssign((QMetaPropertyBuilder*)self, (QMetaPropertyBuilder*)other);
}

int32_t q_metapropertybuilder_index(const void* self) {
    return QMetaPropertyBuilder_Index((QMetaPropertyBuilder*)self);
}

const char* q_metapropertybuilder_name(const void* self) {
    libqt_string _str = QMetaPropertyBuilder_Name((QMetaPropertyBuilder*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_metapropertybuilder_type(const void* self) {
    libqt_string _str = QMetaPropertyBuilder_Type((QMetaPropertyBuilder*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_metapropertybuilder_has_notify_signal(const void* self) {
    return QMetaPropertyBuilder_HasNotifySignal((QMetaPropertyBuilder*)self);
}

QMetaMethodBuilder* q_metapropertybuilder_notify_signal(const void* self) {
    return QMetaPropertyBuilder_NotifySignal((QMetaPropertyBuilder*)self);
}

void q_metapropertybuilder_set_notify_signal(void* self, const void* value) {
    QMetaPropertyBuilder_SetNotifySignal((QMetaPropertyBuilder*)self, (QMetaMethodBuilder*)value);
}

void q_metapropertybuilder_remove_notify_signal(void* self) {
    QMetaPropertyBuilder_RemoveNotifySignal((QMetaPropertyBuilder*)self);
}

bool q_metapropertybuilder_is_readable(const void* self) {
    return QMetaPropertyBuilder_IsReadable((QMetaPropertyBuilder*)self);
}

bool q_metapropertybuilder_is_writable(const void* self) {
    return QMetaPropertyBuilder_IsWritable((QMetaPropertyBuilder*)self);
}

bool q_metapropertybuilder_is_resettable(const void* self) {
    return QMetaPropertyBuilder_IsResettable((QMetaPropertyBuilder*)self);
}

bool q_metapropertybuilder_is_designable(const void* self) {
    return QMetaPropertyBuilder_IsDesignable((QMetaPropertyBuilder*)self);
}

bool q_metapropertybuilder_is_scriptable(const void* self) {
    return QMetaPropertyBuilder_IsScriptable((QMetaPropertyBuilder*)self);
}

bool q_metapropertybuilder_is_stored(const void* self) {
    return QMetaPropertyBuilder_IsStored((QMetaPropertyBuilder*)self);
}

bool q_metapropertybuilder_is_user(const void* self) {
    return QMetaPropertyBuilder_IsUser((QMetaPropertyBuilder*)self);
}

bool q_metapropertybuilder_has_std_cpp_set(const void* self) {
    return QMetaPropertyBuilder_HasStdCppSet((QMetaPropertyBuilder*)self);
}

bool q_metapropertybuilder_is_enum_or_flag(const void* self) {
    return QMetaPropertyBuilder_IsEnumOrFlag((QMetaPropertyBuilder*)self);
}

bool q_metapropertybuilder_is_constant(const void* self) {
    return QMetaPropertyBuilder_IsConstant((QMetaPropertyBuilder*)self);
}

bool q_metapropertybuilder_is_final(const void* self) {
    return QMetaPropertyBuilder_IsFinal((QMetaPropertyBuilder*)self);
}

bool q_metapropertybuilder_is_alias(const void* self) {
    return QMetaPropertyBuilder_IsAlias((QMetaPropertyBuilder*)self);
}

bool q_metapropertybuilder_is_bindable(const void* self) {
    return QMetaPropertyBuilder_IsBindable((QMetaPropertyBuilder*)self);
}

void q_metapropertybuilder_set_readable(void* self, bool value) {
    QMetaPropertyBuilder_SetReadable((QMetaPropertyBuilder*)self, value);
}

void q_metapropertybuilder_set_writable(void* self, bool value) {
    QMetaPropertyBuilder_SetWritable((QMetaPropertyBuilder*)self, value);
}

void q_metapropertybuilder_set_resettable(void* self, bool value) {
    QMetaPropertyBuilder_SetResettable((QMetaPropertyBuilder*)self, value);
}

void q_metapropertybuilder_set_designable(void* self, bool value) {
    QMetaPropertyBuilder_SetDesignable((QMetaPropertyBuilder*)self, value);
}

void q_metapropertybuilder_set_scriptable(void* self, bool value) {
    QMetaPropertyBuilder_SetScriptable((QMetaPropertyBuilder*)self, value);
}

void q_metapropertybuilder_set_stored(void* self, bool value) {
    QMetaPropertyBuilder_SetStored((QMetaPropertyBuilder*)self, value);
}

void q_metapropertybuilder_set_user(void* self, bool value) {
    QMetaPropertyBuilder_SetUser((QMetaPropertyBuilder*)self, value);
}

void q_metapropertybuilder_set_std_cpp_set(void* self, bool value) {
    QMetaPropertyBuilder_SetStdCppSet((QMetaPropertyBuilder*)self, value);
}

void q_metapropertybuilder_set_enum_or_flag(void* self, bool value) {
    QMetaPropertyBuilder_SetEnumOrFlag((QMetaPropertyBuilder*)self, value);
}

void q_metapropertybuilder_set_constant(void* self, bool value) {
    QMetaPropertyBuilder_SetConstant((QMetaPropertyBuilder*)self, value);
}

void q_metapropertybuilder_set_final(void* self, bool value) {
    QMetaPropertyBuilder_SetFinal((QMetaPropertyBuilder*)self, value);
}

void q_metapropertybuilder_set_alias(void* self, bool value) {
    QMetaPropertyBuilder_SetAlias((QMetaPropertyBuilder*)self, value);
}

void q_metapropertybuilder_set_bindable(void* self, bool value) {
    QMetaPropertyBuilder_SetBindable((QMetaPropertyBuilder*)self, value);
}

int32_t q_metapropertybuilder_revision(const void* self) {
    return QMetaPropertyBuilder_Revision((QMetaPropertyBuilder*)self);
}

void q_metapropertybuilder_set_revision(void* self, int revision) {
    QMetaPropertyBuilder_SetRevision((QMetaPropertyBuilder*)self, revision);
}

void q_metapropertybuilder_delete(void* self) {
    QMetaPropertyBuilder_Delete((QMetaPropertyBuilder*)(self));
}

QMetaEnumBuilder* q_metaenumbuilder_new(const void* other) {
    return QMetaEnumBuilder_New((QMetaEnumBuilder*)other);
}

QMetaEnumBuilder* q_metaenumbuilder_new2(void* other) {
    return QMetaEnumBuilder_New2((QMetaEnumBuilder*)other);
}

QMetaEnumBuilder* q_metaenumbuilder_new3() {
    return QMetaEnumBuilder_New3();
}

void q_metaenumbuilder_copy_assign(void* self, void* other) {
    QMetaEnumBuilder_CopyAssign((QMetaEnumBuilder*)self, (QMetaEnumBuilder*)other);
}

void q_metaenumbuilder_move_assign(void* self, void* other) {
    QMetaEnumBuilder_MoveAssign((QMetaEnumBuilder*)self, (QMetaEnumBuilder*)other);
}

int32_t q_metaenumbuilder_index(const void* self) {
    return QMetaEnumBuilder_Index((QMetaEnumBuilder*)self);
}

const char* q_metaenumbuilder_name(const void* self) {
    libqt_string _str = QMetaEnumBuilder_Name((QMetaEnumBuilder*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_metaenumbuilder_enum_name(const void* self) {
    libqt_string _str = QMetaEnumBuilder_EnumName((QMetaEnumBuilder*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_metaenumbuilder_set_enum_name(void* self, const char* alias) {
    QMetaEnumBuilder_SetEnumName((QMetaEnumBuilder*)self, qstring(alias));
}

QMetaType* q_metaenumbuilder_meta_type(const void* self) {
    return QMetaEnumBuilder_MetaType((QMetaEnumBuilder*)self);
}

void q_metaenumbuilder_set_meta_type(void* self, void* metaType) {
    QMetaEnumBuilder_SetMetaType((QMetaEnumBuilder*)self, (QMetaType*)metaType);
}

bool q_metaenumbuilder_is_flag(const void* self) {
    return QMetaEnumBuilder_IsFlag((QMetaEnumBuilder*)self);
}

void q_metaenumbuilder_set_is_flag(void* self, bool value) {
    QMetaEnumBuilder_SetIsFlag((QMetaEnumBuilder*)self, value);
}

bool q_metaenumbuilder_is_scoped(const void* self) {
    return QMetaEnumBuilder_IsScoped((QMetaEnumBuilder*)self);
}

void q_metaenumbuilder_set_is_scoped(void* self, bool value) {
    QMetaEnumBuilder_SetIsScoped((QMetaEnumBuilder*)self, value);
}

int32_t q_metaenumbuilder_key_count(const void* self) {
    return QMetaEnumBuilder_KeyCount((QMetaEnumBuilder*)self);
}

const char* q_metaenumbuilder_key(const void* self, int index) {
    libqt_string _str = QMetaEnumBuilder_Key((QMetaEnumBuilder*)self, index);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_metaenumbuilder_value(const void* self, int index) {
    return QMetaEnumBuilder_Value((QMetaEnumBuilder*)self, index);
}

int32_t q_metaenumbuilder_add_key(void* self, const char* name, int value) {
    return QMetaEnumBuilder_AddKey((QMetaEnumBuilder*)self, qstring(name), value);
}

void q_metaenumbuilder_remove_key(void* self, int index) {
    QMetaEnumBuilder_RemoveKey((QMetaEnumBuilder*)self, index);
}

void q_metaenumbuilder_delete(void* self) {
    QMetaEnumBuilder_Delete((QMetaEnumBuilder*)(self));
}

QMetaStringTable* q_metastringtable_new(const char* className) {
    return QMetaStringTable_New(qstring(className));
}

int32_t q_metastringtable_enter(void* self, const char* value) {
    return QMetaStringTable_Enter((QMetaStringTable*)self, qstring(value));
}

int32_t q_metastringtable_preferred_alignment() {
    return QMetaStringTable_PreferredAlignment();
}

int32_t q_metastringtable_blob_size(const void* self) {
    return QMetaStringTable_BlobSize((QMetaStringTable*)self);
}

void q_metastringtable_write_blob(const void* self, char* out) {
    QMetaStringTable_WriteBlob((QMetaStringTable*)self, out);
}

void q_metastringtable_delete(void* self) {
    QMetaStringTable_Delete((QMetaStringTable*)(self));
}
