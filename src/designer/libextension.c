#include "../libqobject.hpp"
#include "libextension.hpp"
#include "libextension.h"

QObject* q_abstractextensionfactory_extension(void* self, void* object, const char* iid) {
    return QAbstractExtensionFactory_Extension((QAbstractExtensionFactory*)self, (QObject*)object, qstring(iid));
}

void q_abstractextensionfactory_operator_assign(void* self, void* param1) {
    QAbstractExtensionFactory_OperatorAssign((QAbstractExtensionFactory*)self, (QAbstractExtensionFactory*)param1);
}

void q_abstractextensionfactory_delete(void* self) {
    QAbstractExtensionFactory_Delete((QAbstractExtensionFactory*)(self));
}

void q_abstractextensionmanager_register_extensions(void* self, void* factory, const char* iid) {
    QAbstractExtensionManager_RegisterExtensions((QAbstractExtensionManager*)self, (QAbstractExtensionFactory*)factory, qstring(iid));
}

void q_abstractextensionmanager_unregister_extensions(void* self, void* factory, const char* iid) {
    QAbstractExtensionManager_UnregisterExtensions((QAbstractExtensionManager*)self, (QAbstractExtensionFactory*)factory, qstring(iid));
}

QObject* q_abstractextensionmanager_extension(void* self, void* object, const char* iid) {
    return QAbstractExtensionManager_Extension((QAbstractExtensionManager*)self, (QObject*)object, qstring(iid));
}

void q_abstractextensionmanager_operator_assign(void* self, void* param1) {
    QAbstractExtensionManager_OperatorAssign((QAbstractExtensionManager*)self, (QAbstractExtensionManager*)param1);
}

void q_abstractextensionmanager_delete(void* self) {
    QAbstractExtensionManager_Delete((QAbstractExtensionManager*)(self));
}
