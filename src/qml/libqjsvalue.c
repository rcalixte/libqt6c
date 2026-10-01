#include "../libqdatetime.hpp"
#include "libqjsprimitivevalue.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqvariant.hpp"
#include "libqjsvalue.hpp"
#include "libqjsvalue.h"

QJSValue* q_jsvalue_new() {
    return QJSValue_New();
}

QJSValue* q_jsvalue_new2(const void* other) {
    return QJSValue_New2((QJSValue*)other);
}

QJSValue* q_jsvalue_new3(bool value) {
    return QJSValue_New3(value);
}

QJSValue* q_jsvalue_new4(int value) {
    return QJSValue_New4(value);
}

QJSValue* q_jsvalue_new5(uint32_t value) {
    return QJSValue_New5(value);
}

QJSValue* q_jsvalue_new6(double value) {
    return QJSValue_New6(value);
}

QJSValue* q_jsvalue_new7(const char* value) {
    return QJSValue_New7(qstring(value));
}

QJSValue* q_jsvalue_new8(char* value) {
    return QJSValue_New8(qstring(value));
}

QJSValue* q_jsvalue_new9(const char* str) {
    return QJSValue_New9(str);
}

QJSValue* q_jsvalue_new10(int32_t value) {
    return QJSValue_New10(value);
}

void q_jsvalue_operator_assign(void* self, const void* other) {
    QJSValue_OperatorAssign((QJSValue*)self, (QJSValue*)other);
}

bool q_jsvalue_is_bool(const void* self) {
    return QJSValue_IsBool((QJSValue*)self);
}

bool q_jsvalue_is_number(const void* self) {
    return QJSValue_IsNumber((QJSValue*)self);
}

bool q_jsvalue_is_null(const void* self) {
    return QJSValue_IsNull((QJSValue*)self);
}

bool q_jsvalue_is_string(const void* self) {
    return QJSValue_IsString((QJSValue*)self);
}

bool q_jsvalue_is_undefined(const void* self) {
    return QJSValue_IsUndefined((QJSValue*)self);
}

bool q_jsvalue_is_variant(const void* self) {
    return QJSValue_IsVariant((QJSValue*)self);
}

bool q_jsvalue_is_q_object(const void* self) {
    return QJSValue_IsQObject((QJSValue*)self);
}

bool q_jsvalue_is_q_meta_object(const void* self) {
    return QJSValue_IsQMetaObject((QJSValue*)self);
}

bool q_jsvalue_is_object(const void* self) {
    return QJSValue_IsObject((QJSValue*)self);
}

bool q_jsvalue_is_date(const void* self) {
    return QJSValue_IsDate((QJSValue*)self);
}

bool q_jsvalue_is_reg_exp(const void* self) {
    return QJSValue_IsRegExp((QJSValue*)self);
}

bool q_jsvalue_is_array(const void* self) {
    return QJSValue_IsArray((QJSValue*)self);
}

bool q_jsvalue_is_error(const void* self) {
    return QJSValue_IsError((QJSValue*)self);
}

bool q_jsvalue_is_url(const void* self) {
    return QJSValue_IsUrl((QJSValue*)self);
}

const char* q_jsvalue_to_string(const void* self) {
    libqt_string _str = QJSValue_ToString((QJSValue*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

double q_jsvalue_to_number(const void* self) {
    return QJSValue_ToNumber((QJSValue*)self);
}

int32_t q_jsvalue_to_int(const void* self) {
    return QJSValue_ToInt((QJSValue*)self);
}

uint32_t q_jsvalue_to_u_int(const void* self) {
    return QJSValue_ToUInt((QJSValue*)self);
}

bool q_jsvalue_to_bool(const void* self) {
    return QJSValue_ToBool((QJSValue*)self);
}

QVariant* q_jsvalue_to_variant(const void* self) {
    return QJSValue_ToVariant((QJSValue*)self);
}

QVariant* q_jsvalue_to_variant2(const void* self, int32_t behavior) {
    return QJSValue_ToVariant2((QJSValue*)self, behavior);
}

QJSPrimitiveValue* q_jsvalue_to_primitive(const void* self) {
    return QJSValue_ToPrimitive((QJSValue*)self);
}

QObject* q_jsvalue_to_q_object(const void* self) {
    return QJSValue_ToQObject((QJSValue*)self);
}

const QMetaObject* q_jsvalue_to_q_meta_object(const void* self) {
    return QJSValue_ToQMetaObject((QJSValue*)self);
}

QDateTime* q_jsvalue_to_date_time(const void* self) {
    return QJSValue_ToDateTime((QJSValue*)self);
}

bool q_jsvalue_equals(const void* self, const void* other) {
    return QJSValue_Equals((QJSValue*)self, (QJSValue*)other);
}

bool q_jsvalue_strictly_equals(const void* self, const void* other) {
    return QJSValue_StrictlyEquals((QJSValue*)self, (QJSValue*)other);
}

QJSValue* q_jsvalue_prototype(const void* self) {
    return QJSValue_Prototype((QJSValue*)self);
}

void q_jsvalue_set_prototype(void* self, const void* prototype) {
    QJSValue_SetPrototype((QJSValue*)self, (QJSValue*)prototype);
}

QJSValue* q_jsvalue_property(const void* self, const char* name) {
    return QJSValue_Property((QJSValue*)self, qstring(name));
}

void q_jsvalue_set_property(void* self, const char* name, const void* value) {
    QJSValue_SetProperty((QJSValue*)self, qstring(name), (QJSValue*)value);
}

bool q_jsvalue_has_property(const void* self, const char* name) {
    return QJSValue_HasProperty((QJSValue*)self, qstring(name));
}

bool q_jsvalue_has_own_property(const void* self, const char* name) {
    return QJSValue_HasOwnProperty((QJSValue*)self, qstring(name));
}

QJSValue* q_jsvalue_property2(const void* self, uint32_t arrayIndex) {
    return QJSValue_Property2((QJSValue*)self, arrayIndex);
}

void q_jsvalue_set_property2(void* self, uint32_t arrayIndex, const void* value) {
    QJSValue_SetProperty2((QJSValue*)self, arrayIndex, (QJSValue*)value);
}

bool q_jsvalue_delete_property(void* self, const char* name) {
    return QJSValue_DeleteProperty((QJSValue*)self, qstring(name));
}

bool q_jsvalue_is_callable(const void* self) {
    return QJSValue_IsCallable((QJSValue*)self);
}

QJSValue* q_jsvalue_call(const void* self) {
    return QJSValue_Call((QJSValue*)self);
}

QJSValue* q_jsvalue_call_with_instance(const void* self, const void* instance) {
    return QJSValue_CallWithInstance((QJSValue*)self, (QJSValue*)instance);
}

QJSValue* q_jsvalue_call_as_constructor(const void* self) {
    return QJSValue_CallAsConstructor((QJSValue*)self);
}

int32_t q_jsvalue_error_type(const void* self) {
    return QJSValue_ErrorType((QJSValue*)self);
}

QJSValue* q_jsvalue_call1(const void* self, libqt_list /* of QJSValue* */ args) {
    return QJSValue_Call1((QJSValue*)self, args);
}

QJSValue* q_jsvalue_call_with_instance2(const void* self, const void* instance, libqt_list /* of QJSValue* */ args) {
    return QJSValue_CallWithInstance2((QJSValue*)self, (QJSValue*)instance, args);
}

QJSValue* q_jsvalue_call_as_constructor1(const void* self, libqt_list /* of QJSValue* */ args) {
    return QJSValue_CallAsConstructor1((QJSValue*)self, args);
}

void q_jsvalue_delete(void* self) {
    QJSValue_Delete((QJSValue*)(self));
}
