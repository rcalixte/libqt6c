#include "libqqmlproperty.hpp"
#include "libqqmlpropertyvaluesource.hpp"
#include "libqqmlpropertyvaluesource.h"

QQmlPropertyValueSource* q_qmlpropertyvaluesource_new() {
    return QQmlPropertyValueSource_New();
}

void q_qmlpropertyvaluesource_set_target(void* self, void* target) {
    QQmlPropertyValueSource_SetTarget((QQmlPropertyValueSource*)self, (QQmlProperty*)target);
}

void q_qmlpropertyvaluesource_on_set_target(void* self, void (*callback)(void*, void*)) {
    QQmlPropertyValueSource_OnSetTarget((QQmlPropertyValueSource*)self, (intptr_t)callback);
}

void q_qmlpropertyvaluesource_super_set_target(void* self, void* target) {
    QQmlPropertyValueSource_SuperSetTarget((QQmlPropertyValueSource*)self, (QQmlProperty*)target);
}

void q_qmlpropertyvaluesource_operator_assign(void* self, void* param1) {
    QQmlPropertyValueSource_OperatorAssign((QQmlPropertyValueSource*)self, (QQmlPropertyValueSource*)param1);
}

void q_qmlpropertyvaluesource_delete(void* self) {
    QQmlPropertyValueSource_Delete((QQmlPropertyValueSource*)(self));
}
