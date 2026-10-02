#include "libqqmlengine.hpp"
#include "libqqmlextensioninterface.hpp"
#include "libqqmlextensioninterface.h"

QQmlTypesExtensionInterface* q_qmltypesextensioninterface_new(const void* param1) {
    return QQmlTypesExtensionInterface_New((QQmlTypesExtensionInterface*)param1);
}

void q_qmltypesextensioninterface_register_types(void* self, const char* uri) {
    QQmlTypesExtensionInterface_RegisterTypes((QQmlTypesExtensionInterface*)self, uri);
}

void q_qmltypesextensioninterface_on_register_types(void* self, void (*callback)(void*, const char*)) {
    QQmlTypesExtensionInterface_OnRegisterTypes((QQmlTypesExtensionInterface*)self, (intptr_t)callback);
}

void q_qmltypesextensioninterface_delete(void* self) {
    QQmlTypesExtensionInterface_Delete((QQmlTypesExtensionInterface*)(self));
}

QQmlExtensionInterface* q_qmlextensioninterface_new(const void* param1) {
    return QQmlExtensionInterface_New((QQmlExtensionInterface*)param1);
}

void q_qmlextensioninterface_initialize_engine(void* self, void* engine, const char* uri) {
    QQmlExtensionInterface_InitializeEngine((QQmlExtensionInterface*)self, (QQmlEngine*)engine, uri);
}

void q_qmlextensioninterface_on_initialize_engine(void* self, void (*callback)(void*, void*, const char*)) {
    QQmlExtensionInterface_OnInitializeEngine((QQmlExtensionInterface*)self, (intptr_t)callback);
}

void q_qmlextensioninterface_register_types(void* self, const char* uri) {
    QQmlExtensionInterface_RegisterTypes((QQmlExtensionInterface*)self, uri);
}

void q_qmlextensioninterface_on_register_types(void* self, void (*callback)(void*, const char*)) {
    QQmlExtensionInterface_OnRegisterTypes((QQmlExtensionInterface*)self, (intptr_t)callback);
}

void q_qmlextensioninterface_delete(void* self) {
    QQmlExtensionInterface_Delete((QQmlExtensionInterface*)(self));
}

void q_qmlengineextensioninterface_delete(void* self) {
    QQmlEngineExtensionInterface_Delete((QQmlEngineExtensionInterface*)(self));
}
