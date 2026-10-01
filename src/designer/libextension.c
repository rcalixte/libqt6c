#include "../libqobject.hpp"
#include "libextension.hpp"
#include "libextension.h"

QObject* q_abstractextensionfactory_extension(const void* self, void* object, const char* iid) {
    return QAbstractExtensionFactory_Extension((QAbstractExtensionFactory*)self, (QObject*)object, qstring(iid));
}

void q_abstractextensionfactory_operator_assign(void* self, const void* param1) {
    QAbstractExtensionFactory_OperatorAssign((QAbstractExtensionFactory*)self, (QAbstractExtensionFactory*)param1);
}

void q_abstractextensionfactory_delete(void* self) {
    QAbstractExtensionFactory_Delete((QAbstractExtensionFactory*)(self));
}

void q_abstractextensionmanager_operator_assign(void* self, const void* param1) {
    QAbstractExtensionManager_OperatorAssign((QAbstractExtensionManager*)self, (QAbstractExtensionManager*)param1);
}

void q_abstractextensionmanager_delete(void* self) {
    QAbstractExtensionManager_Delete((QAbstractExtensionManager*)(self));
}
