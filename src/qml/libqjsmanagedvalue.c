#include "../libqdatetime.hpp"
#include "libqjsengine.hpp"
#include "libqjsprimitivevalue.hpp"
#include "libqjsvalue.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqregularexpression.hpp"
#include "../libqurl.hpp"
#include "../libqvariant.hpp"
#include "libqjsmanagedvalue.hpp"
#include "libqjsmanagedvalue.h"

QJSManagedValue* q_jsmanagedvalue_new() {
    return QJSManagedValue_New();
}

QJSManagedValue* q_jsmanagedvalue_new2(void* value, void* engine) {
    return QJSManagedValue_New2((QJSValue*)value, (QJSEngine*)engine);
}

QJSManagedValue* q_jsmanagedvalue_new3(const void* value, void* engine) {
    return QJSManagedValue_New3((QJSPrimitiveValue*)value, (QJSEngine*)engine);
}

QJSManagedValue* q_jsmanagedvalue_new4(const void* variant, void* engine) {
    return QJSManagedValue_New4((QVariant*)variant, (QJSEngine*)engine);
}

QJSManagedValue* q_jsmanagedvalue_new5(const char* string, void* engine) {
    return QJSManagedValue_New5(qstring(string), (QJSEngine*)engine);
}

bool q_jsmanagedvalue_equals(const void* self, const void* other) {
    return QJSManagedValue_Equals((QJSManagedValue*)self, (QJSManagedValue*)other);
}

bool q_jsmanagedvalue_strictly_equals(const void* self, const void* other) {
    return QJSManagedValue_StrictlyEquals((QJSManagedValue*)self, (QJSManagedValue*)other);
}

QJSEngine* q_jsmanagedvalue_engine(const void* self) {
    return QJSManagedValue_Engine((QJSManagedValue*)self);
}

QJSManagedValue* q_jsmanagedvalue_prototype(const void* self) {
    return QJSManagedValue_Prototype((QJSManagedValue*)self);
}

void q_jsmanagedvalue_set_prototype(void* self, const void* prototype) {
    QJSManagedValue_SetPrototype((QJSManagedValue*)self, (QJSManagedValue*)prototype);
}

int32_t q_jsmanagedvalue_type(const void* self) {
    return QJSManagedValue_Type((QJSManagedValue*)self);
}

bool q_jsmanagedvalue_is_undefined(const void* self) {
    return QJSManagedValue_IsUndefined((QJSManagedValue*)self);
}

bool q_jsmanagedvalue_is_boolean(const void* self) {
    return QJSManagedValue_IsBoolean((QJSManagedValue*)self);
}

bool q_jsmanagedvalue_is_number(const void* self) {
    return QJSManagedValue_IsNumber((QJSManagedValue*)self);
}

bool q_jsmanagedvalue_is_string(const void* self) {
    return QJSManagedValue_IsString((QJSManagedValue*)self);
}

bool q_jsmanagedvalue_is_object(const void* self) {
    return QJSManagedValue_IsObject((QJSManagedValue*)self);
}

bool q_jsmanagedvalue_is_symbol(const void* self) {
    return QJSManagedValue_IsSymbol((QJSManagedValue*)self);
}

bool q_jsmanagedvalue_is_function(const void* self) {
    return QJSManagedValue_IsFunction((QJSManagedValue*)self);
}

bool q_jsmanagedvalue_is_integer(const void* self) {
    return QJSManagedValue_IsInteger((QJSManagedValue*)self);
}

bool q_jsmanagedvalue_is_null(const void* self) {
    return QJSManagedValue_IsNull((QJSManagedValue*)self);
}

bool q_jsmanagedvalue_is_regular_expression(const void* self) {
    return QJSManagedValue_IsRegularExpression((QJSManagedValue*)self);
}

bool q_jsmanagedvalue_is_array(const void* self) {
    return QJSManagedValue_IsArray((QJSManagedValue*)self);
}

bool q_jsmanagedvalue_is_url(const void* self) {
    return QJSManagedValue_IsUrl((QJSManagedValue*)self);
}

bool q_jsmanagedvalue_is_variant(const void* self) {
    return QJSManagedValue_IsVariant((QJSManagedValue*)self);
}

bool q_jsmanagedvalue_is_q_object(const void* self) {
    return QJSManagedValue_IsQObject((QJSManagedValue*)self);
}

bool q_jsmanagedvalue_is_q_meta_object(const void* self) {
    return QJSManagedValue_IsQMetaObject((QJSManagedValue*)self);
}

bool q_jsmanagedvalue_is_date(const void* self) {
    return QJSManagedValue_IsDate((QJSManagedValue*)self);
}

bool q_jsmanagedvalue_is_error(const void* self) {
    return QJSManagedValue_IsError((QJSManagedValue*)self);
}

bool q_jsmanagedvalue_is_js_meta_type(const void* self) {
    return QJSManagedValue_IsJsMetaType((QJSManagedValue*)self);
}

const char* q_jsmanagedvalue_to_string(const void* self) {
    libqt_string _str = QJSManagedValue_ToString((QJSManagedValue*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

double q_jsmanagedvalue_to_number(const void* self) {
    return QJSManagedValue_ToNumber((QJSManagedValue*)self);
}

bool q_jsmanagedvalue_to_boolean(const void* self) {
    return QJSManagedValue_ToBoolean((QJSManagedValue*)self);
}

QJSPrimitiveValue* q_jsmanagedvalue_to_primitive(const void* self) {
    return QJSManagedValue_ToPrimitive((QJSManagedValue*)self);
}

QJSValue* q_jsmanagedvalue_to_j_s_value(const void* self) {
    return QJSManagedValue_ToJSValue((QJSManagedValue*)self);
}

QVariant* q_jsmanagedvalue_to_variant(const void* self) {
    return QJSManagedValue_ToVariant((QJSManagedValue*)self);
}

int32_t q_jsmanagedvalue_to_integer(const void* self) {
    return QJSManagedValue_ToInteger((QJSManagedValue*)self);
}

QRegularExpression* q_jsmanagedvalue_to_regular_expression(const void* self) {
    return QJSManagedValue_ToRegularExpression((QJSManagedValue*)self);
}

QUrl* q_jsmanagedvalue_to_url(const void* self) {
    return QJSManagedValue_ToUrl((QJSManagedValue*)self);
}

QObject* q_jsmanagedvalue_to_q_object(const void* self) {
    return QJSManagedValue_ToQObject((QJSManagedValue*)self);
}

const QMetaObject* q_jsmanagedvalue_to_q_meta_object(const void* self) {
    return QJSManagedValue_ToQMetaObject((QJSManagedValue*)self);
}

QDateTime* q_jsmanagedvalue_to_date_time(const void* self) {
    return QJSManagedValue_ToDateTime((QJSManagedValue*)self);
}

bool q_jsmanagedvalue_has_property(const void* self, const char* name) {
    return QJSManagedValue_HasProperty((QJSManagedValue*)self, qstring(name));
}

bool q_jsmanagedvalue_has_own_property(const void* self, const char* name) {
    return QJSManagedValue_HasOwnProperty((QJSManagedValue*)self, qstring(name));
}

QJSValue* q_jsmanagedvalue_property(const void* self, const char* name) {
    return QJSManagedValue_Property((QJSManagedValue*)self, qstring(name));
}

void q_jsmanagedvalue_set_property(void* self, const char* name, const void* value) {
    QJSManagedValue_SetProperty((QJSManagedValue*)self, qstring(name), (QJSValue*)value);
}

bool q_jsmanagedvalue_delete_property(void* self, const char* name) {
    return QJSManagedValue_DeleteProperty((QJSManagedValue*)self, qstring(name));
}

bool q_jsmanagedvalue_has_property2(const void* self, uint32_t arrayIndex) {
    return QJSManagedValue_HasProperty2((QJSManagedValue*)self, arrayIndex);
}

bool q_jsmanagedvalue_has_own_property2(const void* self, uint32_t arrayIndex) {
    return QJSManagedValue_HasOwnProperty2((QJSManagedValue*)self, arrayIndex);
}

QJSValue* q_jsmanagedvalue_property2(const void* self, uint32_t arrayIndex) {
    return QJSManagedValue_Property2((QJSManagedValue*)self, arrayIndex);
}

void q_jsmanagedvalue_set_property2(void* self, uint32_t arrayIndex, const void* value) {
    QJSManagedValue_SetProperty2((QJSManagedValue*)self, arrayIndex, (QJSValue*)value);
}

bool q_jsmanagedvalue_delete_property2(void* self, uint32_t arrayIndex) {
    return QJSManagedValue_DeleteProperty2((QJSManagedValue*)self, arrayIndex);
}

QJSValue* q_jsmanagedvalue_call(const void* self) {
    return QJSManagedValue_Call((QJSManagedValue*)self);
}

QJSValue* q_jsmanagedvalue_call_with_instance(const void* self, const void* instance) {
    return QJSManagedValue_CallWithInstance((QJSManagedValue*)self, (QJSValue*)instance);
}

QJSValue* q_jsmanagedvalue_call_as_constructor(const void* self) {
    return QJSManagedValue_CallAsConstructor((QJSManagedValue*)self);
}

QJSManagedValue* q_jsmanagedvalue_js_meta_type(const void* self) {
    return QJSManagedValue_JsMetaType((QJSManagedValue*)self);
}

const char** q_jsmanagedvalue_js_meta_members(const void* self) {
    libqt_list _arr = QJSManagedValue_JsMetaMembers((QJSManagedValue*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_jsmanagedvalue_js_meta_members\n");
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

QJSManagedValue* q_jsmanagedvalue_js_meta_instantiate(const void* self) {
    return QJSManagedValue_JsMetaInstantiate((QJSManagedValue*)self);
}

QJSValue* q_jsmanagedvalue_call1(const void* self, libqt_list /* of QJSValue* */ arguments) {
    return QJSManagedValue_Call1((QJSManagedValue*)self, arguments);
}

QJSValue* q_jsmanagedvalue_call_with_instance2(const void* self, const void* instance, libqt_list /* of QJSValue* */ arguments) {
    return QJSManagedValue_CallWithInstance2((QJSManagedValue*)self, (QJSValue*)instance, arguments);
}

QJSValue* q_jsmanagedvalue_call_as_constructor1(const void* self, libqt_list /* of QJSValue* */ arguments) {
    return QJSManagedValue_CallAsConstructor1((QJSManagedValue*)self, arguments);
}

QJSManagedValue* q_jsmanagedvalue_js_meta_instantiate1(const void* self, libqt_list /* of QJSValue* */ values) {
    return QJSManagedValue_JsMetaInstantiate1((QJSManagedValue*)self, values);
}

void q_jsmanagedvalue_delete(void* self) {
    QJSManagedValue_Delete((QJSManagedValue*)(self));
}
