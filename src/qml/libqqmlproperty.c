#include "../libqmetaobject.hpp"
#include "../libqmetatype.hpp"
#include "../libqobject.hpp"
#include "libqqmlcontext.hpp"
#include "libqqmlengine.hpp"
#include "../libqvariant.hpp"
#include "libqqmlproperty.hpp"
#include "libqqmlproperty.h"

QQmlProperty* q_qmlproperty_new() {
    return QQmlProperty_New();
}

QQmlProperty* q_qmlproperty_new2(void* param1) {
    return QQmlProperty_New2((QObject*)param1);
}

QQmlProperty* q_qmlproperty_new3(void* param1, void* param2) {
    return QQmlProperty_New3((QObject*)param1, (QQmlContext*)param2);
}

QQmlProperty* q_qmlproperty_new4(void* param1, void* param2) {
    return QQmlProperty_New4((QObject*)param1, (QQmlEngine*)param2);
}

QQmlProperty* q_qmlproperty_new5(void* param1, const char* param2) {
    return QQmlProperty_New5((QObject*)param1, qstring(param2));
}

QQmlProperty* q_qmlproperty_new6(void* param1, const char* param2, void* param3) {
    return QQmlProperty_New6((QObject*)param1, qstring(param2), (QQmlContext*)param3);
}

QQmlProperty* q_qmlproperty_new7(void* param1, const char* param2, void* param3) {
    return QQmlProperty_New7((QObject*)param1, qstring(param2), (QQmlEngine*)param3);
}

QQmlProperty* q_qmlproperty_new8(void* param1) {
    return QQmlProperty_New8((QQmlProperty*)param1);
}

void q_qmlproperty_operator_assign(void* self, void* param1) {
    QQmlProperty_OperatorAssign((QQmlProperty*)self, (QQmlProperty*)param1);
}

void q_qmlproperty_swap(void* self, void* other) {
    QQmlProperty_Swap((QQmlProperty*)self, (QQmlProperty*)other);
}

bool q_qmlproperty_operator_equal(void* self, void* param1) {
    return QQmlProperty_OperatorEqual((QQmlProperty*)self, (QQmlProperty*)param1);
}

int32_t q_qmlproperty_type(void* self) {
    return QQmlProperty_Type((QQmlProperty*)self);
}

bool q_qmlproperty_is_valid(void* self) {
    return QQmlProperty_IsValid((QQmlProperty*)self);
}

bool q_qmlproperty_is_property(void* self) {
    return QQmlProperty_IsProperty((QQmlProperty*)self);
}

bool q_qmlproperty_is_signal_property(void* self) {
    return QQmlProperty_IsSignalProperty((QQmlProperty*)self);
}

int32_t q_qmlproperty_property_type(void* self) {
    return QQmlProperty_PropertyType((QQmlProperty*)self);
}

QMetaType* q_qmlproperty_property_meta_type(void* self) {
    return QQmlProperty_PropertyMetaType((QQmlProperty*)self);
}

int32_t q_qmlproperty_property_type_category(void* self) {
    return QQmlProperty_PropertyTypeCategory((QQmlProperty*)self);
}

const char* q_qmlproperty_property_type_name(void* self) {
    return QQmlProperty_PropertyTypeName((QQmlProperty*)self);
}

const char* q_qmlproperty_name(void* self) {
    libqt_string _str = QQmlProperty_Name((QQmlProperty*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QVariant* q_qmlproperty_read(void* self) {
    return QQmlProperty_Read((QQmlProperty*)self);
}

QVariant* q_qmlproperty_read2(void* param1, const char* param2) {
    return QQmlProperty_Read2((QObject*)param1, qstring(param2));
}

QVariant* q_qmlproperty_read3(void* param1, const char* param2, void* param3) {
    return QQmlProperty_Read3((QObject*)param1, qstring(param2), (QQmlContext*)param3);
}

QVariant* q_qmlproperty_read4(void* param1, const char* param2, void* param3) {
    return QQmlProperty_Read4((QObject*)param1, qstring(param2), (QQmlEngine*)param3);
}

bool q_qmlproperty_write(void* self, void* param1) {
    return QQmlProperty_Write((QQmlProperty*)self, (QVariant*)param1);
}

bool q_qmlproperty_write2(void* param1, const char* param2, void* param3) {
    return QQmlProperty_Write2((QObject*)param1, qstring(param2), (QVariant*)param3);
}

bool q_qmlproperty_write3(void* param1, const char* param2, void* param3, void* param4) {
    return QQmlProperty_Write3((QObject*)param1, qstring(param2), (QVariant*)param3, (QQmlContext*)param4);
}

bool q_qmlproperty_write4(void* param1, const char* param2, void* param3, void* param4) {
    return QQmlProperty_Write4((QObject*)param1, qstring(param2), (QVariant*)param3, (QQmlEngine*)param4);
}

bool q_qmlproperty_reset(void* self) {
    return QQmlProperty_Reset((QQmlProperty*)self);
}

bool q_qmlproperty_has_notify_signal(void* self) {
    return QQmlProperty_HasNotifySignal((QQmlProperty*)self);
}

bool q_qmlproperty_needs_notify_signal(void* self) {
    return QQmlProperty_NeedsNotifySignal((QQmlProperty*)self);
}

bool q_qmlproperty_connect_notify_signal(void* self, void* dest, const char* slot) {
    return QQmlProperty_ConnectNotifySignal((QQmlProperty*)self, (QObject*)dest, slot);
}

bool q_qmlproperty_connect_notify_signal2(void* self, void* dest, int method) {
    return QQmlProperty_ConnectNotifySignal2((QQmlProperty*)self, (QObject*)dest, method);
}

bool q_qmlproperty_is_writable(void* self) {
    return QQmlProperty_IsWritable((QQmlProperty*)self);
}

bool q_qmlproperty_is_bindable(void* self) {
    return QQmlProperty_IsBindable((QQmlProperty*)self);
}

bool q_qmlproperty_is_designable(void* self) {
    return QQmlProperty_IsDesignable((QQmlProperty*)self);
}

bool q_qmlproperty_is_resettable(void* self) {
    return QQmlProperty_IsResettable((QQmlProperty*)self);
}

QObject* q_qmlproperty_object(void* self) {
    return QQmlProperty_Object((QQmlProperty*)self);
}

int32_t q_qmlproperty_index(void* self) {
    return QQmlProperty_Index((QQmlProperty*)self);
}

QMetaProperty* q_qmlproperty_property(void* self) {
    return QQmlProperty_Property((QQmlProperty*)self);
}

QMetaMethod* q_qmlproperty_method(void* self) {
    return QQmlProperty_Method((QQmlProperty*)self);
}

void q_qmlproperty_delete(void* self) {
    QQmlProperty_Delete((QQmlProperty*)(self));
}

uintptr_t q_qqmlproperty_h_q_hash(void* key, uintptr_t seed) {
    return qqmlproperty_h_QHash((QQmlProperty*)key, seed);
}
