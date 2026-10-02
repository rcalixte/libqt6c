#include "libqqmlproperty.hpp"
#include "libqqmlpropertyvaluesource.hpp"
#include "libqqmlpropertyvaluesource.h"

QQmlPropertyValueSource* q_qmlpropertyvaluesource_new() {
    return QQmlPropertyValueSource_New();
}

void q_qmlpropertyvaluesource_set_target(void* self, const void* target) {
    QQmlPropertyValueSource_SetTarget((QQmlPropertyValueSource*)self, (QQmlProperty*)target);
}

void q_qmlpropertyvaluesource_on_set_target(void* self, void (*callback)(void*, const void*)) {
    QQmlPropertyValueSource_OnSetTarget((QQmlPropertyValueSource*)self, (intptr_t)callback);
}

void q_qmlpropertyvaluesource_delete(void* self) {
    QQmlPropertyValueSource_Delete((QQmlPropertyValueSource*)(self));
}
