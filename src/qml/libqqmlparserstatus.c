#include "libqqmlparserstatus.hpp"
#include "libqqmlparserstatus.h"

QQmlParserStatus* q_qmlparserstatus_new() {
    return QQmlParserStatus_New();
}

void q_qmlparserstatus_class_begin(void* self) {
    QQmlParserStatus_ClassBegin((QQmlParserStatus*)self);
}

void q_qmlparserstatus_on_class_begin(void* self, void (*callback)()) {
    QQmlParserStatus_OnClassBegin((QQmlParserStatus*)self, (intptr_t)callback);
}

void q_qmlparserstatus_super_class_begin(void* self) {
    QQmlParserStatus_SuperClassBegin((QQmlParserStatus*)self);
}

void q_qmlparserstatus_component_complete(void* self) {
    QQmlParserStatus_ComponentComplete((QQmlParserStatus*)self);
}

void q_qmlparserstatus_on_component_complete(void* self, void (*callback)()) {
    QQmlParserStatus_OnComponentComplete((QQmlParserStatus*)self, (intptr_t)callback);
}

void q_qmlparserstatus_super_component_complete(void* self) {
    QQmlParserStatus_SuperComponentComplete((QQmlParserStatus*)self);
}

void q_qmlparserstatus_delete(void* self) {
    QQmlParserStatus_Delete((QQmlParserStatus*)(self));
}
